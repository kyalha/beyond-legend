#include "echap.h"

Echap::Echap(QWidget *parent): QWidget (parent)
{
    setFixedSize(1000, 200);

    QPalette pal = this->palette();
    pal.setBrush( this->backgroundRole(), QBrush( QPixmap( "data/fondPrincipal.png" ) ) );
    this->setPalette( pal );
    this->setWindowIcon(QIcon("data/icon2.png"));
    this->setWindowTitle(" Beyond Legend ");

   setStyleSheet("QLabel{color:black;}");

    fermerPause = new QPushButton ( "", this);
    fermerPause->setGeometry(100,100, 300, 70);//abscisse, ordonnee, largeur, hauteur
    QPixmap pixmap3("data/btn_RevenirJeu.png");
    QIcon ButtonIcon3(pixmap3);
    fermerPause->setIcon(ButtonIcon3);
    fermerPause->setIconSize(QSize(300,70));

    QObject::connect(fermerPause, SIGNAL(clicked()),this, SLOT(fermerFenetre())) ;


    quitterJeu = new QPushButton( "", this);
    quitterJeu->setGeometry(600,100, 300, 70);//abscisse, ordonnee, largeur, hauteur
    QPixmap pixmap2("data/btn_QuitterJeu.png");
    QIcon ButtonIcon2(pixmap2);
    quitterJeu->setIcon(ButtonIcon2);
    quitterJeu->setIconSize(QSize(300,70));

    QObject::connect(quitterJeu, SIGNAL(clicked()), qApp, SLOT(quit())) ;



    textAttention = new QLabel (" ECHAP " , this );
    textAttention->setGeometry(400, 5, 200, 100);
    textAttention->setFont(QFont("Arial", 24));

}

void Echap::fermerFenetre()
{

    this->close();
parentWidget()->show();
}




