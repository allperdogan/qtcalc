#include "qtcalc.h"
#include "QDebug"
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtcalc w;
    w.show();
    return a.exec();
}