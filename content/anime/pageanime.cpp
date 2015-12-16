#include "pageanime.h"
#include "ui_pageanime.h"

#include "pageoneanime.h"
#include <QStackedWidget>
#include <QPushButton>

PageAnime::PageAnime(QWidget *parent) :
    ContentsPage(parent),
    ui(new Ui::PageAnime)
{
    ui->setupUi(this);

    // Connection for series with new elements
    /*
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(loadNewContentPage()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(loadNewContentPage()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(loadNewContentPage()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(loadNewContentPage()));
    */

    // Connection for regular series
    /*
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(loadContentPage()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(loadContentPage()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(loadContentPage()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(loadContentPage()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(loadContentPage()));
    connect(ui->pushButton_10, SIGNAL(clicked()), this, SLOT(loadContentPage()));
    connect(ui->pushButton_11, SIGNAL(clicked()), this, SLOT(loadContentPage()));
    connect(ui->pushButton_12, SIGNAL(clicked()), this, SLOT(loadContentPage()));
    */
}

PageAnime::~PageAnime()
{
    delete ui;
}

void PageAnime::loadContentPage(){
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
            QWidget* Anime = new PageOneAnime(parentStack);
            parentStack->addWidget(Anime);
            parentStack->setCurrentIndex(parentStack->count()-1);
        }
   }
}

void PageAnime::loadNewContentPage(){
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
            QWidget* Anime = new PageOneAnime(parentStack);
            parentStack->addWidget(Anime);
            parentStack->setCurrentIndex(parentStack->count()-1);
        }
   }
}
