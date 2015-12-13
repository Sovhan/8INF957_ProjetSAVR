#include "pageonebook.h"
#include "ui_pageonebook.h"

PageOneBook::PageOneBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageOneBook)
{
    ui->setupUi(this);
}

PageOneBook::~PageOneBook()
{
    delete ui;
}
