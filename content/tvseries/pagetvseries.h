#ifndef PAGETVSERIES_H
#define PAGETVSERIES_H

#include "pages/contentspage.h"
#include <QWidget>

namespace Ui {
class PageTVSeries;
}

class PageTVSeries : public ContentsPage
{
    Q_OBJECT

public:
    explicit PageTVSeries(QWidget *parent = 0);
    ~PageTVSeries();
    void loadButtons();
    void deleteButtons();

private slots:
    void loadContentPage();
    void loadNewContentPage();

private:
    Ui::PageTVSeries *ui;
    QWidget* parent;

};

#endif // PAGETVSERIES_H
