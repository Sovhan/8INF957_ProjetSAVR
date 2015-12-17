#ifndef CONTENT_H
#define CONTENT_H

#include "element.h"
#include <QList>
#include <QString>
#include <QDataStream>

class Content
{
protected:
    quint32 id;
    QString title;
    QList<Element*> list;
    QString synopsis;
    bool toSave;
    QString posterUrl;

public:
    Content(const quint32 id, const QString title, const QString synopsis);
    Content(const Content &obj);
    Content();
    quint32 getId() const;
    QString getTitle() const;
    QList<Element*> getList() const;
    QString getSynopsis() const;
    void setSaved();
    void setUnsaved();
    bool isSaved() const;
    friend QDataStream &operator<<(QDataStream &qds, const Content &ct);
    friend QDataStream &operator>>(QDataStream &qds, Content &ct);
    void addElementToList(Element *el);

};

#endif // CONTENT_H
