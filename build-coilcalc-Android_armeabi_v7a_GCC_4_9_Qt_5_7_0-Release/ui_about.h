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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(400, 300);
        about->setAutoFillBackground(false);
        about->setStyleSheet(QLatin1String("background-color: rgb(62, 62, 62);\n"
"color: rgb(255, 255, 255);"));
        about->setSizeGripEnabled(false);
        label = new QLabel(about);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 150, 47, 13));
        label_2 = new QLabel(about);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 150, 47, 13));
        pushButton = new QPushButton(about);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 220, 80, 21));
        verticalLayoutWidget = new QWidget(about);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 20, 221, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_2 = new QCheckBox(verticalLayoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);


        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "Dialog", 0));
        label->setText(QApplication::translate("about", "TextLabel", 0));
        label_2->setText(QApplication::translate("about", "TextLabel", 0));
        pushButton->setText(QApplication::translate("about", "PushButton", 0));
        checkBox_2->setText(QApplication::translate("about", "CheckBox", 0));
        checkBox->setText(QApplication::translate("about", "CheckBox", 0));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
