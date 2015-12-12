#include "pagepodcasts.h"
#include "ui_pagepodcasts.h"

PagePodcasts::PagePodcasts(QWidget *parent) :
    ContentsPage(parent),
    ui(new Ui::PagePodcasts)
{
    ui->setupUi(this);
}

PagePodcasts::~PagePodcasts()
{
    delete ui;
}

void PagePodcasts::loadContentPage(){

}

void PagePodcasts::loadNewContentPage(){

}
