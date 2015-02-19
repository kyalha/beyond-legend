#include "choixperso.h"

ChoixPerso::ChoixPerso(QWidget *parent): QWidget (parent)
{
    setFixedSize(983, 737); //983 × 737, largeur, hauteur
    QPalette pal = this->palette();
    pal.setBrush( this->backgroundRole(), QBrush( QPixmap( "data/fondPrincipal.png" ) ) );
    this->setPalette( pal );
     this->setWindowIcon(QIcon("data/icon2.png"));
    this->setWindowTitle(" Beyond Legend ");


    boutonReturn = new QPushButton ("", this);
    boutonReturn->setGeometry(200,600, 300, 70);//abscisse, ordonnee, largeur, hauteur
    QPixmap pixmap("data/revenirMenu.png");
    QIcon ButtonIcon(pixmap);
    boutonReturn->setIcon(ButtonIcon);
    boutonReturn->setIconSize(QSize(300,100));
    boutonNouvellePartie = new QPushButton("", this);
    boutonNouvellePartie->setGeometry(600,600, 200, 70);//abscisse, ordonnee, largeur, hauteur
    QPixmap pixmap2("data/lancerPartie.png");
    QIcon ButtonIcon2(pixmap2);
    boutonNouvellePartie->setIcon(ButtonIcon2);
    boutonNouvellePartie->setIconSize(QSize(300,100));
    boutonNouvellePartie->setEnabled(false);

    pseudo = new QLabel( " Pseudo : " , this);
    pseudo->setGeometry(200,50, 200, 50);
    sexe = new QLabel( " sexe : " , this);
    sexe->setGeometry(200,150, 200, 50);
    sexe->setFont(QFont("Arial", 16));
    pseudo->setFont(QFont("Arial", 16));
    race = new QLabel( " race : " , this);
    race->setGeometry(200,250, 200, 50);
    race->setFont(QFont("Arial", 16));
    l_description = new QLabel( " Description : ", this);
    l_description->setGeometry(200,350, 200, 50);
    l_description->setFont(QFont("Arial", 16));
    i_noir  = new QLabel(this);
    QPixmap *pixmap_img = new QPixmap("data/elfeFemme.png");
    i_noir->setGeometry(600,200,150,150);
    i_noir->setPixmap(*pixmap_img);

    boutonPseudo = new QLineEdit( this);
    boutonPseudo->setFont(QFont("Arial", 16));
    boutonPseudo->setGeometry(300,50, 200, 50);
    boutonPseudo->setMaxLength(10);
   //valeurPseudo = boutonPseudo->text();
   boutonSexe = new  QComboBox(this);
   boutonSexe->addItem("Femme");
   boutonSexe->addItem("Homme");
   boutonSexe->setFont(QFont("Arial", 14));
   boutonSexe->setGeometry(300,150, 200, 50);
   boutonRace = new  QComboBox(this);
   boutonRace->addItem("Elfe");
   boutonRace->addItem("Humain");
   boutonRace->addItem("Erknor");
   boutonRace->setFont(QFont("Arial", 14));
   boutonRace->setGeometry(300,250, 200, 50);

//////////////////////////////////////////////////////////
///////////////////// TEXTE DESCRIPTION //////////////////

   description = new QTextEdit (" Un corps fin et bien proportionné, de grands yeux clairs et éveillés, la grâce et la légèreté d’une feuille de saule, un charisme étonnant et une bonne paire de... bottes...Tout irait bien s’il n’y avait pas ce petit problème d intelligence.", this );
   description->setGeometry(50,400, 600, 125);
   description->setFont(QFont("Arial", 14));
   description->setEnabled(true);
   uneScrollBar = new QScrollBar( description);
   uneScrollBar->setGeometry(700,400,50,50);
   description->setReadOnly (true);



    QObject::connect(boutonSexe, SIGNAL(currentIndexChanged(QString)), this, SLOT(MajImageDescription()));
    QObject::connect(boutonRace, SIGNAL(currentIndexChanged(QString)), this, SLOT(MajImageDescription()));
    QObject::connect(boutonNouvellePartie, SIGNAL(clicked()), this, SLOT(afficherDebutPartie())) ; //fenetre du menu : this
    QObject::connect(boutonReturn, SIGNAL(clicked()), this, SLOT(retournerMenu())) ;
    QObject::connect(boutonPseudo, SIGNAL(textChanged(QString)), this, SLOT(verificationPseudo()));

}


void ChoixPerso::MajImageDescription()
{

    if (boutonSexe->currentText()== "Homme" && boutonRace->currentText() == "Elfe" )
    {

        QPixmap *pixmap_img2 = new QPixmap("data/elfe2.png");
        i_noir->setGeometry(600,200,150,150);
        i_noir->setPixmap(*pixmap_img2);

        description->setText(" Un corps fin et bien proportionné, de grands yeux clairs et éveillés, la grâce et la légèreté d une feuille de saule, un charisme étonnant et une bonne paire de... bottes...  Tout irait bien s il n y avait pas ce petit problème d intelligence.");

    }

    else if (boutonSexe->currentText() == "Femme" && boutonRace->currentText() == "Elfe")
    {

        QPixmap *pixmap_img3 = new QPixmap("data/elfeFemme.png");
        i_noir->setGeometry(600,200,150,150);
        i_noir->setPixmap(*pixmap_img3);

        description->setText(" Un corps fin et bien proportionné, de grands yeux clairs et éveillés, la grâce et la légèreté d une feuille de saule, un charisme étonnant et une bonne paire de... bottes...  Tout irait bien s il n y avait pas ce petit problème d intelligence.");

    }


    else if (boutonSexe->currentText() == "Homme" && boutonRace->currentText() == "Humain")
    {
        QPixmap *pixmap_img4 = new QPixmap("data/Homme.png");
        i_noir->setGeometry(600,200,150,150);
        i_noir->setPixmap(*pixmap_img4);

        description->setText(" Physiquement quelconque, moyen dans sa stature mais tout de même charismatique.Homme de terrain et d action, son arme de prédilection est l épée courte. Eventuellement il peut tirer à l arc, mais il n en a pas encore acheté, parce qu il faut acheter des flèches. C est cher, et cela fait du bruit quand on marche. C est bien plus amusant de ne pas avoir d arc et de se moquer de l elfe qui en possède un mais qui n est pas très habile avec. ");
    }

    else if (boutonSexe->currentText() == "Femme" && boutonRace->currentText() == "Humain")
    {
        QPixmap *pixmap_img5 = new QPixmap("data/femme.png");
        i_noir->setGeometry(600,200,150,150);
        i_noir->setPixmap(*pixmap_img5);

        description->setText(" Physiquement quelconque, moyen dans sa stature mais tout de même charismatique.Homme de terrain et d action, son arme de prédilection est l épée courte. Eventuellement il peut tirer à l arc, mais il n en a pas encore acheté, parce qu il faut acheter des flèches. C est cher, et cela fait du bruit quand on marche. C est bien plus amusant de ne pas avoir d arc et de se moquer de l elfe qui en possède un mais qui n’est pas très habile avec. ");

    }

    else if (boutonSexe->currentText() == "Homme" && boutonRace->currentText() == "Erknor")
    {
       QPixmap *pixmap_img5 = new QPixmap("data/erknorH.png");
       i_noir->setGeometry(600,200,150,150);
       i_noir->setPixmap(*pixmap_img5);

        description->setText(" Peuple de guerriers et principalement de prêtres vénérant la déesse Kaya, grande prêtresse des 2 mondes. les guerriers se distinguent par le manque de corne sur le front marquant la sagesse et qui est réservé aux prêtres. On les remarque souvent par leurs grandes tailles et leurs oreilles de fourrrures. ");
   }

   else if (boutonSexe->currentText() == "Femme" && boutonRace->currentText() == "Erknor")
   {
      QPixmap *pixmap_img6 = new QPixmap("data/erknorF.png");
      i_noir->setGeometry(600,200,150,150);
      i_noir->setPixmap(*pixmap_img6);


        description->setText(" Peuple de guerriers et principalement de prêtres vénérant la déesse Kaya, grande prêtresse des 2 mondes. les guerriers se distinguent par le manque de corne sur le front marquant la sagesse et qui est réservé aux prêtres. On les remarque souvent par leurs grandes tailles et leurs oreilles de fourrrures. ");

  }


}

void ChoixPerso::verificationPseudo()
{
    if (boutonPseudo->size().isEmpty())
    {
        boutonNouvellePartie->setEnabled(false);
    }
    else
    {
        boutonNouvellePartie->setEnabled(true);
    }
}

void ChoixPerso::retournerMenu()
{
    parentWidget()->show();
    this->close();
}

void ChoixPerso::afficherDebutPartie()
{
   //valeurPseudo = boutonPseudo->text();
    Chambre * fenetreDebutPartie = new Chambre ( this);
    fenetreDebutPartie->setWindowFlags(Qt::Window);
    fenetreDebutPartie->setWindowModality(Qt::WindowModal);
    fenetreDebutPartie->show();

    this->hide();
}


