#include "pageaccueil.h"
#include "ui_pageaccueil.h"
#include "content/anime/pageanime.h"
#include "pageaccueilcontent.h"
#include "pagebooks.h"
#include "pagepodcasts.h"
#include "content/tvseries/pagetvseries.h"
#include "pagetvseriesauto.h"

#include<QWidget>

PageAccueil::PageAccueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageAccueil)
{
    ui->setupUi(this);
    QWidget* stackOfWidgets = ui->stackedWidget;
    QWidget* pageAccueilContent = new PageAccueilContent(stackOfWidgets);
    QWidget* pageAnime = new PageAnime(stackOfWidgets);
    QWidget* pageBooks = new PageBooks(stackOfWidgets);
    QWidget* pagePodcasts = new PagePodcasts(stackOfWidgets);
    QWidget* pageTVSeries = new PageTVSeries(stackOfWidgets);
    QWidget* pageTVSeriesAuto = new PageTVSeriesAuto(stackOfWidgets);

    ui->stackedWidget->addWidget(pageAccueilContent);
    ui->stackedWidget->addWidget(pageAnime);
    ui->stackedWidget->addWidget(pageBooks);
    ui->stackedWidget->addWidget(pagePodcasts);
    ui->stackedWidget->addWidget(pageTVSeries);
    ui->stackedWidget->addWidget(pageTVSeriesAuto);

}

PageAccueil::~PageAccueil()
{
    delete ui;
}

void PageAccueil::on_HomeBtn_pressed()
{
    if(ui->stackedWidget->count()>6){
        int i;
        for(i=6;i<ui->stackedWidget->count();i++){
            ui->stackedWidget->removeWidget(ui->stackedWidget->widget(i));
        }
    }
    ui->stackedWidget->setCurrentIndex(0);
}
