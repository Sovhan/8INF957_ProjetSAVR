#include "pageaccueil.h"
#include "ui_pageaccueil.h"
#include "pagetvseries.h"
PageAccueil::PageAccueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageAccueil)
{
    ui->setupUi(this);
    stackedWidget = new QStackedWidget;

}

PageAccueil::~PageAccueil()
{
    delete ui;
    delete stackedWidget;
}

void PageAccueil::on_Series_released()
{
    PageTVSeries pageTvSeries;
    stackedWidget->addWidget(pageTvSeries);
}
