#include "seriebutton.h"

SerieButton::SerieButton(const QString title, quint32 seriesId, QWidget *parent) : QPushButton(title, parent), seriesId(seriesId) { }

quint32 SerieButton::getSeriesId() const { return this->seriesId; }

