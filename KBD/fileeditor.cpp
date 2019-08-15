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

    _saveState = _fileChanged = false;
    _path = "";
}

void FileEditor::SetPath(int p, string path)
{
    ui->txt_edit->setPlainText("");
    if (p != 0)
    {
        _path = path;
        Load(path);
    }
}

bool FileEditor::FileChanged()
{
    return _fileChanged;
}

void FileEditor::Load(string path)
{
    // read file
    if (path != "")
    {
        ifstream file(path, ifstream::in|ifstream::binary);

        string contents;
        for (string line; getline(file, line);)
        {
            contents += line + "\n";
        }

        QString text = QString::fromStdString(contents);
        // insert into the box
        ui->txt_edit->setPlainText(text);

        _saveState = true;
    }

    //else => new file...
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
        else
        {
            //write changes to file
            string data = ui->txt_edit->toPlainText().toStdString();
            //write to file...
            if (_path != "")
            {
                _fileChanged = true;
            }
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
