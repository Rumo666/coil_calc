/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QFrame *frame;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 480);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 310, 80, 30));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 96, 81, 30));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 140, 81, 20));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(430, 101, 113, 21));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(431, 141, 113, 21));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(10, 160, 271, 111));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 60, 40));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 50, 70, 50));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(101, 9, 111, 30));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(101, 54, 101, 30));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 320, 80, 21));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 261, 81));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 261, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(horizontalLayoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(horizontalLayoutWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(horizontalLayoutWidget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(horizontalLayoutWidget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout->addWidget(radioButton_6);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Calc", 0));
        label->setText(QApplication::translate("MainWindow", "Voltage:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Resistance:", 0));
        label_4->setText(QApplication::translate("MainWindow", "power:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Ampere:", 0));
        label_5->setText(QApplication::translate("MainWindow", "0", 0));
        label_6->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\321\200\320\276\320\262\320\276\320\264\320\276\320\262", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "4", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "5", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "6", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
