#ifndef PIXELIX_H
#define PIXELIX_H

#include <QJsonObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QtGui>
#include <QMessageBox>

class pixelix
{
private:
    QUrl qurl;
    QJsonObject jsontext;
    QNetworkAccessManager m;

    QByteArray get(QUrl url);
    QByteArray post(QUrl url, QJsonObject json);

public:
    pixelix();
    void text(QString text, QColor color, bool scroll);
    void set_url(QString url);
    bool envoyer_txt();
    QByteArray get_json_brightness();
    double get_brightness();
};

#endif // PIXELIX_H
