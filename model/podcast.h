#ifndef PODCAST_H
#define PODCAST_H

#include "content.h"

class Podcast : public Content
{
protected:
    QString author;

public:
    Podcast();
};

#endif // PODCAST_H
