#include "pageanime.h"
#include "ui_pageanime.h"

PageAnime::PageAnime(QWidget *parent) :
    ContentsPage(parent),
    ui(new Ui::PageAnime)
{
    ui->setupUi(this);
}

PageAnime::~PageAnime()
{
    delete ui;
}

void PageAnime::loadContentPage(){

}

void PageAnime::loadNewContentPage(){

}
