#include <QApplication>
#include "control.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Control * control = new Control();
    control->Start();

    return a.exec();
}
