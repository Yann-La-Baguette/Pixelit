#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::telecharger_brightness(){
    double brightness = afficheur.get_brightness();
    qDebug()<<brightness;
    ui->brightnesss->setValue(brightness);
}

void MainWindow::envoyer_txt(){

}

void MainWindow::choixcouleur(){

}

void MainWindow::changer_url(){

}
