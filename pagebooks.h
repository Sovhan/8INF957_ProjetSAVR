#ifndef PAGEBOOKS_H
#define PAGEBOOKS_H

#include <QWidget>

namespace Ui {
class PageBooks;
}

class PageBooks : public QWidget
{
    Q_OBJECT

public:
    explicit PageBooks(QWidget *parent = 0);
    ~PageBooks();

private:
    Ui::PageBooks *ui;
};

#endif // PAGEBOOKS_H
