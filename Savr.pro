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
    content/tvseries/pagetvseries.cpp \
    content/tvseries/pageonetvserie.cpp \
    content/tvseries/pageoneepisode.cpp \
    pageaccueilcontent.cpp \
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
    content/tvseries/pagetvseries.h \
    content/tvseries/pageonetvserie.h \
    content/tvseries/pageoneepisode.h \
    pageaccueilcontent.h \
    utils/apikey.h \
    pagetvseriesauto.h \
    pages/contentspage.h \
    pages/onecontentpage.h

FORMS    += pageaccueil.ui \
    pageanime.ui \
    pagebooks.ui \
    pagepodcasts.ui \
    content/tvseries/pagetvseries.ui \
    content/tvseries/pageonetvserie.ui \
    content/tvseries/pageoneepisode.ui \
    pageaccueilcontent.ui \
    pagetvseriesauto.ui
