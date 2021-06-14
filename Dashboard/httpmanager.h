#ifndef HTTPMANAGER_H
#define HTTPMANAGER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QPixmap>
class HTTPManager : public QObject
{
    Q_OBJECT
public:
    explicit HTTPManager(QObject *parent = nullptr);
    ~HTTPManager();

    void sendImageRequest();
    void mapRequest(QString zip);
    void sendWeatherRequest(QString zip);
    void sendIconRequest(QString icon);
    void sendThreeHourIconRequest(QString icon);
    void sendSixHourIconRequest(QString icon);
    void sendNineHourIconRequest(QString icon);
    void sendWeatherHourlyRequest(QString zip);

signals:
    void ImageReady(QPixmap *image);
    void WeatherJsonReady(QJsonObject *json);
    void WeatherHourlyJsonReady(QJsonObject *json);
    void IconReady(QPixmap *icon);
    void IconThreeHourReady(QPixmap *icon);
    void IconSixHourReady(QPixmap *icon);
    void IconNineHourReady(QPixmap *icon);

public slots:
    void ImageDownloadedHandler(QNetworkReply *reply);
    void WeatherDownloadedHandler(QNetworkReply *reply);
    void IconDownloadedHandler(QNetworkReply * reply);
    void IconThreeHourDownloadedHandler(QNetworkReply * reply);
    void IconSixHourDownloadedHandler(QNetworkReply * reply);
    void IconNineHourDownloadedHandler(QNetworkReply * reply);
    void WeatherHourlyDownloadHandler(QNetworkReply *reply);

private:
    QNetworkAccessManager *imageDownloadManager;
    QNetworkAccessManager *weatherApiManager;
    QNetworkAccessManager *iconDownloadManager;
    QNetworkAccessManager *iconThreeHourDownloadManager;
    QNetworkAccessManager *iconSixHourDownloadManager;
    QNetworkAccessManager *iconNineHourDownloadManager;
    QNetworkAccessManager *weatherHourlyApiManager;
    QByteArray downloadedData;

};

#endif // HTTPMANAGER_H

