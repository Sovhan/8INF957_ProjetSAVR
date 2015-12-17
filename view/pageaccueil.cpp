#include "pageaccueil.h"
#include "ui_pageaccueil.h"
#include "content/anime/pageanime.h"
#include "pageaccueilcontent.h"
#include "content/books/pagebooks.h"
#include "content/podcasts/pagepodcasts.h"
#include "content/tvseries/pagetvseries.h"
#include "controllers/seriescontroller.h"
#include "searchresults.h"
#include <QHash>
#include <QInputDialog>
#include <QWidget>
#include <QListWidget>
#include <QtDebug>

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
    //QWidget* pageTVSeriesAuto = new PageTVSeriesAuto(stackOfWidgets);

    ui->stackedWidget->addWidget(pageAccueilContent);
    ui->stackedWidget->addWidget(pageAnime);
    ui->stackedWidget->addWidget(pageBooks);
    ui->stackedWidget->addWidget(pagePodcasts);
    ui->stackedWidget->addWidget(pageTVSeries);
    //ui->stackedWidget->addWidget(pageTVSeriesAuto);

    connect(SeriesController::getInstance(),SIGNAL(searchComplete()),this,SLOT(on_searchComplete()));
}

PageAccueil::~PageAccueil()
{
    delete ui;
}

void PageAccueil::on_HomeBtn_pressed()
{
    if(ui->stackedWidget->count()>5){
        int i;
        for(i=5;i<ui->stackedWidget->count();i++){
            ui->stackedWidget->removeWidget(ui->stackedWidget->widget(i));
        }
    }
    ((PageTVSeries*)ui->stackedWidget->widget(4))->deleteButtons();
    ui->stackedWidget->setCurrentIndex(0);
}

void PageAccueil::on_pushButton_clicked()
{
    QInputDialog* dialog = new QInputDialog();
    dialog->setInputMode(QInputDialog::TextInput);
    connect(dialog, SIGNAL(textValueSelected(QString)),
            SeriesController::getInstance(), SLOT(startSearchSeries(QString)));
    dialog->show();
}

void PageAccueil::on_searchComplete(){
    QWidget* searchResults = new SearchResults();
    QListWidget* resultsList = ((SearchResults*)searchResults)->getResultsList();
    SeriesController* controler = SeriesController::getInstance();
    qDebug() << controler->getCurSerieList().size();
    QVariant tmpV;
    for(QHash<quint32,Serie>::iterator it = controler->getCurSerieList().begin(); it != controler->getCurSerieList().end(); it++){
        QListWidgetItem *tmpI = new QListWidgetItem();
        tmpI->setText((*it).getTitle());
        tmpV.setValue((*it).getId());
        tmpI->setData(Qt::UserRole, tmpV);
        resultsList->addItem(tmpI);
    }

    // Clean of all the other widgets, except the categories
    if(ui->stackedWidget->count()>5){
        int i;
        for(i=5;i<ui->stackedWidget->count();i++){
            ui->stackedWidget->removeWidget(ui->stackedWidget->widget(i));
        }
    }

    ui->stackedWidget->addWidget(searchResults);
    searchResults->update();
    ui->stackedWidget->setCurrentWidget(searchResults);
}