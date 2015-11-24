#include "pageaccueil.h"
#include "ui_pageaccueil.h"

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
