#include "control.h"

Control::Control(Sender * s)
{
    _s = s;
    _devices = new vector<string>();
    _layers = new vector<vector<string>>();
    LoadInputDevices();
}

void Control::LoadInputDevices()
{
    //
    // read device location(s)
    // scan for keyboards
    // place into _devices

    _s->SetData(_devices);
}

void Control::SelectMap(string)
{
    //
}

void Control::SetStatus(int status)
{
    _status = status;

    string stat;
    if (status == 1)
    {
        stat = "Running";
    }
    else
    {
        stat = "Stopped";
    }

    cout << "Mod Status : " << stat << endl;

    _s->SetData(stat);
}

void Control::SelectedInput(int inputID)
{
    _inputDevID = inputID;
}

void Control::SelectedLayer(int layerID)
{
    _layerID = layerID;
}

Control::~Control()
{
    delete _devices;
    delete _layers;
}
