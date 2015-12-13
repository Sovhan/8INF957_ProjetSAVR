#include "content.h"


Content::Content(quint32 id, QString title, QString synopsis) : id(id), title(title), synopsis(synopsis)
{}

Content::Content(const Content &obj) : id(obj.id), title(obj.title), list(obj.list), synopsis(obj.synopsis)
{}

Content::Content()
{}

quint32 Content::getId() const { return this->id; }

QString Content::getTitle() const { return this->title; }

QList<Element> Content::getList() const { return this->list; }

QString Content::getSynopsis() const { return this->synopsis; }
