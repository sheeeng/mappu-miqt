#include <QChildEvent>
#include <QEvent>
#include <QIconEngine>
#include <QIconEnginePlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qiconengineplugin.h>
#include "gen_qiconengineplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

QIconEngine* miqt_exec_callback_QIconEnginePlugin_Create(void*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QIconEnginePlugin_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QIconEnginePlugin_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIconEnginePlugin_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QIconEnginePlugin_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QIconEnginePlugin_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QIconEnginePlugin_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIconEnginePlugin_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQIconEnginePlugin final : public QIconEnginePlugin {
public:

	MiqtVirtualQIconEnginePlugin(): QIconEnginePlugin() {};
	MiqtVirtualQIconEnginePlugin(QObject* parent): QIconEnginePlugin(parent) {};

	virtual ~MiqtVirtualQIconEnginePlugin() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Create = 0;

	// Subclass to allow providing a Go implementation
	virtual QIconEngine* create(const QString& filename) override {
		if (handle__Create == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		
		const QString filename_ret = filename;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filename_b = filename_ret.toUtf8();
		struct miqt_string filename_ms;
		filename_ms.len = filename_b.length();
		filename_ms.data = static_cast<char*>(malloc(filename_ms.len));
		memcpy(filename_ms.data, filename_b.data(), filename_ms.len);
		struct miqt_string sigval1 = filename_ms;

		QIconEngine* callback_return_value = miqt_exec_callback_QIconEnginePlugin_Create(this, handle__Create, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QIconEnginePlugin::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QIconEnginePlugin_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QIconEnginePlugin::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QIconEnginePlugin::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QIconEnginePlugin_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QIconEnginePlugin::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QIconEnginePlugin::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QIconEnginePlugin_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QIconEnginePlugin::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QIconEnginePlugin::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QIconEnginePlugin_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QIconEnginePlugin::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QIconEnginePlugin::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QIconEnginePlugin_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QIconEnginePlugin::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QIconEnginePlugin::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIconEnginePlugin_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QIconEnginePlugin::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QIconEnginePlugin::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIconEnginePlugin_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QIconEnginePlugin::disconnectNotify(*signal);

	}

};

QIconEnginePlugin* QIconEnginePlugin_new() {
	return new MiqtVirtualQIconEnginePlugin();
}

QIconEnginePlugin* QIconEnginePlugin_new2(QObject* parent) {
	return new MiqtVirtualQIconEnginePlugin(parent);
}

void QIconEnginePlugin_virtbase(QIconEnginePlugin* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QIconEnginePlugin_MetaObject(const QIconEnginePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIconEnginePlugin_Metacast(QIconEnginePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QIconEnginePlugin_Tr(const char* s) {
	QString _ret = QIconEnginePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->create(filename_QString);
}

struct miqt_string QIconEnginePlugin_Tr2(const char* s, const char* c) {
	QString _ret = QIconEnginePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIconEnginePlugin_Tr3(const char* s, const char* c, int n) {
	QString _ret = QIconEnginePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIconEnginePlugin_override_virtual_Create(void* self, intptr_t slot) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Create = slot;
	return true;
}

bool QIconEnginePlugin_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QIconEnginePlugin_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQIconEnginePlugin*)(self) )->virtualbase_Event(event);
}

bool QIconEnginePlugin_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QIconEnginePlugin_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQIconEnginePlugin*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QIconEnginePlugin_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QIconEnginePlugin_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQIconEnginePlugin*)(self) )->virtualbase_TimerEvent(event);
}

bool QIconEnginePlugin_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QIconEnginePlugin_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQIconEnginePlugin*)(self) )->virtualbase_ChildEvent(event);
}

bool QIconEnginePlugin_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QIconEnginePlugin_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQIconEnginePlugin*)(self) )->virtualbase_CustomEvent(event);
}

bool QIconEnginePlugin_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QIconEnginePlugin_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIconEnginePlugin*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QIconEnginePlugin_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QIconEnginePlugin_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIconEnginePlugin*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QIconEnginePlugin_Delete(QIconEnginePlugin* self) {
	delete self;
}

