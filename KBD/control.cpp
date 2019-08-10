#include "control.h"

Control::Control()
{
    _devices = new vector<string>();
    _layers = new vector<vector<string>>();
    _layerNames = new vector<string>();
    LoadInputDevices();
}

void Control::LoadInputDevices()
{
    //
    // read device location(s)
    // scan for keyboards
    // place into _devices
}

void Control::SelectMap(string filePath)
{
    //open file
    ifstream file(filePath, ifstream::in|ifstream::binary);

    //get length of file
    unsigned count = 0;
    while (!file.eof())
    {
        string l;
        getline(file, l);
        count++;
    }
    file.close();
    file.open(filePath); // not clean or scaleable, but it works

    cout << "File Length : " << count << endl;

    //read each line
    unsigned line_num = 1;
    int percent;
    for (string line; getline(file, line); line_num++)
    {
    //if line ==
        //name -> null
        //layer_name -> _layerNames.add()
        //key -> _layers.add(new vector<string>(key, output);
    //update progress bar
        percent = nearbyint(((double)line_num / (double)count) * 100);
        UpdateProgressBar(percent);
        //_ui.UpdateProgressBar(nearbyint((line_num / count) * 100));
    //repeat until EOF
    }
    percent = 100;
    UpdateProgressBar(percent);
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

    SetStatus(stat);
}

void Control::SelectedInput(int inputID)
{
    _inputDevID = inputID;
}

void Control::SelectedLayer(int layerID)
{
    _layerID = layerID;
}

vector<string> * Control::GetLayers()
{
    return _layerNames;
}

Control::~Control()
{
    delete _devices;
    delete _layers;
    delete _layerNames;
}
