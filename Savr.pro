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
        view/pageaccueil.cpp \
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
    view/pageaccueilcontent.cpp \
    content/anime/pageoneanime.cpp \
    view/searchresults.cpp \
    content/anime/pageoneepisodeanime.cpp \
    content/books/pageonebook.cpp \
    view/seriebutton.cpp

HEADERS  += view/pageaccueil.h \
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
    view/pageaccueilcontent.h \
    utils/apikey.h \
    pages/contentspage.h \
    pages/onecontentpage.h \
    content/anime/pageoneanime.h \
    view/searchresults.h \
    content/anime/pageoneepisodeanime.h \
    content/books/pageonebook.h \
    view/seriebutton.h

FORMS    += view/pageaccueil.ui \
    content/books/pagebooks.ui \
    content/podcasts/pagepodcasts.ui \
    content/tvseries/pagetvseries.ui \
    content/tvseries/pageonetvserie.ui \
    content/tvseries/pageoneepisode.ui \
    content/anime/pageanime.ui \
    view/pageaccueilcontent.ui \
    content/anime/pageoneanime.ui \
    view/searchresults.ui \
    content/anime/pageoneepisodeanime.ui \
    content/books/pageonebook.ui
