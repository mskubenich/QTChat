/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Tue Jun 3 19:50:07 2014
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      22,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   58,    7,    7, 0x0a,
      87,   58,    7,    7, 0x0a,
     135,  116,    7,    7, 0x0a,
     192,  179,    7,    7, 0x0a,
     222,    7,    7,    7, 0x08,
     242,    7,    7,    7, 0x08,
     271,  263,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0message,users\0"
    "messageFromGui(QString,QStringList)\0"
    "name\0onAddUserToGui(QString)\0"
    "onRemoveUserFromGui(QString)\0"
    "message,from,users\0"
    "onMessageToGui(QString,QString,QStringList)\0"
    "string,color\0onAddLogToGui(QString,QColor)\0"
    "on_pbSend_clicked()\0on_cbToAll_clicked()\0"
    "checked\0on_pbStartStop_toggled(bool)\0"
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, 0 }
};

const QMetaObject *Dialog::metaObject() const
{
    return &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messageFromGui((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: onAddUserToGui((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: onRemoveUserFromGui((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: onMessageToGui((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 4: onAddLogToGui((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 5: on_pbSend_clicked(); break;
        case 6: on_cbToAll_clicked(); break;
        case 7: on_pbStartStop_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Dialog::messageFromGui(QString _t1, const QStringList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
