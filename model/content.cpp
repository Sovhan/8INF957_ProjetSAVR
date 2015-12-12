#include "content.h"

Content::Content(quint32 id, QString name, QString synopsis) : title(name), id(id), synopsis(synopsis)
{}

Content::Content(const Content &obj) : title(obj.title), list(obj.list), id(obj.id), synopsis(obj.synopsis)
{}

Content::Content()
{}
