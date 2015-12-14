#ifndef ELEMENT_H
#define ELEMENT_H

#include <QString>

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
    friend QDataStream &operator<<(QDataStream &qds, const Element &el);

};

#endif // ELEMENT_H
