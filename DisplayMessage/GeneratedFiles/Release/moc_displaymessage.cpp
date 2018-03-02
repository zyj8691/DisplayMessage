/****************************************************************************
** Meta object code from reading C++ file 'displaymessage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../displaymessage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displaymessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DisplayMessage_t {
    QByteArrayData data[7];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisplayMessage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisplayMessage_t qt_meta_stringdata_DisplayMessage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DisplayMessage"
QT_MOC_LITERAL(1, 15, 26), // "on_openCloudButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 26), // "on_openTableButton_clicked"
QT_MOC_LITERAL(4, 70, 23), // "on_selectButton_clicked"
QT_MOC_LITERAL(5, 94, 29), // "on_selectCenterButton_clicked"
QT_MOC_LITERAL(6, 124, 30) // "on_displayCenterButton_clicked"

    },
    "DisplayMessage\0on_openCloudButton_clicked\0"
    "\0on_openTableButton_clicked\0"
    "on_selectButton_clicked\0"
    "on_selectCenterButton_clicked\0"
    "on_displayCenterButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayMessage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DisplayMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DisplayMessage *_t = static_cast<DisplayMessage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openCloudButton_clicked(); break;
        case 1: _t->on_openTableButton_clicked(); break;
        case 2: _t->on_selectButton_clicked(); break;
        case 3: _t->on_selectCenterButton_clicked(); break;
        case 4: _t->on_displayCenterButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DisplayMessage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DisplayMessage.data,
      qt_meta_data_DisplayMessage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DisplayMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayMessage.stringdata0))
        return static_cast<void*>(const_cast< DisplayMessage*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DisplayMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
