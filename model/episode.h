#ifndef EPISODE_H
#define EPISODE_H

#include "element.h"

class Episode : public Element
{
protected:
    quint32 season;
    quint32 duration;
public:
    Episode();
    Episode(const QString title, const quint32 number, const QString synopsis, const quint32 season, const quint32 duration = 0);
    friend QDataStream &operator<<(QDataStream &qds, const Episode &ep);
    friend QDataStream &operator>>(QDataStream &qds, Episode &ep);
    friend bool episodeBefore(const Episode &ep1, const Episode &ep2);
};

#endif // EPISODE_H
