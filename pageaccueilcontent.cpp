#include "pageaccueilcontent.h"
#include "ui_pageaccueilcontent.h"
#include "content/anime/pageanime.h"
#include "pageaccueilcontent.h"
#include "content/books/pagebooks.h"
#include "content/podcasts/pagepodcasts.h"
#include "content/tvseries/pagetvseries.h"
#include "pagetvseriesauto.h"
#include <QStackedWidget>

PageAccueilContent::PageAccueilContent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageAccueilContent)
{
    ui->setupUi(this);
}

PageAccueilContent::~PageAccueilContent()
{
    delete ui;
}

void PageAccueilContent::on_Series_clicked()
{
    int i;
    QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
    for(i=0;i<parentStack->count();i++){
        if (dynamic_cast<PageTVSeriesAuto*>(parentStack->widget(i))) {
            ((PageTVSeriesAuto*)(parentStack->widget(i)))->loadButtons();
            parentStack->setCurrentIndex(i);
        }
    }
}

void PageAccueilContent::on_Anime_clicked()
{
    int i;
    QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
    for(i=0;i<parentStack->count();i++){
        if (dynamic_cast<PageAnime*>(parentStack->widget(i))) {
            (parentStack->setCurrentIndex(i));
        }
    }
}



void PageAccueilContent::on_Podcasts_clicked()
{
    int i;
    QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
    for(i=0;i<parentStack->count();i++){
        if (dynamic_cast<PagePodcasts*>(parentStack->widget(i))) {
            (parentStack->setCurrentIndex(i));
        }
    }
}

void PageAccueilContent::on_Books_clicked()
{
    int i;
    QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
    for(i=0;i<parentStack->count();i++){
        if (dynamic_cast<PageBooks*>(parentStack->widget(i))) {
            (parentStack->setCurrentIndex(i));
        }
    }
}
