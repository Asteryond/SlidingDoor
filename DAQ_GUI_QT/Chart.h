#pragma once

#include <QtCharts/QtCharts>
class Chart: public QChart
{
	Q_OBJECT
public:
	Chart(QGraphicsItem* parent = 0, Qt::WindowFlags wFlags = 0);
	virtual ~Chart();

private:
	QValueAxis* m_axisX;
	QValueAxis* m_axisY;
	
	QLineSeries* m_seriesAI0;
	QLineSeries* m_seriesAI1;
	QLineSeries* m_seriesAI2;
	QLineSeries* m_seriesAI3;
	QLineSeries* m_seriesAI4;

};

