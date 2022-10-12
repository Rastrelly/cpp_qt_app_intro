#include "stdafx.h"
#include "cpp_qt_ia_main_win.h"
#include <QtWidgets/QApplication>

extCalc EC;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cpp_qt_ia_main_win w;
	w.setECPtr(&EC);
    w.show();
    return a.exec();
}
