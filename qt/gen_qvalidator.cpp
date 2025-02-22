#include <QChildEvent>
#include <QDoubleValidator>
#include <QEvent>
#include <QIntValidator>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegExp>
#include <QRegExpValidator>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QValidator>
#include <qvalidator.h>
#include "gen_qvalidator.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QValidator_Changed(intptr_t);
int miqt_exec_callback_QValidator_Validate(void*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QValidator_Fixup(void*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QValidator_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QValidator_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QValidator_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QValidator_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QValidator_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QValidator_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QValidator_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIntValidator_BottomChanged(intptr_t, int);
void miqt_exec_callback_QIntValidator_TopChanged(intptr_t, int);
int miqt_exec_callback_QIntValidator_Validate(void*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QIntValidator_Fixup(void*, intptr_t, struct miqt_string);
void miqt_exec_callback_QIntValidator_SetRange(void*, intptr_t, int, int);
bool miqt_exec_callback_QIntValidator_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QIntValidator_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIntValidator_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QIntValidator_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QIntValidator_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QIntValidator_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIntValidator_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDoubleValidator_BottomChanged(intptr_t, double);
void miqt_exec_callback_QDoubleValidator_TopChanged(intptr_t, double);
void miqt_exec_callback_QDoubleValidator_DecimalsChanged(intptr_t, int);
void miqt_exec_callback_QDoubleValidator_NotationChanged(intptr_t, int);
int miqt_exec_callback_QDoubleValidator_Validate(void*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QDoubleValidator_SetRange(void*, intptr_t, double, double, int);
void miqt_exec_callback_QDoubleValidator_Fixup(void*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QDoubleValidator_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QDoubleValidator_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDoubleValidator_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDoubleValidator_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDoubleValidator_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDoubleValidator_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDoubleValidator_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRegExpValidator_RegExpChanged(intptr_t, QRegExp*);
int miqt_exec_callback_QRegExpValidator_Validate(void*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QRegExpValidator_Fixup(void*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QRegExpValidator_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QRegExpValidator_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRegExpValidator_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRegExpValidator_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRegExpValidator_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QRegExpValidator_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRegExpValidator_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRegularExpressionValidator_RegularExpressionChanged(intptr_t, QRegularExpression*);
int miqt_exec_callback_QRegularExpressionValidator_Validate(void*, intptr_t, struct miqt_string, int*);
void miqt_exec_callback_QRegularExpressionValidator_Fixup(void*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QRegularExpressionValidator_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QRegularExpressionValidator_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRegularExpressionValidator_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRegularExpressionValidator_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRegularExpressionValidator_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QRegularExpressionValidator_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRegularExpressionValidator_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQValidator final : public QValidator {
public:

	MiqtVirtualQValidator(): QValidator() {};
	MiqtVirtualQValidator(QObject* parent): QValidator(parent) {};

	virtual ~MiqtVirtualQValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& param1, int& param2) const override {
		if (handle__Validate == 0) {
			return (QValidator::State)(0); // Pure virtual, there is no base we can call
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		int* sigval2 = &param2;

		int callback_return_value = miqt_exec_callback_QValidator_Validate(const_cast<MiqtVirtualQValidator*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& param1) const override {
		if (handle__Fixup == 0) {
			QValidator::fixup(param1);
			return;
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;

		miqt_exec_callback_QValidator_Fixup(const_cast<MiqtVirtualQValidator*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string param1) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QValidator::fixup(param1_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QValidator_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QValidator_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QValidator_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QValidator_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QValidator_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QValidator_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QValidator_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QValidator::disconnectNotify(*signal);

	}

};

QValidator* QValidator_new() {
	return new MiqtVirtualQValidator();
}

QValidator* QValidator_new2(QObject* parent) {
	return new MiqtVirtualQValidator(parent);
}

void QValidator_virtbase(QValidator* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QValidator_MetaObject(const QValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QValidator_Metacast(QValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QValidator_Tr(const char* s) {
	QString _ret = QValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValidator_TrUtf8(const char* s) {
	QString _ret = QValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QValidator_SetLocale(QValidator* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QValidator_Locale(const QValidator* self) {
	return new QLocale(self->locale());
}

int QValidator_Validate(const QValidator* self, struct miqt_string param1, int* param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QValidator::State _ret = self->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<int>(_ret);
}

void QValidator_Fixup(const QValidator* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->fixup(param1_QString);
}

void QValidator_Changed(QValidator* self) {
	self->changed();
}

void QValidator_connect_Changed(QValidator* self, intptr_t slot) {
	MiqtVirtualQValidator::connect(self, static_cast<void (QValidator::*)()>(&QValidator::changed), self, [=]() {
		miqt_exec_callback_QValidator_Changed(slot);
	});
}

struct miqt_string QValidator_Tr2(const char* s, const char* c) {
	QString _ret = QValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QValidator_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

bool QValidator_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QValidator_virtualbase_Fixup(const void* self, struct miqt_string param1) {
	( (const MiqtVirtualQValidator*)(self) )->virtualbase_Fixup(param1);
}

bool QValidator_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QValidator_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQValidator*)(self) )->virtualbase_Event(event);
}

bool QValidator_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QValidator_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQValidator*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QValidator_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QValidator_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_TimerEvent(event);
}

bool QValidator_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QValidator_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_ChildEvent(event);
}

bool QValidator_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QValidator_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_CustomEvent(event);
}

bool QValidator_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QValidator_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QValidator_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = dynamic_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QValidator_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQValidator*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QValidator_Delete(QValidator* self) {
	delete self;
}

class MiqtVirtualQIntValidator final : public QIntValidator {
public:

	MiqtVirtualQIntValidator(): QIntValidator() {};
	MiqtVirtualQIntValidator(int bottom, int top): QIntValidator(bottom, top) {};
	MiqtVirtualQIntValidator(QObject* parent): QIntValidator(parent) {};
	MiqtVirtualQIntValidator(int bottom, int top, QObject* parent): QIntValidator(bottom, top, parent) {};

	virtual ~MiqtVirtualQIntValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& param1, int& param2) const override {
		if (handle__Validate == 0) {
			return QIntValidator::validate(param1, param2);
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		int* sigval2 = &param2;

		int callback_return_value = miqt_exec_callback_QIntValidator_Validate(const_cast<MiqtVirtualQIntValidator*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string param1, int* param2) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QValidator::State _ret = QIntValidator::validate(param1_QString, static_cast<int&>(*param2));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& input) const override {
		if (handle__Fixup == 0) {
			QIntValidator::fixup(input);
			return;
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;

		miqt_exec_callback_QIntValidator_Fixup(const_cast<MiqtVirtualQIntValidator*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string input) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QIntValidator::fixup(input_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRange = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRange(int bottom, int top) override {
		if (handle__SetRange == 0) {
			QIntValidator::setRange(bottom, top);
			return;
		}
		
		int sigval1 = bottom;
		int sigval2 = top;

		miqt_exec_callback_QIntValidator_SetRange(this, handle__SetRange, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRange(int bottom, int top) {

		QIntValidator::setRange(static_cast<int>(bottom), static_cast<int>(top));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QIntValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QIntValidator_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QIntValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QIntValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QIntValidator_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QIntValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QIntValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QIntValidator_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QIntValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QIntValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QIntValidator_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QIntValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QIntValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QIntValidator_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QIntValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QIntValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIntValidator_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QIntValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QIntValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIntValidator_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QIntValidator::disconnectNotify(*signal);

	}

};

QIntValidator* QIntValidator_new() {
	return new MiqtVirtualQIntValidator();
}

QIntValidator* QIntValidator_new2(int bottom, int top) {
	return new MiqtVirtualQIntValidator(static_cast<int>(bottom), static_cast<int>(top));
}

QIntValidator* QIntValidator_new3(QObject* parent) {
	return new MiqtVirtualQIntValidator(parent);
}

QIntValidator* QIntValidator_new4(int bottom, int top, QObject* parent) {
	return new MiqtVirtualQIntValidator(static_cast<int>(bottom), static_cast<int>(top), parent);
}

void QIntValidator_virtbase(QIntValidator* src, QValidator** outptr_QValidator) {
	*outptr_QValidator = static_cast<QValidator*>(src);
}

QMetaObject* QIntValidator_MetaObject(const QIntValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIntValidator_Metacast(QIntValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QIntValidator_Tr(const char* s) {
	QString _ret = QIntValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIntValidator_TrUtf8(const char* s) {
	QString _ret = QIntValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QIntValidator_Validate(const QIntValidator* self, struct miqt_string param1, int* param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QValidator::State _ret = self->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<int>(_ret);
}

void QIntValidator_Fixup(const QIntValidator* self, struct miqt_string input) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	self->fixup(input_QString);
}

void QIntValidator_SetBottom(QIntValidator* self, int bottom) {
	self->setBottom(static_cast<int>(bottom));
}

void QIntValidator_SetTop(QIntValidator* self, int top) {
	self->setTop(static_cast<int>(top));
}

void QIntValidator_SetRange(QIntValidator* self, int bottom, int top) {
	self->setRange(static_cast<int>(bottom), static_cast<int>(top));
}

int QIntValidator_Bottom(const QIntValidator* self) {
	return self->bottom();
}

int QIntValidator_Top(const QIntValidator* self) {
	return self->top();
}

void QIntValidator_BottomChanged(QIntValidator* self, int bottom) {
	self->bottomChanged(static_cast<int>(bottom));
}

void QIntValidator_connect_BottomChanged(QIntValidator* self, intptr_t slot) {
	MiqtVirtualQIntValidator::connect(self, static_cast<void (QIntValidator::*)(int)>(&QIntValidator::bottomChanged), self, [=](int bottom) {
		int sigval1 = bottom;
		miqt_exec_callback_QIntValidator_BottomChanged(slot, sigval1);
	});
}

void QIntValidator_TopChanged(QIntValidator* self, int top) {
	self->topChanged(static_cast<int>(top));
}

void QIntValidator_connect_TopChanged(QIntValidator* self, intptr_t slot) {
	MiqtVirtualQIntValidator::connect(self, static_cast<void (QIntValidator::*)(int)>(&QIntValidator::topChanged), self, [=](int top) {
		int sigval1 = top;
		miqt_exec_callback_QIntValidator_TopChanged(slot, sigval1);
	});
}

struct miqt_string QIntValidator_Tr2(const char* s, const char* c) {
	QString _ret = QIntValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIntValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QIntValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIntValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QIntValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIntValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QIntValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIntValidator_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QIntValidator_virtualbase_Validate(const void* self, struct miqt_string param1, int* param2) {
	return ( (const MiqtVirtualQIntValidator*)(self) )->virtualbase_Validate(param1, param2);
}

bool QIntValidator_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QIntValidator_virtualbase_Fixup(const void* self, struct miqt_string input) {
	( (const MiqtVirtualQIntValidator*)(self) )->virtualbase_Fixup(input);
}

bool QIntValidator_override_virtual_SetRange(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRange = slot;
	return true;
}

void QIntValidator_virtualbase_SetRange(void* self, int bottom, int top) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_SetRange(bottom, top);
}

bool QIntValidator_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QIntValidator_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQIntValidator*)(self) )->virtualbase_Event(event);
}

bool QIntValidator_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QIntValidator_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQIntValidator*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QIntValidator_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QIntValidator_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_TimerEvent(event);
}

bool QIntValidator_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QIntValidator_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_ChildEvent(event);
}

bool QIntValidator_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QIntValidator_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_CustomEvent(event);
}

bool QIntValidator_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QIntValidator_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QIntValidator_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIntValidator* self_cast = dynamic_cast<MiqtVirtualQIntValidator*>( (QIntValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QIntValidator_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIntValidator*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QIntValidator_Delete(QIntValidator* self) {
	delete self;
}

class MiqtVirtualQDoubleValidator final : public QDoubleValidator {
public:

	MiqtVirtualQDoubleValidator(): QDoubleValidator() {};
	MiqtVirtualQDoubleValidator(double bottom, double top, int decimals): QDoubleValidator(bottom, top, decimals) {};
	MiqtVirtualQDoubleValidator(QObject* parent): QDoubleValidator(parent) {};
	MiqtVirtualQDoubleValidator(double bottom, double top, int decimals, QObject* parent): QDoubleValidator(bottom, top, decimals, parent) {};

	virtual ~MiqtVirtualQDoubleValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& param1, int& param2) const override {
		if (handle__Validate == 0) {
			return QDoubleValidator::validate(param1, param2);
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		int* sigval2 = &param2;

		int callback_return_value = miqt_exec_callback_QDoubleValidator_Validate(const_cast<MiqtVirtualQDoubleValidator*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string param1, int* param2) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QValidator::State _ret = QDoubleValidator::validate(param1_QString, static_cast<int&>(*param2));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetRange = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRange(double bottom, double top, int decimals) override {
		if (handle__SetRange == 0) {
			QDoubleValidator::setRange(bottom, top, decimals);
			return;
		}
		
		double sigval1 = bottom;
		double sigval2 = top;
		int sigval3 = decimals;

		miqt_exec_callback_QDoubleValidator_SetRange(this, handle__SetRange, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetRange(double bottom, double top, int decimals) {

		QDoubleValidator::setRange(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& param1) const override {
		if (handle__Fixup == 0) {
			QDoubleValidator::fixup(param1);
			return;
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;

		miqt_exec_callback_QDoubleValidator_Fixup(const_cast<MiqtVirtualQDoubleValidator*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string param1) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QDoubleValidator::fixup(param1_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QDoubleValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDoubleValidator_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QDoubleValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QDoubleValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDoubleValidator_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QDoubleValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QDoubleValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDoubleValidator_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QDoubleValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QDoubleValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDoubleValidator_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QDoubleValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QDoubleValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDoubleValidator_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QDoubleValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QDoubleValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDoubleValidator_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QDoubleValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QDoubleValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDoubleValidator_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QDoubleValidator::disconnectNotify(*signal);

	}

};

QDoubleValidator* QDoubleValidator_new() {
	return new MiqtVirtualQDoubleValidator();
}

QDoubleValidator* QDoubleValidator_new2(double bottom, double top, int decimals) {
	return new MiqtVirtualQDoubleValidator(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));
}

QDoubleValidator* QDoubleValidator_new3(QObject* parent) {
	return new MiqtVirtualQDoubleValidator(parent);
}

QDoubleValidator* QDoubleValidator_new4(double bottom, double top, int decimals, QObject* parent) {
	return new MiqtVirtualQDoubleValidator(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals), parent);
}

void QDoubleValidator_virtbase(QDoubleValidator* src, QValidator** outptr_QValidator) {
	*outptr_QValidator = static_cast<QValidator*>(src);
}

QMetaObject* QDoubleValidator_MetaObject(const QDoubleValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDoubleValidator_Metacast(QDoubleValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDoubleValidator_Tr(const char* s) {
	QString _ret = QDoubleValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleValidator_TrUtf8(const char* s) {
	QString _ret = QDoubleValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDoubleValidator_Validate(const QDoubleValidator* self, struct miqt_string param1, int* param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QValidator::State _ret = self->validate(param1_QString, static_cast<int&>(*param2));
	return static_cast<int>(_ret);
}

void QDoubleValidator_SetRange(QDoubleValidator* self, double bottom, double top, int decimals) {
	self->setRange(static_cast<double>(bottom), static_cast<double>(top), static_cast<int>(decimals));
}

void QDoubleValidator_SetBottom(QDoubleValidator* self, double bottom) {
	self->setBottom(static_cast<double>(bottom));
}

void QDoubleValidator_SetTop(QDoubleValidator* self, double top) {
	self->setTop(static_cast<double>(top));
}

void QDoubleValidator_SetDecimals(QDoubleValidator* self, int decimals) {
	self->setDecimals(static_cast<int>(decimals));
}

void QDoubleValidator_SetNotation(QDoubleValidator* self, int notation) {
	self->setNotation(static_cast<QDoubleValidator::Notation>(notation));
}

double QDoubleValidator_Bottom(const QDoubleValidator* self) {
	return self->bottom();
}

double QDoubleValidator_Top(const QDoubleValidator* self) {
	return self->top();
}

int QDoubleValidator_Decimals(const QDoubleValidator* self) {
	return self->decimals();
}

int QDoubleValidator_Notation(const QDoubleValidator* self) {
	QDoubleValidator::Notation _ret = self->notation();
	return static_cast<int>(_ret);
}

void QDoubleValidator_BottomChanged(QDoubleValidator* self, double bottom) {
	self->bottomChanged(static_cast<double>(bottom));
}

void QDoubleValidator_connect_BottomChanged(QDoubleValidator* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::bottomChanged), self, [=](double bottom) {
		double sigval1 = bottom;
		miqt_exec_callback_QDoubleValidator_BottomChanged(slot, sigval1);
	});
}

void QDoubleValidator_TopChanged(QDoubleValidator* self, double top) {
	self->topChanged(static_cast<double>(top));
}

void QDoubleValidator_connect_TopChanged(QDoubleValidator* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(double)>(&QDoubleValidator::topChanged), self, [=](double top) {
		double sigval1 = top;
		miqt_exec_callback_QDoubleValidator_TopChanged(slot, sigval1);
	});
}

void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals) {
	self->decimalsChanged(static_cast<int>(decimals));
}

void QDoubleValidator_connect_DecimalsChanged(QDoubleValidator* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(int)>(&QDoubleValidator::decimalsChanged), self, [=](int decimals) {
		int sigval1 = decimals;
		miqt_exec_callback_QDoubleValidator_DecimalsChanged(slot, sigval1);
	});
}

void QDoubleValidator_NotationChanged(QDoubleValidator* self, int notation) {
	self->notationChanged(static_cast<QDoubleValidator::Notation>(notation));
}

void QDoubleValidator_connect_NotationChanged(QDoubleValidator* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator::connect(self, static_cast<void (QDoubleValidator::*)(QDoubleValidator::Notation)>(&QDoubleValidator::notationChanged), self, [=](QDoubleValidator::Notation notation) {
		QDoubleValidator::Notation notation_ret = notation;
		int sigval1 = static_cast<int>(notation_ret);
		miqt_exec_callback_QDoubleValidator_NotationChanged(slot, sigval1);
	});
}

struct miqt_string QDoubleValidator_Tr2(const char* s, const char* c) {
	QString _ret = QDoubleValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDoubleValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QDoubleValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDoubleValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDoubleValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDoubleValidator_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QDoubleValidator_virtualbase_Validate(const void* self, struct miqt_string param1, int* param2) {
	return ( (const MiqtVirtualQDoubleValidator*)(self) )->virtualbase_Validate(param1, param2);
}

bool QDoubleValidator_override_virtual_SetRange(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetRange = slot;
	return true;
}

void QDoubleValidator_virtualbase_SetRange(void* self, double bottom, double top, int decimals) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_SetRange(bottom, top, decimals);
}

bool QDoubleValidator_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QDoubleValidator_virtualbase_Fixup(const void* self, struct miqt_string param1) {
	( (const MiqtVirtualQDoubleValidator*)(self) )->virtualbase_Fixup(param1);
}

bool QDoubleValidator_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QDoubleValidator_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_Event(event);
}

bool QDoubleValidator_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QDoubleValidator_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QDoubleValidator_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QDoubleValidator_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_TimerEvent(event);
}

bool QDoubleValidator_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QDoubleValidator_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_ChildEvent(event);
}

bool QDoubleValidator_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QDoubleValidator_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_CustomEvent(event);
}

bool QDoubleValidator_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QDoubleValidator_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QDoubleValidator_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDoubleValidator* self_cast = dynamic_cast<MiqtVirtualQDoubleValidator*>( (QDoubleValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QDoubleValidator_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDoubleValidator*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QDoubleValidator_Delete(QDoubleValidator* self) {
	delete self;
}

class MiqtVirtualQRegExpValidator final : public QRegExpValidator {
public:

	MiqtVirtualQRegExpValidator(): QRegExpValidator() {};
	MiqtVirtualQRegExpValidator(const QRegExp& rx): QRegExpValidator(rx) {};
	MiqtVirtualQRegExpValidator(QObject* parent): QRegExpValidator(parent) {};
	MiqtVirtualQRegExpValidator(const QRegExp& rx, QObject* parent): QRegExpValidator(rx, parent) {};

	virtual ~MiqtVirtualQRegExpValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__Validate == 0) {
			return QRegExpValidator::validate(input, pos);
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;
		int* sigval2 = &pos;

		int callback_return_value = miqt_exec_callback_QRegExpValidator_Validate(const_cast<MiqtVirtualQRegExpValidator*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QRegExpValidator::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& param1) const override {
		if (handle__Fixup == 0) {
			QRegExpValidator::fixup(param1);
			return;
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;

		miqt_exec_callback_QRegExpValidator_Fixup(const_cast<MiqtVirtualQRegExpValidator*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string param1) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QRegExpValidator::fixup(param1_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QRegExpValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QRegExpValidator_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QRegExpValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QRegExpValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRegExpValidator_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QRegExpValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QRegExpValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRegExpValidator_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QRegExpValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QRegExpValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRegExpValidator_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QRegExpValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QRegExpValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRegExpValidator_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QRegExpValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QRegExpValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRegExpValidator_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QRegExpValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QRegExpValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRegExpValidator_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QRegExpValidator::disconnectNotify(*signal);

	}

};

QRegExpValidator* QRegExpValidator_new() {
	return new MiqtVirtualQRegExpValidator();
}

QRegExpValidator* QRegExpValidator_new2(QRegExp* rx) {
	return new MiqtVirtualQRegExpValidator(*rx);
}

QRegExpValidator* QRegExpValidator_new3(QObject* parent) {
	return new MiqtVirtualQRegExpValidator(parent);
}

QRegExpValidator* QRegExpValidator_new4(QRegExp* rx, QObject* parent) {
	return new MiqtVirtualQRegExpValidator(*rx, parent);
}

void QRegExpValidator_virtbase(QRegExpValidator* src, QValidator** outptr_QValidator) {
	*outptr_QValidator = static_cast<QValidator*>(src);
}

QMetaObject* QRegExpValidator_MetaObject(const QRegExpValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRegExpValidator_Metacast(QRegExpValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRegExpValidator_Tr(const char* s) {
	QString _ret = QRegExpValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExpValidator_TrUtf8(const char* s) {
	QString _ret = QRegExpValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegExpValidator_Validate(const QRegExpValidator* self, struct miqt_string input, int* pos) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

void QRegExpValidator_SetRegExp(QRegExpValidator* self, QRegExp* rx) {
	self->setRegExp(*rx);
}

QRegExp* QRegExpValidator_RegExp(const QRegExpValidator* self) {
	const QRegExp& _ret = self->regExp();
	// Cast returned reference into pointer
	return const_cast<QRegExp*>(&_ret);
}

void QRegExpValidator_RegExpChanged(QRegExpValidator* self, QRegExp* regExp) {
	self->regExpChanged(*regExp);
}

void QRegExpValidator_connect_RegExpChanged(QRegExpValidator* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator::connect(self, static_cast<void (QRegExpValidator::*)(const QRegExp&)>(&QRegExpValidator::regExpChanged), self, [=](const QRegExp& regExp) {
		const QRegExp& regExp_ret = regExp;
		// Cast returned reference into pointer
		QRegExp* sigval1 = const_cast<QRegExp*>(&regExp_ret);
		miqt_exec_callback_QRegExpValidator_RegExpChanged(slot, sigval1);
	});
}

struct miqt_string QRegExpValidator_Tr2(const char* s, const char* c) {
	QString _ret = QRegExpValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExpValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRegExpValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExpValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QRegExpValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegExpValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRegExpValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRegExpValidator_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QRegExpValidator_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQRegExpValidator*)(self) )->virtualbase_Validate(input, pos);
}

bool QRegExpValidator_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QRegExpValidator_virtualbase_Fixup(const void* self, struct miqt_string param1) {
	( (const MiqtVirtualQRegExpValidator*)(self) )->virtualbase_Fixup(param1);
}

bool QRegExpValidator_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QRegExpValidator_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_Event(event);
}

bool QRegExpValidator_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QRegExpValidator_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QRegExpValidator_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QRegExpValidator_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_TimerEvent(event);
}

bool QRegExpValidator_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QRegExpValidator_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_ChildEvent(event);
}

bool QRegExpValidator_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QRegExpValidator_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_CustomEvent(event);
}

bool QRegExpValidator_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QRegExpValidator_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QRegExpValidator_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRegExpValidator* self_cast = dynamic_cast<MiqtVirtualQRegExpValidator*>( (QRegExpValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QRegExpValidator_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRegExpValidator*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QRegExpValidator_Delete(QRegExpValidator* self) {
	delete self;
}

class MiqtVirtualQRegularExpressionValidator final : public QRegularExpressionValidator {
public:

	MiqtVirtualQRegularExpressionValidator(): QRegularExpressionValidator() {};
	MiqtVirtualQRegularExpressionValidator(const QRegularExpression& re): QRegularExpressionValidator(re) {};
	MiqtVirtualQRegularExpressionValidator(QObject* parent): QRegularExpressionValidator(parent) {};
	MiqtVirtualQRegularExpressionValidator(const QRegularExpression& re, QObject* parent): QRegularExpressionValidator(re, parent) {};

	virtual ~MiqtVirtualQRegularExpressionValidator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Validate = 0;

	// Subclass to allow providing a Go implementation
	virtual QValidator::State validate(QString& input, int& pos) const override {
		if (handle__Validate == 0) {
			return QRegularExpressionValidator::validate(input, pos);
		}
		
		QString input_ret = input;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray input_b = input_ret.toUtf8();
		struct miqt_string input_ms;
		input_ms.len = input_b.length();
		input_ms.data = static_cast<char*>(malloc(input_ms.len));
		memcpy(input_ms.data, input_b.data(), input_ms.len);
		struct miqt_string sigval1 = input_ms;
		int* sigval2 = &pos;

		int callback_return_value = miqt_exec_callback_QRegularExpressionValidator_Validate(const_cast<MiqtVirtualQRegularExpressionValidator*>(this), handle__Validate, sigval1, sigval2);

		return static_cast<QValidator::State>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Validate(struct miqt_string input, int* pos) const {
		QString input_QString = QString::fromUtf8(input.data, input.len);

		QValidator::State _ret = QRegularExpressionValidator::validate(input_QString, static_cast<int&>(*pos));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& param1) const override {
		if (handle__Fixup == 0) {
			QRegularExpressionValidator::fixup(param1);
			return;
		}
		
		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;

		miqt_exec_callback_QRegularExpressionValidator_Fixup(const_cast<MiqtVirtualQRegularExpressionValidator*>(this), handle__Fixup, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Fixup(struct miqt_string param1) const {
		QString param1_QString = QString::fromUtf8(param1.data, param1.len);

		QRegularExpressionValidator::fixup(param1_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QRegularExpressionValidator::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QRegularExpressionValidator_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QRegularExpressionValidator::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QRegularExpressionValidator::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRegularExpressionValidator_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QRegularExpressionValidator::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QRegularExpressionValidator::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRegularExpressionValidator_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QRegularExpressionValidator::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QRegularExpressionValidator::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRegularExpressionValidator_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QRegularExpressionValidator::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QRegularExpressionValidator::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRegularExpressionValidator_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QRegularExpressionValidator::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QRegularExpressionValidator::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRegularExpressionValidator_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QRegularExpressionValidator::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QRegularExpressionValidator::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRegularExpressionValidator_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QRegularExpressionValidator::disconnectNotify(*signal);

	}

};

QRegularExpressionValidator* QRegularExpressionValidator_new() {
	return new MiqtVirtualQRegularExpressionValidator();
}

QRegularExpressionValidator* QRegularExpressionValidator_new2(QRegularExpression* re) {
	return new MiqtVirtualQRegularExpressionValidator(*re);
}

QRegularExpressionValidator* QRegularExpressionValidator_new3(QObject* parent) {
	return new MiqtVirtualQRegularExpressionValidator(parent);
}

QRegularExpressionValidator* QRegularExpressionValidator_new4(QRegularExpression* re, QObject* parent) {
	return new MiqtVirtualQRegularExpressionValidator(*re, parent);
}

void QRegularExpressionValidator_virtbase(QRegularExpressionValidator* src, QValidator** outptr_QValidator) {
	*outptr_QValidator = static_cast<QValidator*>(src);
}

QMetaObject* QRegularExpressionValidator_MetaObject(const QRegularExpressionValidator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRegularExpressionValidator_Metacast(QRegularExpressionValidator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRegularExpressionValidator_Tr(const char* s) {
	QString _ret = QRegularExpressionValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpressionValidator_TrUtf8(const char* s) {
	QString _ret = QRegularExpressionValidator::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegularExpressionValidator_Validate(const QRegularExpressionValidator* self, struct miqt_string input, int* pos) {
	QString input_QString = QString::fromUtf8(input.data, input.len);
	QValidator::State _ret = self->validate(input_QString, static_cast<int&>(*pos));
	return static_cast<int>(_ret);
}

QRegularExpression* QRegularExpressionValidator_RegularExpression(const QRegularExpressionValidator* self) {
	return new QRegularExpression(self->regularExpression());
}

void QRegularExpressionValidator_SetRegularExpression(QRegularExpressionValidator* self, QRegularExpression* re) {
	self->setRegularExpression(*re);
}

void QRegularExpressionValidator_RegularExpressionChanged(QRegularExpressionValidator* self, QRegularExpression* re) {
	self->regularExpressionChanged(*re);
}

void QRegularExpressionValidator_connect_RegularExpressionChanged(QRegularExpressionValidator* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator::connect(self, static_cast<void (QRegularExpressionValidator::*)(const QRegularExpression&)>(&QRegularExpressionValidator::regularExpressionChanged), self, [=](const QRegularExpression& re) {
		const QRegularExpression& re_ret = re;
		// Cast returned reference into pointer
		QRegularExpression* sigval1 = const_cast<QRegularExpression*>(&re_ret);
		miqt_exec_callback_QRegularExpressionValidator_RegularExpressionChanged(slot, sigval1);
	});
}

struct miqt_string QRegularExpressionValidator_Tr2(const char* s, const char* c) {
	QString _ret = QRegularExpressionValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpressionValidator_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRegularExpressionValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpressionValidator_TrUtf82(const char* s, const char* c) {
	QString _ret = QRegularExpressionValidator::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpressionValidator_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRegularExpressionValidator::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRegularExpressionValidator_override_virtual_Validate(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Validate = slot;
	return true;
}

int QRegularExpressionValidator_virtualbase_Validate(const void* self, struct miqt_string input, int* pos) {
	return ( (const MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_Validate(input, pos);
}

bool QRegularExpressionValidator_override_virtual_Fixup(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Fixup = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_Fixup(const void* self, struct miqt_string param1) {
	( (const MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_Fixup(param1);
}

bool QRegularExpressionValidator_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QRegularExpressionValidator_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_Event(event);
}

bool QRegularExpressionValidator_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QRegularExpressionValidator_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QRegularExpressionValidator_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_TimerEvent(event);
}

bool QRegularExpressionValidator_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_ChildEvent(event);
}

bool QRegularExpressionValidator_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_CustomEvent(event);
}

bool QRegularExpressionValidator_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QRegularExpressionValidator_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRegularExpressionValidator* self_cast = dynamic_cast<MiqtVirtualQRegularExpressionValidator*>( (QRegularExpressionValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QRegularExpressionValidator_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRegularExpressionValidator*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self) {
	delete self;
}

