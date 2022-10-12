#include "stdafx.h"
#include "cpp_qt_ia_main_win.h"

cpp_qt_ia_main_win::cpp_qt_ia_main_win(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	connect(ui.butCalculate, SIGNAL(clicked()), SLOT(butCalculateClick()));
	connect(ui.butAverage, SIGNAL(clicked()), SLOT(butCalculateAverage()));
}

cpp_qt_ia_main_win::~cpp_qt_ia_main_win()
{}

void cpp_qt_ia_main_win::butCalculateClick()
{
	ui.memoResults->appendPlainText(ui.edOutput->text());

	ECPtr->setA(ui.edInputA->text().toFloat());
	ECPtr->setB(ui.edInputB->text().toFloat());
	ECPtr->setOP(ui.cbOperation->currentIndex());
	ECPtr->callCalc();
	ui.edOutput->setText(QString::fromStdString(ECPtr->getRes()));
}

void cpp_qt_ia_main_win::butCalculateAverage()
{
	QStringList lines = 
		ui.memoResults->
		toPlainText().split('\n', 
							QString::SkipEmptyParts);

	float sum = 0;
	for (int i = 0; i < lines.count(); i++)
	{
		sum += lines.at(i).toFloat();
	}
	float avg = sum / (float)lines.count();
	QString avg_txt; avg_txt.setNum(avg);
	ui.edAverage->setText(avg_txt);
}

void cpp_qt_ia_main_win::setECPtr(extCalc * ECP)
{
	ECPtr = ECP;
}