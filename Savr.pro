#-------------------------------------------------
#
# Project created by QtCreator 2015-11-24T14:56:35
#
#-------------------------------------------------

QT       += core gui network xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Savr
TEMPLATE = app


SOURCES += main.cpp\
        pageaccueil.cpp \
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
    model/podcast.cpp \
    controllers/seriescontroller.cpp \
    pagetvseries.cpp \
    pageonetvserie.cpp \
    pageaccueilcontent.cpp \
    pageoneepisode.cpp \
    pagetvseriesauto.cpp

HEADERS  += pageaccueil.h \
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
    model/podcast.h \
    controllers/seriescontroller.h \
    pagetvseries.h \
    pageonetvserie.h \
    pageaccueilcontent.h \
    utils/apikey.h \
    pageoneepisode.h \
    pagetvseriesauto.h \
    pages/contentspage.h \
    pages/onecontentpage.h

FORMS    += pageaccueil.ui \
    pageanime.ui \
    pagebooks.ui \
    pagepodcasts.ui \
    pagetvseries.ui \
    pageonetvserie.ui \
    pageaccueilcontent.ui \
    pageoneepisode.ui \
    pagetvseriesauto.ui
