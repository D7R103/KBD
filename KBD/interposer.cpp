#include "interposer.h"

Interposer::Interposer()
{
    //Control => MainWindow
    connect(&c, &Control::UpdateProgressBar, &w, &MainWindow::UpdateProgressBar);
    connect(&c, QOverload<string>::of(&Control::SetStatus), &w, QOverload<string>::of(&MainWindow::SetStatus));
    connect(&c, &Control::SetBarStatus, &w, &MainWindow::SetBarStatus);
    connect(&c, &Control::SetLayerNames, &w, &MainWindow::SetSelectLayer);
    connect(&c, &Control::SetDeviceNames, &w, &MainWindow::SetSelectInput);

    //MainWindow => Control
    connect(&w, QOverload<int>::of(&MainWindow::SetStatus), &c, QOverload<int>::of(&Control::SetStatus));
    connect(&w, &MainWindow::SelectMap, &c, &Control::SelectMap);
    connect(&w, &MainWindow::SelectedInput, &c, &Control::SelectedInput);
    connect(&w, &MainWindow::SelectedLayer, &c, &Control::SelectedLayer);
    connect(&w, &MainWindow::LoadInputDevices, &c, &Control::LoadInputDevices);
    connect(&w, &MainWindow::ForceDeviceRescan, &c, &Control::ForceRescan);
}
