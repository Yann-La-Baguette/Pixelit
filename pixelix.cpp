#include "pixelix.h"
#include "qcolor.h"
#include <iostream>

using namespace std;

pixelix::pixelix(){

}

QByteArray pixelix::get(QUrl url){

    QNetworkRequest request(url);
    //request.setUrl(url);

    QNetworkReply *reply = m.get(request);

    while (!reply->isFinished()){
        qApp->processEvents();
    }

    QByteArray read = reply->readAll();
    reply->close();
    reply->deleteLater();

    return read;
}

QByteArray pixelix::post(QUrl url, QJsonObject json){

}



void pixelix::text(QString text, QColor color, bool scroll){
    QJsonObject jtext;
    QJsonObject jcolor;
    QJsonObject jposition;

    jtext["textString"] = text;
    jtext["bigFont"] = false;
    jtext["scrollText"] = scroll;
    jtext["scrollTextDelay"] = 100;
    jtext["centerText"] = false;
    jposition["x"] = 8;
    jposition["y"] = 0;
    jtext["position"] = jposition;
    jtext["hexColor"] = color.name();
    jsontext["text"] = jtext;
}

void pixelix::set_url(QString url){

}

bool pixelix::envoyer_txt(){
    qurl = QUrl("http://172.21.28.41");
    QUrl url = qurl;
    url.setPath("/api/screen");
    QByteArray p = post(url, jsontext);

    QString good_response = "OK";
    if (p.contains(good_response.toUtf8())){
        return true;
    }
    else {
        return false;
    }
}


QByteArray pixelix::get_json_brightness(){

}

double pixelix::get_brightness(){
    qurl = QUrl("http://172.21.28.41");
    QUrl url = qurl;
    url.setPath("/api/brightness");

    //la reponse de l'api est stockée dans un json
    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));

    //on transforme le json en objet json
    QJsonObject objetJSON = documentJSON.object();

    //on cherche la clé "brightness" et on vérifie que la valeur est un double
    if(objetJSON.value("brightness").isDouble())
    {
        return objetJSON.value("brightness").toDouble();
    }
    else
    {
        return 0;
    }
}
