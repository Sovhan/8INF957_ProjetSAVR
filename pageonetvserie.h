#ifndef PAGEONETVSERIE_H
#define PAGEONETVSERIE_H

#include <QWidget>
#include <QListWidget>


namespace Ui {
class PageOneTVSerie;
}

class PageOneTVSerie : public QWidget
{
    Q_OBJECT

public:
    explicit PageOneTVSerie(QWidget *parent = 0);
    ~PageOneTVSerie();

private slots:
    void loadEpisodePage(QListWidgetItem *episode);

private:
    Ui::PageOneTVSerie *ui;
    QWidget* parent;

};

#endif // PAGEONETVSERIE_H
