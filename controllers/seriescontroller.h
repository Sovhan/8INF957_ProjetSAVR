#ifndef SERIESCONTROLLER_H
#define SERIESCONTROLLER_H

#include <QObject>
#include <QtNetwork>
#include <QDomDocument>
#include <QList>
#include "../model/serie.h"

class SeriesController : public QObject
{
    Q_OBJECT

private:
    QList<Serie> *curSerieList;
    QNetworkAccessManager qnam;

    void setCurSerieList(QList<Serie> &list);
    Serie parseSearchResult(const QDomNode &node);

public:
    explicit SeriesController(QObject *parent = 0);
    ~SeriesController();
    void startSearchSeries(QString query);

signals:

public slots:
    void dispatchReply(QNetworkReply* qnr);
};

#endif // SERIESCONTROLLER_H
