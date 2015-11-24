#include "pagetvseries.h"
#include "ui_pagetvseries.h"

PageTVSeries::PageTVSeries(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PageTVSeries)
{
    ui->setupUi(this);
}

PageTVSeries::~PageTVSeries()
{
    delete ui;
}
