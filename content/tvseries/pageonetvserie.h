#ifndef PAGEONETVSERIE_H
#define PAGEONETVSERIE_H

#include "pages/onecontentpage.h"
#include <QWidget>
#include <QListWidget>


namespace Ui {
class PageOneTVSerie;
}

class PageOneTVSerie : public OneContentPage
{
    Q_OBJECT

public:
    explicit PageOneTVSerie(QWidget *parent = 0);
    ~PageOneTVSerie();

private slots:
    void loadElementPage(QListWidgetItem *episode);

private:
    Ui::PageOneTVSerie *ui;
    QWidget* parent;

};

#endif // PAGEONETVSERIE_H
