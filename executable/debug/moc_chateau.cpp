/****************************************************************************
** Meta object code from reading C++ file 'chateau.h'
**
** Created: Wed 17. Apr 12:56:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjetTureurePropre/chateau.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chateau.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Chateau[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      22,    8,    8,    8, 0x0a,
      30,    8,    8,    8, 0x0a,
      51,   45,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Chateau[] = {
    "Chateau\0\0trouverMot()\0texte()\0"
    "allerCaverne()\0event\0keyPressEvent(QKeyEvent*)\0"
};

void Chateau::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Chateau *_t = static_cast<Chateau *>(_o);
        switch (_id) {
        case 0: _t->trouverMot(); break;
        case 1: _t->texte(); break;
        case 2: _t->allerCaverne(); break;
        case 3: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Chateau::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Chateau::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Chateau,
      qt_meta_data_Chateau, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Chateau::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Chateau::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Chateau::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Chateau))
        return static_cast<void*>(const_cast< Chateau*>(this));
    return QWidget::qt_metacast(_clname);
}

int Chateau::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
