#include "pageonetvserie.h"
#include "ui_pageonetvserie.h"

PageOneTVSerie::PageOneTVSerie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageOneTVSerie)
{
    ui->setupUi(this);
}

PageOneTVSerie::~PageOneTVSerie()
{
    delete ui;
}
