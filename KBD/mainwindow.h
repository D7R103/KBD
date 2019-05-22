#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stdafx.h"
#include "control.h"
#include "browsewindow.h"
#include "fileeditor.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr, Control * c = nullptr, Sender * s = nullptr);
    ~MainWindow();

    void SetStatus(int);
    void SetSelectInput(vector<string>);
    void SetSelectLayer(vector<string>);
    void UpdateProgressBar(int);
    void UpdateProgressStatus(string);
    string GetFile();

private slots:
    void GetSelectedBoard();
    void GetSelectedLayer();
    void StartModification();
    void StopModification();
    void OpenBrowseWindow();
    void OpenEditWindow();

private:
    Ui::MainWindow *ui;
    BrowseWindow *bui;
    FileEditor *fui;
    Control * _c;
    Sender * _s;
    string _filePath;

    void showEvent(QShowEvent *);
};

#endif // MAINWINDOW_H
