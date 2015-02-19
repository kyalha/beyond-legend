/****************************************************************************
** Meta object code from reading C++ file 'caverne.h'
**
** Created: Wed 17. Apr 12:56:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjetTureurePropre/caverne.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caverne.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Caverne[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      24,    8,    8,    8, 0x0a,
      40,    8,    8,    8, 0x0a,
      57,    8,    8,    8, 0x0a,
      73,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Caverne[] = {
    "Caverne\0\0caverneTexte()\0caverneTexte2()\0"
    "caverneTexte21()\0caverneTexte3()\0"
    "caverneTexte31()\0"
};

void Caverne::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Caverne *_t = static_cast<Caverne *>(_o);
        switch (_id) {
        case 0: _t->caverneTexte(); break;
        case 1: _t->caverneTexte2(); break;
        case 2: _t->caverneTexte21(); break;
        case 3: _t->caverneTexte3(); break;
        case 4: _t->caverneTexte31(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Caverne::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Caverne::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Caverne,
      qt_meta_data_Caverne, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Caverne::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Caverne::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Caverne::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Caverne))
        return static_cast<void*>(const_cast< Caverne*>(this));
    return QWidget::qt_metacast(_clname);
}

int Caverne::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
