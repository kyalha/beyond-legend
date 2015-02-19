/********************************************************************************
** Form generated from reading UI file 'fenetre.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE_H
#define UI_FENETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fenetre
{
public:

    void setupUi(QWidget *Fenetre)
    {
        if (Fenetre->objectName().isEmpty())
            Fenetre->setObjectName(QStringLiteral("Fenetre"));
        Fenetre->resize(400, 300);

        retranslateUi(Fenetre);

        QMetaObject::connectSlotsByName(Fenetre);
    } // setupUi

    void retranslateUi(QWidget *Fenetre)
    {
        Fenetre->setWindowTitle(QApplication::translate("Fenetre", "Fenetre", 0));
    } // retranslateUi

};

namespace Ui {
    class Fenetre: public Ui_Fenetre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE_H
