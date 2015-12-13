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
    content/books/pagebooks.cpp \
    content/podcasts/pagepodcasts.cpp \
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
    content/anime/pageanime.cpp \
    pageaccueilcontent.cpp \
    pagetvseriesauto.cpp \
    content/anime/pageoneanime.cpp \
    searchresults.cpp \
    content/anime/pageoneepisodeanime.cpp \
    content/books/pageonebook.cpp

HEADERS  += pageaccueil.h \
    colors.h \
    content/books/pagebooks.h \
    content/podcasts/pagepodcasts.h \
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
    content/anime/pageanime.h \
    pageaccueilcontent.h \
    utils/apikey.h \
    pagetvseriesauto.h \
    pages/contentspage.h \
    pages/onecontentpage.h \
    content/anime/pageoneanime.h \
    searchresults.h \
    content/anime/pageoneepisodeanime.h \
    content/books/pageonebook.h

FORMS    += pageaccueil.ui \
    content/books/pagebooks.ui \
    content/podcasts/pagepodcasts.ui \
    content/tvseries/pagetvseries.ui \
    content/tvseries/pageonetvserie.ui \
    content/tvseries/pageoneepisode.ui \
    content/anime/pageanime.ui \
    pageaccueilcontent.ui \
    pagetvseriesauto.ui \
    content/anime/pageoneanime.ui \
    searchresults.ui \
    content/anime/pageoneepisodeanime.ui \
    content/books/pageonebook.ui
