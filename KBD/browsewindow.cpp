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
    QFileSystemModel * model = new QFileSystemModel();
    model->setRootPath(QDir::homePath());
    QStringList filter;
    filter << "*.vmap";
    model->setNameFilters(filter);
    model->setNameFilterDisables(false);
    ui->tr_explorer->setModel(model);
    ui->tr_explorer->setRootIndex(model->index(QDir::homePath()));
    ui->tr_explorer->hideColumn(1);
    ui->tr_explorer->update();
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
