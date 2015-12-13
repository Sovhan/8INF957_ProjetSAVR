#include "pageoneepisodeanime.h"
#include "ui_pageoneepisodeanime.h"

PageOneEpisodeAnime::PageOneEpisodeAnime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageOneEpisodeAnime)
{
    ui->setupUi(this);
}

PageOneEpisodeAnime::~PageOneEpisodeAnime()
{
    delete ui;
}
