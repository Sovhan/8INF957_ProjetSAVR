#include "pageonetvserie.h"
#include "ui_pageonetvserie.h"

PageOneTVSerie::PageOneTVSerie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageOneTVSerie)
{
    ui->setupUi(this);

    // Creation of the list of episodes
    QListWidget *listWidget = ui->listEpisodesWidget;
    new QListWidgetItem(tr("Episode 1"), listWidget);
}

PageOneTVSerie::~PageOneTVSerie()
{
    delete ui;
}
