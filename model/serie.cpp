#include "serie.h"

Serie::Serie(const quint32 id, const QString name, const QString synopsis, const QString network) : Content(id, name, synopsis), network(network)
{}

Serie::Serie(const Serie &obj) : Content(obj), network(obj.network) {}

Serie::Serie() {}

QDataStream &operator>>(QDataStream &qds, Serie &ser)
{
    qds >> (Content&) ser;
    qds >> ser.network;

    return qds;
}

QDataStream &operator<<(QDataStream &qds, const Serie &ser)
{
    qds << (Content) ser;
    qds << ser.network;

    return qds;
}
