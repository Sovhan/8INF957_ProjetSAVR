#include "searchresults.h"
#include "ui_searchresults.h"

#include "content/tvseries/pageonetvserie.h"
#include "controllers/seriescontroller.h"
#include <QStackedWidget>

SearchResults::SearchResults(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchResults)
{
    ui->setupUi(this);

    // Connection to the slot for any episode in the list
    connect(ui->resultsList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(loadSeriePage(QListWidgetItem*)));
}

SearchResults::~SearchResults()
{
    delete ui;
}

QListWidget* SearchResults::getResultsList(){
    return ui->resultsList;
}

void SearchResults::loadSeriePage(QListWidgetItem* serie){
    if(serie){
        SeriesController* controller = SeriesController::getInstance();
        controller->setCurSerie(serie->data(Qt::UserRole).value<quint32>());
        QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
        QWidget* TVSerie = new PageOneTVSerie(parentStack);
        parentStack->addWidget(TVSerie);
        parentStack->setCurrentIndex(parentStack->count()-1);
    }
}
