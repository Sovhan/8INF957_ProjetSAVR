#ifndef PAGEANIME_H
#define PAGEANIME_H

#include <QWidget>

namespace Ui {
class PageAnime;
}

class PageAnime : public QWidget
{
    Q_OBJECT

public:
    explicit PageAnime(QWidget *parent = 0);
    ~PageAnime();

private:
    Ui::PageAnime *ui;
};

#endif // PAGEANIME_H
