/********************************************************************************
** Form generated from reading ui file 'dialog.ui'
**
** Created: Tue Jun 3 19:49:07 2014
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListWidget *lwLog;
    QListWidget *lwUsers;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbStartStop;
    QLineEdit *leHost;
    QLineEdit *lePort;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbSend;
    QCheckBox *cbToAll;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *pteMessage;

    void setupUi(QDialog *Dialog)
    {
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName(QString::fromUtf8("Dialog"));
    Dialog->resize(549, 320);
    verticalLayout = new QVBoxLayout(Dialog);
    verticalLayout->setSpacing(6);
    verticalLayout->setMargin(11);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    splitter = new QSplitter(Dialog);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setOrientation(Qt::Horizontal);
    lwLog = new QListWidget(splitter);
    lwLog->setObjectName(QString::fromUtf8("lwLog"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(lwLog->sizePolicy().hasHeightForWidth());
    lwLog->setSizePolicy(sizePolicy);
    lwLog->setSelectionRectVisible(false);
    splitter->addWidget(lwLog);
    lwUsers = new QListWidget(splitter);
    lwUsers->setObjectName(QString::fromUtf8("lwUsers"));
    QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(lwUsers->sizePolicy().hasHeightForWidth());
    lwUsers->setSizePolicy(sizePolicy1);
    lwUsers->setSelectionMode(QAbstractItemView::MultiSelection);
    lwUsers->setSortingEnabled(true);
    splitter->addWidget(lwUsers);

    verticalLayout->addWidget(splitter);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(6);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    pbStartStop = new QPushButton(Dialog);
    pbStartStop->setObjectName(QString::fromUtf8("pbStartStop"));
    pbStartStop->setCheckable(true);
    pbStartStop->setChecked(false);

    horizontalLayout->addWidget(pbStartStop);

    leHost = new QLineEdit(Dialog);
    leHost->setObjectName(QString::fromUtf8("leHost"));

    horizontalLayout->addWidget(leHost);

    lePort = new QLineEdit(Dialog);
    lePort->setObjectName(QString::fromUtf8("lePort"));

    horizontalLayout->addWidget(lePort);

    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer);

    pbSend = new QPushButton(Dialog);
    pbSend->setObjectName(QString::fromUtf8("pbSend"));

    horizontalLayout->addWidget(pbSend);

    cbToAll = new QCheckBox(Dialog);
    cbToAll->setObjectName(QString::fromUtf8("cbToAll"));
    cbToAll->setChecked(true);
    cbToAll->setTristate(false);

    horizontalLayout->addWidget(cbToAll);


    verticalLayout->addLayout(horizontalLayout);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setSpacing(6);
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    pteMessage = new QPlainTextEdit(Dialog);
    pteMessage->setObjectName(QString::fromUtf8("pteMessage"));

    horizontalLayout_2->addWidget(pteMessage);


    verticalLayout->addLayout(horizontalLayout_2);


    retranslateUi(Dialog);

    QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
    Dialog->setWindowTitle(QApplication::translate("Dialog", "Lab2 server", 0, QApplication::UnicodeUTF8));
    pbStartStop->setText(QApplication::translate("Dialog", "Stop server", 0, QApplication::UnicodeUTF8));
    leHost->setText(QApplication::translate("Dialog", "127.0.0.1", 0, QApplication::UnicodeUTF8));
    lePort->setText(QApplication::translate("Dialog", "1234", 0, QApplication::UnicodeUTF8));
    pbSend->setText(QApplication::translate("Dialog", "Send To All", 0, QApplication::UnicodeUTF8));
    cbToAll->setText(QApplication::translate("Dialog", "To All", 0, QApplication::UnicodeUTF8));
    cbToAll->setShortcut(QString());
    pteMessage->setPlainText(QString());
    Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
