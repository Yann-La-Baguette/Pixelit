#include "pixelix.h"
#include "qcolor.h"
#include <iostream>

using namespace std;

pixelix::pixelix(){

}

QByteArray pixelix::get(QUrl url){



    QNetworkRequest request;
    request.setUrl(url);

    QNetworkReply *reply = m.get(request);

    QByteArray reponse = reply->readAll();
}

QByteArray pixelix::post(QUrl url, QJsonObject json){

}



void pixelix::text(QString text, QColor color, bool scroll){

}

void pixelix::set_url(QString url){

}

bool pixelix::envoyer_txt(){

}

QByteArray pixelix::get_json_brightness(){

}

double pixelix::get_brightness(){
    pixelix affiche;
    QUrl url("172.21.28.2/api/brightness");
    QString data = QString(affiche.get(url));
    qDebug()<<data;
}
