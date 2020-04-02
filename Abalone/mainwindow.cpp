#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initialisePlateau();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initialisePlateau()
{
    int colDepart = 4;
    for(int ligne = 0; ligne < 9; ligne++)
    {
        for(int col = colDepart; col < 18 - colDepart; col +=2)
        {
            QPushButton* nouveauBouton = new QPushButton();
            if(ligne < 2 || (ligne == 2 && col >= 6 && col <= 10))
                nouveauBouton->setIcon(QIcon(QPixmap(":/icon/bleu")));
            else if(ligne > 6 || (ligne == 6 && col >= 6 && col <=10))
                nouveauBouton->setIcon(QIcon(QPixmap(":/icon/rouge")));
            else
                nouveauBouton->setIcon(QIcon(QPixmap(":/icon/vide")));
            ui->gridLayoutPlateau->addWidget(nouveauBouton, ligne, col);
        }
        if(ligne < 4)
            colDepart --;
        else
            colDepart ++;
    }
}


