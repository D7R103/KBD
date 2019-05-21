#include <QApplication>
#include "control.h"
#include "mainwindow.h"
#include "sender.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Sender * sender = new Sender();
    Control * control = new Control(sender);
    MainWindow * _w = new MainWindow(nullptr, control, sender);
    _w->show();

    return a.exec();
}
