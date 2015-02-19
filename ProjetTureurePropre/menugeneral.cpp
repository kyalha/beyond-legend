#include "menugeneral.h"
#include "choixperso.h"

MenuGeneral::MenuGeneral(QWidget *parent): QWidget(parent)
{
    setFixedSize(983, 737); //983 × 737, largeur, hauteur
    QPalette pal = this->palette();
       pal.setBrush( this->backgroundRole(), QBrush( QPixmap( "data/fondPrincipal2.png" ) ) );
        this->setPalette( pal );
       this->setWindowIcon(QIcon("data/icon2.png"));
       this->setWindowTitle(" Beyond Legend ");

       //////////////////////////////
       /////////////////////////////

    nouvellePartie = new QPushButton("", this); //this est la fenêtre, la classe en elle même
    nouvellePartie->setGeometry(350,180, 300, 100); //abscisse, ordonnee, largeur, hauteur

    QPixmap pixmap("data/nouvellePartie.png");
    QPixmap pixmap3("data/logo-play.png");
    QPixmap pixmap2("data/quitterJeu.png");
    QIcon ButtonIcon(pixmap);
    nouvellePartie->setIcon(ButtonIcon);
    nouvellePartie->setIconSize(QSize(300,100));
    QIcon ButtonIcon2(pixmap2);
    quitterJeu = new QPushButton("", this);
    quitterJeu->setGeometry(350,350, 300, 100);
    quitterJeu->setIcon(ButtonIcon2);
    quitterJeu->setIconSize(QSize(300,100));

    info = new QLabel(this);
    info->setText(" Envie de mettre pause ou de quitter le jeu, appuyez sur le bouton : Echap. ");
    info->setGeometry(50, 530, 900, 100);
    info->setFont(QFont("Arial", 19));


    QSound *sonMenu = new QSound("data/opening.wav");
    sonMenu->play();  // marche !!

    ////////////////////////////////////
    ////////////////////////////////////


    QObject::connect(nouvellePartie, SIGNAL(clicked()), this, SLOT(afficheChoixPerso())) ; //fenetre du menu : this
    QObject::connect(quitterJeu, SIGNAL(clicked()), qApp, SLOT(quit())) ;

}


void MenuGeneral::afficheChoixPerso()
{


    ChoixPerso * fenetrePerso = new ChoixPerso (this);
    fenetrePerso->setWindowFlags(Qt::Window);
    fenetrePerso->setWindowModality(Qt::WindowModal);
    fenetrePerso->show();

    this->hide();

}

