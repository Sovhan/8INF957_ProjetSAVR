#ifndef PAGEONEANIME_H
#define PAGEONEANIME_H

#include "pages/onecontentpage.h"
#include <QWidget>
#include <QListWidget>

namespace Ui {
class PageOneAnime;
}

class PageOneAnime : public OneContentPage
{
    Q_OBJECT

public:
    explicit PageOneAnime(QWidget *parent = 0);
    ~PageOneAnime();
    void setElementsInfo();
    void loadElementsInfo(quint32 seriesId);

private slots:
    void loadElementPage(QListWidgetItem *episode);

private:
    Ui::PageOneAnime *ui;
    QWidget* parent;
};

#endif // PAGEONEANIME_H
