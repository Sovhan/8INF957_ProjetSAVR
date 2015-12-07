#include "pageaccueil.h"
#include "ui_pageaccueil.h"
#include "pageanime.h"
#include "pageaccueilcontent.h"
#include "pagebooks.h"
#include "pagepodcasts.h"
#include "pagetvseries.h"
#include<QWidget>

PageAccueil::PageAccueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageAccueil)
{
    ui->setupUi(this);
    QWidget *pageAccueilContent = new PageAccueilContent(parent);
    QWidget *pageAnime = new PageAnime(parent);
    QWidget *pageBooks = new PageBooks(parent);
    QWidget *pagePodcasts = new PagePodcasts(parent);
    QWidget *pageTVSeries = new PageTVSeries(parent);
    ui->stackedWidget->addWidget(pageAccueilContent);
    ui->stackedWidget->addWidget(pageAnime);
    ui->stackedWidget->addWidget(pageBooks);
    ui->stackedWidget->addWidget(pagePodcasts);
    ui->stackedWidget->addWidget(pageTVSeries);
}

PageAccueil::~PageAccueil()
{
    delete ui;
}
