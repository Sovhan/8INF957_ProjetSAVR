#ifndef PAGEONEEPISODE_H
#define PAGEONEEPISODE_H

#include <QWidget>

namespace Ui {
class PageOneEpisode;
}

class PageOneEpisode : public QWidget
{
    Q_OBJECT

public:
    explicit PageOneEpisode(QWidget *parent = 0);
    ~PageOneEpisode();

private:
    Ui::PageOneEpisode *ui;
};

#endif // PAGEONEEPISODE_H
