#ifndef CONTENT_H
#define CONTENT_H

#include <QObject>
#include "element.h"

class Content : public QObject
{
    Q_OBJECT

protected:
    QString title;
    QList<Element> list;
    quint32 id;
    QString synopsis;

public:
    explicit Content(QObject *parent = 0);
    Content(quint32 id, QString name, QString synopsis, QObject* parent = 0);

signals:

public slots:
};

#endif // CONTENT_H
