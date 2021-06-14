#include "httpmanager.h"
#include <QJsonDocument>
#include <QJsonObject>


HTTPManager::HTTPManager(QObject *parent) : QObject(parent),
    imageDownloadManager(new QNetworkAccessManager),
    weatherApiManager(new QNetworkAccessManager),
    iconDownloadManager(new QNetworkAccessManager),
    iconThreeHourDownloadManager(new QNetworkAccessManager),
    iconSixHourDownloadManager(new QNetworkAccessManager),
    iconNineHourDownloadManager(new QNetworkAccessManager),
    weatherHourlyApiManager(new QNetworkAccessManager)


{
    connect(imageDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(ImageDownloadedHandler(QNetworkReply*)));
    connect(weatherApiManager,SIGNAL(finished(QNetworkReply*)),
            this,SLOT(WeatherDownloadedHandler(QNetworkReply*)));
    connect(iconDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(IconDownloadedHandler(QNetworkReply*)));
    connect(iconThreeHourDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(IconThreeHourDownloadedHandler(QNetworkReply*)));
    connect(iconSixHourDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(IconSixHourDownloadedHandler(QNetworkReply*)));
    connect(iconNineHourDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(IconNineHourDownloadedHandler(QNetworkReply*)));
    connect(weatherHourlyApiManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(WeatherHourlyDownloadHandler(QNetworkReply*)));
}

HTTPManager::~HTTPManager()
{
    delete imageDownloadManager;
    delete weatherApiManager;
    delete iconDownloadManager;
    delete weatherHourlyApiManager;
    delete iconThreeHourDownloadManager;
    delete iconSixHourDownloadManager;
    delete iconNineHourDownloadManager;
}

void HTTPManager::sendImageRequest()
{
    QNetworkRequest request;
    request.setUrl(QUrl
    ("https://upload.wikimedia.org/wikipedia/commons/e/e3/Seattle_Kerry_Park_Skyline.jpg"));
    imageDownloadManager->get(request);
}

void HTTPManager::mapRequest(QString zip)
{
    QNetworkRequest request;
    QString address = "https://dev.virtualearth.net/REST/V1/Imagery/Map/Road/"
            + zip
            + "/7?mapSize=400,450&mapLayer=TrafficFlow&format=png&key=AhXBwlHI8h0gHSJEiGfDhzMuaFoWQs84Nyzc-JCBOerZLBRaAaWdzBWgHhAwTfFj";
    request.setUrl(QUrl(address));
    imageDownloadManager->get(request);
}

void HTTPManager::sendWeatherRequest(QString zip)
{
    QNetworkRequest request;
    QString address = "https://api.openweathermap.org/data/2.5/weather?zip="
                      + zip + ",us&units=imperial&appid=7b85ea748cdb901069987d885f27b4ad";
    request.setUrl(QUrl(address));
    weatherApiManager->get(request);
}

void HTTPManager::sendIconRequest(QString icon)
{
    QNetworkRequest request;
    QString address = "http://openweathermap.org/img/wn/" + icon + "@2x.png";
    request.setUrl(QUrl(address));
    iconDownloadManager->get(request);

}

void HTTPManager::sendThreeHourIconRequest(QString icon)
{
    QNetworkRequest request;
    QString address = "http://openweathermap.org/img/wn/" + icon + "@2x.png";
    request.setUrl(QUrl(address));
    iconThreeHourDownloadManager->get(request);
}

void HTTPManager::sendSixHourIconRequest(QString icon)
{
    QNetworkRequest request;
    QString address = "http://openweathermap.org/img/wn/" + icon + "@2x.png";
    request.setUrl(QUrl(address));
    iconSixHourDownloadManager->get(request);
}

void HTTPManager::sendNineHourIconRequest(QString icon)
{
    QNetworkRequest request;
    QString address = "http://openweathermap.org/img/wn/" + icon + "@2x.png";
    request.setUrl(QUrl(address));
    iconNineHourDownloadManager->get(request);
}

void HTTPManager::sendWeatherHourlyRequest(QString zip)
{
    QNetworkRequest request;
    QString address = "https://api.openweathermap.org/data/2.5/forecast?zip="
            + zip + ",us&units=imperial&appid=7b85ea748cdb901069987d885f27b4ad";
    request.setUrl(QUrl(address));
    weatherHourlyApiManager->get(request);
}

void HTTPManager::ImageDownloadedHandler(QNetworkReply *reply)
{
    if(reply->error()){
        qDebug() << reply->errorString();
        return;
    }

    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit ImageReady(image);
}

void HTTPManager::WeatherDownloadedHandler(QNetworkReply *reply)
{
    if(reply->error()){
        qDebug() << reply->errorString();
        return;
    }
    QString answer = reply->readAll();
    reply->deleteLater();

   QJsonDocument jsonResponse = QJsonDocument::fromJson(answer.toUtf8());
   QJsonObject *jsonObj = new QJsonObject(jsonResponse.object());

   emit WeatherJsonReady(jsonObj);
}

void HTTPManager::IconDownloadedHandler(QNetworkReply *reply)
{
    if(reply->error()){
        qDebug() << reply->errorString();
        return;
    }

    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit IconReady(image);
}

void HTTPManager::IconThreeHourDownloadedHandler(QNetworkReply *reply)
{
    if(reply->error()){
        qDebug() << reply->errorString();
        return;
    }

    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit IconThreeHourReady(image);
}

void HTTPManager::IconSixHourDownloadedHandler(QNetworkReply *reply)
{
    if(reply->error()){
        qDebug() << reply->errorString();
        return;
    }

    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit IconSixHourReady(image);
}

void HTTPManager::IconNineHourDownloadedHandler(QNetworkReply *reply)
{
    if(reply->error()){
        qDebug() << reply->errorString();
        return;
    }

    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit IconNineHourReady(image);
}

void HTTPManager::WeatherHourlyDownloadHandler(QNetworkReply *reply)
{
    if(reply->error()){
        qDebug() << reply->errorString();
        return;
    }
    QString answer = reply->readAll();
    reply->deleteLater();
    QJsonDocument jsonResponse = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject *jsonObj = new QJsonObject(jsonResponse.object());

    emit WeatherHourlyJsonReady(jsonObj);
}



