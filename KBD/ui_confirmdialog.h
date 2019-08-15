/********************************************************************************
** Form generated from reading UI file 'confirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMDIALOG_H
#define UI_CONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ConfirmDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ConfirmDialog)
    {
        if (ConfirmDialog->objectName().isEmpty())
            ConfirmDialog->setObjectName(QString::fromUtf8("ConfirmDialog"));
        ConfirmDialog->resize(400, 197);
        buttonBox = new QDialogButtonBox(ConfirmDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 150, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ConfirmDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 210, 17));
        label_2 = new QLabel(ConfirmDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(98, 50, 190, 17));

        retranslateUi(ConfirmDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfirmDialog, SLOT(Accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfirmDialog, SLOT(Reject()));

        QMetaObject::connectSlotsByName(ConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfirmDialog)
    {
        ConfirmDialog->setWindowTitle(QApplication::translate("ConfirmDialog", "Exit Without Saving?", nullptr));
        label->setText(QApplication::translate("ConfirmDialog", "Are you sure you want to exit?", nullptr));
        label_2->setText(QApplication::translate("ConfirmDialog", "(Changes will not be saved)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmDialog: public Ui_ConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMDIALOG_H
