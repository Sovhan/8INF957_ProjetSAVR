#ifndef SEARCHRESULTS_H
#define SEARCHRESULTS_H

#include <QWidget>
#include <QListWidget>

namespace Ui {
class SearchResults;
}

class SearchResults : public QWidget
{
    Q_OBJECT

public:
    explicit SearchResults(QWidget *parent = 0);
    ~SearchResults();
    QListWidget* getResultsList();

private:
    Ui::SearchResults *ui;
};

#endif // SEARCHRESULTS_H
