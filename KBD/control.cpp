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

    cout << "File Length : " << count << " Lines" << endl;

    _layerNames->clear();
    UpdateProgressBar(0);

    //read each line
    unsigned line_num = 1;
    int percent;
    SetBarStatus("Loading File...");
    for (string line; getline(file, line); line_num++)
    {
    //if line ==

        //name -> null
        //layer_name -> _layerNames.add()
        if (line.find("<layer>") == 0)
        {
            string layer_name = Split(line, ' ').at(1);
            layer_name.erase(layer_name.begin());
            layer_name.erase(layer_name.end() - 1);
            _layerNames->push_back(layer_name);
        }
        //key -> _layers.add(new vector<string>(key, output);
        if (line.find("key") == 0)
        {
            string key_name = Split(line, ' ').at(1);
            key_name.erase(key_name.begin());
            key_name.erase(key_name.end() - 1);
            cout << "Key : " << key_name << endl;
        }
    //update progress bar
        percent = nearbyint(((double)line_num / (double)count) * 100);
        UpdateProgressBar(percent);
    //repeat until EOF
    }
    percent = 100;
    UpdateProgressBar(percent);
    SetBarStatus("Process Done");
    SetLayerNames(_layerNames);
}

vector<string> Control::Split(string & in, char delim)
{
    vector<string> ret;
    string token;
    std::stringstream ss(in);

    while (getline(ss, token, delim))
    {
        ret.push_back(token);
    }

    return ret;
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

Control::~Control()
{
    delete _devices;
    delete _layers;
    delete _layerNames;
}
