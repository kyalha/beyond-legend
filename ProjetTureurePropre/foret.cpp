#include "foret.h"

Foret::Foret(QWidget *parent): QWidget (parent)
{
    setFixedSize(983, 737); //983 × 737, largeur, hauteur
    this->setWindowIcon(QIcon("data/icon2.png"));
    this->setWindowTitle(" Beyond Legend ");
    QPalette pal = this->palette();
    pal.setBrush( this->backgroundRole(), QBrush( QPixmap( "data/foret.png" ) ) );
    this->setPalette( pal );

    timer = new QTimer(this);
    timer->start(50);
    connect(timer, SIGNAL(timeout()), this, SLOT( ForetTexte()));



    leTextARecuperer = new std::string( "<font color=#FEFEFE>"   " Ah, je t'ai cherché partout ! J'ai besoin de toi. Tu dois absolument m'aider à résoudre une énigme. Le veux-tu ?  ""</font>");
    leTexteAffiche = new std::string;
    text = new QTextEdit (this);
    text->setGeometry(50, 518, 500, 125);
    text->setTextColor(Qt::black);
    leIndex = 0;
    leTextARecuperer2 = new std::string("<font color=#FEFEFE>"    " Je savais que ça allait te faire plaisir. Donc, je suis le blé, le sel et la terre. Je peux compter le temps, sombrer dans la folie ou tomber en poussière. Qui suis-je ? ""</font>");
    leTexteAffiche2 = new std::string;
    text2 = new QTextEdit (this);
    text2->setGeometry(50, 518, 500, 125);
    text2->setTextColor(Qt::black);
    leIndex2 = 0;
    text2->hide();
    leTextARecuperer3 = new std::string("<font color=#FEFEFE>"    "Ah merci, je vais enfin pouvoir remettre un peu en place Kyslhe. Je crois que Tarche a un jeu pour toi, il se situe non loin de la tour abandonné... ""</font>");
    leTexteAffiche3 = new std::string;
    text3 = new QTextEdit (this);
    text3->setGeometry(50, 518, 500, 125);
    text3->setTextColor(Qt::black);
    leIndex3 = 0;
    text3->hide();

    ////////////////////////////////////
    ////////////////////////////////////

    choix1 = new QPushButton("Je n'ai pas le choix j'imagine.", this );
    choix1->setFont(QFont("Arial", 14));
    choix1->setGeometry(50, 650, 300, 45);
    choix1->show();
    connect(choix1, SIGNAL(clicked()), this, SLOT( ForetTexte2()));
    choix2 = new QPushButton("Je dirais ça.", this);
    choix2->setFont(QFont("Arial", 14));
    choix2->setGeometry(200, 650, 300, 45);
    choix2->hide();
    connect(choix2, SIGNAL(clicked()), this, SLOT(verifierTexte()));
    choix3 = new QPushButton("Aller à la tour.", this);
    choix3->setFont(QFont("Arial", 14));
    choix3->setGeometry(200, 650, 300, 45);
    choix3->hide();
    connect(choix3, SIGNAL(clicked()), this, SLOT(allerChateau()));
    reponse = new QLineEdit(this);
    reponse->setGeometry(50, 650, 100, 45);
    reponse->setFont(QFont("Arial", 16));
    reponse->setMaxLength(10);
    reponse->hide();

    this->setStyleSheet("QTextEdit {background-color : transparent; border:noneR}");



}

void Foret::ForetTexte()
{

    if (leIndex < (leTextARecuperer->size()))
    {     {
            leTexteAffiche->push_back((leTextARecuperer)->at(leIndex));
            QString leTextQAffiche = QString::fromStdString(leTexteAffiche->c_str());
            text->setText(leTextQAffiche );
            text->setFont(QFont("Arial", 16));
            text->setEnabled(false);
            text->setReadOnly (true);
            leIndex++;

        } }

}

void Foret::ForetTexte2()

{
    choix1->show();
    choix1->hide();
    text->hide();
    text2->show();


    timer2 = new QTimer(this);
    timer2->start(50);
    connect(timer2, SIGNAL(timeout()), this, SLOT( ForetTexte3()));
}

void Foret::ForetTexte3()
{
    if (leIndex2 < (leTextARecuperer2->size()))
    {     {
            leTexteAffiche2->push_back((leTextARecuperer2)->at(leIndex2));
            QString leTextQAffiche2 = QString::fromStdString(leTexteAffiche2->c_str());
            text2->setText(leTextQAffiche2 );
            text2->setFont(QFont("Arial", 16));
            text2->setEnabled(false);
            text2->setReadOnly (true);

            leIndex2++;

        }  }
    choix2->show();
    reponse->show();
}

void Foret::verifierTexte()
{
    QString  valeurReponse;

    valeurReponse = reponse->text();
    choix2->hide();
    reponse->hide();


    if (valeurReponse.toStdString() == "grain")
    {
        timer3 = new QTimer(this);
        timer3->start(50);
        connect(timer3, SIGNAL(timeout()), this, SLOT( ForetTexte4()));
    }

}

void Foret::ForetTexte4()
{
    if (leIndex3 < (leTextARecuperer3->size()))
    {     {
            leTexteAffiche3->push_back((leTextARecuperer3)->at(leIndex3));
            QString leTextQAffiche3 = QString::fromStdString(leTexteAffiche3->c_str());
            text3->setText(leTextQAffiche3 );
            text3->setFont(QFont("Arial", 16));
            text3->setEnabled(false);
            text3->setReadOnly (true);

            leIndex3++;

        }  }
    text2->hide();
    text3->show();
    choix3->show();

}

void Foret::allerChateau()
{
    Chateau * fenetrePerso = new Chateau (this);
    fenetrePerso->setWindowFlags(Qt::Window);
    fenetrePerso->setWindowModality(Qt::WindowModal);
    fenetrePerso->show();

    this->hide();
}

void Foret::keyPressEvent (QKeyEvent *event)
{
    if (event->key () == Qt::Key_Escape)
    {
        this->hide();
        Echap * fenetrePerso = new Echap (this);
        fenetrePerso->setWindowFlags(Qt::Window);
        fenetrePerso->setWindowModality(Qt::WindowModal);
        fenetrePerso->show();
    }

}
