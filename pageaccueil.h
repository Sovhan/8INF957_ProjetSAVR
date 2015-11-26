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
    void on_Series_released();

private:
        Ui::PageAccueil *ui;
};

#endif // PAGEACCUEIL_H
