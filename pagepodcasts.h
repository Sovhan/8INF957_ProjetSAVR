#ifndef PAGEPODCASTS_H
#define PAGEPODCASTS_H

#include <QWidget>

namespace Ui {
class PagePodcasts;
}

class PagePodcasts : public QWidget
{
    Q_OBJECT

public:
    explicit PagePodcasts(QWidget *parent = 0);
    ~PagePodcasts();

private:
    Ui::PagePodcasts *ui;
};

#endif // PAGEPODCASTS_H
