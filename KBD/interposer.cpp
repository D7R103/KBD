#include "interposer.h"

Interposer::Interposer()
{
    //Control => MainWindow
    connect(&c, &Control::UpdateProgressBar, &w, &MainWindow::UpdateProgressBar);
    connect(&c, QOverload<string>::of(&Control::SetStatus), &w, QOverload<string>::of(&MainWindow::SetStatus));
    connect(&c, &Control::UpdateProgressBar, &w, &MainWindow::UpdateProgressBar);

    //MainWindow => Control
    connect(&w, QOverload<int>::of(&MainWindow::SetStatus), &c, QOverload<int>::of(&Control::SetStatus));
    connect(&w, &MainWindow::SelectMap, &c, &Control::SelectMap);
}
