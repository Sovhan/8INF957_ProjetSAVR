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
    pageanime.cpp \
    pagebooks.cpp \
    pagepodcasts.cpp \
    pagetvseries.cpp

HEADERS  += pageaccueil.h \
    pageanime.h \
    colors.h \
    pagebooks.h \
    pagepodcasts.h \
    pagetvseries.h

FORMS    += pageaccueil.ui \
    pageanime.ui \
    pagebooks.ui \
    pagepodcasts.ui \
    pagetvseries.ui
