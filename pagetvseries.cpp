#include "pagetvseries.h"
#include "ui_pagetvseries.h"
#include "pageonetvserie.h"
#include <QStackedWidget>

PageTVSeries::PageTVSeries(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageTVSeries)
{
    ui->setupUi(this);

    // Connection for series with new elements
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(loadNewSeriePage()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(loadNewSeriePage()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(loadNewSeriePage()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(loadNewSeriePage()));

    // Connection for regular series
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(loadSeriePage()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(loadSeriePage()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(loadSeriePage()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(loadSeriePage()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(loadSeriePage()));
    connect(ui->pushButton_10, SIGNAL(clicked()), this, SLOT(loadSeriePage()));
    connect(ui->pushButton_11, SIGNAL(clicked()), this, SLOT(loadSeriePage()));
    connect(ui->pushButton_12, SIGNAL(clicked()), this, SLOT(loadSeriePage()));
}

PageTVSeries::~PageTVSeries()
{
    delete ui;
}

// Load the page of a serie with no new element
// Can be called by any push button connected with it
void PageTVSeries::loadSeriePage()
{
    QWidget *buttonWidget = qobject_cast<QWidget*>(sender());
       if(buttonWidget != NULL)
       {
           int indexOfButton = ui->gridLayoutOthers->indexOf(buttonWidget);
           int rowOfButton, columnOfButton, rowSpanOfButton, columnSpanOfButton;

           ui->gridLayoutOthers->getItemPosition(indexOfButton,
                                           &rowOfButton, &columnOfButton, &rowSpanOfButton, &columnSpanOfButton);

            QLayoutItem *item = ui->gridLayoutOthers->itemAtPosition(rowOfButton, columnOfButton);
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

// Load the page of a serie with new elements
// Can be called by any push button connected with it
void PageTVSeries::loadNewSeriePage()
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
