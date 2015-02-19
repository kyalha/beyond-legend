#include "caverne.h"

Caverne::Caverne(QWidget *parent): QWidget (parent)
{
    setFixedSize(983, 737); //983 × 737, largeur, hauteur
    this->setWindowIcon(QIcon("data/icon2.jpg"));
    this->setWindowTitle(" Beyond Legend ");
    QPalette pal = this->palette();
    pal.setBrush( this->backgroundRole(), QBrush( QPixmap( "data/Caverne.png" ) ) );
    this->setPalette( pal );

    QPixmap fond = QPixmap("data/noir2.png");
    l_fond = new QLabel(this);
    l_fond->setGeometry(75,10, 834, 546);
    l_fond->setPixmap(fond);
    l_fond->hide();
   b_quitter = new QPushButton(this);
   b_quitter->setGeometry(300, 350, 300, 100);
   QPixmap pixmap("data/b_quitter.png");
   QIcon ButtonIcon(pixmap);
   b_quitter->setIcon(ButtonIcon);
   b_quitter->setIconSize(QSize(300,100));
   b_quitter->hide();

   ////////////////////////////////////
   ////////////////////////////////////

    leTextARecuperer = new std::string("<font color=#FEFEFE>"    " Aaaaaaah ! un dragon ! Je devrais peut être sortir.  " "</font>");
    leTexteAffiche = new std::string;
    text = new QTextEdit (this);
  text->setGeometry(50, 550, 500, 75);
   text->setTextColor(Qt::black);
    leIndex = 0;

    leTextARecuperer2 = new std::string("<font color=#FEFEFE>"    " Le dragon possèdant 10 000 points de dégats, il vous brule à quelque milliers de degrés, vous mourrez plutôt rapidement.  " "</font>");
    leTexteAffiche2 = new std::string;
    text2 = new QTextEdit (this);
   text2->setGeometry(50, 550, 500, 75);
   text2->setTextColor(Qt::black);
    leIndex2 = 0;
    text2->hide();

    leTextARecuperer3 = new std::string("<font color=#FEFEFE>"    " Vous tentez de fuir mais le dragon vous choppe le mollet droit. Vous auriez du combattre, vous aller mourir dans d'atroces souffrances. " "</font>");
    leTexteAffiche3 = new std::string;
    text3 = new QTextEdit (this);
   text3->setGeometry(50, 550, 500, 75);
   text3->setTextColor(Qt::black);
   text3->hide();
    leIndex3 = 0;


    b_combattre = new QPushButton(" Combattre le dragon. ", this);
    b_combattre->setFont(QFont("Arial", 14));
    b_combattre->setGeometry(50, 650, 200, 45);
    b_fuir = new QPushButton(" Sortir de la caverne", this);
    b_fuir->setFont(QFont("Arial", 14));
    b_fuir->setGeometry(300, 650, 200, 45);

    ////////////////////////////////////
    ////////////////////////////////////

    timer = new QTimer(this);
    timer->start(50);
    this->setStyleSheet("QTextEdit {background-color : transparent; border:noneR}");
    connect(timer, SIGNAL(timeout()), this, SLOT(caverneTexte()));
    connect(b_combattre, SIGNAL(clicked()), this, SLOT(caverneTexte2()));
    connect(b_fuir, SIGNAL(clicked()), this, SLOT(caverneTexte3()));
    connect(b_quitter, SIGNAL(clicked()), this, SLOT(close()));



}

void Caverne::caverneTexte()
{
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
void Caverne::caverneTexte2()
{
    QSound over("data/over.wav");
    over.play();

        timer2 = new QTimer(this);
        timer2->start(50);
        connect(timer2, SIGNAL(timeout()), this, SLOT(caverneTexte21()));
}

void Caverne::caverneTexte21()
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
            text->hide();
            text3->hide();
            text2->show();
      }  }
    l_fond->show();
    b_quitter->show();
    b_combattre->hide();
    b_fuir->hide();
}
void Caverne::caverneTexte3()
{
    QSound over2("data/over.wav");
    over2.play();
       timer3 = new QTimer(this);
        timer3->start(50);
        connect(timer3, SIGNAL(timeout()), this, SLOT(caverneTexte31()));
}

void Caverne::caverneTexte31()
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
            text->hide();
            text2->hide();
            text3->show();
      }  }
l_fond->show();
b_quitter->show();
b_combattre->hide();
b_fuir->hide();

}
