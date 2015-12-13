#ifndef CONTENT_H
#define CONTENT_H

#include "element.h"
#include <QList>
#include <QString>

class Content
{
protected:
    quint32 id;
    QString title;
    QList<Element> list;
    QString synopsis;

public:
    Content(quint32 id, QString title, QString synopsis);
    Content(const Content &obj);
    Content();
    quint32 getId() const;
    QString getTitle() const;
    QList<Element> getList() const;
    QString getSynopsis() const;


};

#endif // CONTENT_H
