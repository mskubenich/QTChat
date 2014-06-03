/********************************************************************************
** Form generated from reading ui file 'dialog.ui'
**
** Created: Tue Jun 3 19:58:56 2014
**      by: Qt User Interface Compiler version 4.4.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *lwLog;
    QListWidget *lwUsers;
    QPlainTextEdit *pteMessage;
    QVBoxLayout *verticalLayout;
    QLineEdit *leHost;
    QSpinBox *sbPort;
    QLineEdit *leName;
    QPushButton *pbConnect;
    QPushButton *pbDisconnect;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbSend;
    QCheckBox *cbToAll;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Dialog)
    {
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName(QString::fromUtf8("Dialog"));
    Dialog->resize(529, 387);
    gridLayout = new QGridLayout(Dialog);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    lwLog = new QListWidget(Dialog);
    lwLog->setObjectName(QString::fromUtf8("lwLog"));

    gridLayout->addWidget(lwLog, 0, 0, 1, 1);

    lwUsers = new QListWidget(Dialog);
    lwUsers->setObjectName(QString::fromUtf8("lwUsers"));
    lwUsers->setSelectionMode(QAbstractItemView::MultiSelection);
    lwUsers->setSortingEnabled(true);

    gridLayout->addWidget(lwUsers, 0, 1, 1, 5);

    pteMessage = new QPlainTextEdit(Dialog);
    pteMessage->setObjectName(QString::fromUtf8("pteMessage"));

    gridLayout->addWidget(pteMessage, 1, 0, 1, 1);

    verticalLayout = new QVBoxLayout();
    verticalLayout->setSpacing(6);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    leHost = new QLineEdit(Dialog);
    leHost->setObjectName(QString::fromUtf8("leHost"));

    verticalLayout->addWidget(leHost);

    sbPort = new QSpinBox(Dialog);
    sbPort->setObjectName(QString::fromUtf8("sbPort"));
    sbPort->setMaximum(65536);
    sbPort->setValue(1234);

    verticalLayout->addWidget(sbPort);

    leName = new QLineEdit(Dialog);
    leName->setObjectName(QString::fromUtf8("leName"));

    verticalLayout->addWidget(leName);

    pbConnect = new QPushButton(Dialog);
    pbConnect->setObjectName(QString::fromUtf8("pbConnect"));

    verticalLayout->addWidget(pbConnect);

    pbDisconnect = new QPushButton(Dialog);
    pbDisconnect->setObjectName(QString::fromUtf8("pbDisconnect"));
    pbDisconnect->setEnabled(false);

    verticalLayout->addWidget(pbDisconnect);


    gridLayout->addLayout(verticalLayout, 1, 4, 1, 1);

    verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setSpacing(6);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    pbSend = new QPushButton(Dialog);
    pbSend->setObjectName(QString::fromUtf8("pbSend"));
    pbSend->setEnabled(false);

    verticalLayout_2->addWidget(pbSend);

    cbToAll = new QCheckBox(Dialog);
    cbToAll->setObjectName(QString::fromUtf8("cbToAll"));
    cbToAll->setChecked(true);

    verticalLayout_2->addWidget(cbToAll);

    verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_2->addItem(verticalSpacer);


    gridLayout->addLayout(verticalLayout_2, 1, 3, 1, 1);


    retranslateUi(Dialog);

    QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
    Dialog->setWindowTitle(QApplication::translate("Dialog", "Client", 0, QApplication::UnicodeUTF8));
    leHost->setText(QApplication::translate("Dialog", "127.0.0.1", 0, QApplication::UnicodeUTF8));
    leName->setText(QApplication::translate("Dialog", "MyName", 0, QApplication::UnicodeUTF8));
    pbConnect->setText(QApplication::translate("Dialog", "Connect", 0, QApplication::UnicodeUTF8));
    pbDisconnect->setText(QApplication::translate("Dialog", "Disconnect", 0, QApplication::UnicodeUTF8));
    pbSend->setText(QApplication::translate("Dialog", "Send", 0, QApplication::UnicodeUTF8));
    cbToAll->setText(QApplication::translate("Dialog", "To ALL", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
