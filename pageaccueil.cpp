#include "pageaccueil.h"
#include "ui_pageaccueil.h"
#include "pageanime.h"

PageAccueil::PageAccueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageAccueil)
{
    ui->setupUi(this);
    ui->stackedWidget->addWidget(new PageAnime::pageAnime);
}

PageAccueil::~PageAccueil()
{
    delete ui;
}

void PageAccueil::on_Series_released()
{


}
