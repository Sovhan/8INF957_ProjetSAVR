#include "pageanime.h"
#include "ui_pageanime.h"

PageAnime::PageAnime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageAnime)
{
    ui->setupUi(this);
}

PageAnime::~PageAnime()
{
    delete ui;
}

