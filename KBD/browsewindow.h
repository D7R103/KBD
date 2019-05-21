#ifndef BROWSEWINDOW_H
#define BROWSEWINDOW_H

#include <QMainWindow>
#include "stdafx.h"
#include <QFileSystemModel>

namespace Ui {
class BrowseWindow;
}

class BrowseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BrowseWindow(QWidget *parent = nullptr);
    ~BrowseWindow();

private slots:
void CloseWindow();

private:
    Ui::BrowseWindow *ui;

    void LoadExplorer();
};

#endif // BROWSEWINDOW_H
