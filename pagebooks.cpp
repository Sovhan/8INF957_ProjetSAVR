#include "pagebooks.h"
#include "ui_pagebooks.h"

PageBooks::PageBooks(QWidget *parent) :
    ContentsPage(parent),
    ui(new Ui::PageBooks)
{
    ui->setupUi(this);
}

PageBooks::~PageBooks()
{
    delete ui;
}

void PageBooks::loadContentPage(){

}

void PageBooks::loadNewContentPage(){

}
