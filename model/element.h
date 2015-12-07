#ifndef ELEMENT_H
#define ELEMENT_H

#include <QObject>

class Element : public QObject
{
    Q_OBJECT

private:
    QString title;
    quint32 number;
    QString synopsis;

public:
    explicit Element(QObject *parent = 0);

signals:

public slots:
};

#endif // ELEMENT_H
