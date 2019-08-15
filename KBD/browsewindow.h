#ifndef BROWSEWINDOW_H
#define BROWSEWINDOW_H

#include <QMainWindow>
#include "stdafx.h"
#include <QFileSystemModel>
#include <QCloseEvent>
#include <QShowEvent>
#include <QTreeView>

namespace Ui {
class BrowseWindow;
}

class BrowseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BrowseWindow(QWidget *parent = nullptr);
    string GetFile();
    string GetFilePath();
    ~BrowseWindow();

private slots:
    void CloseWindow();
    void GetSelected();
    void ReturnSelected();
    void ReturnSelectedAndCloseWindow();

private:
    Ui::BrowseWindow *ui;
    string _file, _filePath;
    QFileSystemModel * model;
    string _path;

    void LoadExplorer();
    void closeEvent(QCloseEvent *);
    void showEvent(QShowEvent *);
};

#endif // BROWSEWINDOW_H
