#include "pagebooks.h"
#include "ui_pagebooks.h"

PageBooks::PageBooks(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageBooks)
{
    ui->setupUi(this);
}

PageBooks::~PageBooks()
{
    delete ui;
}
