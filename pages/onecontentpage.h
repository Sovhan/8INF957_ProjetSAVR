#ifndef ONECONTENTPAGE
#define ONECONTENTPAGE

#include <QWidget>
#include <QListWidgetItem>
#include <QEventLoop>

class OneContentPage : public QWidget
{
    Q_OBJECT

public:
    explicit OneContentPage(QWidget *parent = 0): QWidget(parent){}
    virtual void loadElementsInfo(quint32 seriesId) = 0;
    virtual void setElementsInfo() = 0;


private slots:
    virtual void loadElementPage(QListWidgetItem *element) = 0;



};


#endif // ONECONTENTPAGE
