#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stdafx.h"
#include "browsewindow.h"
#include "fileeditor.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void GetSelectedBoard();
    void GetSelectedLayer();
    void StartModification();
    void StopModification();
    void OpenBrowseWindow();
    void OpenEditWindow();
    void ForceRescan();

public slots:
    void UpdateProgressBar(int);
    void SetStatus(string);
    void SetBarStatus(string);
    void SetSelectInput(vector<string> *);
    void SetSelectLayer(vector<string> *);

signals:
    void SetStatus(int);
    void SelectMap(string);
    void SelectedLayer(int);
    void SelectedInput(int);
    void LoadInputDevices();
    void ForceDeviceRescan();

private:
    Ui::MainWindow *ui;
    BrowseWindow *bui;
    FileEditor *fui;
    string _file, _filePath, _status;
    bool _fileSelectionChanged;

    void showEvent(QShowEvent *);
};

#endif // MAINWINDOW_H
