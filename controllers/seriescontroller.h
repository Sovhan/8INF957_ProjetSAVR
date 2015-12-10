#ifndef SERIESCONTROLLER_H
#define SERIESCONTROLLER_H

#include <QObject>
#include <QtNetwork>
#include <QDomDocument>
#include "../model/serie.h"

class SeriesController : public QObject
{
    Q_OBJECT

private:
    QList<Serie> *curSerieList;
    void setCurSerieList(QList<Serie>* list);
    Serie parseSearchResult(QDomNode node);

public:
    explicit SeriesController(QObject *parent = 0);
    ~SeriesController();
    void startSearchSerie(QString query);

signals:

public slots:
    void onSearchComplete(QNetworkReply* qnr);
};

#endif // SERIESCONTROLLER_H
