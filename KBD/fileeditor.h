#ifndef FILEEDITOR_H
#define FILEEDITOR_H

#include <QMainWindow>
#include <QCloseEvent>
#include "stdafx.h"

namespace Ui {
class FileEditor;
}

class FileEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit FileEditor(QWidget *parent = nullptr);
    ~FileEditor();

    void SetPath(int, string path = "");

private slots:
    void CloseWindow();
    void InsertComment();

private:
    Ui::FileEditor *ui;
    bool _saveState = false;
    void Load(string);
    void closeEvent(QCloseEvent *);
};

#endif // FILEEDITOR_H
