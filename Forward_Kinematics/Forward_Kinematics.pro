#-------------------------------------------------
#
# Project created by QtCreator 2015-01-30T03:17:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Forward_Kinematics
TEMPLATE = app


SOURCES += main.cpp\
        forwardkinematics.cpp \
    kinematiclink.cpp

HEADERS  += forwardkinematics.h \
    kinematiclink.h

FORMS    += forwardkinematics.ui

CONFIG += c++11
