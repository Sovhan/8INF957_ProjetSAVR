#ifndef PAGETVSERIES_H
#define PAGETVSERIES_H

#include <QDialog>

namespace Ui {
class PageTVSeries;
}

class PageTVSeries : public QDialog
{
    Q_OBJECT

public:
    explicit PageTVSeries(QWidget *parent = 0);
    ~PageTVSeries();

private:
    Ui::PageTVSeries *ui;
};

#endif // PAGETVSERIES_H
