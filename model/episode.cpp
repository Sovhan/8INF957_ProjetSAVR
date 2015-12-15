#include "episode.h"

Episode::Episode()
{

}

QDataStream &operator<<(QDataStream &qds, const Episode &ep)
{
    qds << (Element) ep;
    qds << ep.season;
    qds << ep.duration;

    return qds;
}

QDataStream &operator>>(QDataStream &qds, Episode &ep)
{
    qds >> (Element&) ep;
    qds >> ep.season;
    qds >> ep.duration;

    return qds;
}
