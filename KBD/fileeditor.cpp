#include "fileeditor.h"
#include "ui_fileeditor.h"

FileEditor::FileEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileEditor)
{
    ui->setupUi(this);
    QPlainTextEdit::LineWrapMode mode;
    mode = QPlainTextEdit::LineWrapMode::NoWrap;
    QFont font("Courier");
    font.setStyleHint(QFont::Monospace);

    QPalette palette = ui->txt_edit->palette();
    palette.setColor(QPalette::Base, Qt::black);
    palette.setColor(QPalette::Text, Qt::lightGray);

    ui->txt_edit->setFont(font);
    ui->txt_edit->setPalette(palette);
    ui->txt_edit->setLineWrapMode(mode);
    ui->txt_edit->setTabChangesFocus(false);
    ui->txt_edit->setTabStopDistance(24);

    text_f = ui->txt_edit->currentCharFormat();

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
    else
    {
        _path = "";
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
            SaveFile();
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

void FileEditor::SaveFile()
{
    _fileChanged = true;
    //write changes to file
    string data = ui->txt_edit->toPlainText().toStdString();
    //write to file...
    ofstream file;

    if (_path != "")
    {
        _fileChanged = true;
        file.open(_path);
    }
    else
    {
        sa = new SaveAsDialog();
        sa->exec();
        string filename = sa->GetFileName();
        string path = WRITEDIR + "/" + filename + ".vmap";

        ofstream file(path);
        file << data << endl << std::flush;
        file.close();

        sa->~SaveAsDialog();
        sa = nullptr;
    }

    file << data << endl << std::flush;
    file.close();
    _saveState = true;
}

void FileEditor::InsertComment()
{
    //get current line
    QTextCursor cur = ui->txt_edit->textCursor();
    //goto beginning of line
    ui->txt_edit->moveCursor(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
    //insert "# "
    ui->txt_edit->insertPlainText("# ");
    //nav back to position
    ui->txt_edit->setTextCursor(cur);
}

void FileEditor::InsertLayer()
{
    //find immidiate '</layer>'
    //paste in layer info
}

void FileEditor::InsertKeyBinding()
{
    //find immidiate '}' at col == 0
    //paste in key info

    /* may add some builder for keys */
}

FileEditor::~FileEditor()
{
    delete ui;
    delete cd;
    delete sa;
}
