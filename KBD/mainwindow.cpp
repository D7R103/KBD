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

string MainWindow::GetFile()
{
    //do something
    return "";
}

void MainWindow::GetSelectedBoard()
{
    int i =  ui->box_selectboard->currentIndex();
}

void MainWindow::GetSelectedLayer()
{
    int i =  ui->box_selectlayer->currentIndex();
}

void MainWindow::SetStatus(string status)
{
    _status = status;
}

void MainWindow::StartModification()
{
    SetStatus(1);
    QString i = QString::fromStdString(_status);
    ui->lbl_status->setText(i);
}

void MainWindow::StopModification()
{
    SetStatus(0);
    QString i = QString::fromStdString(_status);
    ui->lbl_status->setText(i);
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
        SelectMap(_filePath);
        _fileSelectionChanged = false;
    }
}

void MainWindow::SetSelectInput(vector<string> inputs)
{
    for (size_t i = 0; i < inputs.size(); i++)
    {
        QString item = QString::fromStdString(inputs.at(i));
        ui->box_selectboard->addItem(item);
    }
}

void MainWindow::SetSelectLayer()
{
    vector<string> layers ;//= *_c->GetLayers();
    for (size_t i = 0; i < layers.size(); i++)
    {
        QString item = QString::fromStdString(layers.at(i));
        ui->box_selectlayer->addItem(item);
    }
}

void MainWindow::UpdateProgressBar(int percent)
{
    ui->bar_progress->setValue(percent);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete bui;
    delete fui;
}
