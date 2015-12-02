#-------------------------------------------------
#
# Project created by QtCreator 2015-11-24T14:56:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Savr
TEMPLATE = app


SOURCES += main.cpp\
        pageaccueil.cpp \
    pagetvseries.cpp \
    pageanime.cpp

HEADERS  += pageaccueil.h \
    pagetvseries.h \
    pageanime.h \
    colors.h

FORMS    += pageaccueil.ui \
    pagetvseries.ui \
    pageanime.ui
