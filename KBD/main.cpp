#include <QApplication>
#include "control.h"
#include "mainwindow.h"
#include "interposer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Interposer * i = new Interposer();

    MainWindow * _w = &i->w;

    _w->show();

    return a.exec();
}
