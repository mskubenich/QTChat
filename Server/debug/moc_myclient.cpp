/****************************************************************************
** Meta object code from reading C++ file 'myclient.h'
**
** Created: Tue Jun 3 19:50:10 2014
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyClient[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      15,   10,    9,    9, 0x05,
      37,   10,    9,    9, 0x05,
      71,   64,    9,    9, 0x05,
     112,   93,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     154,    9,    9,    9, 0x08,
     166,    9,    9,    9, 0x08,
     181,    9,    9,    9, 0x08,
     207,  195,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyClient[] = {
    "MyClient\0\0name\0addUserToGui(QString)\0"
    "removeUserFromGui(QString)\0client\0"
    "removeUser(MyClient*)\0message,from,users\0"
    "messageToGui(QString,QString,QStringList)\0"
    "onConnect()\0onDisconnect()\0onReadyRead()\0"
    "socketError\0onError(QAbstractSocket::SocketError)\0"
};

const QMetaObject MyClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyClient,
      qt_meta_data_MyClient, 0 }
};

const QMetaObject *MyClient::metaObject() const
{
    return &staticMetaObject;
}

void *MyClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyClient))
        return static_cast<void*>(const_cast< MyClient*>(this));
    return QObject::qt_metacast(_clname);
}

int MyClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addUserToGui((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: removeUserFromGui((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: removeUser((*reinterpret_cast< MyClient*(*)>(_a[1]))); break;
        case 3: messageToGui((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 4: onConnect(); break;
        case 5: onDisconnect(); break;
        case 6: onReadyRead(); break;
        case 7: onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MyClient::addUserToGui(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyClient::removeUserFromGui(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyClient::removeUser(MyClient * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyClient::messageToGui(QString _t1, QString _t2, const QStringList & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
