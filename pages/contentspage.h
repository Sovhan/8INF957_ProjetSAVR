#ifndef CONTENTSPAGE
#define CONTENTSPAGE

#include <QWidget>

class ContentsPage : public QWidget
{
    Q_OBJECT

public:
    explicit ContentsPage(QWidget *parent = 0): QWidget(parent){}

private slots:
    virtual void loadContentPage() = 0;
    virtual void loadNewContentPage() = 0;

};

#endif // CONTENTSPAGE

