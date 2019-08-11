#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->bar_progress->hide();

    bui = new BrowseWindow(this);
    fui = new FileEditor(this);

    _file = "";
}

void MainWindow::GetSelectedBoard()
{
    int i =  ui->box_selectboard->currentIndex();
    SelectedInput(i);
}

void MainWindow::GetSelectedLayer()
{
    int i =  ui->box_selectlayer->currentIndex();
    SelectedLayer(i);
}

void MainWindow::SetStatus(string status)
{
    _status = status;
}

void MainWindow::StartModification()
{
    SetStatus(1);
    ui->lbl_status->setText(QString::fromStdString(_status));
}

void MainWindow::StopModification()
{
    SetStatus(0);
    ui->lbl_status->setText(QString::fromStdString(_status));
}

void MainWindow::OpenBrowseWindow()
{
    this->hide();
    bui->show();
    _fileSelectionChanged = true;
}

void MainWindow::OpenEditWindow()
{
    this->hide();
    fui->SetPath(0);
    fui->show();
}

void MainWindow::showEvent(QShowEvent *)
{
    _file = bui->GetFile();
    _filePath = bui->GetFilePath();
    ui->lbl_fileloaded->setText("File : " + QString::fromStdString(_file));

    if (_file != "" && _fileSelectionChanged) // prevents re-reading of file
    {
        ui->bar_progress->show();
        ui->box_selectlayer->clear();
        SelectMap(_filePath);
        _fileSelectionChanged = false;
    }
}

void MainWindow::SetSelectInput(vector<string> * inputs)
{
    for (size_t i = 0; i < inputs->size(); i++)
    {
        ui->box_selectboard->addItem(QString::fromStdString(inputs->at(i)));
    }
}

void MainWindow::SetSelectLayer(vector<string> * layers)
{
    for (size_t i = 0; i < layers->size(); i++)
    {
        ui->box_selectlayer->addItem(QString::fromStdString(layers->at(i)));
    }
}

void MainWindow::UpdateProgressBar(int percent)
{
    ui->bar_progress->setValue(percent);
}

void MainWindow::SetBarStatus(string status)
{
    ui->statusBar->showMessage(QString::fromStdString(status));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete bui;
    delete fui;
}
