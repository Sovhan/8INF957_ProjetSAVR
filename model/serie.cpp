#include "serie.h"

Serie::Serie(const quint32 id, const QString name, const QString synopsis) : Content(id, name, synopsis)
{}

Serie::Serie(const Serie &obj) : Content(obj), studio(obj.studio) {}

Serie::Serie() {}
