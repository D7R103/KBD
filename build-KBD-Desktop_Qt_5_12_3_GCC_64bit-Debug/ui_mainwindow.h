/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Map_File;
    QAction *actionStart_Modification;
    QAction *actionStop_Modification;
    QAction *actionDocumentation;
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionOpen;
    QAction *actionEdit_Current_Map_File;
    QWidget *centralWidget;
    QProgressBar *bar_progress;
    QLabel *lbl_selectfile;
    QLabel *lbl_selectboard;
    QComboBox *box_selectboard;
    QPushButton *btn_selectfile;
    QLabel *lbl_systemstatus;
    QLabel *lbl_status;
    QComboBox *box_selectlayer;
    QLabel *lbl_selectlayer;
    QLabel *lbl_fileloaded;
    QMenuBar *menuBar;
    QMenu *menuEdit;
    QMenu *menuActions;
    QMenu *menuFile;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(476, 347);
        MainWindow->setMinimumSize(QSize(476, 347));
        MainWindow->setMaximumSize(QSize(476, 347));
        actionNew_Map_File = new QAction(MainWindow);
        actionNew_Map_File->setObjectName(QString::fromUtf8("actionNew_Map_File"));
        actionStart_Modification = new QAction(MainWindow);
        actionStart_Modification->setObjectName(QString::fromUtf8("actionStart_Modification"));
        actionStop_Modification = new QAction(MainWindow);
        actionStop_Modification->setObjectName(QString::fromUtf8("actionStop_Modification"));
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionEdit_Current_Map_File = new QAction(MainWindow);
        actionEdit_Current_Map_File->setObjectName(QString::fromUtf8("actionEdit_Current_Map_File"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        bar_progress = new QProgressBar(centralWidget);
        bar_progress->setObjectName(QString::fromUtf8("bar_progress"));
        bar_progress->setGeometry(QRect(3, 260, 470, 23));
        bar_progress->setValue(0);
        lbl_selectfile = new QLabel(centralWidget);
        lbl_selectfile->setObjectName(QString::fromUtf8("lbl_selectfile"));
        lbl_selectfile->setGeometry(QRect(11, 80, 110, 17));
        lbl_selectboard = new QLabel(centralWidget);
        lbl_selectboard->setObjectName(QString::fromUtf8("lbl_selectboard"));
        lbl_selectboard->setGeometry(QRect(11, 20, 180, 17));
        box_selectboard = new QComboBox(centralWidget);
        box_selectboard->setObjectName(QString::fromUtf8("box_selectboard"));
        box_selectboard->setGeometry(QRect(10, 40, 183, 25));
        box_selectboard->setMouseTracking(false);
        btn_selectfile = new QPushButton(centralWidget);
        btn_selectfile->setObjectName(QString::fromUtf8("btn_selectfile"));
        btn_selectfile->setGeometry(QRect(10, 100, 104, 25));
        btn_selectfile->setCursor(QCursor(Qt::PointingHandCursor));
        lbl_systemstatus = new QLabel(centralWidget);
        lbl_systemstatus->setObjectName(QString::fromUtf8("lbl_systemstatus"));
        lbl_systemstatus->setGeometry(QRect(303, 20, 149, 17));
        lbl_status = new QLabel(centralWidget);
        lbl_status->setObjectName(QString::fromUtf8("lbl_status"));
        lbl_status->setGeometry(QRect(303, 50, 76, 17));
        box_selectlayer = new QComboBox(centralWidget);
        box_selectlayer->setObjectName(QString::fromUtf8("box_selectlayer"));
        box_selectlayer->setGeometry(QRect(300, 120, 160, 25));
        box_selectlayer->setMouseTracking(false);
        lbl_selectlayer = new QLabel(centralWidget);
        lbl_selectlayer->setObjectName(QString::fromUtf8("lbl_selectlayer"));
        lbl_selectlayer->setGeometry(QRect(302, 100, 159, 17));
        lbl_fileloaded = new QLabel(centralWidget);
        lbl_fileloaded->setObjectName(QString::fromUtf8("lbl_fileloaded"));
        lbl_fileloaded->setGeometry(QRect(10, 130, 111, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 476, 23));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuActions = new QMenu(menuBar);
        menuActions->setObjectName(QString::fromUtf8("menuActions"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuActions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuEdit->addAction(actionNew_Map_File);
        menuEdit->addAction(actionEdit_Current_Map_File);
        menuActions->addAction(actionStart_Modification);
        menuActions->addAction(actionStop_Modification);
        menuFile->addAction(actionOpen);
        menuHelp->addAction(actionDocumentation);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(actionStart_Modification, SIGNAL(triggered()), MainWindow, SLOT(StartModification()));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionStop_Modification, SIGNAL(triggered()), MainWindow, SLOT(StopModification()));
        QObject::connect(box_selectboard, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(GetSelectedBoard()));
        QObject::connect(box_selectlayer, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(GetSelectedLayer()));
        QObject::connect(btn_selectfile, SIGNAL(clicked()), MainWindow, SLOT(OpenBrowseWindow()));
        QObject::connect(actionOpen, SIGNAL(triggered()), MainWindow, SLOT(OpenBrowseWindow()));
        QObject::connect(actionNew_Map_File, SIGNAL(triggered()), MainWindow, SLOT(OpenEditWindow()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Keyboard Input System", nullptr));
        actionNew_Map_File->setText(QApplication::translate("MainWindow", "New Map File", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew_Map_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionStart_Modification->setText(QApplication::translate("MainWindow", "Start Modification", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStart_Modification->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionStop_Modification->setText(QApplication::translate("MainWindow", "Stop Modification", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStop_Modification->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionDocumentation->setText(QApplication::translate("MainWindow", "Documentation", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDocumentation->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionEdit_Current_Map_File->setText(QApplication::translate("MainWindow", "Edit Current Map File", nullptr));
        lbl_selectfile->setText(QApplication::translate("MainWindow", "Select Map File", nullptr));
        lbl_selectboard->setText(QApplication::translate("MainWindow", "Select Board to Alter Input", nullptr));
        btn_selectfile->setText(QApplication::translate("MainWindow", "Browse...", nullptr));
        lbl_systemstatus->setText(QApplication::translate("MainWindow", "System status :", nullptr));
        lbl_status->setText(QApplication::translate("MainWindow", "Stopped", nullptr));
        lbl_selectlayer->setText(QApplication::translate("MainWindow", "Select Layer", nullptr));
        lbl_fileloaded->setText(QString());
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", nullptr));
        menuActions->setTitle(QApplication::translate("MainWindow", "&Actions", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
