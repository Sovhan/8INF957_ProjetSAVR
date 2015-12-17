#include "pageoneepisode.h"
#include "ui_pageoneepisode.h"
#include "controllers/seriescontroller.h"

PageOneEpisode::PageOneEpisode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageOneEpisode)
{
    ui->setupUi(this);

    SeriesController* controller = SeriesController::getInstance();
    Serie serie = controller->getCurSerie();
    //Element episode = serie.getList().at(episode.data(Qt::UserRole).value<int>());

    // Initialization of all the content of the page
    /*
    ui->title->setText(episode.getTitle());
    ui->number->setText(episode.getNumber());
    ui->duration->setText(serie.getDuration());
    ui->synopsis->setText(episode.getSynopsis());
    */
}

PageOneEpisode::~PageOneEpisode()
{
    delete ui;
}
