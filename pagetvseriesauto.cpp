#include "pagetvseriesauto.h"
#include<QPushButton>
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
    QPushButton* b = new QPushButton("haha!!!!!",this);
    b->autoDefault();
    ui->newsGrid4by1->addWidget(b);
}
