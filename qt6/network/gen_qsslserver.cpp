#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QSslServer>
#include <QSslSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimerEvent>
#include <qsslserver.h>
#include "gen_qsslserver.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSslServer_SslErrors(intptr_t, QSslSocket*, struct miqt_array /* of QSslError* */ );
void miqt_exec_callback_QSslServer_PeerVerifyError(intptr_t, QSslSocket*, QSslError*);
void miqt_exec_callback_QSslServer_ErrorOccurred(intptr_t, QSslSocket*, int);
void miqt_exec_callback_QSslServer_PreSharedKeyAuthenticationRequired(intptr_t, QSslSocket*, QSslPreSharedKeyAuthenticator*);
void miqt_exec_callback_QSslServer_AlertSent(intptr_t, QSslSocket*, int, int, struct miqt_string);
void miqt_exec_callback_QSslServer_AlertReceived(intptr_t, QSslSocket*, int, int, struct miqt_string);
void miqt_exec_callback_QSslServer_HandshakeInterruptedOnError(intptr_t, QSslSocket*, QSslError*);
void miqt_exec_callback_QSslServer_StartedEncryptionHandshake(intptr_t, QSslSocket*);
void miqt_exec_callback_QSslServer_IncomingConnection(void*, intptr_t, intptr_t);
bool miqt_exec_callback_QSslServer_HasPendingConnections(void*, intptr_t);
QTcpSocket* miqt_exec_callback_QSslServer_NextPendingConnection(void*, intptr_t);
bool miqt_exec_callback_QSslServer_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSslServer_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSslServer_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSslServer_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSslServer_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSslServer_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSslServer_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSslServer final : public QSslServer {
public:

	MiqtVirtualQSslServer(): QSslServer() {};
	MiqtVirtualQSslServer(QObject* parent): QSslServer(parent) {};

	virtual ~MiqtVirtualQSslServer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IncomingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual void incomingConnection(qintptr socket) override {
		if (handle__IncomingConnection == 0) {
			QSslServer::incomingConnection(socket);
			return;
		}
		
		qintptr socket_ret = socket;
		intptr_t sigval1 = (intptr_t)(socket_ret);

		miqt_exec_callback_QSslServer_IncomingConnection(this, handle__IncomingConnection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_IncomingConnection(intptr_t socket) {

		QSslServer::incomingConnection((qintptr)(socket));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasPendingConnections = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasPendingConnections() const override {
		if (handle__HasPendingConnections == 0) {
			return QSslServer::hasPendingConnections();
		}
		

		bool callback_return_value = miqt_exec_callback_QSslServer_HasPendingConnections(const_cast<MiqtVirtualQSslServer*>(this), handle__HasPendingConnections);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasPendingConnections() const {

		return QSslServer::hasPendingConnections();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextPendingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual QTcpSocket* nextPendingConnection() override {
		if (handle__NextPendingConnection == 0) {
			return QSslServer::nextPendingConnection();
		}
		

		QTcpSocket* callback_return_value = miqt_exec_callback_QSslServer_NextPendingConnection(this, handle__NextPendingConnection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTcpSocket* virtualbase_NextPendingConnection() {

		return QSslServer::nextPendingConnection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSslServer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSslServer_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSslServer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSslServer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSslServer_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSslServer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSslServer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSslServer_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSslServer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSslServer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSslServer_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSslServer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSslServer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSslServer_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSslServer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSslServer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSslServer_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSslServer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSslServer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSslServer_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSslServer::disconnectNotify(*signal);

	}

};

QSslServer* QSslServer_new() {
	return new MiqtVirtualQSslServer();
}

QSslServer* QSslServer_new2(QObject* parent) {
	return new MiqtVirtualQSslServer(parent);
}

void QSslServer_virtbase(QSslServer* src, QTcpServer** outptr_QTcpServer) {
	*outptr_QTcpServer = static_cast<QTcpServer*>(src);
}

QMetaObject* QSslServer_MetaObject(const QSslServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSslServer_Metacast(QSslServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSslServer_Tr(const char* s) {
	QString _ret = QSslServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslServer_SetSslConfiguration(QSslServer* self, QSslConfiguration* sslConfiguration) {
	self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QSslServer_SslConfiguration(const QSslServer* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QSslServer_SetHandshakeTimeout(QSslServer* self, int timeout) {
	self->setHandshakeTimeout(static_cast<int>(timeout));
}

int QSslServer_HandshakeTimeout(const QSslServer* self) {
	return self->handshakeTimeout();
}

void QSslServer_SslErrors(QSslServer* self, QSslSocket* socket, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(socket, errors_QList);
}

void QSslServer_connect_SslErrors(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, const QList<QSslError>&)>(&QSslServer::sslErrors), self, [=](QSslSocket* socket, const QList<QSslError>& errors) {
		QSslSocket* sigval1 = socket;
		const QList<QSslError>& errors_ret = errors;
		// Convert QList<> from C++ memory to manually-managed C memory
		QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
		for (size_t i = 0, e = errors_ret.length(); i < e; ++i) {
			errors_arr[i] = new QSslError(errors_ret[i]);
		}
		struct miqt_array errors_out;
		errors_out.len = errors_ret.length();
		errors_out.data = static_cast<void*>(errors_arr);
		struct miqt_array /* of QSslError* */  sigval2 = errors_out;
		miqt_exec_callback_QSslServer_SslErrors(slot, sigval1, sigval2);
	});
}

void QSslServer_PeerVerifyError(QSslServer* self, QSslSocket* socket, QSslError* error) {
	self->peerVerifyError(socket, *error);
}

void QSslServer_connect_PeerVerifyError(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, const QSslError&)>(&QSslServer::peerVerifyError), self, [=](QSslSocket* socket, const QSslError& error) {
		QSslSocket* sigval1 = socket;
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval2 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QSslServer_PeerVerifyError(slot, sigval1, sigval2);
	});
}

void QSslServer_ErrorOccurred(QSslServer* self, QSslSocket* socket, int error) {
	self->errorOccurred(socket, static_cast<QAbstractSocket::SocketError>(error));
}

void QSslServer_connect_ErrorOccurred(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, QAbstractSocket::SocketError)>(&QSslServer::errorOccurred), self, [=](QSslSocket* socket, QAbstractSocket::SocketError error) {
		QSslSocket* sigval1 = socket;
		QAbstractSocket::SocketError error_ret = error;
		int sigval2 = static_cast<int>(error_ret);
		miqt_exec_callback_QSslServer_ErrorOccurred(slot, sigval1, sigval2);
	});
}

void QSslServer_PreSharedKeyAuthenticationRequired(QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(socket, authenticator);
}

void QSslServer_connect_PreSharedKeyAuthenticationRequired(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, QSslPreSharedKeyAuthenticator*)>(&QSslServer::preSharedKeyAuthenticationRequired), self, [=](QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator) {
		QSslSocket* sigval1 = socket;
		QSslPreSharedKeyAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QSslServer_PreSharedKeyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

void QSslServer_AlertSent(QSslServer* self, QSslSocket* socket, int level, int typeVal, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertSent(socket, static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslServer_connect_AlertSent(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslServer::alertSent), self, [=](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
		QSslSocket* sigval1 = socket;
		QSsl::AlertLevel level_ret = level;
		int sigval2 = static_cast<int>(level_ret);
		QSsl::AlertType typeVal_ret = typeVal;
		int sigval3 = static_cast<int>(typeVal_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval4 = description_ms;
		miqt_exec_callback_QSslServer_AlertSent(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QSslServer_AlertReceived(QSslServer* self, QSslSocket* socket, int level, int typeVal, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertReceived(socket, static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslServer_connect_AlertReceived(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslServer::alertReceived), self, [=](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
		QSslSocket* sigval1 = socket;
		QSsl::AlertLevel level_ret = level;
		int sigval2 = static_cast<int>(level_ret);
		QSsl::AlertType typeVal_ret = typeVal;
		int sigval3 = static_cast<int>(typeVal_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval4 = description_ms;
		miqt_exec_callback_QSslServer_AlertReceived(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QSslServer_HandshakeInterruptedOnError(QSslServer* self, QSslSocket* socket, QSslError* error) {
	self->handshakeInterruptedOnError(socket, *error);
}

void QSslServer_connect_HandshakeInterruptedOnError(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, const QSslError&)>(&QSslServer::handshakeInterruptedOnError), self, [=](QSslSocket* socket, const QSslError& error) {
		QSslSocket* sigval1 = socket;
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval2 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QSslServer_HandshakeInterruptedOnError(slot, sigval1, sigval2);
	});
}

void QSslServer_StartedEncryptionHandshake(QSslServer* self, QSslSocket* socket) {
	self->startedEncryptionHandshake(socket);
}

void QSslServer_connect_StartedEncryptionHandshake(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*)>(&QSslServer::startedEncryptionHandshake), self, [=](QSslSocket* socket) {
		QSslSocket* sigval1 = socket;
		miqt_exec_callback_QSslServer_StartedEncryptionHandshake(slot, sigval1);
	});
}

struct miqt_string QSslServer_Tr2(const char* s, const char* c) {
	QString _ret = QSslServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslServer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSslServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSslServer_override_virtual_IncomingConnection(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IncomingConnection = slot;
	return true;
}

void QSslServer_virtualbase_IncomingConnection(void* self, intptr_t socket) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_IncomingConnection(socket);
}

bool QSslServer_override_virtual_HasPendingConnections(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasPendingConnections = slot;
	return true;
}

bool QSslServer_virtualbase_HasPendingConnections(const void* self) {
	return ( (const MiqtVirtualQSslServer*)(self) )->virtualbase_HasPendingConnections();
}

bool QSslServer_override_virtual_NextPendingConnection(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextPendingConnection = slot;
	return true;
}

QTcpSocket* QSslServer_virtualbase_NextPendingConnection(void* self) {
	return ( (MiqtVirtualQSslServer*)(self) )->virtualbase_NextPendingConnection();
}

bool QSslServer_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSslServer_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSslServer*)(self) )->virtualbase_Event(event);
}

bool QSslServer_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSslServer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSslServer*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSslServer_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSslServer_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_TimerEvent(event);
}

bool QSslServer_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSslServer_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_ChildEvent(event);
}

bool QSslServer_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSslServer_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_CustomEvent(event);
}

bool QSslServer_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSslServer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSslServer_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSslServer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSslServer_Delete(QSslServer* self) {
	delete self;
}

