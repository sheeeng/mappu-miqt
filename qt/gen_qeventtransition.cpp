#include <QEventTransition>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qeventtransition.h>
#include "gen_qeventtransition.h"
#include "_cgo_export.h"

QEventTransition* QEventTransition_new() {
	return new QEventTransition();
}

QEventTransition* QEventTransition_new2(QObject* object, int typeVal) {
	return new QEventTransition(object, static_cast<QEvent::Type>(typeVal));
}

QEventTransition* QEventTransition_new3(QState* sourceState) {
	return new QEventTransition(sourceState);
}

QEventTransition* QEventTransition_new4(QObject* object, int typeVal, QState* sourceState) {
	return new QEventTransition(object, static_cast<QEvent::Type>(typeVal), sourceState);
}

QMetaObject* QEventTransition_MetaObject(const QEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

void* QEventTransition_Metacast(QEventTransition* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QEventTransition_Tr(const char* s) {
	QString _ret = QEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_TrUtf8(const char* s) {
	QString _ret = QEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QEventTransition_EventSource(const QEventTransition* self) {
	return self->eventSource();
}

void QEventTransition_SetEventSource(QEventTransition* self, QObject* object) {
	self->setEventSource(object);
}

int QEventTransition_EventType(const QEventTransition* self) {
	QEvent::Type _ret = self->eventType();
	return static_cast<int>(_ret);
}

void QEventTransition_SetEventType(QEventTransition* self, int typeVal) {
	self->setEventType(static_cast<QEvent::Type>(typeVal));
}

struct miqt_string QEventTransition_Tr2(const char* s, const char* c) {
	QString _ret = QEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QEventTransition_Delete(QEventTransition* self) {
	delete self;
}

