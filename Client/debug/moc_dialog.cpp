/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Tue Jun 3 19:58:59 2014
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

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      25,    7,    7,    7, 0x08,
      45,    7,    7,    7, 0x08,
      74,   62,    7,    7, 0x08,
     122,    7,    7,    7, 0x08,
     145,    7,    7,    7, 0x08,
     171,    7,    7,    7, 0x08,
     192,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0onSokConnected()\0onSokDisconnected()\0"
    "onSokReadyRead()\0socketError\0"
    "onSokDisplayError(QAbstractSocket::SocketError)\0"
    "on_pbConnect_clicked()\0on_pbDisconnect_clicked()\0"
    "on_cbToAll_clicked()\0on_pbSend_clicked()\0"
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
        case 0: onSokConnected(); break;
        case 1: onSokDisconnected(); break;
        case 2: onSokReadyRead(); break;
        case 3: onSokDisplayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: on_pbConnect_clicked(); break;
        case 5: on_pbDisconnect_clicked(); break;
        case 6: on_cbToAll_clicked(); break;
        case 7: on_pbSend_clicked(); break;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
