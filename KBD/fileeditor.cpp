#include "fileeditor.h"
#include "ui_fileeditor.h"

FileEditor::FileEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileEditor)
{
    ui->setupUi(this);
    QPlainTextEdit::LineWrapMode mode;
    mode = QPlainTextEdit::LineWrapMode::NoWrap;
    ui->txt_edit->setLineWrapMode(mode);
    ui->txt_edit->setTabChangesFocus(false);
    ui->txt_edit->setTabStopWidth(16);
}

void FileEditor::SetPath(int p, string path)
{
    ui->txt_edit->setPlainText("");
    if (p != 0)
    {
        Load(path);
    }
}

void FileEditor::Load(string path)
{
    // read file
    if (path != "")
    {
        //
    }
    // convert to QString
    QString text;
    // insert into the box
    ui->txt_edit->setPlainText(text);
}

void FileEditor::closeEvent(QCloseEvent *)
{
    CloseWindow();
}

void FileEditor::CloseWindow()
{
    if (!_saveState && ui->txt_edit->toPlainText().size() != 0)
    {
        //ask to save
        //prevent focus on this
        //open dialog
        cd = new ConfirmDialog();
        cd->exec();

        if (cd->ExitRequest())
        {
            this->hide();
            parentWidget()->show();
        }

        cd->~ConfirmDialog();
        cd = nullptr;
    }
    else
    {
        this->hide();
        parentWidget()->show();
    }
}

void FileEditor::InsertComment()
{
    //get current line
    QTextCursor cur = ui->txt_edit->textCursor();
    //goto beginning of line
    ui->txt_edit->moveCursor(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
    //insert "# "
    QString text = ui->txt_edit->toPlainText();
    ui->txt_edit->setPlainText("# " + text);
    //nav back to position
    ui->txt_edit->setTextCursor(cur);
}

FileEditor::~FileEditor()
{
    delete ui;
    delete cd;
}
