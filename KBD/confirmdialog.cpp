#include "confirmdialog.h"
#include "ui_confirmdialog.h"

ConfirmDialog::ConfirmDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfirmDialog)
{
    ui->setupUi(this);
}

void ConfirmDialog::Accept()
{
    _exitRequested = true;
    this->hide();
}

void ConfirmDialog::Reject()
{
    _exitRequested = false;
    this->hide();
}

bool ConfirmDialog::ExitRequest()
{
    return _exitRequested;
}

ConfirmDialog::~ConfirmDialog()
{
    delete ui;
}
