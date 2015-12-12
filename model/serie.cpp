#include "serie.h"

Serie::Serie(quint32 id, QString name, QString synopsis) : Content(id, name, synopsis)
{}

Serie::Serie(const Serie &obj) : Content(obj), studio(obj.studio) {}

