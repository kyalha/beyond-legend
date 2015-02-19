#ifndef MENUGENERAL_H
#define MENUGENERAL_H
#include <QWidget>
#include <QtGui>
#include <QSound>

class MenuGeneral : public QWidget
{
    Q_OBJECT

public:
  explicit  MenuGeneral(QWidget *parent =0);

  protected:

    QSound *sonMenu;
    QPushButton* nouvellePartie;
    QPushButton* quitterJeu;
    QLabel* info;


public slots :

    void afficheChoixPerso();

};

#endif // MENUGENERAL_H
