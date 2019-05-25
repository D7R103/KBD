#ifndef CONFIRMDIALOG_H
#define CONFIRMDIALOG_H

#include <QDialog>

namespace Ui {
class ConfirmDialog;
}

class ConfirmDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmDialog(QWidget *parent = nullptr);
    ~ConfirmDialog();

    bool ExitRequest();

private slots:
    void Accept();
    void Reject();

private:
    Ui::ConfirmDialog *ui;
    bool _exitRequested;
};

#endif // CONFIRMDIALOG_H
