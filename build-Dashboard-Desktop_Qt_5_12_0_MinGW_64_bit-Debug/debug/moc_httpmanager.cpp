/****************************************************************************
** Meta object code from reading C++ file 'httpmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dashboard/httpmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HTTPManager_t {
    QByteArrayData data[23];
    char stringdata0[376];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTTPManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTTPManager_t qt_meta_stringdata_HTTPManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HTTPManager"
QT_MOC_LITERAL(1, 12, 10), // "ImageReady"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "QPixmap*"
QT_MOC_LITERAL(4, 33, 5), // "image"
QT_MOC_LITERAL(5, 39, 16), // "WeatherJsonReady"
QT_MOC_LITERAL(6, 56, 12), // "QJsonObject*"
QT_MOC_LITERAL(7, 69, 4), // "json"
QT_MOC_LITERAL(8, 74, 22), // "WeatherHourlyJsonReady"
QT_MOC_LITERAL(9, 97, 9), // "IconReady"
QT_MOC_LITERAL(10, 107, 4), // "icon"
QT_MOC_LITERAL(11, 112, 18), // "IconThreeHourReady"
QT_MOC_LITERAL(12, 131, 16), // "IconSixHourReady"
QT_MOC_LITERAL(13, 148, 17), // "IconNineHourReady"
QT_MOC_LITERAL(14, 166, 22), // "ImageDownloadedHandler"
QT_MOC_LITERAL(15, 189, 14), // "QNetworkReply*"
QT_MOC_LITERAL(16, 204, 5), // "reply"
QT_MOC_LITERAL(17, 210, 24), // "WeatherDownloadedHandler"
QT_MOC_LITERAL(18, 235, 21), // "IconDownloadedHandler"
QT_MOC_LITERAL(19, 257, 30), // "IconThreeHourDownloadedHandler"
QT_MOC_LITERAL(20, 288, 28), // "IconSixHourDownloadedHandler"
QT_MOC_LITERAL(21, 317, 29), // "IconNineHourDownloadedHandler"
QT_MOC_LITERAL(22, 347, 28) // "WeatherHourlyDownloadHandler"

    },
    "HTTPManager\0ImageReady\0\0QPixmap*\0image\0"
    "WeatherJsonReady\0QJsonObject*\0json\0"
    "WeatherHourlyJsonReady\0IconReady\0icon\0"
    "IconThreeHourReady\0IconSixHourReady\0"
    "IconNineHourReady\0ImageDownloadedHandler\0"
    "QNetworkReply*\0reply\0WeatherDownloadedHandler\0"
    "IconDownloadedHandler\0"
    "IconThreeHourDownloadedHandler\0"
    "IconSixHourDownloadedHandler\0"
    "IconNineHourDownloadedHandler\0"
    "WeatherHourlyDownloadHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTTPManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       8,    1,   90,    2, 0x06 /* Public */,
       9,    1,   93,    2, 0x06 /* Public */,
      11,    1,   96,    2, 0x06 /* Public */,
      12,    1,   99,    2, 0x06 /* Public */,
      13,    1,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  105,    2, 0x0a /* Public */,
      17,    1,  108,    2, 0x0a /* Public */,
      18,    1,  111,    2, 0x0a /* Public */,
      19,    1,  114,    2, 0x0a /* Public */,
      20,    1,  117,    2, 0x0a /* Public */,
      21,    1,  120,    2, 0x0a /* Public */,
      22,    1,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 3,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void HTTPManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HTTPManager *_t = static_cast<HTTPManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ImageReady((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 1: _t->WeatherJsonReady((*reinterpret_cast< QJsonObject*(*)>(_a[1]))); break;
        case 2: _t->WeatherHourlyJsonReady((*reinterpret_cast< QJsonObject*(*)>(_a[1]))); break;
        case 3: _t->IconReady((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 4: _t->IconThreeHourReady((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 5: _t->IconSixHourReady((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 6: _t->IconNineHourReady((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 7: _t->ImageDownloadedHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->WeatherDownloadedHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->IconDownloadedHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->IconThreeHourDownloadedHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->IconSixHourDownloadedHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->IconNineHourDownloadedHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->WeatherHourlyDownloadHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HTTPManager::*)(QPixmap * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTTPManager::ImageReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HTTPManager::*)(QJsonObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTTPManager::WeatherJsonReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HTTPManager::*)(QJsonObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTTPManager::WeatherHourlyJsonReady)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HTTPManager::*)(QPixmap * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTTPManager::IconReady)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HTTPManager::*)(QPixmap * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTTPManager::IconThreeHourReady)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HTTPManager::*)(QPixmap * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTTPManager::IconSixHourReady)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HTTPManager::*)(QPixmap * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTTPManager::IconNineHourReady)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HTTPManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HTTPManager.data,
    qt_meta_data_HTTPManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HTTPManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTPManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HTTPManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void HTTPManager::ImageReady(QPixmap * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HTTPManager::WeatherJsonReady(QJsonObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HTTPManager::WeatherHourlyJsonReady(QJsonObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HTTPManager::IconReady(QPixmap * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HTTPManager::IconThreeHourReady(QPixmap * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HTTPManager::IconSixHourReady(QPixmap * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HTTPManager::IconNineHourReady(QPixmap * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
