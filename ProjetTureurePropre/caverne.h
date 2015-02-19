#ifndef CAVERNE_H
#define CAVERNE_H
#include "caverne.h"
#include "echap.h"
#include <QSound>


class Caverne : public QWidget
{
    Q_OBJECT

    int leIndex;
    QString leTextQAffiche ;
    std::string *leTextARecuperer;
    QString  valeurPseudo;
    std::string *leTexteAffiche;
    QTextEdit* text;

    int leIndex2;
    QString leTextQAffiche2 ;
    std::string *leTextARecuperer2;
    QString  valeurPseudo2;
    std::string *leTexteAffiche2;
    QTextEdit* text2;

    int leIndex3;
    QString leTextQAffiche3 ;
    std::string *leTextARecuperer3;
    QString  valeurPseudo3;
    std::string *leTexteAffiche3;
    QTextEdit* text3;

    QPushButton* b_combattre;
    QPushButton* b_fuir;
    QLabel *l_fond;
    QPushButton* b_quitter;

    QTimer *timer;
    QTimer *timer2;
    QTimer *timer3;


public:

    Caverne(QWidget *parent =0);

public slots :
    void caverneTexte();
    void caverneTexte2();
    void caverneTexte21();
    void caverneTexte3();
    void caverneTexte31();

};

#endif // CAVERNE_H
