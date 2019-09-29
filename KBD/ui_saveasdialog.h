/********************************************************************************
** Form generated from reading UI file 'saveasdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEASDIALOG_H
#define UI_SAVEASDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveAsDialog
{
public:
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QLineEdit *txt_file;
    QLabel *label;

    void setupUi(QWidget *SaveAsDialog)
    {
        if (SaveAsDialog->objectName().isEmpty())
            SaveAsDialog->setObjectName(QString::fromUtf8("SaveAsDialog"));
        SaveAsDialog->resize(400, 165);
        btn_ok = new QPushButton(SaveAsDialog);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(310, 120, 80, 26));
        btn_cancel = new QPushButton(SaveAsDialog);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(20, 120, 80, 26));
        txt_file = new QLineEdit(SaveAsDialog);
        txt_file->setObjectName(QString::fromUtf8("txt_file"));
        txt_file->setGeometry(QRect(60, 70, 291, 26));
        label = new QLabel(SaveAsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 131, 18));

        retranslateUi(SaveAsDialog);
        QObject::connect(btn_ok, SIGNAL(clicked()), SaveAsDialog, SLOT(SubmitName()));
        QObject::connect(btn_cancel, SIGNAL(clicked()), SaveAsDialog, SLOT(CloseWindow()));

        QMetaObject::connectSlotsByName(SaveAsDialog);
    } // setupUi

    void retranslateUi(QWidget *SaveAsDialog)
    {
        SaveAsDialog->setWindowTitle(QApplication::translate("SaveAsDialog", "Form", nullptr));
        btn_ok->setText(QApplication::translate("SaveAsDialog", "OK", nullptr));
        btn_cancel->setText(QApplication::translate("SaveAsDialog", "Cancel", nullptr));
        label->setText(QApplication::translate("SaveAsDialog", "Enter File Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveAsDialog: public Ui_SaveAsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEASDIALOG_H
