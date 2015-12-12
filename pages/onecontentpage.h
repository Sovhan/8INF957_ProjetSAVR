#ifndef ONECONTENTPAGE
#define ONECONTENTPAGE

#include <QWidget>
#include <QListWidgetItem>

class OneContentPage : public QWidget
{
    Q_OBJECT

public:
    explicit OneContentPage(QWidget *parent = 0): QWidget(parent){}

private slots:
    virtual void loadElementPage(QListWidgetItem *element) = 0;

};


#endif // ONECONTENTPAGE
