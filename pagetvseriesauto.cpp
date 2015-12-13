#include "pagetvseriesauto.h"
#include <QPushButton>
#include "ui_pagetvseriesauto.h"

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
    QPushButton* button = new QPushButton("haha!!!!!",this);
    button->setFixedHeight(140);
    button->setFixedWidth(140);
    button->setStyleSheet("background-color: #233dbc;");
    button->update();
    ui->gridNews4by1->addWidget(button);
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
