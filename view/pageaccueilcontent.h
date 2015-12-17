#ifndef PAGEACCUEILCONTENT_H
#define PAGEACCUEILCONTENT_H

#include <QWidget>

namespace Ui {
class PageAccueilContent;
}

class PageAccueilContent : public QWidget
{
    Q_OBJECT

public:
    explicit PageAccueilContent(QWidget *parent = 0);
    ~PageAccueilContent();

private slots:
    void on_Series_clicked();

    void on_Anime_clicked();

    void on_Podcasts_clicked();

    void on_Books_clicked();

private:
    Ui::PageAccueilContent *ui;
    QWidget* parent;

};

#endif // PAGEACCUEILCONTENT_H
