/********************************************************************************
** Form generated from reading UI file 'bounce.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUNCE_H
#define UI_BOUNCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BounceClass
{
public:

    void setupUi(QWidget *BounceClass)
    {
        if (BounceClass->objectName().isEmpty())
            BounceClass->setObjectName(QStringLiteral("BounceClass"));
        BounceClass->resize(600, 400);

        retranslateUi(BounceClass);

        QMetaObject::connectSlotsByName(BounceClass);
    } // setupUi

    void retranslateUi(QWidget *BounceClass)
    {
        BounceClass->setWindowTitle(QApplication::translate("BounceClass", "Bounce", 0));
    } // retranslateUi

};

namespace Ui {
    class BounceClass: public Ui_BounceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUNCE_H
