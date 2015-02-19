#include <QApplication>
#include "menugeneral.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MenuGeneral fenetre ;
    fenetre.show();

  return app.exec();
}
