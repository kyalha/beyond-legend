#include "chambre.h"
Chambre::Chambre(  QWidget *parent): QWidget(parent)
{
    setFixedSize(983, 737); //983 × 737, largeur, hauteur
    this->setWindowIcon(QIcon("data/icon2.png"));
    this->setWindowTitle(" Beyond Legend ");
    QPalette pal = this->palette();
    pal.setBrush( this->backgroundRole(), QBrush( QPixmap( "data/12.png" ) ) );
    this->setPalette( pal );
    /*
    QSound nature("data/nature.wav");
    nature.play();  // marche !!
*/




    leTextARecuperer = new std::string("<font color=#FEFEFE>"    " *baille* ... Mais... où suis-je ?... je devrais sortir de  cette chambre... " "</font>");
    leTexteAffiche = new std::string;
    text = new QTextEdit (this);
    // text2->setFixedSize(500,100);
    text->setGeometry(50, 500, 500, 75);
    text->setTextColor(Qt::black);
    leIndex = 0;

    choix1 = new QPushButton("Sortir de la chambre.", this );
    choix1->setFont(QFont("Arial", 14));
    choix1->setGeometry(50, 625, 200, 45);
    choix1->hide();

    choix2 = new QPushButton( "jouer avec la peluche à côté du lit.", this);
    choix2->setFont(QFont("Arial", 14));
    choix2->setGeometry(260, 625, 300, 45);
    choix2->hide();





    timer = new QTimer(this);
    timer->start(50);
    connect(timer, SIGNAL(timeout()), this, SLOT(chambreTexte()));
    connect(choix1, SIGNAL(clicked()), this, SLOT(allerTaverne()));
    connect(choix2, SIGNAL(clicked()), this, SLOT (jouerPeluche()));
    this->setStyleSheet("QTextEdit {background-color : transparent; border:noneR}");



}
void Chambre::chambreTexte()
{
    //  text->setText("leText"+unPseudo+"la suite");


    if (leIndex < (leTextARecuperer->size()))
    {
        {
            leTexteAffiche->push_back((leTextARecuperer)->at(leIndex));
            QString leTextQAffiche = QString::fromStdString(leTexteAffiche->c_str());
            text->setText(leTextQAffiche );
            text->setFont(QFont("Arial", 16));
            text->setEnabled(false);
            text->setReadOnly (true);
            leIndex++;
        }
    }

    if(leIndex ==(leTextARecuperer->size()))
    {
        choix1->show();
        choix2->show();
    }
}


void Chambre::jouerPeluche()
{
    unSon = new QSound("data/peluche.wav");
    unSon->play();  // marche !!
}

void Chambre::allerTaverne()
{

    Taverne * fenetrePerso = new Taverne ( this);
    fenetrePerso->setWindowFlags(Qt::Window);
    fenetrePerso->setWindowModality(Qt::WindowModal);
    fenetrePerso->show();

    this->hide();
}

void Chambre::keyPressEvent (QKeyEvent *event)
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


