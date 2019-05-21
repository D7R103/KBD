#ifndef FILEEDITOR_H
#define FILEEDITOR_H

#include <QMainWindow>
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

    void SetPath(int);

private slots:
    void CloseWindow();

private:
    Ui::FileEditor *ui;
    int _pathe;
};

#endif // FILEEDITOR_H
