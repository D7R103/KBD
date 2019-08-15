#include <QApplication>
#include "control.h"
#include "mainwindow.h"
#include "interposer.h"

string LOADDIR, DEVICEDIR, WRITEDIR;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Interposer * i = new Interposer();

    Control * _c = &i->c;
    MainWindow * _w = &i->w;

    _c->LoadOverrideConfig();

    _w->show();

    return a.exec();
}
