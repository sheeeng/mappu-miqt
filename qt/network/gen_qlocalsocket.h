#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QLOCALSOCKET_H
#define MIQT_QT_NETWORK_GEN_QLOCALSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QIODevice;
class QLocalSocket;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QLocalSocket QLocalSocket;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QLocalSocket* QLocalSocket_new();
QLocalSocket* QLocalSocket_new2(QObject* parent);
void QLocalSocket_virtbase(QLocalSocket* src, QIODevice** outptr_QIODevice);
QMetaObject* QLocalSocket_MetaObject(const QLocalSocket* self);
void* QLocalSocket_Metacast(QLocalSocket* self, const char* param1);
struct miqt_string QLocalSocket_Tr(const char* s);
struct miqt_string QLocalSocket_TrUtf8(const char* s);
void QLocalSocket_ConnectToServer(QLocalSocket* self);
void QLocalSocket_ConnectToServerWithName(QLocalSocket* self, struct miqt_string name);
void QLocalSocket_DisconnectFromServer(QLocalSocket* self);
void QLocalSocket_SetServerName(QLocalSocket* self, struct miqt_string name);
struct miqt_string QLocalSocket_ServerName(const QLocalSocket* self);
struct miqt_string QLocalSocket_FullServerName(const QLocalSocket* self);
void QLocalSocket_Abort(QLocalSocket* self);
bool QLocalSocket_IsSequential(const QLocalSocket* self);
long long QLocalSocket_BytesAvailable(const QLocalSocket* self);
long long QLocalSocket_BytesToWrite(const QLocalSocket* self);
bool QLocalSocket_CanReadLine(const QLocalSocket* self);
bool QLocalSocket_Open(QLocalSocket* self, int openMode);
void QLocalSocket_Close(QLocalSocket* self);
int QLocalSocket_Error(const QLocalSocket* self);
bool QLocalSocket_Flush(QLocalSocket* self);
bool QLocalSocket_IsValid(const QLocalSocket* self);
long long QLocalSocket_ReadBufferSize(const QLocalSocket* self);
void QLocalSocket_SetReadBufferSize(QLocalSocket* self, long long size);
bool QLocalSocket_SetSocketDescriptor(QLocalSocket* self, intptr_t socketDescriptor);
intptr_t QLocalSocket_SocketDescriptor(const QLocalSocket* self);
int QLocalSocket_State(const QLocalSocket* self);
bool QLocalSocket_WaitForBytesWritten(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForConnected(QLocalSocket* self);
bool QLocalSocket_WaitForDisconnected(QLocalSocket* self);
bool QLocalSocket_WaitForReadyRead(QLocalSocket* self, int msecs);
void QLocalSocket_Connected(QLocalSocket* self);
void QLocalSocket_connect_Connected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_Disconnected(QLocalSocket* self);
void QLocalSocket_connect_Disconnected(QLocalSocket* self, intptr_t slot);
void QLocalSocket_ErrorWithSocketError(QLocalSocket* self, int socketError);
void QLocalSocket_connect_ErrorWithSocketError(QLocalSocket* self, intptr_t slot);
void QLocalSocket_ErrorOccurred(QLocalSocket* self, int socketError);
void QLocalSocket_connect_ErrorOccurred(QLocalSocket* self, intptr_t slot);
void QLocalSocket_StateChanged(QLocalSocket* self, int socketState);
void QLocalSocket_connect_StateChanged(QLocalSocket* self, intptr_t slot);
long long QLocalSocket_ReadData(QLocalSocket* self, char* param1, long long param2);
long long QLocalSocket_WriteData(QLocalSocket* self, const char* param1, long long param2);
struct miqt_string QLocalSocket_Tr2(const char* s, const char* c);
struct miqt_string QLocalSocket_Tr3(const char* s, const char* c, int n);
struct miqt_string QLocalSocket_TrUtf82(const char* s, const char* c);
struct miqt_string QLocalSocket_TrUtf83(const char* s, const char* c, int n);
void QLocalSocket_ConnectToServer1(QLocalSocket* self, int openMode);
void QLocalSocket_ConnectToServer2(QLocalSocket* self, struct miqt_string name, int openMode);
bool QLocalSocket_SetSocketDescriptor2(QLocalSocket* self, intptr_t socketDescriptor, int socketState);
bool QLocalSocket_SetSocketDescriptor3(QLocalSocket* self, intptr_t socketDescriptor, int socketState, int openMode);
bool QLocalSocket_WaitForConnected1(QLocalSocket* self, int msecs);
bool QLocalSocket_WaitForDisconnected1(QLocalSocket* self, int msecs);
bool QLocalSocket_override_virtual_IsSequential(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_IsSequential(const void* self);
bool QLocalSocket_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_BytesAvailable(const void* self);
bool QLocalSocket_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_BytesToWrite(const void* self);
bool QLocalSocket_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_CanReadLine(const void* self);
bool QLocalSocket_override_virtual_Open(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_Open(void* self, int openMode);
bool QLocalSocket_override_virtual_Close(void* self, intptr_t slot);
void QLocalSocket_virtualbase_Close(void* self);
bool QLocalSocket_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_WaitForBytesWritten(void* self, int msecs);
bool QLocalSocket_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_WaitForReadyRead(void* self, int msecs);
bool QLocalSocket_override_virtual_ReadData(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_ReadData(void* self, char* param1, long long param2);
bool QLocalSocket_override_virtual_WriteData(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_WriteData(void* self, const char* param1, long long param2);
bool QLocalSocket_override_virtual_Pos(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_Pos(const void* self);
bool QLocalSocket_override_virtual_Size(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_Size(const void* self);
bool QLocalSocket_override_virtual_Seek(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_Seek(void* self, long long pos);
bool QLocalSocket_override_virtual_AtEnd(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_AtEnd(const void* self);
bool QLocalSocket_override_virtual_Reset(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_Reset(void* self);
bool QLocalSocket_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QLocalSocket_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
bool QLocalSocket_override_virtual_Event(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_Event(void* self, QEvent* event);
bool QLocalSocket_override_virtual_EventFilter(void* self, intptr_t slot);
bool QLocalSocket_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QLocalSocket_override_virtual_TimerEvent(void* self, intptr_t slot);
void QLocalSocket_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QLocalSocket_override_virtual_ChildEvent(void* self, intptr_t slot);
void QLocalSocket_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QLocalSocket_override_virtual_CustomEvent(void* self, intptr_t slot);
void QLocalSocket_virtualbase_CustomEvent(void* self, QEvent* event);
bool QLocalSocket_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QLocalSocket_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QLocalSocket_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QLocalSocket_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QLocalSocket_Delete(QLocalSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
