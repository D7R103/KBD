#ifndef BROWSEWINDOW_H
#define BROWSEWINDOW_H

#include <QMainWindow>
#include "stdafx.h"
#include <QFileSystemModel>
#include <QCloseEvent>
#include <QTreeView>
#include "sender.h"

namespace Ui {
class BrowseWindow;
}

class BrowseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BrowseWindow(QWidget *parent = nullptr);
    string GetFile();
    ~BrowseWindow();

private slots:
    void CloseWindow();
    void GetSelected();
    void ReturnSelected();
    void ReturnSelectedAndCloseWindow();

private:
    Ui::BrowseWindow *ui;
    string _file;
    void LoadExplorer();
    void closeEvent(QCloseEvent *);
};

#endif // BROWSEWINDOW_H
