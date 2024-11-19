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
class QEvent;
class QMetaObject;
class QObject;
class QPauseAnimation;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
#endif

void QPauseAnimation_new(QPauseAnimation** outptr_QPauseAnimation, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject);
void QPauseAnimation_new2(int msecs, QPauseAnimation** outptr_QPauseAnimation, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject);
void QPauseAnimation_new3(QObject* parent, QPauseAnimation** outptr_QPauseAnimation, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject);
void QPauseAnimation_new4(int msecs, QObject* parent, QPauseAnimation** outptr_QPauseAnimation, QAbstractAnimation** outptr_QAbstractAnimation, QObject** outptr_QObject);
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
void QPauseAnimation_override_virtual_Duration(void* self, intptr_t slot);
int QPauseAnimation_virtualbase_Duration(const void* self);
void QPauseAnimation_override_virtual_Event(void* self, intptr_t slot);
bool QPauseAnimation_virtualbase_Event(void* self, QEvent* e);
void QPauseAnimation_override_virtual_UpdateCurrentTime(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_UpdateCurrentTime(void* self, int param1);
void QPauseAnimation_override_virtual_UpdateState(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_UpdateState(void* self, int newState, int oldState);
void QPauseAnimation_override_virtual_UpdateDirection(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_UpdateDirection(void* self, int direction);
void QPauseAnimation_Delete(QPauseAnimation* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
