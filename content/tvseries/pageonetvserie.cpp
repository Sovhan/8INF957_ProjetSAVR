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

    // Initialization of all the content of the page
    ui->title->setText(controller->getCurSerie().getTitle());
    ui->synopsis->setText(controller->getCurSerie().getSynopsis());

    // Creation of the list of episodes
    QListWidget *listWidget = ui->listEpisodesWidget;
    QList<Element> episodesList = controller->getCurSerie().getList();
    if(!episodesList.isEmpty()){
        QVariant tmpV;
        int i = 0;
        foreach(Element episode, episodesList){
            QListWidgetItem *tmpI = new QListWidgetItem();
            tmpI->setText(episode.getTitle());
            tmpV.setValue(i);
            tmpI->setData(Qt::UserRole, tmpV);
            listWidget->addItem(tmpI);
            //new QListWidgetItem(episode.getTitle(), listWidget);
            i++;
        }
        ui->numberOfEpisodes->setText(episodesList.size()+"");
    }
    // Connection to the slot for any episode in the list
    connect(listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(loadElementPage(QListWidgetItem*)));

    // Set the status of the Track button
    if(controller->getCurSerie().isSaved()){
        ui->trackButton->setText("Untrack");
    }else{
        ui->trackButton->setText("Track");
    }
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
