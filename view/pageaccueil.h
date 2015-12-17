#ifndef PAGEACCUEIL_H
#define PAGEACCUEIL_H

#include <QWidget>

namespace Ui {
class PageAccueil;
}

class PageAccueil : public QWidget
{
    Q_OBJECT

    public:
        explicit PageAccueil(QWidget *parent = 0);
        ~PageAccueil();

private slots:
    void on_HomeBtn_pressed();
    void on_pushButton_clicked();
    void on_searchComplete();

private:
        Ui::PageAccueil *ui;
        QWidget* parent;

};

#endif // PAGEACCUEIL_H
