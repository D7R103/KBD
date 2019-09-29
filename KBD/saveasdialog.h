#ifndef SAVEASDIALOG_H
#define SAVEASDIALOG_H

#include <QWidget>

namespace Ui {
class SaveAsDialog;
}

class SaveAsDialog : public QWidget
{
    Q_OBJECT

public:
    explicit SaveAsDialog(QWidget *parent = nullptr);
    ~SaveAsDialog();

private:
    Ui::SaveAsDialog *ui;
};

#endif // SAVEASDIALOG_H
