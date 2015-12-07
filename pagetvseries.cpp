#include "pagetvseries.h"
#include "ui_pagetvseries.h"

PageTVSeries::PageTVSeries(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageTVSeries)
{
    ui->setupUi(this);
}

PageTVSeries::~PageTVSeries()
{
    delete ui;
}
