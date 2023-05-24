#include "Chart.h"

Chart::Chart(QGraphicsItem* parent, Qt::WindowFlags wFlags):
	QChart(QChart::ChartTypeCartesian, parent, wFlags),
	m_axisX(new QValueAxis()),
	m_axisY(new QValueAxis())
{
	m_seriesAI0 = new QLineSeries();
	m_seriesAI1 = new QLineSeries();
	m_seriesAI2 = new QLineSeries();
	m_seriesAI3 = new QLineSeries();
	m_seriesAI4 = new QLineSeries();

	m_seriesAI0->setUseOpenGL();
	m_seriesAI1->setUseOpenGL();
	m_seriesAI2->setUseOpenGL();
	m_seriesAI3->setUseOpenGL();
	m_seriesAI4->setUseOpenGL();

	addSeries(m_seriesAI0);
	addSeries(m_seriesAI1);
	addSeries(m_seriesAI2);
	addSeries(m_seriesAI3);
	addSeries(m_seriesAI4);

	m_seriesAI0->attachAxis(m_axisX);
	m_seriesAI0->attachAxis(m_axisY);
	m_seriesAI1->attachAxis(m_axisX);
	m_seriesAI1->attachAxis(m_axisY);
	m_seriesAI2->attachAxis(m_axisX);
	m_seriesAI2->attachAxis(m_axisY);
	m_seriesAI3->attachAxis(m_axisX);
	m_seriesAI4->attachAxis(m_axisY);
	m_seriesAI4->attachAxis(m_axisX);
	m_seriesAI4->attachAxis(m_axisY);



}

Chart::~Chart()
{
}
