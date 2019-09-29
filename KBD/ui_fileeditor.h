/********************************************************************************
** Form generated from reading UI file 'fileeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEDITOR_H
#define UI_FILEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileEditor
{
public:
    QAction *actionSave;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionNew_Layer;
    QAction *actionNew_Key_Binding;
    QAction *actionDocumentation;
    QAction *actionReturn;
    QAction *actionComment;
    QWidget *centralwidget;
    QPlainTextEdit *txt_edit;
    QPushButton *btn_save;
    QPushButton *btn_exit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuCommands;
    QMenu *menu_Help;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FileEditor)
    {
        if (FileEditor->objectName().isEmpty())
            FileEditor->setObjectName(QString::fromUtf8("FileEditor"));
        FileEditor->resize(476, 347);
        FileEditor->setMinimumSize(QSize(476, 347));
        FileEditor->setMaximumSize(QSize(476, 347));
        actionSave = new QAction(FileEditor);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionUndo = new QAction(FileEditor);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(FileEditor);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionNew_Layer = new QAction(FileEditor);
        actionNew_Layer->setObjectName(QString::fromUtf8("actionNew_Layer"));
        actionNew_Key_Binding = new QAction(FileEditor);
        actionNew_Key_Binding->setObjectName(QString::fromUtf8("actionNew_Key_Binding"));
        actionDocumentation = new QAction(FileEditor);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionReturn = new QAction(FileEditor);
        actionReturn->setObjectName(QString::fromUtf8("actionReturn"));
        actionComment = new QAction(FileEditor);
        actionComment->setObjectName(QString::fromUtf8("actionComment"));
        centralwidget = new QWidget(FileEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txt_edit = new QPlainTextEdit(centralwidget);
        txt_edit->setObjectName(QString::fromUtf8("txt_edit"));
        txt_edit->setGeometry(QRect(10, 40, 456, 260));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Mono"));
        txt_edit->setFont(font);
        btn_save = new QPushButton(centralwidget);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setGeometry(QRect(375, 10, 89, 25));
        btn_exit = new QPushButton(centralwidget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(10, 10, 89, 25));
        FileEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FileEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 476, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuCommands = new QMenu(menubar);
        menuCommands->setObjectName(QString::fromUtf8("menuCommands"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        FileEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(FileEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FileEditor->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuCommands->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menuFile->addAction(actionSave);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuCommands->addAction(actionNew_Layer);
        menuCommands->addAction(actionNew_Key_Binding);
        menuCommands->addAction(actionComment);
        menu_Help->addAction(actionDocumentation);
        menu_Help->addAction(actionReturn);

        retranslateUi(FileEditor);
        QObject::connect(btn_exit, SIGNAL(pressed()), FileEditor, SLOT(CloseWindow()));
        QObject::connect(actionReturn, SIGNAL(triggered()), FileEditor, SLOT(CloseWindow()));
        QObject::connect(actionComment, SIGNAL(triggered()), FileEditor, SLOT(InsertComment()));
        QObject::connect(actionNew_Layer, SIGNAL(triggered()), FileEditor, SLOT(InsertLayer()));
        QObject::connect(actionNew_Key_Binding, SIGNAL(triggered()), FileEditor, SLOT(InsertKeyBinding()));
        QObject::connect(btn_save, SIGNAL(pressed()), FileEditor, SLOT(SaveFile()));
        QObject::connect(actionSave, SIGNAL(triggered()), FileEditor, SLOT(SaveFile()));

        QMetaObject::connectSlotsByName(FileEditor);
    } // setupUi

    void retranslateUi(QMainWindow *FileEditor)
    {
        FileEditor->setWindowTitle(QApplication::translate("FileEditor", "MainWindow", nullptr));
        actionSave->setText(QApplication::translate("FileEditor", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("FileEditor", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("FileEditor", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("FileEditor", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("FileEditor", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("FileEditor", "Ctrl+Shift+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionNew_Layer->setText(QApplication::translate("FileEditor", "New Layer", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew_Layer->setShortcut(QApplication::translate("FileEditor", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionNew_Key_Binding->setText(QApplication::translate("FileEditor", "New Key Binding", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew_Key_Binding->setShortcut(QApplication::translate("FileEditor", "Ctrl+K", nullptr));
#endif // QT_NO_SHORTCUT
        actionDocumentation->setText(QApplication::translate("FileEditor", "Documentation", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDocumentation->setShortcut(QApplication::translate("FileEditor", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionReturn->setText(QApplication::translate("FileEditor", "Return", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReturn->setShortcut(QApplication::translate("FileEditor", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionComment->setText(QApplication::translate("FileEditor", "Insert Comment", nullptr));
#ifndef QT_NO_TOOLTIP
        actionComment->setToolTip(QApplication::translate("FileEditor", "Insert Comment", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionComment->setShortcut(QApplication::translate("FileEditor", "Ctrl+Shift+C", nullptr));
#endif // QT_NO_SHORTCUT
        btn_save->setText(QApplication::translate("FileEditor", "Save", nullptr));
        btn_exit->setText(QApplication::translate("FileEditor", "Exit", nullptr));
        menuFile->setTitle(QApplication::translate("FileEditor", "&File", nullptr));
        menuEdit->setTitle(QApplication::translate("FileEditor", "&Edit", nullptr));
        menuCommands->setTitle(QApplication::translate("FileEditor", "&Commands", nullptr));
        menu_Help->setTitle(QApplication::translate("FileEditor", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileEditor: public Ui_FileEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEDITOR_H
