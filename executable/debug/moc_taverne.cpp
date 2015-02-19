/****************************************************************************
** Meta object code from reading C++ file 'taverne.h'
**
** Created: Wed 17. Apr 12:55:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjetTureurePropre/taverne.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taverne.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Taverne[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,    9,    8,    8, 0x0a,
      41,    8,    8,    8, 0x0a,
      56,    8,    8,    8, 0x0a,
      72,    8,    8,    8, 0x0a,
      89,    8,    8,    8, 0x0a,
     100,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Taverne[] = {
    "Taverne\0\0event\0keyPressEvent(QKeyEvent*)\0"
    "TaverneTexte()\0TaverneTexte2()\0"
    "TaverneTexte21()\0sonBiere()\0allerForet()\0"
};

void Taverne::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Taverne *_t = static_cast<Taverne *>(_o);
        switch (_id) {
        case 0: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: _t->TaverneTexte(); break;
        case 2: _t->TaverneTexte2(); break;
        case 3: _t->TaverneTexte21(); break;
        case 4: _t->sonBiere(); break;
        case 5: _t->allerForet(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Taverne::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Taverne::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Taverne,
      qt_meta_data_Taverne, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Taverne::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Taverne::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Taverne::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Taverne))
        return static_cast<void*>(const_cast< Taverne*>(this));
    return QWidget::qt_metacast(_clname);
}

int Taverne::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
