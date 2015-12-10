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
};

#endif // EPISODE_H
