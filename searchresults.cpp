#include "searchresults.h"
#include "ui_searchresults.h"

SearchResults::SearchResults(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchResults)
{
    ui->setupUi(this);
}

SearchResults::~SearchResults()
{
    delete ui;
}

QListWidget* SearchResults::getResultsList(){
    return ui->resultsList;
}
