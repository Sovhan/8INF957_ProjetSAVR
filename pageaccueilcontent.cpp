#include "pageaccueilcontent.h"
#include "ui_pageaccueilcontent.h"

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
