#include "pageoneepisode.h"
#include "ui_pageoneepisode.h"
#include "controllers/seriescontroller.h"

PageOneEpisode::PageOneEpisode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageOneEpisode)
{
    ui->setupUi(this);

    SeriesController* controller = SeriesController::getInstance();
    //Element episode = controller->getCurSerie().getList().at(data(Qt::UserRole).value<quint32>());

    // Initialization of all the content of the page
    //ui->title->setText();
}

PageOneEpisode::~PageOneEpisode()
{
    delete ui;
}
