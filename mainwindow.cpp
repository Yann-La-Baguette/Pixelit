#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    afficheur.get_brightness();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::telecharger_brightness(){

}

void MainWindow::envoyer_txt(){

}

void MainWindow::choixcouleur(){

}

void MainWindow::changer_url(){

}
