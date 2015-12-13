#ifndef PAGEONEEPISODEANIME_H
#define PAGEONEEPISODEANIME_H

#include <QWidget>

namespace Ui {
class PageOneEpisodeAnime;
}

class PageOneEpisodeAnime : public QWidget
{
    Q_OBJECT

public:
    explicit PageOneEpisodeAnime(QWidget *parent = 0);
    ~PageOneEpisodeAnime();

private:
    Ui::PageOneEpisodeAnime *ui;
};

#endif // PAGEONEEPISODEANIME_H
