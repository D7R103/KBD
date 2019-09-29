#include "saveasdialog.h"
#include "ui_saveasdialog.h"

SaveAsDialog::SaveAsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveAsDialog)
{
    ui->setupUi(this);

    if (WRITEDIR.find("~/") == 0)
    {
        if (WRITEDIR == "~/")
        {
            WRITEDIR = QDir::homePath().toStdString();
        }
        else
        {
            WRITEDIR.erase(std::remove(WRITEDIR.begin(), WRITEDIR.end(), '~'), WRITEDIR.end());
            WRITEDIR = QDir::homePath().toStdString() + WRITEDIR;
        }
    }
}

string SaveAsDialog::GetFileName()
{
    return _fileName;
}

void SaveAsDialog::CloseWindow()
{
    this->hide();
}

void SaveAsDialog::SubmitName()
{
    _fileName = ui->txt_file->text().toStdString();
    CloseWindow();
}

SaveAsDialog::~SaveAsDialog()
{
    delete ui;
}
