#ifndef ECHAP_H
#define ECHAP_H
#include "menugeneral.h"
#include "chambre.h"

class Echap : public QWidget
{
    Q_OBJECT


    QPushButton* quitterJeu;
    QPushButton* fermerPause;
    QLabel* textAttention;

public:
    Echap(QWidget *parent =0);

public slots :


    void fermerFenetre();
};

#endif // ECHAP_H
