#include "content.h"


Content::Content(const quint32 id, const QString title, const QString synopsis) : id(id), title(title), synopsis(synopsis), toSave(false), posterUrl("") {}

Content::Content(const Content &obj): id(obj.id), title(obj.title), list(obj.list), synopsis(obj.synopsis), toSave(obj.toSave), posterUrl(obj.posterUrl) {}

Content::Content(): id(0), toSave(false) {}

quint32 Content::getId() const { return this->id; }

QString Content::getTitle() const { return this->title; }

QList<Element*> Content::getList() const { return this->list; }

QString Content::getSynopsis() const { return this->synopsis; }

void Content::setSaved() { this->toSave = true; }

void Content::setUnsaved() { this->toSave = false; }

bool Content::isSaved() const { return this->toSave; }

void Content::addElementToList(Element *el) { list.append(el); }

QDataStream &operator>>(QDataStream &qds, Content &ct)
{
    qds >> ct.id;
    qds >> ct.posterUrl;
    qds >> ct.synopsis;
    qds >> ct.title;
    qds >> ct.toSave;

    return qds;
}

QDataStream &operator<<(QDataStream &qds, const Content &ct)
{
    qds << ct.id;
    qds << ct.posterUrl;
    qds << ct.synopsis;
    qds << ct.title;
    qds << ct.toSave;

    return qds;
}
