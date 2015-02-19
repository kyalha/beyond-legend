#ifndef CHAMBRE_H
#define CHAMBRE_H


#include "echap.h"
#include "choixperso.h"
#include <string>
#include <iostream>
#include <QSound>
#include "taverne.h"

class Chambre : public QWidget
{
    Q_OBJECT

    int leIndex;
    QString leTextQAffiche ;
    std::string *leTextARecuperer;
    QString  valeurPseudo;
    std::string *leTexteAffiche;

    QTextEdit* text;
    QSound* unSon;
    QPushButton *choix1;
    QPushButton *choix2;

     QTimer *timer;

public:
    Chambre( QWidget *parent =0);

public slots :

    void keyPressEvent (QKeyEvent *event);
    void chambreTexte();
    void allerTaverne();
    void jouerPeluche();

};


#endif // CHAMBRE_H
