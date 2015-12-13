#ifndef PAGEONEBOOK_H
#define PAGEONEBOOK_H

#include <QWidget>

namespace Ui {
class PageOneBook;
}

class PageOneBook : public QWidget
{
    Q_OBJECT

public:
    explicit PageOneBook(QWidget *parent = 0);
    ~PageOneBook();

private:
    Ui::PageOneBook *ui;
};

#endif // PAGEONEBOOK_H
