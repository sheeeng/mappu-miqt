#pragma once
#ifndef MIQT_QT_GEN_QSIGNALTRANSITION_H
#define MIQT_QT_GEN_QSIGNALTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractTransition;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSignalTransition;
class QState;
class QTimerEvent;
#else
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSignalTransition QSignalTransition;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QSignalTransition* QSignalTransition_new();
QSignalTransition* QSignalTransition_new2(QObject* sender, const char* signal);
QSignalTransition* QSignalTransition_new3(QState* sourceState);
QSignalTransition* QSignalTransition_new4(QObject* sender, const char* signal, QState* sourceState);
void QSignalTransition_virtbase(QSignalTransition* src, QAbstractTransition** outptr_QAbstractTransition);
QMetaObject* QSignalTransition_MetaObject(const QSignalTransition* self);
void* QSignalTransition_Metacast(QSignalTransition* self, const char* param1);
struct miqt_string QSignalTransition_Tr(const char* s);
struct miqt_string QSignalTransition_TrUtf8(const char* s);
QObject* QSignalTransition_SenderObject(const QSignalTransition* self);
void QSignalTransition_SetSenderObject(QSignalTransition* self, QObject* sender);
struct miqt_string QSignalTransition_Signal(const QSignalTransition* self);
void QSignalTransition_SetSignal(QSignalTransition* self, struct miqt_string signal);
bool QSignalTransition_EventTest(QSignalTransition* self, QEvent* event);
void QSignalTransition_OnTransition(QSignalTransition* self, QEvent* event);
bool QSignalTransition_Event(QSignalTransition* self, QEvent* e);
struct miqt_string QSignalTransition_Tr2(const char* s, const char* c);
struct miqt_string QSignalTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string QSignalTransition_TrUtf82(const char* s, const char* c);
struct miqt_string QSignalTransition_TrUtf83(const char* s, const char* c, int n);
bool QSignalTransition_override_virtual_EventTest(void* self, intptr_t slot);
bool QSignalTransition_virtualbase_EventTest(void* self, QEvent* event);
bool QSignalTransition_override_virtual_OnTransition(void* self, intptr_t slot);
void QSignalTransition_virtualbase_OnTransition(void* self, QEvent* event);
bool QSignalTransition_override_virtual_Event(void* self, intptr_t slot);
bool QSignalTransition_virtualbase_Event(void* self, QEvent* e);
bool QSignalTransition_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSignalTransition_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QSignalTransition_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSignalTransition_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QSignalTransition_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSignalTransition_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QSignalTransition_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSignalTransition_virtualbase_CustomEvent(void* self, QEvent* event);
bool QSignalTransition_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSignalTransition_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QSignalTransition_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSignalTransition_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSignalTransition_Delete(QSignalTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
