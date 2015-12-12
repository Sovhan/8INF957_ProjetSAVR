#ifndef SERIE_H
#define SERIE_H

#include "content.h"

class Serie : public Content
{
protected:
    QString studio;

public:
    Serie(quint32 id, QString name, QString synopsis);
    Serie(const Serie &obj);
};

#endif // SERIE_H
