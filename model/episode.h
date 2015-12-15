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
    friend QDataStream &operator<<(QDataStream &qds, const Episode &ep);
    friend QDataStream &operator>>(QDataStream &qds, Episode &ep);
};

#endif // EPISODE_H
