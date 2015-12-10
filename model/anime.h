#ifndef ANIME_H
#define ANIME_H

#include "content.h"

class Anime : public Content
{
protected:
    QString studio;

public:
    Anime();
};

#endif // ANIME_H
