#ifndef CONTROL_H
#define CONTROL_H

#include "stdafx.h"

class Control
{
public:
    Control();
    void SelectMap(string);
    void SetStatus(int);
    ~Control();

private:
    int _status;
    void LoadInputDevices();
};

#endif // CONTROL_H
