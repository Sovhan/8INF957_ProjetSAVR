#include "pageoneepisode.h"
#include "ui_pageoneepisode.h"

PageOneEpisode::PageOneEpisode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageOneEpisode)
{
    ui->setupUi(this);
}

PageOneEpisode::~PageOneEpisode()
{
    delete ui;
}
