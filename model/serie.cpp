#include "serie.h"
#include "episode.h"

Serie::Serie(const quint32 id, const QString name, const QString synopsis, const QString network, const quint32 duration) : Content(id, name, synopsis), network(network), duration(duration)
{}

Serie::Serie(const Serie &obj) : Content(obj), network(obj.network), duration(obj.duration) {}

Serie::Serie() {}

void Serie::setDuration(const quint32 duration) { this->duration = duration; }

quint32 Serie::getDuration() const { return this->duration; }

QDataStream &operator>>(QDataStream &qds, Serie &ser)
{
    qds >> (Content&) ser;
    qds >> ser.network;
    qds >> ser.duration;
    int count;
    qds >> count;
    for (int i = 0; i < count; i++) {
        Episode *ep = new Episode();
        qds >> (*ep);

        ser.list.append((Element*) ep);
    }


    return qds;
}

QDataStream &operator<<(QDataStream &qds, const Serie &ser)
{
    qds << (Content&) ser;
    qds << ser.network;
    qds << ser.duration;
    int count = ser.list.count();
    qds << count;
    foreach(Element *el, ser.list) {
        Episode *ep = (Episode *) el;
        qds << *ep;
    }

    return qds;
}
