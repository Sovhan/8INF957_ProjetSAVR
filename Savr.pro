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
    pageanime.cpp \
    pagebooks.cpp \
    pagepodcasts.cpp \
    model/content.cpp \
    model/element.cpp \
    model/volume.cpp \
    model/episode.cpp \
    model/book.cpp \
    model/serie.cpp \
    model/anime.cpp \
    model/podcast.cpp

HEADERS  += pageaccueil.h \
    pagetvseries.h \
    pageanime.h \
    colors.h \
    pagebooks.h \
    pagepodcasts.h \
    model/content.h \
    model/element.h \
    model/volume.h \
    model/episode.h \
    model/book.h \
    model/serie.h \
    model/anime.h \
    model/podcast.h

FORMS    += pageaccueil.ui \
    pagetvseries.ui \
    pageanime.ui \
    pagebooks.ui \
    pagepodcasts.ui
