#include "chateau.h"

Chateau::Chateau (QWidget *parent): QWidget (parent)
{
    setFixedSize(983, 737); //983 × 737, largeur, hauteur
    this->setWindowIcon(QIcon("data/icon2.jpg"));
    this->setWindowTitle(" Beyond Legend");
    QPalette pal = this->palette();
    pal.setBrush( this->backgroundRole(), QBrush( QPixmap( "data/chateau.png" ) ) );
    this->setPalette( pal );


    leTextARecuperer = new std::string("<font color=#FEFEFE>" "Ah, j'imagine que tu es là pour tester mon jeux ? Fantastique. Il s'appelle le nombre mystere, je pense à un nombre et toi tu dois le deviner, il se situe entre 0 et 10. Vas-y essaie." "</font>");
    leTexteAffiche = new std::string;
    text = new QTextEdit (this);
    text->setGeometry(50, 500, 500, 100);
    text->setTextColor(Qt::black);
    leIndex = 0;
    reponse = new QLineEdit(this);
    reponse->setGeometry(50,650 , 100, 45);
    reponse->setFont(QFont("Arial", 16));
    reponse->setMaxLength(10);
    b_Caverne = new QPushButton("Aller au moulin", this);
   b_Caverne->setGeometry(50,625,200,60);
    b_Caverne->setFont(QFont("Arial", 14));
    b_Caverne->hide();
    choix1 = new QPushButton("Valider.", this );
    choix1->setFont(QFont("Arial", 14));
    choix1->setGeometry(200, 650, 200, 45);

    srand(time(NULL));
    A = rand()%11;

    setStyleSheet("QLabel{color:white;}");
    texte1 = new QLabel(" Le nombre mystère est en dessous ! ", this);
    texte1->setGeometry(50,500, 400, 50);
    texte1->setFont(QFont("Arial", 16));
    texte1->hide();
    texte2 = new QLabel(" Le nombre mystère est au dessus ! ", this);
    texte2->setGeometry(50,500, 400, 50);
    texte2->setFont(QFont("Arial", 16));
    texte2->hide();
    texte3 = new QTextEdit("<font color=#FEFEFE>"" Braaaavo ! Tu n'es pas aussi stupide que tu en as l'air. Bon, j'imagine que tu rehcerches une folle aventure ? J'ai cru entendre une certaine agitation dans une caverne non loin. " "</Font>", this);
    texte3->setGeometry(50,510, 500, 100);
    texte3->setFont(QFont("Arial", 16));
    texte3->hide();

    ////////////////////////////////////
    ////////////////////////////////////

    timer = new QTimer(this);
    timer->start(50);
    connect(timer, SIGNAL(timeout()), this, SLOT(texte()));
    connect(choix1, SIGNAL(clicked()), this, SLOT(trouverMot()));
    connect(b_Caverne, SIGNAL(clicked()), this, SLOT(allerCaverne()));

}

void Chateau::texte()
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


void Chateau::trouverMot()
{


    if ((reponse->text().toInt()) < A)
    {
        text->hide();
        texte1->hide();
        texte3->hide();
        texte2->show();
    }
    else if ((reponse->text().toInt()) > A)
    {
        text->hide();
        texte1->hide();
        texte2->hide();
        texte1->show();

    }
    else if ((reponse->text().toInt()) == A)
    {
        text->hide();
        texte2->hide();
        texte1->hide();
        texte3->show();
        choix1->hide();
        reponse->hide();
        b_Caverne->show();
    }

}

void Chateau::allerCaverne()
{
    Caverne * fenetrePerso = new Caverne ( this);
    fenetrePerso->setWindowFlags(Qt::Window);
    fenetrePerso->setWindowModality(Qt::WindowModal);
    fenetrePerso->show();

    this->hide();
}

void Chateau::keyPressEvent (QKeyEvent *event)
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
