/****************************************************************************
** Meta object code from reading C++ file 'foret.h'
**
** Created: Wed 17. Apr 12:55:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjetTureurePropre/foret.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foret.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Foret[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,    7,    6,    6, 0x0a,
      39,    6,    6,    6, 0x0a,
      52,    6,    6,    6, 0x0a,
      66,    6,    6,    6, 0x0a,
      80,    6,    6,    6, 0x0a,
      94,    6,    6,    6, 0x0a,
     110,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Foret[] = {
    "Foret\0\0event\0keyPressEvent(QKeyEvent*)\0"
    "ForetTexte()\0ForetTexte2()\0ForetTexte3()\0"
    "ForetTexte4()\0verifierTexte()\0"
    "allerChateau()\0"
};

void Foret::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Foret *_t = static_cast<Foret *>(_o);
        switch (_id) {
        case 0: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: _t->ForetTexte(); break;
        case 2: _t->ForetTexte2(); break;
        case 3: _t->ForetTexte3(); break;
        case 4: _t->ForetTexte4(); break;
        case 5: _t->verifierTexte(); break;
        case 6: _t->allerChateau(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Foret::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Foret::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Foret,
      qt_meta_data_Foret, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Foret::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Foret::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Foret::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Foret))
        return static_cast<void*>(const_cast< Foret*>(this));
    return QWidget::qt_metacast(_clname);
}

int Foret::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
