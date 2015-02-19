#ifndef PAYSAGE_H
#define PAYSAGE_H
#include "fenetre.h"
#include "carte.h"
#include "echap.h"
#include <list>
#include "choixperso.h"
#include <string>
#include <fstream>
#include <iostream>
#include <QObject>

class Paysage : public Fenetre
{
    Q_OBJECT

    int leIndex;
    //int limite;
    QString leTextQAffiche ;
    QLabel * unLabel ;
    QLineEdit * boutonPseudo;
    std::string *leTextARecuperer;

    std::string *leTexteAffiche;
    QTextEdit* text;



public:
    Paysage(QString, QWidget *parent =0);

public slots :

    void keyPressEvent (QKeyEvent *event);
    void ForetTexte();

};
#endif // PAYSAGE_H
