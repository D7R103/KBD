#ifndef CONTROL_H
#define CONTROL_H

#include "stdafx.h"
#include "mainwindow.h"

class Control
{
public:
    Control();
    void SelectMap(string);
    void Start();
    void SetStatus(int);
    ~Control();

private:
    MainWindow * _w;
    int _status;
    void LoadInputDevices();
};

#endif // CONTROL_H
