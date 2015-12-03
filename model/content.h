#ifndef CONTENT_H
#define CONTENT_H

#include <QObject>
#include "element.h"

class Content : public QObject
{
    Q_OBJECT

private:
    QString title;
    QList<Element> list;

public:
    explicit Content(QObject *parent = 0);

signals:

public slots:
};

#endif // CONTENT_H
