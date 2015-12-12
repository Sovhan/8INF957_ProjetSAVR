#include "seriescontroller.h"

void SeriesController::setCurSerieList(QList<Serie*> *list)
{
    if(curSerieList != NULL) {
        for(QList<Serie*>::Iterator it = curSerieList->begin(); it != curSerieList->end(); it++) {
            delete *it;
        }
        delete curSerieList;
    }
    curSerieList = list;
}

Serie *SeriesController::parseSearchResult(QDomNode node)
{
    //Temporary data used to retrieve and construct a Serie object
    quint32 id;
    QString name;
    QString synopsis;
    QDomNode tempNode;

    tempNode = node.firstChildElement("seriesid");
    if (!tempNode.isNull()) {
        id = tempNode.nodeValue().toInt();
    }

    tempNode = node.firstChildElement("SeriesName");
    if (!tempNode.isNull()) {
        name = tempNode.nodeValue();
    }

    tempNode = node.firstChildElement("Overview");
    if (!tempNode.isNull()) {
        synopsis = tempNode.nodeValue();
    }

    return new Serie(id, name, synopsis);
}

SeriesController::SeriesController(QObject *parent) : QObject(parent) {
    connect(&qnam, SIGNAL(finished(QNetworkReply*), this, SLOT(onSearchComplete(QNetworkReply*));
}

SeriesController::~SeriesController()
{
    if (curSerieList != NULL) {
        delete curSerieList;
    }
}

void SeriesController::startSearchSerie(QString query)
{
    QNetworkRequest qnr(QUrl(QString("http://thetvdb.com/api/GetSeries.php?seriesname="+query)));
}

void SeriesController::onSearchComplete(QNetworkReply* qnr)
{
    Serie *serie;
    QList<Serie*> *list = new QList<Serie*>();

    if(qnr->error() == QNetworkReply::NoError) {
        QDomDocument doc;
        if(doc.setContent(qnr)) {
            QDomNodeList nodeList = doc.elementsByTagName(QString("Series"));
            for(int i = 0; i<nodeList.length(); i++) {
                serie = parseSearchResult(nodeList.at(i));
                list->append(serie);
            }
            setCurSerieList(list);
        }
    }
    qnr->deleteLater();
}

