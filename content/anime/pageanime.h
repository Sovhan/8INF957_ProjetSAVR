#ifndef PAGEANIME_H
#define PAGEANIME_H

#include "pages/contentspage.h"
#include <QWidget>

namespace Ui {
class PageAnime;
}

class PageAnime : public ContentsPage
{
    Q_OBJECT

public:
    explicit PageAnime(QWidget *parent = 0);
    ~PageAnime();

private slots:
    void loadContentPage();
    void loadNewContentPage();

private:
    Ui::PageAnime *ui;
    QWidget* parent;
};

#endif // PAGEANIME_H
