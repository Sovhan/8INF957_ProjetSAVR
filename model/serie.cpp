#include "serie.h"

Serie::Serie(const quint32 id, const QString name, const QString synopsis) : Content(id, name, synopsis)
{}

Serie::Serie(const Serie &obj) : Content(obj), studio(obj.studio) {}

Serie::Serie() {}

QDataStream &operator>>(QDataStream &qds, Serie &ser)
{
    qds >> (Content&) ser;
    qds >> ser.studio;

    return qds;
}

QDataStream &operator<<(QDataStream &qds, const Serie &ser)
{
    qds << (Content) ser;
    qds << ser.studio;

    return qds;
}
