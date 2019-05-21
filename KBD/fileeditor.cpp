#include "fileeditor.h"
#include "ui_fileeditor.h"

FileEditor::FileEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileEditor)
{
    ui->setupUi(this);
}

void FileEditor::SetPath(int p)
{
    _pathe = p;
}

void FileEditor::CloseWindow()
{
    this->hide();
    parentWidget()->show();
}

FileEditor::~FileEditor()
{
    delete ui;
}
