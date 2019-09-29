#include "saveasdialog.h"
#include "ui_saveasdialog.h"

SaveAsDialog::SaveAsDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SaveAsDialog)
{
    ui->setupUi(this);
}

SaveAsDialog::~SaveAsDialog()
{
    delete ui;
}
