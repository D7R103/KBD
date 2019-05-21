#include "sender.h"

Sender::Sender()
{
    //
}

void Sender::SetData(string s)
{
    _strData = s;
}

void Sender::SetData(int i)
{
    _intData = i;
}

void Sender::SetData(double d)
{
    _doData = d;
}

void Sender::SetData(vector<string> * v)
{
    _vData = v ;
}

string Sender::GetStrData()
{
    return _strData;
}

int Sender::GetIntData()
{
    return _intData;
}

double Sender::GetDoubData()
{
    return _doData;
}

vector<string> * Sender::GetListData()
{
    return _vData;
}

Sender::~Sender()
{
    //
}
