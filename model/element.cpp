#include "element.h"

void Element::setSeen() { this->seen = true; }

void Element::setUnseen() { this->seen = false; }

bool Element::isSeen() const { return this->seen; }

QDataStream &operator>>(QDataStream &qds, Element &el)
{
    qds >> el.title;
    qds >> el.number;
    qds >> el.synopsis;
    qds >> el.seen;

    return qds;
}

QDataStream &operator<<(QDataStream &qds, const Element &el)
{
    qds << el.title;
    qds << el.number;
    qds << el.synopsis;
    qds << el.seen;

    return qds;
}
