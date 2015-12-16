#include "pagetvseries.h"
#include "ui_pagetvseries.h"
#include "pageonetvserie.h"
#include "controllers/seriescontroller.h"
#include <QStackedWidget>
#include <QPushButton>
#include "view/seriebutton.h"

PageTVSeries::PageTVSeries(QWidget *parent) :
    ContentsPage(parent),
    ui(new Ui::PageTVSeries)
{
    ui->setupUi(this);
}

PageTVSeries::~PageTVSeries()
{
    delete ui;
}

// Load the page of a serie with no new element
// Can be called by any push button connected with it
void PageTVSeries::loadContentPage()
{
    QWidget *buttonWidget = qobject_cast<QWidget*>(sender());
       if(buttonWidget != NULL)
       {
           int indexOfButton = ui->gridLayoutOthers->indexOf(buttonWidget);
           int rowOfButton, columnOfButton, rowSpanOfButton, columnSpanOfButton;

           ui->gridLayoutOthers->getItemPosition(indexOfButton,
                                           &rowOfButton, &columnOfButton, &rowSpanOfButton, &columnSpanOfButton);

            QLayoutItem *item = ui->gridLayoutOthers->itemAtPosition(rowOfButton, columnOfButton);
            SerieButton *clickedButton = (SerieButton*) item->widget();
            if (clickedButton)
            {
                SeriesController::getInstance()->setCurSerie(clickedButton->getSeriesId());
                QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
                qDebug() << "parent stack : " << parentStack;
                QWidget* TVSerie = new PageOneTVSerie(parentStack);
                qDebug() << "serie page created";
                parentStack->addWidget(TVSerie);
                qDebug() << "serie page added to stack widget";
                parentStack->setCurrentIndex(parentStack->count()-1);
                qDebug() << "page index set";
            }
       }
}

// Load the page of a serie with new elements
// Can be called by any push button connected with it
void PageTVSeries::loadNewContentPage()
{
    QWidget *buttonWidget = qobject_cast<QWidget*>(sender());
       if(buttonWidget != NULL)
       {
           int indexOfButton = ui->gridLayoutNews->indexOf(buttonWidget);
           int rowOfButton, columnOfButton, rowSpanOfButton, columnSpanOfButton;

           ui->gridLayoutNews->getItemPosition(indexOfButton,
                                           &rowOfButton, &columnOfButton, &rowSpanOfButton, &columnSpanOfButton);

            QLayoutItem *item = ui->gridLayoutNews->itemAtPosition(rowOfButton, columnOfButton);
            QPushButton *clickedButton = qobject_cast<QPushButton*>(item->widget());
            if (clickedButton)
            {
                QStackedWidget* parentStack = (QStackedWidget*)parentWidget();
                QWidget* TVSerie = new PageOneTVSerie(parentStack);
                parentStack->addWidget(TVSerie);
                parentStack->setCurrentIndex(parentStack->count()-1);
            }
       }
}

void PageTVSeries::loadButtons(){

    int i=0;
    SeriesController* controler = SeriesController::getInstance();
    QPushButton* button;
    if(!controler->getSavedSerieList().isEmpty()){
        for(QHash<quint32,Serie>::iterator it = controler->getSavedSerieList().begin();
            it != controler->getSavedSerieList().end(); it++){
            button = new SerieButton((*it).getTitle(), (*it).getId(), this);
            button->setFixedHeight(140);
            button->setFixedWidth(186);
            button->setStyleSheet("background-color: #233dbc;");
            button->update();
            ui->gridLayoutOthers->addWidget(button,i/4,i%4,Qt::AlignTop | Qt::AlignLeft);
            connect(button, SIGNAL(clicked()), this, SLOT(loadContentPage()));
            i++;
        }
    }
    qDebug() << "(Page TV Series Auto : Load Buttons) Size of saved series list : " <<controler->getSavedSerieList().count();
}

void PageTVSeries::deleteButtons(){

    int col, row;
    QGridLayout* gridNews = ui->gridLayoutNews;
    QGridLayout* gridOthers = ui->gridLayoutOthers;
    for(col=0; col<gridNews->columnCount(); col++)
        for(row=0; row <gridNews->rowCount();row++){
            if(gridNews->itemAtPosition(row,col) != NULL){
                QLayoutItem* tmp = gridNews->itemAtPosition(row,col);
                delete tmp->widget();
                gridNews->removeItem(tmp);
            }
        }

    for(col=0; col<gridOthers->columnCount(); col++)
        for(row=0; row <gridOthers->rowCount();row++){
            if(gridOthers->itemAtPosition(row,col) != NULL){
                QLayoutItem* tmp = gridOthers->itemAtPosition(row,col);
                delete tmp->widget();
                gridOthers->removeItem(tmp);
            }
        }
    this->repaint();
    this->update();
}
