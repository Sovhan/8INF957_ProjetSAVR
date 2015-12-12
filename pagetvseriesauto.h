#ifndef PAGETVSERIESAUTO_H
#define PAGETVSERIESAUTO_H

#include <QWidget>

namespace Ui {
class PageTVSeriesAuto;
}

class PageTVSeriesAuto : public QWidget
{
    Q_OBJECT

public:
    explicit PageTVSeriesAuto(QWidget *parent = 0);
    ~PageTVSeriesAuto();

private:
    Ui::PageTVSeriesAuto *ui;
};

#endif // PAGETVSERIESAUTO_H
