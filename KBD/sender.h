#ifndef SENDER_H
#define SENDER_H

#include "stdafx.h"

class Sender
{
public:
    Sender();
    void SetData(string);
    void SetData(int);
    void SetData(double);
    void SetData(vector<string> *);

    string GetStrData();
    int GetIntData();
    double GetDoubData();
    vector<string> * GetListData();
    ~Sender();

private:
    string _strData;
    int _intData;
    double _doData;
    vector<string> * _vData;
};

#endif // SENDER_H
