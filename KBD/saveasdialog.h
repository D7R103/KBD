#ifndef SAVEASDIALOG_H
#define SAVEASDIALOG_H

#include <QDialog>
#include <QFileSystemModel>
#include <QTreeView>
#include "stdafx.h"

namespace Ui {
class SaveAsDialog;
}

class SaveAsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SaveAsDialog(QWidget *parent = nullptr);
    ~SaveAsDialog();

    string GetFileName();

private slots:
    void SubmitName();
    void CloseWindow();

private:
    Ui::SaveAsDialog *ui;
    string _fileName;
};

#endif // SAVEASDIALOG_H
