/****************************************************************************
** Meta object code from reading C++ file 'RenderWidget.h'
**
** Created: Wed Mar 28 21:35:52 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "RenderWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_RenderWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_RenderWidget[] = {
    "RenderWidget\0"
};

const QMetaObject RenderWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_RenderWidget,
      qt_meta_data_RenderWidget, 0 }
};

const QMetaObject *RenderWidget::metaObject() const
{
    return &staticMetaObject;
}

void *RenderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RenderWidget))
	return static_cast<void*>(const_cast<RenderWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int RenderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}