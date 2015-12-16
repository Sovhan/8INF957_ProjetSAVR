#include "serie.h"

Serie::Serie(const quint32 id, const QString name, const QString synopsis, const QString network, const quint32 duration) : Content(id, name, synopsis), network(network), duration(duration)
{}

Serie::Serie(const Serie &obj) : Content(obj), network(obj.network), duration(obj.duration) {}

Serie::Serie() {}

void Serie::setDuration(const quint32 duration) { this->duration = duration; }

QDataStream &operator>>(QDataStream &qds, Serie &ser)
{
    qds >> (Content&) ser;
    qds >> ser.network;
    qds >> ser.duration;

    return qds;
}

QDataStream &operator<<(QDataStream &qds, const Serie &ser)
{
    qds << (Content) ser;
    qds << ser.network;
    qds << ser.duration;

    return qds;
}
