#include "seriescontroller.h"

void SeriesController::setCurSerieList(QHash<quint32, Serie> &list)
{
    if(curSerieList != NULL) {
        delete curSerieList;
    }
    curSerieList = new QHash<quint32, Serie>(list);
}

void SeriesController::setCurSerie(const quint32 id) {
    curSerie = &(*curSerieList)[id];
}

QHash<quint32, Serie> *SeriesController::getCurSerieList()
{
    return curSerieList;
}

Serie* SeriesController::getCurSerie()
{
    return curSerie;
}

SeriesController *SeriesController::getInstance()
{
    static SeriesController instance;
    return &instance;
}

Serie SeriesController::parseSearchResult(const QDomNode &node)
{
    //Temporary data used to retrieve and construct a Serie object
    quint32 id;
    QString name;
    QString synopsis;
    QDomNode tempNode;
    bool testbool = false;

    tempNode = node.firstChildElement("seriesid");
    testbool = tempNode.isNull();
    if (!tempNode.isNull()) {
        id = tempNode.firstChild().nodeValue().toInt();
    }

    tempNode = node.firstChildElement("SeriesName");
    if (!tempNode.isNull()) {
        name = tempNode.firstChild().nodeValue();
    }

    tempNode = node.firstChildElement("Overview");
    if (!tempNode.isNull()) {
        synopsis = tempNode.firstChild().nodeValue();
    }

    return Serie(id, name, synopsis);
}

SeriesController::SeriesController(QObject *parent) : QObject(parent), curSerieList(NULL), curSerie(NULL) {
    connect(&qnam, SIGNAL(finished(QNetworkReply*)), this, SLOT(dispatchReply(QNetworkReply*)));
}

SeriesController::~SeriesController()
{
    if (curSerieList != NULL) {
        delete curSerieList;
    }
    if (curSerie != NULL) {
        delete curSerie;
    }
}

void SeriesController::startSearchSeries(const QString &query)
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
                QHash<quint32, Serie> list;
                QDomNodeList nodeList = doc.elementsByTagName(QString("Series"));

                for(int i = 0; i<nodeList.length(); i++) { //We iterate through each series
                    Serie const &serie = parseSearchResult(nodeList.at(i));
                    list[serie.getId()] = serie;
                }

                setCurSerieList(list);
                emit searchComplete();
            }
        }
    }
    qnr->deleteLater();
}

