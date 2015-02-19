#ifndef CHATEAU_H
#define CHATEAU_H

#include "echap.h"
#include "caverne.h"
#include <cstdlib>
#include <time.h>

class Chateau : public QWidget
{
    Q_OBJECT
    int A;

    int leIndex;

    QLabel* texte1;
    QLabel* texte2;
    QTextEdit* texte3;

    std::string *leTextARecuperer;
    std::string *leTexteAffiche;
    QLineEdit *reponse;
    QTextEdit* text;
    QString leTextQAffiche ;
    QPushButton *choix1;
    QPushButton *b_Caverne;

    QTimer *timer;

public:
    Chateau(QWidget *parent =0);
public slots :
    void trouverMot();
    void texte();
    void allerCaverne();
    void keyPressEvent(QKeyEvent *event);

};

#endif // CHATEAU_H
