#ifndef SERIESCONTROLLER_H
#define SERIESCONTROLLER_H

#include <QObject>
#include <QtNetwork>
#include <QDomDocument>
#include <QHash>
#include "../model/serie.h"

class SeriesController : public QObject
{
    Q_OBJECT

private:
    QHash<quint32, Serie> *curSerieList;
    QNetworkAccessManager qnam;
    Serie *curSerie;

    void setCurSerieList(QHash<quint32, Serie> &list);
    Serie parseSearchResult(const QDomNode &node);

public:
    explicit SeriesController(QObject *parent = 0);
    ~SeriesController();
    void startSearchSeries(QString query);    
    void setCurSerie(quint32 id);
    QHash<quint32, Serie> *getCurSerieList();
    Serie *getCurSerie();

signals:

public slots:
    void dispatchReply(QNetworkReply* qnr);
};

#endif // SERIESCONTROLLER_H
