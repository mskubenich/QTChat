/****************************************************************************
** Meta object code from reading C++ file 'myserver.h'
**
** Created: Tue Jun 3 19:50:09 2014
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyServer[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      23,   10,    9,    9, 0x05,
      58,   51,    9,    9, 0x25,

 // slots: signature, parameters, type, tag, flags
      93,   79,    9,    9, 0x0a,
     138,  131,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyServer[] = {
    "MyServer\0\0string,color\0"
    "addLogToGui(QString,QColor)\0string\0"
    "addLogToGui(QString)\0message,users\0"
    "onMessageFromGui(QString,QStringList)\0"
    "client\0onRemoveUser(MyClient*)\0"
};

const QMetaObject MyServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_MyServer,
      qt_meta_data_MyServer, 0 }
};

const QMetaObject *MyServer::metaObject() const
{
    return &staticMetaObject;
}

void *MyServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyServer))
        return static_cast<void*>(const_cast< MyServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int MyServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addLogToGui((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 1: addLogToGui((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: onMessageFromGui((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 3: onRemoveUser((*reinterpret_cast< MyClient*(*)>(_a[1]))); break;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MyServer::addLogToGui(QString _t1, QColor _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, 1, _a);
}
QT_END_MOC_NAMESPACE
