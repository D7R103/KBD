#include "control.h"

Control::Control(Sender * s)
{
    _s = s;
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

    _s->SetData(_devices);
}

void Control::SelectMap(string filePath)
{
    //open file
    ifstream file(filePath);

    //get length of file
    long count = std::count(std::istream_iterator<char>(file),
            std::istream_iterator<char>(), '\n');

    //read each line
    unsigned line_num = 1;
    for (string line; getline(file, line); line_num++)
    {
    //if line ==
        //name -> null
        //layer_name -> _layerNames.add()
        //key -> _layers.add(new vector<string>(key, output);
    //update progress bar
        cout << line_num % count << endl;
        //_ui.UpdateProgressBar(line_num % count);
    //repeat until EOF
    }
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
