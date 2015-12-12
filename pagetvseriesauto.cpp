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
    QPushButton* button = new QPushButton("haha!!!!!",this);
    button->setFixedHeight(140);
    button->setFixedWidth(140);
    button->setStyleSheet("background-color: blue;");
    button->update();
    ui->gridNews4by1->addWidget(button);
}
