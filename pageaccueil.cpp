#include "pageaccueil.h"
#include "ui_pageaccueil.h"
#include "pagetvseries.h"
PageAccueil::PageAccueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageAccueil)
{
    ui->setupUi(this);
}

PageAccueil::~PageAccueil()
{
    delete ui;
}

void PageAccueil::on_Series_released()
{
    PageTVSeries pageTvSeries;
    pageTvSeries.setModal(true);
    pageTvSeries.exec();
}
