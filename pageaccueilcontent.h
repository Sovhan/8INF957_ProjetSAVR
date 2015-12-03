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

private:
    Ui::PageAccueilContent *ui;
};

#endif // PAGEACCUEILCONTENT_H
