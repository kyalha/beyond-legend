#ifndef FORET_H
#define FORET_H

#include "echap.h"
#include "choixperso.h"
#include "taverne.h"
#include "chateau.h"

class Foret : public QWidget
{
    Q_OBJECT
    int leIndex;
    int leIndex2;
    int leIndex3;


    QString leTextQAffiche ;
    std::string *leTextARecuperer;
    std::string *leTexteAffiche;
    QTextEdit* text;

    QString leTextQAffiche2 ;
    std::string *leTextARecuperer2;
    std::string *leTexteAffiche2;
    QTextEdit* text2;

    QString leTextQAffiche3 ;
    std::string *leTextARecuperer3;
    std::string *leTexteAffiche3;
    QTextEdit* text3;

    QPushButton *choix1;
    QPushButton *choix2;
    QPushButton *choix3;

    QLineEdit* reponse;
    QTimer *timer;
    QTimer *timer2;
    QTimer *timer3;


public:

    Foret(QWidget *parent =0);

public slots :

    void keyPressEvent (QKeyEvent *event);
    void ForetTexte();
    void  ForetTexte2();
    void  ForetTexte3();
    void  ForetTexte4();
    void verifierTexte();
    void allerChateau();

};

#endif // FORET_H
