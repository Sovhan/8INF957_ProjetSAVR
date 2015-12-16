#ifndef SERIE_H
#define SERIE_H

#include "content.h"

class Serie : public Content
{
protected:
    QString network;
    quint32 duration;

public:
    Serie(const quint32 id, const QString name, const QString synopsis, const QString network, const quint32 duration = 0);
    Serie(const Serie &obj);
    Serie();
    friend QDataStream &operator>>(QDataStream &qds, Serie &ser);
    friend QDataStream &operator<<(QDataStream &qds, const Serie &ser);
    void setDuration(const quint32 duration);
};

#endif // SERIE_H
