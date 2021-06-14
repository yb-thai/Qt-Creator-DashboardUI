#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "todolistmodel.h"

#include <QJsonObject>
#include <QJsonArray>
#include <QPixmap>
#include <QGraphicsDropShadowEffect>
#include <QGraphicsOpacityEffect>
#include <QDate>
#include <iostream>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      timer (new QTimer),
      seattleTime(new QTimer),
      londonTime(new QTimer),
      japanTime(new QTimer),
      httpManager(new HTTPManager),
      model(new ToDoListModel(this))

{
    ui->setupUi(this);

    connect(timer, SIGNAL(timeout()),
            this, SLOT(changeBackground()));
    connect(seattleTime, SIGNAL(timeout()),
            this, SLOT(setSeattleTime()));
    connect(londonTime, SIGNAL(timeout()),
            this, SLOT(setLondonTime()));
    connect(japanTime, SIGNAL(timeout()),
            this, SLOT(setjapanTime()));


    // load images
    imageInput();
    // set to currentime
    setSeattleTime();
    //time interval for background switch
    timer->start(10000);
    // switch background
    changeBackground();
    //hide map initialize
    ui->blurMapBackground->setStyleSheet("QLabel {background-color : transparent}");
    //hide clear map button
    ui->clearMapButton->setVisible(false);
    //start default zipcode
    on_locationButton_clicked();
    // tableview
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



    //map signal
    connect(httpManager, SIGNAL(ImageReady(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));
    //weather signal
    connect(httpManager, SIGNAL(WeatherJsonReady(QJsonObject *)),
            this, SLOT(processWeatherJson(QJsonObject *)));
    // weather hourly signal
    connect(httpManager, SIGNAL(WeatherHourlyJsonReady(QJsonObject *)),
            this, SLOT(processWeatherHourlyJson(QJsonObject *)));
    //icon signal
    connect(httpManager, SIGNAL(IconReady(QPixmap *)),
            this, SLOT(processIcon(QPixmap *)));
    connect(httpManager, SIGNAL(IconThreeHourReady(QPixmap *)),
            this, SLOT(processThreeHourIcon(QPixmap *)));
    connect(httpManager, SIGNAL(IconSixHourReady(QPixmap *)),
            this, SLOT(processSixHourIcon(QPixmap *)));
    connect(httpManager, SIGNAL(IconNineHourReady(QPixmap *)),
            this, SLOT(processNineHourIcon(QPixmap *)));


    //enable MainWindow to be transparent
    setAttribute(Qt::WA_TranslucentBackground);


    // add drop shadow effect to map & buttons
    QGraphicsDropShadowEffect* mapEffect = new QGraphicsDropShadowEffect();
    mapEffect->setBlurRadius(10);
    ui->mapLabel->setGraphicsEffect(mapEffect);
    QGraphicsDropShadowEffect* locationEffect = new QGraphicsDropShadowEffect();
    locationEffect->setBlurRadius(10);
    ui->locationButton->setGraphicsEffect(locationEffect);
    QGraphicsDropShadowEffect* zipCodeEffect = new QGraphicsDropShadowEffect();
    zipCodeEffect->setBlurRadius(10);
    ui->zipCodeEdit->setGraphicsEffect(zipCodeEffect);
    QGraphicsDropShadowEffect* jpanEffect = new QGraphicsDropShadowEffect();
    QGraphicsDropShadowEffect* seattleEffect = new QGraphicsDropShadowEffect();
    QGraphicsDropShadowEffect* londonEffect = new QGraphicsDropShadowEffect();
    QGraphicsDropShadowEffect* hourEffect = new QGraphicsDropShadowEffect();
    QGraphicsDropShadowEffect* minEffect = new QGraphicsDropShadowEffect();
    QGraphicsDropShadowEffect* secEffect = new QGraphicsDropShadowEffect();
    QGraphicsDropShadowEffect* clearMapEffect = new QGraphicsDropShadowEffect();
    jpanEffect->setBlurRadius(10);
    seattleEffect->setBlurRadius(10);
    londonEffect->setBlurRadius(10);
    hourEffect->setBlurRadius(10);
    minEffect->setBlurRadius(10);
    secEffect->setBlurRadius(10);
    clearMapEffect->setBlurRadius(10);
    ui->japanButton->setGraphicsEffect(jpanEffect);
    ui->seattleButton->setGraphicsEffect(seattleEffect);
    ui->londonButton->setGraphicsEffect(londonEffect);
    ui->hourLcd->setGraphicsEffect(hourEffect);
    ui->minuteLcd->setGraphicsEffect(minEffect);
    ui->secondLcd->setGraphicsEffect(secEffect);
    ui->clearMapButton->setGraphicsEffect(clearMapEffect);



    //opacity to background
    QGraphicsOpacityEffect* effect = new QGraphicsOpacityEffect();
    effect->setOpacity(0.7);
    ui->blurBackground->setGraphicsEffect(effect);
    QGraphicsOpacityEffect* effect1 = new QGraphicsOpacityEffect();
    effect1->setOpacity(0.7);
    ui->testLabel->setGraphicsEffect(effect1);
    QGraphicsOpacityEffect* effect3 = new QGraphicsOpacityEffect();
     effect3->setOpacity(0.5);
     ui->zipcodeBlur->setGraphicsEffect(effect3);

    //outline fonts

    //display current date
    QString s = QDate::currentDate().toString("dddd, MMMM dd\n");
    ui->dateLabel->setText(s);

}



MainWindow::~MainWindow()
{
    delete ui;
}




// process map info
void MainWindow::processImage(QPixmap *image)
{
    ui->mapLabel->setPixmap(*image);
}

// process weather info
void MainWindow::processWeatherJson(QJsonObject *json)
{
      QString weather =  json->value("weather").toArray()[0].toObject()["main"].toString();
      QString getIcon = json->value("weather").toArray()[0].toObject()["icon"].toString();
      httpManager->sendIconRequest(getIcon);
      double temp = json->value("main").toObject()["temp"].toDouble();
      ui->conditionLabel->setText(weather);
      ui->tempLabel->setText(QString::number(temp) + "°F");


}


// process weather info every 3 hours or forecast 4 days
void MainWindow::processWeatherHourlyJson(QJsonObject *json)
{
    QString weatherone = json->value("list").toArray()[0].toObject()["weather"].toArray()[0].toObject()["main"].toString();
    QString weathertwo = json->value("list").toArray()[1].toObject()["weather"].toArray()[0].toObject()["main"].toString();
    QString weatherthree = json->value("list").toArray()[2].toObject()["weather"].toArray()[0].toObject()["main"].toString();
    QString getThreeHourIcon = json->value("list").toArray()[0].toObject()["weather"].toArray()[0].toObject()["icon"].toString();
    QString getSixHourIcon = json->value("list").toArray()[1].toObject()["weather"].toArray()[0].toObject()["icon"].toString();
    QString getNineHourIcon = json->value("list").toArray()[2].toObject()["weather"].toArray()[0].toObject()["icon"].toString();
    httpManager->sendThreeHourIconRequest(getThreeHourIcon);
    httpManager->sendSixHourIconRequest(getSixHourIcon);
    httpManager->sendNineHourIconRequest(getNineHourIcon);
    double temp1 = json->value("list").toArray()[0].toObject()["main"].toObject()["temp"].toDouble();
    double temp2 = json->value("list").toArray()[1].toObject()["main"].toObject()["temp"].toDouble();
    double temp3 = json->value("list").toArray()[2].toObject()["main"].toObject()["temp"].toDouble();

    ui->tempOneLabel->setText(QString::number(temp1) + "°F");
    ui->tempLabel2->setText(QString::number(temp2) + "°F");
    ui->tempLabel3->setText(QString::number(temp3) + "°F");
    ui->conditionLabel1->setText(weatherone);
    ui->conditionLabel2->setText(weathertwo);
    ui->conditionLabel3->setText(weatherthree);
}

// process downloaded icon
void MainWindow::processIcon(QPixmap *icon)
{
    ui->iconLabel->setPixmap(*icon);
}

void MainWindow::processThreeHourIcon(QPixmap *icon)
{
    ui->threeHourLabel->setPixmap(*icon);
}

void MainWindow::processSixHourIcon(QPixmap *icon)
{
    ui->sixHourLabel->setPixmap(*icon);
}

void MainWindow::processNineHourIcon(QPixmap *icon)
{
    ui->nineHourLabel->setPixmap(*icon);
}




//set timezone seattle
void MainWindow::setSeattleTime()
{
    QTime time = QTime::currentTime();
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");
    ui->hourLcd->display(hour);
    ui->minuteLcd->display(minute);
    ui->secondLcd->display(second);
    if(!seattleTime->isActive()){
    seattleTime->start(1000);
    }
    if(londonTime->isActive()){
        londonTime->stop();
    }
    if(japanTime->isActive()){
        japanTime->stop();
    }

    if(hour.toInt() < 12){
        ui->welcomeLabel->setText("Good Morning, Sir.");
    } else if(hour.toInt() >= 12 && hour.toInt() < 18){
        ui->welcomeLabel->setText("Good Afternoon, Sir.");
    } else if (hour.toInt() >= 18){
        ui->welcomeLabel->setText("Good Evening, Sir.");
    }


}

//set timezone london
void MainWindow::setLondonTime()
{
    QTime time = QTime::currentTime().addSecs(28800);
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");
    ui->hourLcd->display(hour);
    ui->minuteLcd->display(minute);
    ui->secondLcd->display(second);
    if(!londonTime->isActive()){
        londonTime->start(1000);
    }
    if(seattleTime->isActive()){
        seattleTime->stop();
    }
    if(japanTime->isActive()){
        japanTime->stop();
    }

    if(hour.toInt() < 12){
        ui->welcomeLabel->setText("Good Morning, Sir.");
    } else if(hour.toInt() >= 12 && hour.toInt() < 18){
        ui->welcomeLabel->setText("Good Afternoon, Sir.");
    } else if (hour.toInt() >= 18){
        ui->welcomeLabel->setText("Good Evening, Sir.");
    }

}

//set timezone japan
void MainWindow::setjapanTime()
{
    QTime time = QTime::currentTime().addSecs(-32400);
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");
    ui->hourLcd->display(hour);
    ui->minuteLcd->display(minute);
    ui->secondLcd->display(second);
    if(!japanTime->isActive()){
        japanTime->start(1000);
    }
    if(seattleTime->isActive()){
        seattleTime->stop();
    }
    if(londonTime->isActive()){
        londonTime->stop();
    }

    if(hour.toInt() < 12){
        ui->welcomeLabel->setText("Good Morning, Sir.");
    } else if(hour.toInt() >= 12 && hour.toInt() < 18){
        ui->welcomeLabel->setText("Afternoon, Sir.");
    } else if (hour.toInt() >= 18){
        ui->welcomeLabel->setText("Evening, Sir.");
    }
}

// change timezone to seattle
void MainWindow::on_seattleButton_clicked()
{
    picCount = 0;
    setSeattleTime();
    changeBackground();
    timer->stop();
    timer->start(10000);

}


//change timezone to japan
void MainWindow::on_japanButton_clicked()
{
    picCount = 0;
    setjapanTime();
    changeBackground();
    timer->stop();
    timer->start(10000);

}

// change timezone to london
void MainWindow::on_londonButton_clicked()
{
    picCount = 0;
    setLondonTime();
    changeBackground();
    timer->stop();
    timer->start(10000);


}


//change background with time interval
void MainWindow::changeBackground()
{
  if(seattleTime->isActive()){
      if(picCount == 0){
          ui->backgroundLabel->setPixmap(seattle);
      } else if (picCount == 1){
         ui->backgroundLabel->setPixmap(seattle1);
      } else if (picCount == 2){
          ui->backgroundLabel->setPixmap(seattle2);
      } else if (picCount == 3){
          ui->backgroundLabel->setPixmap(seattle3);
      } else if (picCount == 4) {
          ui->backgroundLabel->setPixmap(seattle4);
      } else if (picCount == 5) {
          ui->backgroundLabel->setPixmap(seattle5);
      }
      picCount++;
      if(picCount == 6){
          picCount = 0;
      }

  }
  if (londonTime->isActive()){

      if(picCount == 0){
          ui->backgroundLabel->setPixmap(london);
      } else if (picCount == 1){
         ui->backgroundLabel->setPixmap(london1);
      } else if (picCount == 2){
          ui->backgroundLabel->setPixmap(london2);
      } else if (picCount == 3){
          ui->backgroundLabel->setPixmap(london3);
      } else if (picCount == 4) {
          ui->backgroundLabel->setPixmap(london4);
      } else if (picCount == 5) {
          ui->backgroundLabel->setPixmap(london5);
      }
      picCount++;
      if(picCount == 6){
          picCount = 0;
      }
  }
  if(japanTime->isActive()){
      if(picCount == 0){
          ui->backgroundLabel->setPixmap(japan);
      } else if (picCount == 1){
         ui->backgroundLabel->setPixmap(japan1);
      } else if (picCount == 2){
          ui->backgroundLabel->setPixmap(japan2);
      } else if (picCount == 3){
          ui->backgroundLabel->setPixmap(japan3);
      } else if (picCount == 4) {
          ui->backgroundLabel->setPixmap(japan4);
      } else if (picCount == 5) {
          ui->backgroundLabel->setPixmap(japan5);
      }
      picCount++;
      if(picCount == 6){
          picCount = 0;
      }
  }

}

void MainWindow::mapTransparent()
{
    ui->blurMapBackground->setStyleSheet("QLabel {background-color : rgb(120, 120, 120)}");
    QGraphicsOpacityEffect* effect2 = new QGraphicsOpacityEffect();
    effect2->setOpacity(0.4);
    ui->blurMapBackground->setGraphicsEffect(effect2);
}


// search location using zipcode
void MainWindow::on_locationButton_clicked()
{
    QString zip = ui->zipCodeEdit->text();

    httpManager->mapRequest(zip);
    httpManager->sendWeatherRequest(zip);
    httpManager->sendWeatherHourlyRequest(zip);
    mapTransparent();
    ui->clearMapButton->setVisible(true);


}

//clear map
void MainWindow::on_clearMapButton_clicked()
{
    ui->blurMapBackground->setStyleSheet("QLabel {background-color : transparent}");
    ui->mapLabel->clear();
    ui->clearMapButton->setVisible(false);

}




// load images from directory
void MainWindow::imageInput(){
    QString imageJapan = ":/images/japan1.jpg";
    QString imageJapan1 = ":/images/japan2.jpg";
    QString imageJapan2 = ":/images/japan3.jpeg";
    QString imageJapan3 = ":/images/japan4.jpg";
    QString imageJapan4 = ":/images/japan5.jpeg";
    QString imageJapan5 = ":/images/japan6.jpg";
    QString imageLondon = ":/images/london1.jpg";
    QString imageLondon1 = ":/images/london2.jpg";
    QString imageLondon2 = ":/images/london3.jpg";
    QString imageLondon3 = ":/images/london4.jpg";
    QString imageLondon4 = ":/images/london5.jpg";
    QString imageLondon5 = ":/images/london6.jpg";
    QString imageSeattle = ":/images/seattle1.jpg";
    QString imageSeattle1 = ":/images/seattle2.jpg";
    QString imageSeattle2 = ":/images/seattle3.jpg";
    QString imageSeattle3 = ":/images/seattle4.jpg";
    QString imageSeattle4 = ":/images/seattle5.jpg";
    QString imageSeattle5 = ":/images/seattle6.jpg";

    if(japan.load(imageJapan)){
        japan = japan.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(japan1.load(imageJapan1)){
        japan1 = japan1.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(japan2.load(imageJapan2)){
        japan2 = japan2.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(japan3.load(imageJapan3)){
        japan3 = japan3.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(japan4.load(imageJapan4)){
        japan4 = japan4.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(japan5.load(imageJapan5)){
        japan5 = japan5.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(london.load(imageLondon)){
       london = london.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(london1.load(imageLondon1)){
        london1 = london1.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
     }
    if(london2.load(imageLondon2)){
       london2 = london2.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(london3.load(imageLondon3)){
       london3 = london3.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(london4.load(imageLondon4)){
       london4 = london4.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if(london5.load(imageLondon5)){
       london5 = london5.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if (seattle.load(imageSeattle)){
        seattle = seattle.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if (seattle1.load(imageSeattle1)){
        seattle1 = seattle1.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if (seattle2.load(imageSeattle2)){
        seattle2 = seattle2.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if (seattle3.load(imageSeattle3)){
        seattle3 = seattle3.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if (seattle4.load(imageSeattle4)){
        seattle4 = seattle4.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }
    if (seattle5.load(imageSeattle5)){
        seattle5 = seattle5.scaled(ui->backgroundLabel->size(), Qt::KeepAspectRatioByExpanding);
    }


}


void MainWindow::on_addToDoListButton_clicked()
{
    // open local file dialog
    QString fileName = QFileDialog::getOpenFileName(this,
                tr("Open Address Book"), "",
                tr("Adress Book (*.csv);; All Files (*)"));
    model->openFile(fileName);

    ui->emptyLabel->clear();
}






