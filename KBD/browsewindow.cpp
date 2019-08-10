#include "browsewindow.h"
#include "ui_browsewindow.h"

BrowseWindow::BrowseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BrowseWindow)
{
    ui->setupUi(this);

    LoadExplorer();
}

void BrowseWindow::LoadExplorer()
{
    model = new QFileSystemModel();
    model->setRootPath(QDir::homePath());
    QStringList filter;
    filter << "*.vmap";
    model->setNameFilters(filter);
    model->setNameFilterDisables(false);
    ui->tr_explorer->setModel(model);
    ui->tr_explorer->setRootIndex(model->index(QDir::homePath()));
    ui->tr_explorer->hideColumn(1);
    ui->tr_explorer->setSortingEnabled(true);
    ui->tr_explorer->sortByColumn(0, Qt::SortOrder::AscendingOrder);
    ui->tr_explorer->update();
}

void BrowseWindow::closeEvent(QCloseEvent *)
{
    CloseWindow();
}

void BrowseWindow::CloseWindow()
{
    this->hide();
    parentWidget()->show();
}

void BrowseWindow::GetSelected()
{
    QModelIndex index = ui->tr_explorer->currentIndex();

    QString text = ui->tr_explorer->model()->data(index).toString();
    if (text.contains(".vmap"))
    {
        ui->lbl_selectedfile->setText("Selected : " + text);
    }
}

void BrowseWindow::ReturnSelected()
{
    QModelIndex index = ui->tr_explorer->currentIndex();

    QString text = ui->tr_explorer->model()->data(index).toString();
    QString path = model->filePath(index);

    if (text.contains(".vmap"))
    {
        _file = text.toStdString();
        _filePath = path.toStdString();

        CloseWindow();
    }
}

void BrowseWindow::ReturnSelectedAndCloseWindow()
{
    ReturnSelected();
}

string BrowseWindow::GetFile()
{
    return _file;
}

string BrowseWindow::GetFilePath()
{
    return _filePath;
}

BrowseWindow::~BrowseWindow()
{
    delete ui;
}
