#-------------------------------------------------
#
# Project created by QtCreator 2017-05-09T09:18:38
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyselfQQ
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    dialoglist.cpp

HEADERS  += widget.h \
    dialoglist.h

FORMS    += widget.ui \
    dialoglist.ui

RESOURCES += \
    res.qrc

CONFIG += c++11
