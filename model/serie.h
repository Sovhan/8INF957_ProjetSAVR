#ifndef SERIE_H
#define SERIE_H

#include "content.h"

class Serie : public Content
{
protected:
    QString studio;

public:
    Serie(const quint32 id, const QString name, const QString synopsis);
    Serie(const Serie &obj);
    Serie();
};

#endif // SERIE_H
