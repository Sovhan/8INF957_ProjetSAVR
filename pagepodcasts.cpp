#include "pagepodcasts.h"
#include "ui_pagepodcasts.h"

PagePodcasts::PagePodcasts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PagePodcasts)
{
    ui->setupUi(this);
}

PagePodcasts::~PagePodcasts()
{
    delete ui;
}
