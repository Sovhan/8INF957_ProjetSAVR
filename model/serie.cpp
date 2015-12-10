#include "serie.h"

Serie::Serie(QObject *parent) : Content(parent) {}

Serie::Serie(quint32 id, QString name, QString synopsis, QObject* parent) : Content(id, name, synopsis, parent)
{}

