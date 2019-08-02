/********************************************************************************
** Form generated from reading UI file 'fileeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
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
        menubar->setGeometry(QRect(0, 0, 476, 22));
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

        QMetaObject::connectSlotsByName(FileEditor);
    } // setupUi

    void retranslateUi(QMainWindow *FileEditor)
    {
        FileEditor->setWindowTitle(QCoreApplication::translate("FileEditor", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("FileEditor", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("FileEditor", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("FileEditor", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("FileEditor", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("FileEditor", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("FileEditor", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_Layer->setText(QCoreApplication::translate("FileEditor", "New Layer", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_Layer->setShortcut(QCoreApplication::translate("FileEditor", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_Key_Binding->setText(QCoreApplication::translate("FileEditor", "New Key Binding", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_Key_Binding->setShortcut(QCoreApplication::translate("FileEditor", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDocumentation->setText(QCoreApplication::translate("FileEditor", "Documentation", nullptr));
#if QT_CONFIG(shortcut)
        actionDocumentation->setShortcut(QCoreApplication::translate("FileEditor", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReturn->setText(QCoreApplication::translate("FileEditor", "Return", nullptr));
#if QT_CONFIG(shortcut)
        actionReturn->setShortcut(QCoreApplication::translate("FileEditor", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionComment->setText(QCoreApplication::translate("FileEditor", "Insert Comment", nullptr));
#if QT_CONFIG(tooltip)
        actionComment->setToolTip(QCoreApplication::translate("FileEditor", "Insert Comment", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionComment->setShortcut(QCoreApplication::translate("FileEditor", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_save->setText(QCoreApplication::translate("FileEditor", "Save", nullptr));
        btn_exit->setText(QCoreApplication::translate("FileEditor", "Exit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("FileEditor", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("FileEditor", "&Edit", nullptr));
        menuCommands->setTitle(QCoreApplication::translate("FileEditor", "&Commands", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("FileEditor", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileEditor: public Ui_FileEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEDITOR_H
