#ifndef CONTROL_H
#define CONTROL_H

#include "stdafx.h"
#include "QObject"

class Control : public QObject
{
    Q_OBJECT

signals:
    void UpdateProgressBar(int);
    void SetStatus(string);
    void SetBarStatus(string);
    void SetLayerNames(vector<string> *);

public slots:
    void SetStatus(int);
    void SelectMap(string);
    void SelectedLayer(int);
    void SelectedInput(int);

public:
    Control();
    ~Control();

private:
    static Control * _this;
    int _status, _inputDevID, _layerID;
    vector<string> * _devices;
    vector<vector<string>> * _layers;
    vector<string> * _layerNames;
    void LoadInputDevices();
    vector<string> Split(string &, char);
};

#endif // CONTROL_H
