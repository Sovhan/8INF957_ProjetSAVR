#ifndef SERIE_H
#define SERIE_H

#include "content.h"

class Serie : public Content
{
protected:
    QString studio;

public:
    Serie(QObject* parent = 0);
    Serie(quint32 id, QString name, QString synopsis, QObject* parent = 0);
};

#endif // SERIE_H
