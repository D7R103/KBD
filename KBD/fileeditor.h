#ifndef FILEEDITOR_H
#define FILEEDITOR_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QTextCharFormat>
#include "stdafx.h"
#include "confirmdialog.h"
#include "saveasdialog.h"

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

    bool FileChanged();

private slots:
    void CloseWindow();
    void InsertComment();
    void InsertLayer();
    void InsertKeyBinding();
    void SaveFile();

private:
    Ui::FileEditor * ui;
    ConfirmDialog * cd;
    SaveAsDialog * sa;
    bool _saveState;
    bool _fileChanged;
    string _path;

    QTextCharFormat text_f;

    void Load(string);
    void closeEvent(QCloseEvent *);
};

#endif // FILEEDITOR_H
