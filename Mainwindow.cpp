#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include "drapeau.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Drapeaux tricolores UE");
    resize(700,400);

    QPixmap bkgnd ("/media/linu-mint/E/TP QT/TP_QT Drapeau/TP_QT3/Affichage_dun_drapeau/istockphoto-957053922-612x612.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    //--- Layout des boutons ---//
    QVBoxLayout *Pagelayout = new QVBoxLayout;
    QHBoxLayout *Hlayout1 = new QHBoxLayout;
    QHBoxLayout *Hlayout2 = new QHBoxLayout;
    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);
    this->B1->setGeometry(50, 100, 100, 50);//le dimensionnement de tous les boutons
    this->B2->setGeometry(50, 100, 100, 50);
    this->B3->setGeometry(50, 100, 100, 50);
    this->B4->setGeometry(50, 100, 100, 50);
    this->B5->setGeometry(50, 100, 100, 50);
    this->B6->setGeometry(50, 100, 100, 50);
    this->B7->setGeometry(50, 100, 100, 50);
    this->B8->setGeometry(50, 100, 100, 50);
    this->B9->setGeometry(50, 100, 100, 50);
    this->B10->setGeometry(50, 100, 100, 50);
    this->B11->setGeometry(50, 100, 100, 50);
    this->B12->setGeometry(50, 100, 100, 50);
    this->B13->setGeometry(50, 100, 100, 50);
    this->B14->setGeometry(50, 100, 100, 50);

    //--- Connexion du signal "clicked()" avec le slot de chaque drapeau ---//
    connect(B1, SIGNAL(clicked()),this, SLOT(Drapeau_ALLEMAGNE()));// toutes les connexions
    connect(B4, SIGNAL(clicked()),this, SLOT(Drapeau_AUTRICHE()));
    connect(B6, SIGNAL(clicked()),this, SLOT(Drapeau_BULGARIE()));
    connect(B7, SIGNAL(clicked()),this, SLOT(Drapeau_ESTONIE()));
    connect(B8, SIGNAL(clicked()),this, SLOT(Drapeau_HONGRIE()));
    connect(B10, SIGNAL(clicked()),this, SLOT(Drapeau_LETTONIE()));
    connect(B11, SIGNAL(clicked()),this, SLOT(Drapeau_LITUANIE()));
    connect(B12, SIGNAL(clicked()),this, SLOT(Drapeau_LUXEMBOURG()));
    connect(B13, SIGNAL(clicked()),this, SLOT(Drapeau_PAYSBAS()));

    //--- Ajout des bouton au Widget Vertical ---//
    connect(B3, SIGNAL(clicked()),this, SLOT(Drapeau_ITALIE()));
    connect(B2, SIGNAL(clicked()),this, SLOT(Drapeau_FRANCE()));
    connect(B5, SIGNAL(clicked()),this, SLOT(Drapeau_BELGIQUE()));
    connect(B9, SIGNAL(clicked()),this, SLOT(Drapeau_IRLANDE()));
    connect(B14, SIGNAL(clicked()),this, SLOT(Drapeau_ROUMANIE()));

    //Ajouter les boutons aux widgets Hlayout1 et Hlayout2
    Hlayout1->addWidget(B1);
    Hlayout1->addWidget(B2);
    Hlayout1->addWidget(B3);
    Hlayout1->addWidget(B4);
    Hlayout1->addWidget(B5);
    Hlayout1->addWidget(B6);
    Hlayout1->addWidget(B7);

    Hlayout2->addWidget(B8);
    Hlayout2->addWidget(B9);
    Hlayout2->addWidget(B10);
    Hlayout2->addWidget(B11);
    Hlayout2->addWidget(B12);
    Hlayout2->addWidget(B13);
    Hlayout2->addWidget(B14);


    QWidget *widget = new QWidget;
    widget->setLayout(Pagelayout);
    setCentralWidget(widget);
}
void MainWindow::Drapeau_ALLEMAGNE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("black","red","gold","Horizontal","Allemagne");

}
void MainWindow::Drapeau_FRANCE(){
    //Trois bandes Vertical bleu, blanc ,rouge
    Drapeau *D = new Drapeau("blue","white","red","Vertical","France");

}
void MainWindow::Drapeau_ITALIE(){
    //Trois bandes Vertical vert, blanc ,rouge
    Drapeau *D = new Drapeau("green","white","red","Vertical","Italie");

}
void MainWindow::Drapeau_LITUANIE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("gold","green","red","Horizontal","Letuanie");

}
void MainWindow::Drapeau_LETTONIE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("red","white","red","Horizontal","Lettonie");

}
void MainWindow::Drapeau_HONGRIE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("red","white","green","Horizontal","Hongrie");

}
void MainWindow::Drapeau_IRLANDE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("green","white","orange","Vertical","Irlande");

}
void MainWindow::Drapeau_ESTONIE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("blue","black","white","Horizontal","Estonie");
    }
void MainWindow::Drapeau_BULGARIE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("white","green","red","Horizontal","Bulgarie");

}
void MainWindow::Drapeau_BELGIQUE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("black","gold","red","Vertical","Belgique");

}
void MainWindow::Drapeau_AUTRICHE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("red","white","red","Horizontal","Austriche");

}
void MainWindow::Drapeau_PAYSBAS(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("red","white","blue","Horizontal","PAY-BAS");

}
void MainWindow::Drapeau_ROUMANIE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("blue","gold","red","Horizontal","Roumanie");

}
void MainWindow::Drapeau_LUXEMBOURG(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D = new Drapeau("red","white","blue","Vertical","Luxembourg");

}


// Complétez tous les slots
MainWindow::~MainWindow()
{
    delete ui;
}
