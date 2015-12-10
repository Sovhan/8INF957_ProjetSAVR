#ifndef PAGEONETVSERIE_H
#define PAGEONETVSERIE_H

#include <QWidget>

namespace Ui {
class PageOneTVSerie;
}

class PageOneTVSerie : public QWidget
{
    Q_OBJECT

public:
    explicit PageOneTVSerie(QWidget *parent = 0);
    ~PageOneTVSerie();

private:
    Ui::PageOneTVSerie *ui;
    QWidget* parent;

};

#endif // PAGEONETVSERIE_H
