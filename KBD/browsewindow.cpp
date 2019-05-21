#include "browsewindow.h"
#include "ui_browsewindow.h"

BrowseWindow::BrowseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BrowseWindow)
{
    ui->setupUi(this);
}

void BrowseWindow::CloseWindow()
{
    this->hide();
    parentWidget()->show();
}

BrowseWindow::~BrowseWindow()
{
    delete ui;
}
