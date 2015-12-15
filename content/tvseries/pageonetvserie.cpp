#include "pageonetvserie.h"
#include "ui_pageonetvserie.h"

#include "pageoneepisode.h"
#include "controllers/seriescontroller.h"
#include <QStackedWidget>

PageOneTVSerie::PageOneTVSerie(QWidget *parent) :
    OneContentPage(parent),
    ui(new Ui::PageOneTVSerie)
{
    ui->setupUi(this);

    SeriesController* controller = SeriesController::getInstance();

    QLabel* title = ui->title;
    title->setText(controller->getCurSerie().getTitle());

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

void PageOneTVSerie::loadElementPage(QListWidgetItem* element)
{
    if (element){
        QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
        QWidget* Episode = new PageOneEpisode(parentStack);
        parentStack->addWidget(Episode);
        parentStack->setCurrentIndex(parentStack->count()-1);
    }
}
