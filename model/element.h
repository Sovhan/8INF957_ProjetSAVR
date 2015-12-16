#ifndef ELEMENT_H
#define ELEMENT_H

#include <QString>
#include <QDataStream>

class Element
{
protected:
    QString title;
    quint32 number;
    QString synopsis;
    bool seen;

public:
    void setSeen();
    void setUnseen();
    bool isSeen() const;
    QString getTitle() const;
    quint32 getNumber() const;
    QString getSynopsis() const;
    friend QDataStream &operator<<(QDataStream &qds, const Element &el);
    friend QDataStream &operator>>(QDataStream &qds, Element &el);
    Element();
    Element(const QString title, const quint32 number, const QString synopsis);

};

#endif // ELEMENT_H
