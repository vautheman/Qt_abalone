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
    /*
    QPushButton* boutonbleuLigne1 = new QPushButton();
    boutonbleuLigne1->setIcon(QIcon(QPixmap(":/new/icon/bleu")));
    ui->gridLayoutPlateau->addWidget(boutonbleuLigne1,noLigne,noCol);
    */

    for(int noColone = 0; noColone < 17; noColone ++)
    {
        if(noColone != 4)
        {
            QPushButton* boutonbleuLigne1 = new QPushButton();
            ui->gridLayoutPlateau->addWidget(boutonbleuLigne1,0,noColone);
        }

        if(noColone != 13)
        {
            int reste = noColone % 2;

            if(reste != 0)
            {
                noColone ++;
            } else {
                QPushButton* boutonbleuLigne1 = new QPushButton();
                boutonbleuLigne1->setIcon(QIcon(QPixmap(":/new/icon/bleu")));
                ui->gridLayoutPlateau->addWidget(boutonbleuLigne1,0,noColone);
            }
        }

        if(noColone > 13)
        {
            QPushButton* boutonbleuLigne1 = new QPushButton();
            ui->gridLayoutPlateau->addWidget(boutonbleuLigne1,0,noColone);
        }
    }
}


