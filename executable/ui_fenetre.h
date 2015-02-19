/********************************************************************************
** Form generated from reading UI file 'fenetre.ui'
**
** Created: Mon 1. Apr 23:07:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE_H
#define UI_FENETRE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fenetre
{
public:

    void setupUi(QWidget *Fenetre)
    {
        if (Fenetre->objectName().isEmpty())
            Fenetre->setObjectName(QString::fromUtf8("Fenetre"));
        Fenetre->resize(400, 300);

        retranslateUi(Fenetre);

        QMetaObject::connectSlotsByName(Fenetre);
    } // setupUi

    void retranslateUi(QWidget *Fenetre)
    {
        Fenetre->setWindowTitle(QApplication::translate("Fenetre", "Fenetre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Fenetre: public Ui_Fenetre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE_H
