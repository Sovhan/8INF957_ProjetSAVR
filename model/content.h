#ifndef CONTENT_H
#define CONTENT_H

#include "element.h"
#include <QList>
#include <QString>

class Content
{
protected:
    QString title;
    QList<Element> list;
    quint32 id;
    QString synopsis;

public:
    Content(quint32 id, QString name, QString synopsis);
    Content(const Content &obj);
    Content();


};

#endif // CONTENT_H
