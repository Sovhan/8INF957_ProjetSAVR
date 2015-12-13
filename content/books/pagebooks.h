#ifndef PAGEBOOKS_H
#define PAGEBOOKS_H

#include "pages/contentspage.h"
#include <QWidget>

namespace Ui {
class PageBooks;
}

class PageBooks : public ContentsPage
{
    Q_OBJECT

public:
    explicit PageBooks(QWidget *parent = 0);
    ~PageBooks();

private slots:
    void loadContentPage();
    void loadNewContentPage();

private:
    Ui::PageBooks *ui;
    QWidget* parent;

};

#endif // PAGEBOOKS_H
