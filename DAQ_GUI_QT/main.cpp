#include "DAQ_GUI_QT.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication a(argc, argv);
    DAQ_GUI_QT w;
    w.show();
    
    return a.exec();
}
