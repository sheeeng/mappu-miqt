#include <QAbstractState>
#include <QAbstractTransition>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSignalTransition>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qstate.h>
#include "gen_qstate.h"
#include "_cgo_export.h"

QState* QState_new() {
	return new QState();
}

QState* QState_new2(int childMode) {
	return new QState(static_cast<QState::ChildMode>(childMode));
}

QState* QState_new3(QState* parent) {
	return new QState(parent);
}

QState* QState_new4(int childMode, QState* parent) {
	return new QState(static_cast<QState::ChildMode>(childMode), parent);
}

QMetaObject* QState_MetaObject(const QState* self) {
	return (QMetaObject*) self->metaObject();
}

void* QState_Metacast(QState* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QState_Tr(const char* s) {
	QString _ret = QState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_TrUtf8(const char* s) {
	QString _ret = QState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractState* QState_ErrorState(const QState* self) {
	return self->errorState();
}

void QState_SetErrorState(QState* self, QAbstractState* state) {
	self->setErrorState(state);
}

void QState_AddTransition(QState* self, QAbstractTransition* transition) {
	self->addTransition(transition);
}

QSignalTransition* QState_AddTransition2(QState* self, QObject* sender, const char* signal, QAbstractState* target) {
	return self->addTransition(sender, signal, target);
}

QAbstractTransition* QState_AddTransitionWithTarget(QState* self, QAbstractState* target) {
	return self->addTransition(target);
}

void QState_RemoveTransition(QState* self, QAbstractTransition* transition) {
	self->removeTransition(transition);
}

struct miqt_array QState_Transitions(const QState* self) {
	QList<QAbstractTransition *> _ret = self->transitions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractTransition** _arr = static_cast<QAbstractTransition**>(malloc(sizeof(QAbstractTransition*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAbstractState* QState_InitialState(const QState* self) {
	return self->initialState();
}

void QState_SetInitialState(QState* self, QAbstractState* state) {
	self->setInitialState(state);
}

int QState_ChildMode(const QState* self) {
	QState::ChildMode _ret = self->childMode();
	return static_cast<int>(_ret);
}

void QState_SetChildMode(QState* self, int mode) {
	self->setChildMode(static_cast<QState::ChildMode>(mode));
}

void QState_AssignProperty(QState* self, QObject* object, const char* name, QVariant* value) {
	self->assignProperty(object, name, *value);
}

struct miqt_string QState_Tr2(const char* s, const char* c) {
	QString _ret = QState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_Tr3(const char* s, const char* c, int n) {
	QString _ret = QState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_TrUtf82(const char* s, const char* c) {
	QString _ret = QState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QState_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QState_Delete(QState* self) {
	delete self;
}

