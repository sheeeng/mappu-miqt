#pragma once
#ifndef MIQT_QT_GEN_QPAUSEANIMATION_H
#define MIQT_QT_GEN_QPAUSEANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPauseAnimation;
class QTimerEvent;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
typedef struct QTimerEvent QTimerEvent;
#endif

QPauseAnimation* QPauseAnimation_new();
QPauseAnimation* QPauseAnimation_new2(int msecs);
QPauseAnimation* QPauseAnimation_new3(QObject* parent);
QPauseAnimation* QPauseAnimation_new4(int msecs, QObject* parent);
void QPauseAnimation_virtbase(QPauseAnimation* src, QAbstractAnimation** outptr_QAbstractAnimation);
QMetaObject* QPauseAnimation_MetaObject(const QPauseAnimation* self);
void* QPauseAnimation_Metacast(QPauseAnimation* self, const char* param1);
struct miqt_string QPauseAnimation_Tr(const char* s);
struct miqt_string QPauseAnimation_TrUtf8(const char* s);
int QPauseAnimation_Duration(const QPauseAnimation* self);
void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs);
bool QPauseAnimation_Event(QPauseAnimation* self, QEvent* e);
void QPauseAnimation_UpdateCurrentTime(QPauseAnimation* self, int param1);
struct miqt_string QPauseAnimation_Tr2(const char* s, const char* c);
struct miqt_string QPauseAnimation_Tr3(const char* s, const char* c, int n);
struct miqt_string QPauseAnimation_TrUtf82(const char* s, const char* c);
struct miqt_string QPauseAnimation_TrUtf83(const char* s, const char* c, int n);
bool QPauseAnimation_override_virtual_Duration(void* self, intptr_t slot);
int QPauseAnimation_virtualbase_Duration(const void* self);
bool QPauseAnimation_override_virtual_Event(void* self, intptr_t slot);
bool QPauseAnimation_virtualbase_Event(void* self, QEvent* e);
bool QPauseAnimation_override_virtual_UpdateCurrentTime(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_UpdateCurrentTime(void* self, int param1);
bool QPauseAnimation_override_virtual_UpdateState(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_UpdateState(void* self, int newState, int oldState);
bool QPauseAnimation_override_virtual_UpdateDirection(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_UpdateDirection(void* self, int direction);
bool QPauseAnimation_override_virtual_EventFilter(void* self, intptr_t slot);
bool QPauseAnimation_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QPauseAnimation_override_virtual_TimerEvent(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QPauseAnimation_override_virtual_ChildEvent(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QPauseAnimation_override_virtual_CustomEvent(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_CustomEvent(void* self, QEvent* event);
bool QPauseAnimation_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QPauseAnimation_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QPauseAnimation_Delete(QPauseAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
