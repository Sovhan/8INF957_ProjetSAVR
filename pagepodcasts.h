#ifndef PAGEPODCASTS_H
#define PAGEPODCASTS_H

#include "pages/contentspage.h"
#include <QWidget>

namespace Ui {
class PagePodcasts;
}

class PagePodcasts : public ContentsPage
{
    Q_OBJECT

public:
    explicit PagePodcasts(QWidget *parent = 0);
    ~PagePodcasts();

private slots:
    void loadContentPage();
    void loadNewContentPage();

private:
    Ui::PagePodcasts *ui;
    QWidget* parent;

};

#endif // PAGEPODCASTS_H
