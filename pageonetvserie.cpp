#include "pageonetvserie.h"
#include "ui_pageonetvserie.h"

PageOneTVSerie::PageOneTVSerie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageOneTVSerie)
{
    ui->setupUi(this);

    // Creation of the list of episodes
    QListWidget *listWidget = ui->listEpisodesWidget;
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

    // Connection to the slot for any episode in the list
    connect(listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(loadEpisodePage(QListWidgetItem*)));
}

PageOneTVSerie::~PageOneTVSerie()
{
    delete ui;
}

void PageOneTVSerie::loadEpisodePage(QListWidgetItem* episode)
{
    if (episode){
        //qDebug() << "episode : " << episode->text();
    }
}
