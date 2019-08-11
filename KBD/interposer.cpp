#include "interposer.h"

Interposer::Interposer()
{
    //Control => MainWindow
    connect(&c, &Control::UpdateProgressBar, &w, &MainWindow::UpdateProgressBar);
    connect(&c, QOverload<string>::of(&Control::SetStatus), &w, QOverload<string>::of(&MainWindow::SetStatus));
    connect(&c, &Control::SetBarStatus, &w, &MainWindow::SetBarStatus);
    connect(&c, &Control::SetLayerNames, &w, &MainWindow::SetSelectLayer);

    //MainWindow => Control
    connect(&w, QOverload<int>::of(&MainWindow::SetStatus), &c, QOverload<int>::of(&Control::SetStatus));
    connect(&w, &MainWindow::SelectMap, &c, &Control::SelectMap);
    connect(&w, &MainWindow::SelectedInput, &c, &Control::SelectedInput);
    connect(&w, &MainWindow::SelectedLayer, &c, &Control::SelectedLayer);
}
