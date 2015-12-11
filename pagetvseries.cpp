#include "pagetvseries.h"
#include "ui_pagetvseries.h"
#include "pageonetvserie.h"
#include <QStackedWidget>

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

void PageTVSeries::on_pushButton_clicked()
{
    QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
    QWidget* TVSerie = new PageOneTVSerie(parentStack);
    parentStack->addWidget(TVSerie);
    parentStack->setCurrentIndex(parentStack->count()-1);
}
