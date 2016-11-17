#-------------------------------------------------
#
# Project created by QtCreator 2016-11-16T22:06:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = coilcalc
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    about.h

FORMS    += mainwindow.ui \
    dialog.ui \
    about.ui

CONFIG += mobility
MOBILITY = 

