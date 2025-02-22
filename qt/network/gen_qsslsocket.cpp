#include <QAbstractSocket>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOcspResponse>
#include <QSslCertificate>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslKey>
#include <QSslPreSharedKeyAuthenticator>
#include <QSslSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <QTimerEvent>
#include <QVariant>
#include <qsslsocket.h>
#include "gen_qsslsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSslSocket_Encrypted(intptr_t);
void miqt_exec_callback_QSslSocket_PeerVerifyError(intptr_t, QSslError*);
void miqt_exec_callback_QSslSocket_SslErrorsWithErrors(intptr_t, struct miqt_array /* of QSslError* */ );
void miqt_exec_callback_QSslSocket_ModeChanged(intptr_t, int);
void miqt_exec_callback_QSslSocket_EncryptedBytesWritten(intptr_t, long long);
void miqt_exec_callback_QSslSocket_PreSharedKeyAuthenticationRequired(intptr_t, QSslPreSharedKeyAuthenticator*);
void miqt_exec_callback_QSslSocket_NewSessionTicketReceived(intptr_t);
void miqt_exec_callback_QSslSocket_Resume(void*, intptr_t);
bool miqt_exec_callback_QSslSocket_SetSocketDescriptor(void*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QSslSocket_ConnectToHost(void*, intptr_t, struct miqt_string, uint16_t, int, int);
void miqt_exec_callback_QSslSocket_DisconnectFromHost(void*, intptr_t);
void miqt_exec_callback_QSslSocket_SetSocketOption(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QSslSocket_SocketOption(void*, intptr_t, int);
long long miqt_exec_callback_QSslSocket_BytesAvailable(void*, intptr_t);
long long miqt_exec_callback_QSslSocket_BytesToWrite(void*, intptr_t);
bool miqt_exec_callback_QSslSocket_CanReadLine(void*, intptr_t);
void miqt_exec_callback_QSslSocket_Close(void*, intptr_t);
bool miqt_exec_callback_QSslSocket_AtEnd(void*, intptr_t);
void miqt_exec_callback_QSslSocket_SetReadBufferSize(void*, intptr_t, long long);
bool miqt_exec_callback_QSslSocket_WaitForConnected(void*, intptr_t, int);
bool miqt_exec_callback_QSslSocket_WaitForReadyRead(void*, intptr_t, int);
bool miqt_exec_callback_QSslSocket_WaitForBytesWritten(void*, intptr_t, int);
bool miqt_exec_callback_QSslSocket_WaitForDisconnected(void*, intptr_t, int);
long long miqt_exec_callback_QSslSocket_ReadData(void*, intptr_t, char*, long long);
long long miqt_exec_callback_QSslSocket_WriteData(void*, intptr_t, const char*, long long);
intptr_t miqt_exec_callback_QSslSocket_SocketDescriptor(void*, intptr_t);
bool miqt_exec_callback_QSslSocket_IsSequential(void*, intptr_t);
long long miqt_exec_callback_QSslSocket_ReadLineData(void*, intptr_t, char*, long long);
bool miqt_exec_callback_QSslSocket_Open(void*, intptr_t, int);
long long miqt_exec_callback_QSslSocket_Pos(void*, intptr_t);
long long miqt_exec_callback_QSslSocket_Size(void*, intptr_t);
bool miqt_exec_callback_QSslSocket_Seek(void*, intptr_t, long long);
bool miqt_exec_callback_QSslSocket_Reset(void*, intptr_t);
bool miqt_exec_callback_QSslSocket_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSslSocket_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSslSocket_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSslSocket_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSslSocket_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSslSocket_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSslSocket_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSslSocket final : public QSslSocket {
public:

	MiqtVirtualQSslSocket(): QSslSocket() {};
	MiqtVirtualQSslSocket(QObject* parent): QSslSocket(parent) {};

	virtual ~MiqtVirtualQSslSocket() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Resume = 0;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (handle__Resume == 0) {
			QSslSocket::resume();
			return;
		}
		

		miqt_exec_callback_QSslSocket_Resume(this, handle__Resume);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Resume() {

		QSslSocket::resume();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODevice::OpenMode openMode) override {
		if (handle__SetSocketDescriptor == 0) {
			return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}
		
		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODevice::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);

		bool callback_return_value = miqt_exec_callback_QSslSocket_SetSocketDescriptor(this, handle__SetSocketDescriptor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetSocketDescriptor(intptr_t socketDescriptor, int state, int openMode) {

		return QSslSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODevice::OpenMode>(openMode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectToHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODevice::OpenMode openMode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (handle__ConnectToHost == 0) {
			QSslSocket::connectToHost(hostName, port, openMode, protocol);
			return;
		}
		
		const QString hostName_ret = hostName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray hostName_b = hostName_ret.toUtf8();
		struct miqt_string hostName_ms;
		hostName_ms.len = hostName_b.length();
		hostName_ms.data = static_cast<char*>(malloc(hostName_ms.len));
		memcpy(hostName_ms.data, hostName_b.data(), hostName_ms.len);
		struct miqt_string sigval1 = hostName_ms;
		quint16 port_ret = port;
		uint16_t sigval2 = static_cast<uint16_t>(port_ret);
		QIODevice::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);
		QAbstractSocket::NetworkLayerProtocol protocol_ret = protocol;
		int sigval4 = static_cast<int>(protocol_ret);

		miqt_exec_callback_QSslSocket_ConnectToHost(this, handle__ConnectToHost, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectToHost(struct miqt_string hostName, uint16_t port, int openMode, int protocol) {
		QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);

		QSslSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectFromHost = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (handle__DisconnectFromHost == 0) {
			QSslSocket::disconnectFromHost();
			return;
		}
		

		miqt_exec_callback_QSslSocket_DisconnectFromHost(this, handle__DisconnectFromHost);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectFromHost() {

		QSslSocket::disconnectFromHost();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (handle__SetSocketOption == 0) {
			QSslSocket::setSocketOption(option, value);
			return;
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		miqt_exec_callback_QSslSocket_SetSocketOption(this, handle__SetSocketOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSocketOption(int option, QVariant* value) {

		QSslSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketOption = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (handle__SocketOption == 0) {
			return QSslSocket::socketOption(option);
		}
		
		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSslSocket_SocketOption(this, handle__SocketOption, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_SocketOption(int option) {

		return new QVariant(QSslSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__BytesAvailable == 0) {
			return QSslSocket::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QSslSocket_BytesAvailable(const_cast<MiqtVirtualQSslSocket*>(this), handle__BytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesAvailable() const {

		qint64 _ret = QSslSocket::bytesAvailable();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__BytesToWrite == 0) {
			return QSslSocket::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QSslSocket_BytesToWrite(const_cast<MiqtVirtualQSslSocket*>(this), handle__BytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_BytesToWrite() const {

		qint64 _ret = QSslSocket::bytesToWrite();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__CanReadLine == 0) {
			return QSslSocket::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QSslSocket_CanReadLine(const_cast<MiqtVirtualQSslSocket*>(this), handle__CanReadLine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanReadLine() const {

		return QSslSocket::canReadLine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__Close == 0) {
			QSslSocket::close();
			return;
		}
		

		miqt_exec_callback_QSslSocket_Close(this, handle__Close);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Close() {

		QSslSocket::close();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AtEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__AtEnd == 0) {
			return QSslSocket::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QSslSocket_AtEnd(const_cast<MiqtVirtualQSslSocket*>(this), handle__AtEnd);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_AtEnd() const {

		return QSslSocket::atEnd();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetReadBufferSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (handle__SetReadBufferSize == 0) {
			QSslSocket::setReadBufferSize(size);
			return;
		}
		
		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);

		miqt_exec_callback_QSslSocket_SetReadBufferSize(this, handle__SetReadBufferSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetReadBufferSize(long long size) {

		QSslSocket::setReadBufferSize(static_cast<qint64>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForConnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (handle__WaitForConnected == 0) {
			return QSslSocket::waitForConnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSslSocket_WaitForConnected(this, handle__WaitForConnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForConnected(int msecs) {

		return QSslSocket::waitForConnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__WaitForReadyRead == 0) {
			return QSslSocket::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSslSocket_WaitForReadyRead(this, handle__WaitForReadyRead, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForReadyRead(int msecs) {

		return QSslSocket::waitForReadyRead(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__WaitForBytesWritten == 0) {
			return QSslSocket::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSslSocket_WaitForBytesWritten(this, handle__WaitForBytesWritten, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForBytesWritten(int msecs) {

		return QSslSocket::waitForBytesWritten(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WaitForDisconnected = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (handle__WaitForDisconnected == 0) {
			return QSslSocket::waitForDisconnected(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QSslSocket_WaitForDisconnected(this, handle__WaitForDisconnected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WaitForDisconnected(int msecs) {

		return QSslSocket::waitForDisconnected(static_cast<int>(msecs));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__ReadData == 0) {
			return QSslSocket::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSslSocket_ReadData(this, handle__ReadData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadData(char* data, long long maxlen) {

		qint64 _ret = QSslSocket::readData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 lenVal) override {
		if (handle__WriteData == 0) {
			return QSslSocket::writeData(data, lenVal);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 lenVal_ret = lenVal;
		long long sigval2 = static_cast<long long>(lenVal_ret);

		long long callback_return_value = miqt_exec_callback_QSslSocket_WriteData(this, handle__WriteData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_WriteData(const char* data, long long lenVal) {

		qint64 _ret = QSslSocket::writeData(data, static_cast<qint64>(lenVal));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SocketDescriptor = 0;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (handle__SocketDescriptor == 0) {
			return QSslSocket::socketDescriptor();
		}
		

		intptr_t callback_return_value = miqt_exec_callback_QSslSocket_SocketDescriptor(const_cast<MiqtVirtualQSslSocket*>(this), handle__SocketDescriptor);

		return (qintptr)(callback_return_value);
	}

	// Wrapper to allow calling protected method
	intptr_t virtualbase_SocketDescriptor() const {

		qintptr _ret = QSslSocket::socketDescriptor();
		return (intptr_t)(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__IsSequential == 0) {
			return QSslSocket::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QSslSocket_IsSequential(const_cast<MiqtVirtualQSslSocket*>(this), handle__IsSequential);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsSequential() const {

		return QSslSocket::isSequential();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__ReadLineData == 0) {
			return QSslSocket::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QSslSocket_ReadLineData(this, handle__ReadLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_ReadLineData(char* data, long long maxlen) {

		qint64 _ret = QSslSocket::readLineData(data, static_cast<qint64>(maxlen));
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode mode) override {
		if (handle__Open == 0) {
			return QSslSocket::open(mode);
		}
		
		QIODevice::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QSslSocket_Open(this, handle__Open, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Open(int mode) {

		return QSslSocket::open(static_cast<QIODevice::OpenMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__Pos == 0) {
			return QSslSocket::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QSslSocket_Pos(const_cast<MiqtVirtualQSslSocket*>(this), handle__Pos);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Pos() const {

		qint64 _ret = QSslSocket::pos();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__Size == 0) {
			return QSslSocket::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QSslSocket_Size(const_cast<MiqtVirtualQSslSocket*>(this), handle__Size);

		return static_cast<qint64>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	long long virtualbase_Size() const {

		qint64 _ret = QSslSocket::size();
		return static_cast<long long>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (handle__Seek == 0) {
			return QSslSocket::seek(pos);
		}
		
		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);

		bool callback_return_value = miqt_exec_callback_QSslSocket_Seek(this, handle__Seek, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Seek(long long pos) {

		return QSslSocket::seek(static_cast<qint64>(pos));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__Reset == 0) {
			return QSslSocket::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QSslSocket_Reset(this, handle__Reset);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Reset() {

		return QSslSocket::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSslSocket::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSslSocket_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSslSocket::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSslSocket::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSslSocket_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSslSocket::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSslSocket::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSslSocket_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSslSocket::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSslSocket::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSslSocket_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSslSocket::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSslSocket::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSslSocket_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSslSocket::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSslSocket::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSslSocket_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSslSocket::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSslSocket::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSslSocket_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSslSocket::disconnectNotify(*signal);

	}

};

QSslSocket* QSslSocket_new() {
	return new MiqtVirtualQSslSocket();
}

QSslSocket* QSslSocket_new2(QObject* parent) {
	return new MiqtVirtualQSslSocket(parent);
}

void QSslSocket_virtbase(QSslSocket* src, QTcpSocket** outptr_QTcpSocket) {
	*outptr_QTcpSocket = static_cast<QTcpSocket*>(src);
}

QMetaObject* QSslSocket_MetaObject(const QSslSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSslSocket_Metacast(QSslSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSslSocket_Tr(const char* s) {
	QString _ret = QSslSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslSocket_TrUtf8(const char* s) {
	QString _ret = QSslSocket::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_Resume(QSslSocket* self) {
	self->resume();
}

void QSslSocket_ConnectToHostEncrypted(QSslSocket* self, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port));
}

void QSslSocket_ConnectToHostEncrypted2(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString);
}

bool QSslSocket_SetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODevice::OpenMode>(openMode));
}

void QSslSocket_ConnectToHost(QSslSocket* self, struct miqt_string hostName, uint16_t port, int openMode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_DisconnectFromHost(QSslSocket* self) {
	self->disconnectFromHost();
}

void QSslSocket_SetSocketOption(QSslSocket* self, int option, QVariant* value) {
	self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QSslSocket_SocketOption(QSslSocket* self, int option) {
	return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QSslSocket_Mode(const QSslSocket* self) {
	QSslSocket::SslMode _ret = self->mode();
	return static_cast<int>(_ret);
}

bool QSslSocket_IsEncrypted(const QSslSocket* self) {
	return self->isEncrypted();
}

int QSslSocket_Protocol(const QSslSocket* self) {
	QSsl::SslProtocol _ret = self->protocol();
	return static_cast<int>(_ret);
}

void QSslSocket_SetProtocol(QSslSocket* self, int protocol) {
	self->setProtocol(static_cast<QSsl::SslProtocol>(protocol));
}

int QSslSocket_PeerVerifyMode(const QSslSocket* self) {
	QSslSocket::PeerVerifyMode _ret = self->peerVerifyMode();
	return static_cast<int>(_ret);
}

void QSslSocket_SetPeerVerifyMode(QSslSocket* self, int mode) {
	self->setPeerVerifyMode(static_cast<QSslSocket::PeerVerifyMode>(mode));
}

int QSslSocket_PeerVerifyDepth(const QSslSocket* self) {
	return self->peerVerifyDepth();
}

void QSslSocket_SetPeerVerifyDepth(QSslSocket* self, int depth) {
	self->setPeerVerifyDepth(static_cast<int>(depth));
}

struct miqt_string QSslSocket_PeerVerifyName(const QSslSocket* self) {
	QString _ret = self->peerVerifyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_SetPeerVerifyName(QSslSocket* self, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->setPeerVerifyName(hostName_QString);
}

long long QSslSocket_BytesAvailable(const QSslSocket* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QSslSocket_BytesToWrite(const QSslSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QSslSocket_CanReadLine(const QSslSocket* self) {
	return self->canReadLine();
}

void QSslSocket_Close(QSslSocket* self) {
	self->close();
}

bool QSslSocket_AtEnd(const QSslSocket* self) {
	return self->atEnd();
}

bool QSslSocket_Flush(QSslSocket* self) {
	return self->flush();
}

void QSslSocket_Abort(QSslSocket* self) {
	self->abort();
}

void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

long long QSslSocket_EncryptedBytesAvailable(const QSslSocket* self) {
	qint64 _ret = self->encryptedBytesAvailable();
	return static_cast<long long>(_ret);
}

long long QSslSocket_EncryptedBytesToWrite(const QSslSocket* self) {
	qint64 _ret = self->encryptedBytesToWrite();
	return static_cast<long long>(_ret);
}

QSslConfiguration* QSslSocket_SslConfiguration(const QSslSocket* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QSslSocket_SetSslConfiguration(QSslSocket* self, QSslConfiguration* config) {
	self->setSslConfiguration(*config);
}

void QSslSocket_SetLocalCertificateChain(QSslSocket* self, struct miqt_array /* of QSslCertificate* */  localChain) {
	QList<QSslCertificate> localChain_QList;
	localChain_QList.reserve(localChain.len);
	QSslCertificate** localChain_arr = static_cast<QSslCertificate**>(localChain.data);
	for(size_t i = 0; i < localChain.len; ++i) {
		localChain_QList.push_back(*(localChain_arr[i]));
	}
	self->setLocalCertificateChain(localChain_QList);
}

struct miqt_array /* of QSslCertificate* */  QSslSocket_LocalCertificateChain(const QSslSocket* self) {
	QList<QSslCertificate> _ret = self->localCertificateChain();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslSocket_SetLocalCertificate(QSslSocket* self, QSslCertificate* certificate) {
	self->setLocalCertificate(*certificate);
}

void QSslSocket_SetLocalCertificateWithFileName(QSslSocket* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setLocalCertificate(fileName_QString);
}

QSslCertificate* QSslSocket_LocalCertificate(const QSslSocket* self) {
	return new QSslCertificate(self->localCertificate());
}

QSslCertificate* QSslSocket_PeerCertificate(const QSslSocket* self) {
	return new QSslCertificate(self->peerCertificate());
}

struct miqt_array /* of QSslCertificate* */  QSslSocket_PeerCertificateChain(const QSslSocket* self) {
	QList<QSslCertificate> _ret = self->peerCertificateChain();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QSslCipher* QSslSocket_SessionCipher(const QSslSocket* self) {
	return new QSslCipher(self->sessionCipher());
}

int QSslSocket_SessionProtocol(const QSslSocket* self) {
	QSsl::SslProtocol _ret = self->sessionProtocol();
	return static_cast<int>(_ret);
}

struct miqt_array /* of QOcspResponse* */  QSslSocket_OcspResponses(const QSslSocket* self) {
	QVector<QOcspResponse> _ret = self->ocspResponses();
	// Convert QList<> from C++ memory to manually-managed C memory
	QOcspResponse** _arr = static_cast<QOcspResponse**>(malloc(sizeof(QOcspResponse*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QOcspResponse(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslSocket_SetPrivateKey(QSslSocket* self, QSslKey* key) {
	self->setPrivateKey(*key);
}

void QSslSocket_SetPrivateKeyWithFileName(QSslSocket* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setPrivateKey(fileName_QString);
}

QSslKey* QSslSocket_PrivateKey(const QSslSocket* self) {
	return new QSslKey(self->privateKey());
}

struct miqt_array /* of QSslCipher* */  QSslSocket_Ciphers(const QSslSocket* self) {
	QList<QSslCipher> _ret = self->ciphers();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCipher** _arr = static_cast<QSslCipher**>(malloc(sizeof(QSslCipher*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCipher(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslSocket_SetCiphers(QSslSocket* self, struct miqt_array /* of QSslCipher* */  ciphers) {
	QList<QSslCipher> ciphers_QList;
	ciphers_QList.reserve(ciphers.len);
	QSslCipher** ciphers_arr = static_cast<QSslCipher**>(ciphers.data);
	for(size_t i = 0; i < ciphers.len; ++i) {
		ciphers_QList.push_back(*(ciphers_arr[i]));
	}
	self->setCiphers(ciphers_QList);
}

void QSslSocket_SetCiphersWithCiphers(QSslSocket* self, struct miqt_string ciphers) {
	QString ciphers_QString = QString::fromUtf8(ciphers.data, ciphers.len);
	self->setCiphers(ciphers_QString);
}

void QSslSocket_SetDefaultCiphers(struct miqt_array /* of QSslCipher* */  ciphers) {
	QList<QSslCipher> ciphers_QList;
	ciphers_QList.reserve(ciphers.len);
	QSslCipher** ciphers_arr = static_cast<QSslCipher**>(ciphers.data);
	for(size_t i = 0; i < ciphers.len; ++i) {
		ciphers_QList.push_back(*(ciphers_arr[i]));
	}
	QSslSocket::setDefaultCiphers(ciphers_QList);
}

struct miqt_array /* of QSslCipher* */  QSslSocket_DefaultCiphers() {
	QList<QSslCipher> _ret = QSslSocket::defaultCiphers();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCipher** _arr = static_cast<QSslCipher**>(malloc(sizeof(QSslCipher*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCipher(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSslCipher* */  QSslSocket_SupportedCiphers() {
	QList<QSslCipher> _ret = QSslSocket::supportedCiphers();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCipher** _arr = static_cast<QSslCipher**>(malloc(sizeof(QSslCipher*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCipher(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_AddCaCertificates(QSslSocket* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->addCaCertificates(path_QString);
}

void QSslSocket_AddCaCertificate(QSslSocket* self, QSslCertificate* certificate) {
	self->addCaCertificate(*certificate);
}

void QSslSocket_AddCaCertificatesWithCertificates(QSslSocket* self, struct miqt_array /* of QSslCertificate* */  certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	self->addCaCertificates(certificates_QList);
}

void QSslSocket_SetCaCertificates(QSslSocket* self, struct miqt_array /* of QSslCertificate* */  certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	self->setCaCertificates(certificates_QList);
}

struct miqt_array /* of QSslCertificate* */  QSslSocket_CaCertificates(const QSslSocket* self) {
	QList<QSslCertificate> _ret = self->caCertificates();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_AddDefaultCaCertificates(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QSslSocket::addDefaultCaCertificates(path_QString);
}

void QSslSocket_AddDefaultCaCertificate(QSslCertificate* certificate) {
	QSslSocket::addDefaultCaCertificate(*certificate);
}

void QSslSocket_AddDefaultCaCertificatesWithCertificates(struct miqt_array /* of QSslCertificate* */  certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	QSslSocket::addDefaultCaCertificates(certificates_QList);
}

void QSslSocket_SetDefaultCaCertificates(struct miqt_array /* of QSslCertificate* */  certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	QSslSocket::setDefaultCaCertificates(certificates_QList);
}

struct miqt_array /* of QSslCertificate* */  QSslSocket_DefaultCaCertificates() {
	QList<QSslCertificate> _ret = QSslSocket::defaultCaCertificates();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSslCertificate* */  QSslSocket_SystemCaCertificates() {
	QList<QSslCertificate> _ret = QSslSocket::systemCaCertificates();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_WaitForConnected(QSslSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QSslSocket_WaitForEncrypted(QSslSocket* self) {
	return self->waitForEncrypted();
}

bool QSslSocket_WaitForReadyRead(QSslSocket* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QSslSocket_WaitForBytesWritten(QSslSocket* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QSslSocket_WaitForDisconnected(QSslSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

struct miqt_array /* of QSslError* */  QSslSocket_SslErrors(const QSslSocket* self) {
	QList<QSslError> _ret = self->sslErrors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSslError* */  QSslSocket_SslHandshakeErrors(const QSslSocket* self) {
	QList<QSslError> _ret = self->sslHandshakeErrors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_SupportsSsl() {
	return QSslSocket::supportsSsl();
}

long QSslSocket_SslLibraryVersionNumber() {
	return QSslSocket::sslLibraryVersionNumber();
}

struct miqt_string QSslSocket_SslLibraryVersionString() {
	QString _ret = QSslSocket::sslLibraryVersionString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long QSslSocket_SslLibraryBuildVersionNumber() {
	return QSslSocket::sslLibraryBuildVersionNumber();
}

struct miqt_string QSslSocket_SslLibraryBuildVersionString() {
	QString _ret = QSslSocket::sslLibraryBuildVersionString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_IgnoreSslErrors(QSslSocket* self, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->ignoreSslErrors(errors_QList);
}

void QSslSocket_StartClientEncryption(QSslSocket* self) {
	self->startClientEncryption();
}

void QSslSocket_StartServerEncryption(QSslSocket* self) {
	self->startServerEncryption();
}

void QSslSocket_IgnoreSslErrors2(QSslSocket* self) {
	self->ignoreSslErrors();
}

void QSslSocket_Encrypted(QSslSocket* self) {
	self->encrypted();
}

void QSslSocket_connect_Encrypted(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)()>(&QSslSocket::encrypted), self, [=]() {
		miqt_exec_callback_QSslSocket_Encrypted(slot);
	});
}

void QSslSocket_PeerVerifyError(QSslSocket* self, QSslError* error) {
	self->peerVerifyError(*error);
}

void QSslSocket_connect_PeerVerifyError(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(const QSslError&)>(&QSslSocket::peerVerifyError), self, [=](const QSslError& error) {
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval1 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QSslSocket_PeerVerifyError(slot, sigval1);
	});
}

void QSslSocket_SslErrorsWithErrors(QSslSocket* self, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(errors_QList);
}

void QSslSocket_connect_SslErrorsWithErrors(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(const QList<QSslError>&)>(&QSslSocket::sslErrors), self, [=](const QList<QSslError>& errors) {
		const QList<QSslError>& errors_ret = errors;
		// Convert QList<> from C++ memory to manually-managed C memory
		QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
		for (size_t i = 0, e = errors_ret.length(); i < e; ++i) {
			errors_arr[i] = new QSslError(errors_ret[i]);
		}
		struct miqt_array errors_out;
		errors_out.len = errors_ret.length();
		errors_out.data = static_cast<void*>(errors_arr);
		struct miqt_array /* of QSslError* */  sigval1 = errors_out;
		miqt_exec_callback_QSslSocket_SslErrorsWithErrors(slot, sigval1);
	});
}

void QSslSocket_ModeChanged(QSslSocket* self, int newMode) {
	self->modeChanged(static_cast<QSslSocket::SslMode>(newMode));
}

void QSslSocket_connect_ModeChanged(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(QSslSocket::SslMode)>(&QSslSocket::modeChanged), self, [=](QSslSocket::SslMode newMode) {
		QSslSocket::SslMode newMode_ret = newMode;
		int sigval1 = static_cast<int>(newMode_ret);
		miqt_exec_callback_QSslSocket_ModeChanged(slot, sigval1);
	});
}

void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes) {
	self->encryptedBytesWritten(static_cast<qint64>(totalBytes));
}

void QSslSocket_connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(qint64)>(&QSslSocket::encryptedBytesWritten), self, [=](qint64 totalBytes) {
		qint64 totalBytes_ret = totalBytes;
		long long sigval1 = static_cast<long long>(totalBytes_ret);
		miqt_exec_callback_QSslSocket_EncryptedBytesWritten(slot, sigval1);
	});
}

void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(authenticator);
}

void QSslSocket_connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)(QSslPreSharedKeyAuthenticator*)>(&QSslSocket::preSharedKeyAuthenticationRequired), self, [=](QSslPreSharedKeyAuthenticator* authenticator) {
		QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
		miqt_exec_callback_QSslSocket_PreSharedKeyAuthenticationRequired(slot, sigval1);
	});
}

void QSslSocket_NewSessionTicketReceived(QSslSocket* self) {
	self->newSessionTicketReceived();
}

void QSslSocket_connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot) {
	MiqtVirtualQSslSocket::connect(self, static_cast<void (QSslSocket::*)()>(&QSslSocket::newSessionTicketReceived), self, [=]() {
		miqt_exec_callback_QSslSocket_NewSessionTicketReceived(slot);
	});
}

struct miqt_string QSslSocket_Tr2(const char* s, const char* c) {
	QString _ret = QSslSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSslSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslSocket_TrUtf82(const char* s, const char* c) {
	QString _ret = QSslSocket::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslSocket_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSslSocket::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_ConnectToHostEncrypted3(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode));
}

void QSslSocket_ConnectToHostEncrypted4(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_ConnectToHostEncrypted42(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString, static_cast<QIODevice::OpenMode>(mode));
}

void QSslSocket_ConnectToHostEncrypted5(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString, static_cast<QIODevice::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_SetLocalCertificate2(QSslSocket* self, struct miqt_string fileName, int format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setLocalCertificate(fileName_QString, static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey2(QSslSocket* self, struct miqt_string fileName, int algorithm) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm));
}

void QSslSocket_SetPrivateKey3(QSslSocket* self, struct miqt_string fileName, int algorithm, int format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey4(QSslSocket* self, struct miqt_string fileName, int algorithm, int format, struct miqt_string passPhrase) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), passPhrase_QByteArray);
}

bool QSslSocket_AddCaCertificates2(QSslSocket* self, struct miqt_string path, int format) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->addCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format));
}

bool QSslSocket_AddCaCertificates3(QSslSocket* self, struct miqt_string path, int format, int syntax) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->addCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format), static_cast<QRegExp::PatternSyntax>(syntax));
}

bool QSslSocket_AddDefaultCaCertificates2(struct miqt_string path, int format) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QSslSocket::addDefaultCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format));
}

bool QSslSocket_AddDefaultCaCertificates3(struct miqt_string path, int format, int syntax) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QSslSocket::addDefaultCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format), static_cast<QRegExp::PatternSyntax>(syntax));
}

bool QSslSocket_WaitForEncrypted1(QSslSocket* self, int msecs) {
	return self->waitForEncrypted(static_cast<int>(msecs));
}

bool QSslSocket_override_virtual_Resume(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Resume = slot;
	return true;
}

void QSslSocket_virtualbase_Resume(void* self) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_Resume();
}

bool QSslSocket_override_virtual_SetSocketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSocketDescriptor = slot;
	return true;
}

bool QSslSocket_virtualbase_SetSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_SetSocketDescriptor(socketDescriptor, state, openMode);
}

bool QSslSocket_override_virtual_ConnectToHost(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectToHost = slot;
	return true;
}

void QSslSocket_virtualbase_ConnectToHost(void* self, struct miqt_string hostName, uint16_t port, int openMode, int protocol) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_ConnectToHost(hostName, port, openMode, protocol);
}

bool QSslSocket_override_virtual_DisconnectFromHost(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectFromHost = slot;
	return true;
}

void QSslSocket_virtualbase_DisconnectFromHost(void* self) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_DisconnectFromHost();
}

bool QSslSocket_override_virtual_SetSocketOption(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSocketOption = slot;
	return true;
}

void QSslSocket_virtualbase_SetSocketOption(void* self, int option, QVariant* value) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_SetSocketOption(option, value);
}

bool QSslSocket_override_virtual_SocketOption(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SocketOption = slot;
	return true;
}

QVariant* QSslSocket_virtualbase_SocketOption(void* self, int option) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_SocketOption(option);
}

bool QSslSocket_override_virtual_BytesAvailable(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesAvailable = slot;
	return true;
}

long long QSslSocket_virtualbase_BytesAvailable(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_BytesAvailable();
}

bool QSslSocket_override_virtual_BytesToWrite(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BytesToWrite = slot;
	return true;
}

long long QSslSocket_virtualbase_BytesToWrite(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_BytesToWrite();
}

bool QSslSocket_override_virtual_CanReadLine(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanReadLine = slot;
	return true;
}

bool QSslSocket_virtualbase_CanReadLine(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_CanReadLine();
}

bool QSslSocket_override_virtual_Close(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Close = slot;
	return true;
}

void QSslSocket_virtualbase_Close(void* self) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_Close();
}

bool QSslSocket_override_virtual_AtEnd(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AtEnd = slot;
	return true;
}

bool QSslSocket_virtualbase_AtEnd(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_AtEnd();
}

bool QSslSocket_override_virtual_SetReadBufferSize(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetReadBufferSize = slot;
	return true;
}

void QSslSocket_virtualbase_SetReadBufferSize(void* self, long long size) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_SetReadBufferSize(size);
}

bool QSslSocket_override_virtual_WaitForConnected(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForConnected = slot;
	return true;
}

bool QSslSocket_virtualbase_WaitForConnected(void* self, int msecs) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WaitForConnected(msecs);
}

bool QSslSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForReadyRead = slot;
	return true;
}

bool QSslSocket_virtualbase_WaitForReadyRead(void* self, int msecs) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WaitForReadyRead(msecs);
}

bool QSslSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForBytesWritten = slot;
	return true;
}

bool QSslSocket_virtualbase_WaitForBytesWritten(void* self, int msecs) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WaitForBytesWritten(msecs);
}

bool QSslSocket_override_virtual_WaitForDisconnected(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WaitForDisconnected = slot;
	return true;
}

bool QSslSocket_virtualbase_WaitForDisconnected(void* self, int msecs) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WaitForDisconnected(msecs);
}

bool QSslSocket_override_virtual_ReadData(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadData = slot;
	return true;
}

long long QSslSocket_virtualbase_ReadData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_ReadData(data, maxlen);
}

bool QSslSocket_override_virtual_WriteData(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteData = slot;
	return true;
}

long long QSslSocket_virtualbase_WriteData(void* self, const char* data, long long lenVal) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_WriteData(data, lenVal);
}

bool QSslSocket_override_virtual_SocketDescriptor(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SocketDescriptor = slot;
	return true;
}

intptr_t QSslSocket_virtualbase_SocketDescriptor(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_SocketDescriptor();
}

bool QSslSocket_override_virtual_IsSequential(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsSequential = slot;
	return true;
}

bool QSslSocket_virtualbase_IsSequential(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_IsSequential();
}

bool QSslSocket_override_virtual_ReadLineData(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadLineData = slot;
	return true;
}

long long QSslSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_ReadLineData(data, maxlen);
}

bool QSslSocket_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

bool QSslSocket_virtualbase_Open(void* self, int mode) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_Open(mode);
}

bool QSslSocket_override_virtual_Pos(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Pos = slot;
	return true;
}

long long QSslSocket_virtualbase_Pos(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_Pos();
}

bool QSslSocket_override_virtual_Size(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Size = slot;
	return true;
}

long long QSslSocket_virtualbase_Size(const void* self) {
	return ( (const MiqtVirtualQSslSocket*)(self) )->virtualbase_Size();
}

bool QSslSocket_override_virtual_Seek(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Seek = slot;
	return true;
}

bool QSslSocket_virtualbase_Seek(void* self, long long pos) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_Seek(pos);
}

bool QSslSocket_override_virtual_Reset(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reset = slot;
	return true;
}

bool QSslSocket_virtualbase_Reset(void* self) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_Reset();
}

bool QSslSocket_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSslSocket_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_Event(event);
}

bool QSslSocket_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSslSocket_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSslSocket*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSslSocket_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSslSocket_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_TimerEvent(event);
}

bool QSslSocket_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSslSocket_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_ChildEvent(event);
}

bool QSslSocket_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSslSocket_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_CustomEvent(event);
}

bool QSslSocket_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSslSocket_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSslSocket_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSslSocket* self_cast = dynamic_cast<MiqtVirtualQSslSocket*>( (QSslSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSslSocket_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSslSocket*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSslSocket_Delete(QSslSocket* self) {
	delete self;
}

