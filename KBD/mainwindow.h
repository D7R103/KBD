#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stdafx.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void SetStatus(int);
    void SetSelectInput(vector<string>);
    void SetSelectLayer(vector<string>);
    void UpdateProgressBar(int);
    void UpdateProgressStatus(string);
    string GetFile();
    int GetSelectedInput();
    int GetSelectedLayer();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
