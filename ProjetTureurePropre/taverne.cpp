#include "taverne.h"

Taverne::Taverne( QWidget *parent): QWidget (parent)
{
    setFixedSize(983, 737); //983 × 737, largeur, hauteur
    this->setWindowIcon(QIcon("data/icon2.png"));
    this->setWindowTitle(" Beyond Legend ");
    QPalette pal = this->palette();
    pal.setBrush( this->backgroundRole(), QBrush( QPixmap( "data/taverne.png" ) ) );
    this->setPalette( pal );

    leTextARecuperer = new std::string( "<font color=#FEFEFE>"   " Aaaah... tu te lèves  enfin ! tu as fait une sacrée chute il faut dire. Tu te rappelle des lieux j'espère ? ""</font>");
    leTexteAffiche = new std::string;
    text = new QTextEdit (this);
    text->setGeometry(50, 518, 500, 125);
    text->setTextColor(Qt::black);
    leIndex = 0;
    leTextARecuperer2 = new std::string( "<font color=#FEFEFE>"   " Bon peu importe, comme dit ton père, le plus important, c'est de faire des chaises en bois ! Bon à présent, tu devrais aller voir Mobeus, il te cherche, la dernière fois que je l'ai vu, il était dans la forêt... tu devrais y faire un tour. ""</font>");
    leTexteAffiche2 = new std::string;
    text2 = new QTextEdit (this);
    text2->setGeometry(50, 518, 500, 125);
    text2->setTextColor(Qt::black);
    leIndex2 = 0;
    text2->hide();


    choix1 = new QPushButton("Euh...", this );
    choix1->setFont(QFont("Arial", 14));
    choix1->setGeometry(50, 650, 100, 45);
    choix1->show();
    choix2 = new QPushButton("Aller dans la fôret. ", this );
    choix2->setFont(QFont("Arial", 14));
    choix2->setGeometry(50, 650, 200, 45);
    choix2->hide();
    choix3 = new QPushButton(" Boire avant une pinte de bière. ", this);
    choix3->setFont(QFont("Arial", 14));
    choix3->setGeometry(260, 650, 300, 45);
    choix3->hide();

    ////////////////////////////////////
    ////////////////////////////////////

     timer = new QTimer(this);
    timer->start(50);
    connect(timer, SIGNAL(timeout()), this, SLOT(TaverneTexte()));
    connect(choix1, SIGNAL(clicked()), this, SLOT(TaverneTexte2()));
    connect(choix2, SIGNAL(clicked()), this, SLOT(allerForet()));
    connect(choix3, SIGNAL(clicked()), this, SLOT(sonBiere()));
    this->setStyleSheet("QTextEdit {background-color : transparent; border:noneR}");
}

void Taverne::TaverneTexte()
{
    //  text->setText("leText"+unPseudo+"la suite");

    if (leIndex < (leTextARecuperer->size()))
    {     {
            leTexteAffiche->push_back((leTextARecuperer)->at(leIndex));
            QString leTextQAffiche = QString::fromStdString(leTexteAffiche->c_str());
            text->setText(leTextQAffiche );
            text->setFont(QFont("Arial", 16));
            text->setEnabled(false);
            text->setReadOnly (true);
            leIndex++;
        }  }
}

void Taverne::TaverneTexte2()

{
    choix1->hide();

    text->hide();
    text2->show();
    timer2 = new QTimer(this);
    timer2->start(50);
    connect(timer2, SIGNAL(timeout()), this, SLOT(TaverneTexte21()));
}

void Taverne::TaverneTexte21()
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
    if(leIndex2 ==(leTextARecuperer2->size()))
    {

        choix2->show();
        choix3->show();

    }
}

void Taverne::sonBiere()
{
    biere = new QSound("data/boisson.wav");
    biere->play();  // marche !!
}

void Taverne::allerForet()
{
    //nature->stop();
    Foret * fenetrePerso = new Foret ( this);
    fenetrePerso->setWindowFlags(Qt::Window);
    fenetrePerso->setWindowModality(Qt::WindowModal);
    fenetrePerso->show();
    this->hide();
}

void Taverne::keyPressEvent (QKeyEvent *event)
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

