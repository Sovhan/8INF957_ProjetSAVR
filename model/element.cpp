#include "element.h"

void Element::setSeen() { this->seen = true; }

void Element::setUnseen() { this->seen = false; }

bool Element::isSeen() const { return this->seen; }

Element::Element() {}

Element::Element(const QString title, const quint32 number, const QString synopsis) : title(title), number(number), synopsis(synopsis), seen(false) {}

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

QString Element::getTitle() const { return this->title; }
quint32 Element::getNumber() const { return this->number; }
QString Element::getSynopsis() const { return this->synopsis; }
