#ifndef CONTROL_H
#define CONTROL_H

#include "stdafx.h"
#include "sender.h"

class Control
{
public:
    Control(Sender *);
    void SelectedLayer(int);
    void SelectedInput(int);
    void SelectMap(string);
    void SetStatus(int);

    vector<string> * GetLayers();
private:
    Sender * _s;
    int _status, _inputDevID, _layerID;
    vector<string> * _devices;
    vector<vector<string>> * _layers;
    vector<string> * _layerNames;
    void LoadInputDevices();
    ~Control();
};

#endif // CONTROL_H
