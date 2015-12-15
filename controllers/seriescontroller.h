#ifndef SERIESCONTROLLER_H
#define SERIESCONTROLLER_H

#include <QObject>
#include <QtNetwork>
#include <QDomDocument>
#include <QHash>
#include "../model/serie.h"
#include "../model/episode.h"

#define SERIES_DB "/series.db"

class SeriesController : public QObject
{
    Q_OBJECT

private:
    QHash<quint32, Serie> *curSerieList;
    QNetworkAccessManager qnam;
    Serie *curSerie;
    QHash<quint32, Serie> *savedSerieList;
    QString dbPath;

    explicit SeriesController(QObject *parent = 0);
    void setCurSerieList(QHash<quint32, Serie> &list);
    Serie parseSearchResult(const QDomNode &node);
    void parseSerieResult(const QDomDocument &doc);

public:
    ~SeriesController();
    void setCurSerie(const quint32 id);
    QHash<quint32, Serie> &getCurSerieList();
    Serie &getCurSerie();
    static SeriesController *getInstance();
    void saveSerie(quint32 id);
    void unSaveSerie(quint32 id);
    void retrieveCurSerieInfo();

signals:
    void searchComplete();
    void retrieveCurSerieInfoComplete();

public slots:
    void dispatchReply(QNetworkReply* qnr);
    void startSearchSeries(const QString &query);
};

#endif // SERIESCONTROLLER_H
