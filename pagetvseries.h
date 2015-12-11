#ifndef PAGETVSERIES_H
#define PAGETVSERIES_H

#include <QWidget>

namespace Ui {
class PageTVSeries;
}

class PageTVSeries : public QWidget
{
    Q_OBJECT

public:
    explicit PageTVSeries(QWidget *parent = 0);
    ~PageTVSeries();

private slots:
    void loadSeriePage();
    void loadNewSeriePage();

private:
    Ui::PageTVSeries *ui;
    QWidget* parent;

};

#endif // PAGETVSERIES_H
