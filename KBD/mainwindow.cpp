#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

string MainWindow::GetFile()
{
    return ui->lbl_fileloaded->text().toStdString();
}

int MainWindow::GetSelectedInput()
{
    return ui->box_selectboard->currentIndex();
}

int MainWindow::GetSelectedLayer()
{
    return ui->box_selectlayer->currentIndex();
}

void MainWindow::SetSelectInput(vector<string> inputs)
{
    for (size_t i = 0; i < inputs.size(); i++)
    {
        QString item = QString::fromStdString(inputs.at(i));
        ui->box_selectboard->addItem(item);
    }
}

void MainWindow::SetSelectLayer(vector<string> layers)
{
    for (size_t i = 0; i < layers.size(); i++)
    {
        QString item = QString::fromStdString(layers.at(i));
        ui->box_selectlayer->addItem(item);
    }
}

void MainWindow::SetStatus(int status)
{
    if (status == 1)
    {
        ui->lbl_status->setText("Running");
    }
    else
    {
        ui->lbl_status->setText("Stopped");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
