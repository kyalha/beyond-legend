/****************************************************************************
** Meta object code from reading C++ file 'choixperso.h'
**
** Created: Wed 17. Apr 12:55:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjetTureurePropre/choixperso.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choixperso.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChoixPerso[] = {

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
      12,   11,   11,   11, 0x0a,
      28,   11,   11,   11, 0x0a,
      50,   11,   11,   11, 0x0a,
      72,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChoixPerso[] = {
    "ChoixPerso\0\0retournerMenu()\0"
    "afficherDebutPartie()\0MajImageDescription()\0"
    "verificationPseudo()\0"
};

void ChoixPerso::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChoixPerso *_t = static_cast<ChoixPerso *>(_o);
        switch (_id) {
        case 0: _t->retournerMenu(); break;
        case 1: _t->afficherDebutPartie(); break;
        case 2: _t->MajImageDescription(); break;
        case 3: _t->verificationPseudo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ChoixPerso::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChoixPerso::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChoixPerso,
      qt_meta_data_ChoixPerso, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChoixPerso::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChoixPerso::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChoixPerso::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChoixPerso))
        return static_cast<void*>(const_cast< ChoixPerso*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChoixPerso::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
