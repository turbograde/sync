/****************************************************************************
** Meta object code from reading C++ file 'submissionview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TurboGrade/ui/submissionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'submissionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SubmissionView_t {
    QByteArrayData data[11];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubmissionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubmissionView_t qt_meta_stringdata_SubmissionView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SubmissionView"
QT_MOC_LITERAL(1, 15, 13), // "refresh_cards"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "show_assignments"
QT_MOC_LITERAL(4, 47, 16), // "show_submissions"
QT_MOC_LITERAL(5, 64, 10), // "assignment"
QT_MOC_LITERAL(6, 75, 17), // "import_submission"
QT_MOC_LITERAL(7, 93, 10), // "export_csv"
QT_MOC_LITERAL(8, 104, 14), // "export_all_pdf"
QT_MOC_LITERAL(9, 119, 17), // "delete_submission"
QT_MOC_LITERAL(10, 137, 10) // "submission"

    },
    "SubmissionView\0refresh_cards\0\0"
    "show_assignments\0show_submissions\0"
    "assignment\0import_submission\0export_csv\0"
    "export_all_pdf\0delete_submission\0"
    "submission"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubmissionView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x0a /* Public */,
       9,    1,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   10,

       0        // eod
};

void SubmissionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubmissionView *_t = static_cast<SubmissionView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh_cards(); break;
        case 1: _t->show_assignments(); break;
        case 2: _t->show_submissions((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->import_submission(); break;
        case 4: _t->export_csv(); break;
        case 5: _t->export_all_pdf(); break;
        case 6: _t->delete_submission((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SubmissionView::staticMetaObject = {
    { &ListView::staticMetaObject, qt_meta_stringdata_SubmissionView.data,
      qt_meta_data_SubmissionView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubmissionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubmissionView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubmissionView.stringdata0))
        return static_cast<void*>(const_cast< SubmissionView*>(this));
    return ListView::qt_metacast(_clname);
}

int SubmissionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
