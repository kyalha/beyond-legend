#ifndef CHOIXPERSO_H
#define CHOIXPERSO_H
#include <QtGui>
#include "chambre.h"

class ChoixPerso : public QWidget
{
    Q_OBJECT

protected :

    QPushButton* boutonReturn;
    QPushButton* boutonNouvellePartie;
    QLineEdit *boutonPseudo;
    QComboBox* boutonSexe;
    QComboBox* boutonRace;
    QLabel* pseudo;
    QLabel* sexe;
    QLabel* race;
    QLabel* l_description;
    QLabel* i_noir;
    QTextEdit* description;
    QScrollBar* uneScrollBar;

public:

    ChoixPerso(QWidget *parent =0);

public slots :
    void retournerMenu();
    void afficherDebutPartie();
    void MajImageDescription();
    void verificationPseudo();

};

#endif // CHOIXPERSO_H
