#ifndef INTERPOSER_H
#define INTERPOSER_H

#include "stdafx.h"
#include "QObject"
#include "control.h"
#include "mainwindow.h"

class Interposer : public QObject
{
    Q_OBJECT

public:
    Interposer();
    Control c;
    MainWindow w;
};

#endif // INTERPOSER_H
