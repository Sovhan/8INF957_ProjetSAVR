#include "content.h"

Content::Content(QObject *parent) : QObject(parent)
{

}

Content::Content(quint32 id, QString name, QString synopsis, QObject *parent) : QObject(parent), id(id), synopsis(synopsis), title(name)
{

}

