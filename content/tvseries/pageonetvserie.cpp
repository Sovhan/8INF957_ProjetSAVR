#include "pageonetvserie.h"
#include "ui_pageonetvserie.h"

#include "pageoneepisode.h"
#include "controllers/seriescontroller.h"
#include <QStackedWidget>
#include <QEventLoop>

PageOneTVSerie::PageOneTVSerie(QWidget *parent) :
    OneContentPage(parent),
    ui(new Ui::PageOneTVSerie)
{
    ui->setupUi(this);

    SeriesController* controller = SeriesController::getInstance();

    ui->title->setText(controller->getCurSerie().getTitle());
    ui->synopsis->setText(controller->getCurSerie().getSynopsis());
    if(controller->getCurSerie().isSaved()){
        ui->trackButton->setText("Untrack");
    }else{
        ui->trackButton->setText("Track");
    }

    // Creation of the list of episodes
    QListWidget *listWidget = ui->listEpisodesWidget;
    /*
    new QListWidgetItem(tr("Episode S01E01"), listWidget);
    new QListWidgetItem(tr("Episode S01E02"), listWidget);
    new QListWidgetItem(tr("Episode S01E03"), listWidget);
    new QListWidgetItem(tr("Episode S01E04"), listWidget);
    new QListWidgetItem(tr("Episode S01E05"), listWidget);
    new QListWidgetItem(tr("Episode S01E06"), listWidget);
    new QListWidgetItem(tr("Episode S01E07"), listWidget);
    new QListWidgetItem(tr("Episode S01E08"), listWidget);
    new QListWidgetItem(tr("Episode S01E09"), listWidget);
    new QListWidgetItem(tr("Episode S01E10"), listWidget);
    new QListWidgetItem(tr("Episode S01E11"), listWidget);
    */

    // Connection to the slot for any episode in the list
    connect(listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(loadElementPage(QListWidgetItem*)));
}

PageOneTVSerie::~PageOneTVSerie()
{
    delete ui;
}

void PageOneTVSerie::loadElementsInfo(quint32 seriesId)
{
    QEventLoop* qel = new QEventLoop();
    SeriesController* sc = SeriesController::getInstance();
    sc->setCurSerie(seriesId);
    qel->connect(sc,SIGNAL(retrieveCurSerieInfoComplete()),SLOT(quit()));
    sc->retrieveCurSerieInfo();
    qel->exec();
    delete qel;
}

void PageOneTVSerie::setElementsInfo()
{

}

void PageOneTVSerie::loadElementPage(QListWidgetItem* element)
{
    if (element){
        QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
        QWidget* Episode = new PageOneEpisode(parentStack);
        parentStack->addWidget(Episode);
        parentStack->setCurrentIndex(parentStack->count()-1);
    }
}

void PageOneTVSerie::on_trackButton_clicked()
{
    SeriesController* controller = SeriesController::getInstance();
    if(controller->getCurSerie().isSaved()){
        controller->unSaveSerie(controller->getCurSerie().getId());
        ui->trackButton->setText("Track");
    }else{
        controller->saveSerie(controller->getCurSerie().getId());
        ui->trackButton->setText("Untrack");
    }
}
