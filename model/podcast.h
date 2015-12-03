#ifndef PODCAST_H
#define PODCAST_H

#include "content.h"

class Podcast : public Content
{
private:
    QString author;

public:
    Podcast();
};

#endif // PODCAST_H
