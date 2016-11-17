/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(400, 300);
        checkBox = new QCheckBox(about);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(50, 80, 72, 19));
        checkBox_2 = new QCheckBox(about);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(140, 80, 72, 19));
        label = new QLabel(about);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 150, 47, 13));
        label_2 = new QLabel(about);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 150, 47, 13));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Dialog", 0));
        checkBox->setText(QApplication::translate("about", "CheckBox", 0));
        checkBox_2->setText(QApplication::translate("about", "CheckBox", 0));
        label->setText(QApplication::translate("about", "TextLabel", 0));
        label_2->setText(QApplication::translate("about", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
