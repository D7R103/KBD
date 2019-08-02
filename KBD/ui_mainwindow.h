/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
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
#include <QtWidgets/QStatusBar>
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
    QStatusBar *statusBar;

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
        menuBar->setGeometry(QRect(0, 0, 476, 22));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuActions = new QMenu(menuBar);
        menuActions->setObjectName(QString::fromUtf8("menuActions"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setStatusBar(statusBar);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Keyboard Input System", nullptr));
        actionNew_Map_File->setText(QCoreApplication::translate("MainWindow", "New Map File", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_Map_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStart_Modification->setText(QCoreApplication::translate("MainWindow", "Start Modification", nullptr));
#if QT_CONFIG(shortcut)
        actionStart_Modification->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStop_Modification->setText(QCoreApplication::translate("MainWindow", "Stop Modification", nullptr));
#if QT_CONFIG(shortcut)
        actionStop_Modification->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "Documentation", nullptr));
#if QT_CONFIG(shortcut)
        actionDocumentation->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdit_Current_Map_File->setText(QCoreApplication::translate("MainWindow", "Edit Current Map File", nullptr));
        lbl_selectfile->setText(QCoreApplication::translate("MainWindow", "Select Map File", nullptr));
        lbl_selectboard->setText(QCoreApplication::translate("MainWindow", "Select Board to Alter Input", nullptr));
        btn_selectfile->setText(QCoreApplication::translate("MainWindow", "Browse...", nullptr));
        lbl_systemstatus->setText(QCoreApplication::translate("MainWindow", "System status :", nullptr));
        lbl_status->setText(QCoreApplication::translate("MainWindow", "Stopped", nullptr));
        lbl_selectlayer->setText(QCoreApplication::translate("MainWindow", "Select Layer", nullptr));
        lbl_fileloaded->setText(QString());
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menuActions->setTitle(QCoreApplication::translate("MainWindow", "&Actions", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H