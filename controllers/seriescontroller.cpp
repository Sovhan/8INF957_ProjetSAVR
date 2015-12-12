#include "seriescontroller.h"

void SeriesController::setCurSerieList(QList<Serie> &list)
{
    if(curSerieList != NULL) {
        delete curSerieList;
    }
    curSerieList = new QList<Serie>(list);
}

Serie SeriesController::parseSearchResult(const QDomNode &node)
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

    return Serie(id, name, synopsis);
}

SeriesController::SeriesController(QObject *parent) : QObject(parent), curSerieList(NULL) {
    connect(&qnam, SIGNAL(finished(QNetworkReply*)), this, SLOT(dispatchReply(QNetworkReply*)));
}

SeriesController::~SeriesController()
{
    if (curSerieList != NULL) {
        delete curSerieList;
    }
}

void SeriesController::startSearchSeries(QString query)
{
    QNetworkRequest qnr(QUrl(QString("http://thetvdb.com/api/GetSeries.php?seriesname="+query)));
    qnam.get(qnr);
}

void SeriesController::dispatchReply(QNetworkReply* qnr)
{
    if(qnr->error() == QNetworkReply::NoError) { //If no error on request

        if(qnr->request().url().toString().contains("GetSeries")) { //If request was about searching a series by name
            QDomDocument doc;

            if(doc.setContent(qnr)) { //If successfully parsed
                QList<Serie> list;
                QDomNodeList nodeList = doc.elementsByTagName(QString("Series"));

                for(int i = 0; i<nodeList.length(); i++) { //We iterate through each series
                    list.append(parseSearchResult(nodeList.at(i)));
                }
                setCurSerieList(list);
            }
        }
    }
    qnr->deleteLater();
}

