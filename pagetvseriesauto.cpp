#include "pagetvseriesauto.h"
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
