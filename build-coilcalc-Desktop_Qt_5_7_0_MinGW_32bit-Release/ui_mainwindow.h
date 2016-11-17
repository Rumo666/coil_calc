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
#include <QtWidgets/QFormLayout>
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
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;

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
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 220, 291, 224));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(0, 0, 0, 7);
        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        lineEdit_6 = new QLineEdit(formLayoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_6);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(7, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_2);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 331, 51));
        QFont font;
        groupBox->setFont(font);
        groupBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox->setStyleSheet(QLatin1String("border-style: none;\n"
" font-size: 13px;"));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 301, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy);
        radioButton_2->setLayoutDirection(Qt::LeftToRight);
        radioButton_2->setAutoFillBackground(false);
        radioButton_2->setStyleSheet(QStringLiteral("text-align: right;"));
        radioButton_2->setText(QStringLiteral("  1"));
        radioButton_2->setIconSize(QSize(1, 1));

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setStyleSheet(QStringLiteral("text-align: right;"));
        radioButton->setIconSize(QSize(1, 1));

        horizontalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(horizontalLayoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setStyleSheet(QStringLiteral("text-align: right;"));

        horizontalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(horizontalLayoutWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setStyleSheet(QStringLiteral("text-align: right;"));

        horizontalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(horizontalLayoutWidget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setStyleSheet(QStringLiteral("text-align: right;"));

        horizontalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(horizontalLayoutWidget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setStyleSheet(QStringLiteral("text-align: right;"));

        horizontalLayout->addWidget(radioButton_6);

        horizontalLayoutWidget->raise();
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 70, 299, 61));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("border-style: none;\n"
" font-size: 13px;"));
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 30, 201, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_7 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setLayoutDirection(Qt::LeftToRight);
        radioButton_7->setStyleSheet(QStringLiteral("text-align: right;"));
        radioButton_7->setIconSize(QSize(10, 10));

        horizontalLayout_2->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setStyleSheet(QStringLiteral("text-align: right;"));
        radioButton_8->setIconSize(QSize(1, 1));

        horizontalLayout_2->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setStyleSheet(QStringLiteral("text-align: right;"));

        horizontalLayout_2->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setStyleSheet(QStringLiteral("text-align: right;"));

        horizontalLayout_2->addWidget(radioButton_10);

        groupBox->raise();
        horizontalLayoutWidget_2->raise();
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(true);
        groupBox_3->setGeometry(QRect(20, 140, 321, 71));
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QLatin1String("border-style: none;\n"
" font-size: 13px;"));
        horizontalLayoutWidget_3 = new QWidget(groupBox_3);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 30, 301, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_11 = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setStyleSheet(QStringLiteral("text-align: right;"));
        radioButton_11->setIconSize(QSize(1, 1));

        horizontalLayout_3->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setStyleSheet(QStringLiteral("text-align: right;"));
        radioButton_12->setIconSize(QSize(1, 1));

        horizontalLayout_3->addWidget(radioButton_12);

        radioButton_13 = new QRadioButton(horizontalLayoutWidget_3);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        radioButton_13->setStyleSheet(QStringLiteral("text-align: right;"));

        horizontalLayout_3->addWidget(radioButton_13);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\264\320\270\320\260\320\274\320\265\321\202\321\200 \320\262\320\270\321\202\320\272\320\260", 0));
        label_3->setText(QApplication::translate("MainWindow", "\321\207\320\270\321\201\320\273\320\276 \320\262\320\270\321\202\320\272\320\276\320\262", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\264\320\273\320\270\320\275\320\260 \320\275\320\276\320\266\320\265\320\272", 0));
        label_5->setText(QApplication::translate("MainWindow", "\321\202\320\270\320\277 \320\277\321\200\320\276\320\262\320\276\320\264\320\260", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\262\320\276\320\273\321\214\321\202", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Calc", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
        label->setText(QApplication::translate("MainWindow", "\320\264\320\270\320\260\320\274\320\265\321\202\321\200 \320\277\321\200\320\276\320\262\320\276\320\264\320\260", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\321\200\320\276\320\262\320\276\320\264\320\276\320\262", 0));
        radioButton->setText(QApplication::translate("MainWindow", "  2", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "  3", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "  4", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "  5", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "  6", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\277\320\270\321\200\320\260\320\273\320\265\320\271", 0));
        radioButton_7->setText(QApplication::translate("MainWindow", "1", 0));
        radioButton_8->setText(QApplication::translate("MainWindow", "2", 0));
        radioButton_9->setText(QApplication::translate("MainWindow", "3", 0));
        radioButton_10->setText(QApplication::translate("MainWindow", "4", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\321\202\320\270\320\277 \321\201\320\277\320\270\321\200\320\260\320\273\320\270", 0));
        radioButton_11->setText(QApplication::translate("MainWindow", " normal", 0));
        radioButton_12->setText(QApplication::translate("MainWindow", " micro", 0));
        radioButton_13->setText(QApplication::translate("MainWindow", " clapton", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
