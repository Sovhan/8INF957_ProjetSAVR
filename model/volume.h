#ifndef VOLUME_H
#define VOLUME_H

#include "element.h"

class Volume : public Element
{
private:
    quint32 nbPages;

public:
    Volume();
};

#endif // VOLUME_H
