#include "paysage.h"
Paysage::Paysage( QString unPseudo, QWidget *parent): Fenetre (parent)
{
    setFixedSize(983, 737); //983 × 737, largeur, hauteur
    this->setWindowIcon(QIcon("data/icon2.png"));
    this->setWindowTitle(" Jeux ");
        QPalette pal = this->palette();
        pal.setBrush( this->backgroundRole(), QBrush( QPixmap( "data/12.png" ) ) );
        this->setPalette( pal );
    /*
    QSound nature("data/nature.wav");
    nature.play();  // marche !!
*/

    QTimer *timer = new QTimer(this);
    timer->start(100);
    connect(timer, SIGNAL(timeout()), this, SLOT(ForetTexte()));


    leTextARecuperer = new std::string( " *baille* ... Mais... où suis-je ?... je devrais sortir de  cette chambre... " );

    leTexteAffiche = new std::string;



    text = new QTextEdit (this);
   // text2->setFixedSize(500,100);
   text->setGeometry(50, 500, 500, 75);
   text->setTextColor(Qt::black);
    leIndex = 0;

    QPushButton *choix1;
    choix1 = new QPushButton("Sortir de la chambre.", this );
    choix1->setFont(QFont("Arial", 14));
    choix1->setGeometry(50, 600, 300, 45);



}
void Paysage::ForetTexte()
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



}
//"<font color=#FEFEFE>"   "</font>"

void Paysage::keyPressEvent (QKeyEvent *event)
{
    if (event->key () == Qt::Key_Escape)
    {
        this->hide();
        Echap * fenetrePerso = new Echap (this);
        fenetrePerso->setWindowFlags(Qt::Window);
        fenetrePerso->setWindowModality(Qt::WindowModal);
        fenetrePerso->show();
    }
    else if (event->key () == Qt::Key_M)
    {
        this->hide();
        Carte * fenetrePerso = new Carte (this);
        fenetrePerso->setWindowFlags(Qt::Window);
        fenetrePerso->setWindowModality(Qt::WindowModal);
        fenetrePerso->show();
    }
}


