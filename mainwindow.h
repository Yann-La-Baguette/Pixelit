#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pixelix.h"
#include <QColor>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QColor couleur;

private:
    Ui::MainWindow *ui;
    bool erreurTrouvee;
    pixelix afficheur;

    void telecharger_brightness();
    void envoyer_txt();
    void choixcouleur();
    void changer_url();
};
#endif // MAINWINDOW_H
