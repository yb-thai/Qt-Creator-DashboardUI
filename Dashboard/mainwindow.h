#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <httpmanager.h>
#include <todolistmodel.h>
#include <QMainWindow>
#include <QTimer>
#include <QTime>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QPixmap japan, japan1, japan2, japan3, japan4, japan5;
    QPixmap london, london1, london2, london3, london4, london5;
    QPixmap seattle, seattle1, seattle2, seattle3, seattle4, seattle5;
    void imageInput();


private slots:

       void processImage(QPixmap *);
       void processWeatherJson(QJsonObject *json);
       void processIcon(QPixmap *);
       void processThreeHourIcon(QPixmap *);
       void processSixHourIcon(QPixmap *);
       void processNineHourIcon(QPixmap *);
       void processWeatherHourlyJson(QJsonObject *json);


       void setSeattleTime();
       void setLondonTime();
       void setjapanTime();
       void on_seattleButton_clicked();
       void on_locationButton_clicked();
       void on_japanButton_clicked();
       void on_londonButton_clicked();
       void changeBackground();
       void mapTransparent();
       void on_clearMapButton_clicked();
       void on_addToDoListButton_clicked();







private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTimer *seattleTime;
    QTimer *londonTime;
    QTimer *japanTime;
    HTTPManager *httpManager;
    ToDoListModel *model;
    int picCount = 0;







};
#endif // MAINWINDOW_H
