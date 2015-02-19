#ifndef TAVERNE_H
#define TAVERNE_H

#include "echap.h"
#include "choixperso.h"
#include "chambre.h"
#include "foret.h"
#include <QSound>

class Taverne : public QWidget
{

    Q_OBJECT

    int leIndex;
    QString leTextQAffiche ;
    std::string *leTextARecuperer;
    std::string *leTexteAffiche;
    QTextEdit* text;

    int leIndex2;
    QString leTextQAffiche2 ;
    std::string *leTextARecuperer2;
    std::string *leTexteAffiche2;
    QTextEdit* text2;

    QPushButton *choix1;
    QPushButton *choix2;
    QPushButton *choix3;

    QTimer *timer;
    QTimer *timer2;

    QSound *biere;
public:
    Taverne( QWidget *parent =0);

public slots :
    void keyPressEvent (QKeyEvent *event);
    void TaverneTexte();
    void TaverneTexte2();
    void TaverneTexte21();
    void sonBiere();
    void allerForet();
};

#endif // TAVERNE_H
