#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, Control * c, Sender * s) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->bar_progress->hide();

    bui = new BrowseWindow(this);
    fui = new FileEditor(this);
    _c = c;
    _s = s;

    _filePath = "";
}

string MainWindow::GetFile()
{
    //do something
    return "";
}

void MainWindow::GetSelectedBoard()
{
    int i =  ui->box_selectboard->currentIndex();
    _c->SelectedInput(i);
}

void MainWindow::GetSelectedLayer()
{
    int i =  ui->box_selectlayer->currentIndex();
    _c->SelectedLayer(i);
}

void MainWindow::StartModification()
{
    _c->SetStatus(1);
    QString i = QString::fromStdString(_s->GetStrData());
    ui->lbl_status->setText(i);
}

void MainWindow::StopModification()
{
    _c->SetStatus(0);
    QString i = QString::fromStdString(_s->GetStrData());
    ui->lbl_status->setText(i);
}

void MainWindow::OpenBrowseWindow()
{
    this->hide();
    bui->show();
}

void MainWindow::OpenEditWindow()
{
    this->hide();
    fui->SetPath(0);
    fui->show();
}

void MainWindow::showEvent(QShowEvent *)
{
    _filePath = bui->GetFile();
    ui->lbl_fileloaded->setText("File : " + QString::fromStdString(_filePath));
    //_c->SelectMap(_filePath);
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
    vector<string> layers = *_c->GetLayers();
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

void MainWindow::UpdateProgressBar(double percent)
{
    ui->bar_progress->setValue(nearbyint(percent * 100));
}

void MainWindow::UpdateProgressStatus(string status)
{
    QString item = QString::fromStdString(status);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete bui;
    delete fui;
}
