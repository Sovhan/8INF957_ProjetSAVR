#ifndef SERIEBUTTON_H
#define SERIEBUTTON_H

#include <QtWidgets>

class SerieButton : public QPushButton
{
private:
    quint32 seriesId;

public:
    SerieButton(const QString title, quint32 seriesId, QWidget *parent = 0);
    quint32 getSeriesId() const;

};

#endif // SERIEBUTTON_H
