/********************************************************************************
** Form generated from reading UI file 'browsewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSEWINDOW_H
#define UI_BROWSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrowseWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_cancel;
    QPushButton *btn_ok;
    QTreeView *tr_explorer;
    QLabel *lbl_vmap;
    QLabel *lbl_selectedfile;

    void setupUi(QMainWindow *BrowseWindow)
    {
        if (BrowseWindow->objectName().isEmpty())
            BrowseWindow->setObjectName(QString::fromUtf8("BrowseWindow"));
        BrowseWindow->resize(476, 300);
        BrowseWindow->setMinimumSize(QSize(476, 300));
        BrowseWindow->setMaximumSize(QSize(476, 300));
        centralwidget = new QWidget(BrowseWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_cancel = new QPushButton(centralwidget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(380, 150, 89, 25));
        btn_ok = new QPushButton(centralwidget);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(380, 110, 89, 25));
        tr_explorer = new QTreeView(centralwidget);
        tr_explorer->setObjectName(QString::fromUtf8("tr_explorer"));
        tr_explorer->setGeometry(QRect(10, 30, 351, 240));
        lbl_vmap = new QLabel(centralwidget);
        lbl_vmap->setObjectName(QString::fromUtf8("lbl_vmap"));
        lbl_vmap->setGeometry(QRect(10, 6, 190, 17));
        lbl_selectedfile = new QLabel(centralwidget);
        lbl_selectedfile->setObjectName(QString::fromUtf8("lbl_selectedfile"));
        lbl_selectedfile->setGeometry(QRect(10, 277, 351, 17));
        BrowseWindow->setCentralWidget(centralwidget);

        retranslateUi(BrowseWindow);
        QObject::connect(btn_cancel, SIGNAL(pressed()), BrowseWindow, SLOT(CloseWindow()));
        QObject::connect(tr_explorer, SIGNAL(pressed(QModelIndex)), BrowseWindow, SLOT(GetSelected()));
        QObject::connect(btn_ok, SIGNAL(pressed()), BrowseWindow, SLOT(ReturnSelected()));
        QObject::connect(tr_explorer, SIGNAL(doubleClicked(QModelIndex)), BrowseWindow, SLOT(ReturnSelectedAndCloseWindow()));
        QObject::connect(tr_explorer, SIGNAL(activated(QModelIndex)), BrowseWindow, SLOT(ReturnSelectedAndCloseWindow()));

        QMetaObject::connectSlotsByName(BrowseWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BrowseWindow)
    {
        BrowseWindow->setWindowTitle(QApplication::translate("BrowseWindow", "Browse...", nullptr));
        btn_cancel->setText(QApplication::translate("BrowseWindow", "Cancel", nullptr));
        btn_ok->setText(QApplication::translate("BrowseWindow", "Ok", nullptr));
        lbl_vmap->setText(QApplication::translate("BrowseWindow", "Select VMAP File to Load...", nullptr));
        lbl_selectedfile->setText(QApplication::translate("BrowseWindow", "Selected : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowseWindow: public Ui_BrowseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSEWINDOW_H
