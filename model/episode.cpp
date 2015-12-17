#include "episode.h"

Episode::Episode()
{

}

Episode::Episode(const QString title, const quint32 number, const QString synopsis, const quint32 season) : Element(title, number, synopsis), season(season)
{

}

quint32 Episode::getSeason() const { return this->season; }

bool episodeBefore(const Episode &ep1, const Episode &ep2)
{
    if(ep1.season < ep2.season) {
        return true;
    } else if (ep1.season > ep2.season) {
        return false;
    } else if (ep1.number < ep2.number) {
        return true;
    } else {
        return false;
    }
}

QDataStream &operator<<(QDataStream &qds, const Episode &ep)
{
    qds << (Element&) ep;
    qds << ep.season;

    return qds;
}

QDataStream &operator>>(QDataStream &qds, Episode &ep)
{
    qds >> (Element&) ep;
    qds >> ep.season;

    return qds;
}
