/****************************************************************************
** Meta object code from reading C++ file 'criterionguidedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TurboGrade/ui/criterionguidedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'criterionguidedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CriterionGuideDialog_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CriterionGuideDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CriterionGuideDialog_t qt_meta_stringdata_CriterionGuideDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CriterionGuideDialog"
QT_MOC_LITERAL(1, 21, 6), // "submit"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "on_ok_btn_clicked"
QT_MOC_LITERAL(4, 47, 21), // "on_cancel_btn_clicked"
QT_MOC_LITERAL(5, 69, 25), // "on_row_count_valueChanged"
QT_MOC_LITERAL(6, 95, 5) // "value"

    },
    "CriterionGuideDialog\0submit\0\0"
    "on_ok_btn_clicked\0on_cancel_btn_clicked\0"
    "on_row_count_valueChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CriterionGuideDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void CriterionGuideDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CriterionGuideDialog *_t = static_cast<CriterionGuideDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->submit(); break;
        case 1: _t->on_ok_btn_clicked(); break;
        case 2: _t->on_cancel_btn_clicked(); break;
        case 3: _t->on_row_count_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CriterionGuideDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CriterionGuideDialog::submit)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CriterionGuideDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CriterionGuideDialog.data,
      qt_meta_data_CriterionGuideDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CriterionGuideDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CriterionGuideDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CriterionGuideDialog.stringdata0))
        return static_cast<void*>(const_cast< CriterionGuideDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CriterionGuideDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CriterionGuideDialog::submit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
