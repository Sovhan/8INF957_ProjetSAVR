#ifndef PAGEONETVSERIE_H
#define PAGEONETVSERIE_H

#include "pages/onecontentpage.h"
#include <QWidget>
#include <QListWidget>
#include <QEventLoop>


namespace Ui {
class PageOneTVSerie;
}

class PageOneTVSerie : public OneContentPage
{
    Q_OBJECT

public:
    explicit PageOneTVSerie(QWidget *parent = 0);
    ~PageOneTVSerie();
    void loadElementsInfo(quint32 seriesId);
    void setElementsInfo();

private slots:


    void loadElementPage(QListWidgetItem *episode);

    void on_trackButton_clicked();

private:
    Ui::PageOneTVSerie *ui;
    QWidget* parent;

};

#endif // PAGEONETVSERIE_H
