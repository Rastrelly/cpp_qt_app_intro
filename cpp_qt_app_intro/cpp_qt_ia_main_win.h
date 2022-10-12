#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_cpp_qt_ia_main_win.h"

class cpp_qt_ia_main_win : public QMainWindow
{
    Q_OBJECT

public:
    cpp_qt_ia_main_win(QWidget *parent = nullptr);
    ~cpp_qt_ia_main_win();
	void setECPtr(extCalc * ECP);

private slots:
	void butCalculateClick();
	void butCalculateAverage();

private:
    Ui::cpp_qt_ia_main_winClass ui;
	extCalc * ECPtr;
};
