#include "pagetvseriesauto.h"
#include <QPushButton>
#include "ui_pagetvseriesauto.h"
#include "controllers/seriescontroller.h"

PageTVSeriesAuto::PageTVSeriesAuto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageTVSeriesAuto)
{
    ui->setupUi(this);
}

PageTVSeriesAuto::~PageTVSeriesAuto()
{
    delete ui;
}

void PageTVSeriesAuto::loadButtons(){

    SeriesController* controler = SeriesController::getInstance();
    QPushButton* button;
    if(!controler->getSavedSerieList().isEmpty()){
        for(QHash<quint32,Serie>::iterator it = controler->getSavedSerieList().begin();
            it != controler->getSavedSerieList().end(); it++){
            button = new QPushButton((*it).getTitle(),this);
            button->setFixedHeight(140);
            button->setFixedWidth(186);
            button->setStyleSheet("background-color: #233dbc;");
            button->update();
            ui->gridOthers4byX->addWidget(button);
        }
    }
}

void PageTVSeriesAuto::deleteButtons(){
    int col, row;
    QGridLayout* gridNews = ui->gridNews4by1;
    QGridLayout* gridOthers = ui->gridOthers4byX;
    for(col=0; col<gridNews->columnCount(); col++)
        for(row=0; row <gridNews->rowCount();row++){
            if(gridNews->itemAtPosition(row,col) != NULL){
                gridNews->removeItem(gridNews->itemAtPosition(row,col));
            }
        }


    for(col=0; col<gridOthers->columnCount(); col++)
        for(row=0; row <gridOthers->rowCount();row++){
            gridOthers->removeItem(gridOthers->itemAtPosition(row,col));
        }

}
