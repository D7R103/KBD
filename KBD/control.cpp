#include "control.h"

Control::Control()
{
    _w = new MainWindow();
}

void Control::Start()
{
    _w->show();
}

Control::~Control()
{
    //
}
