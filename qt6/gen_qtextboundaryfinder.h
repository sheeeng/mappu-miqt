#pragma once
#ifndef MIQT_QT6_GEN_QTEXTBOUNDARYFINDER_H
#define MIQT_QT6_GEN_QTEXTBOUNDARYFINDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QTextBoundaryFinder;
#else
typedef struct QChar QChar;
typedef struct QTextBoundaryFinder QTextBoundaryFinder;
#endif

void QTextBoundaryFinder_new(QTextBoundaryFinder** outptr_QTextBoundaryFinder);
void QTextBoundaryFinder_new2(QTextBoundaryFinder* other, QTextBoundaryFinder** outptr_QTextBoundaryFinder);
void QTextBoundaryFinder_new3(int typeVal, struct miqt_string stringVal, QTextBoundaryFinder** outptr_QTextBoundaryFinder);
void QTextBoundaryFinder_new4(int typeVal, QChar* chars, ptrdiff_t length, QTextBoundaryFinder** outptr_QTextBoundaryFinder);
void QTextBoundaryFinder_new5(int typeVal, QChar* chars, ptrdiff_t length, unsigned char* buffer, QTextBoundaryFinder** outptr_QTextBoundaryFinder);
void QTextBoundaryFinder_new6(int typeVal, QChar* chars, ptrdiff_t length, unsigned char* buffer, ptrdiff_t bufferSize, QTextBoundaryFinder** outptr_QTextBoundaryFinder);
void QTextBoundaryFinder_OperatorAssign(QTextBoundaryFinder* self, QTextBoundaryFinder* other);
bool QTextBoundaryFinder_IsValid(const QTextBoundaryFinder* self);
int QTextBoundaryFinder_Type(const QTextBoundaryFinder* self);
struct miqt_string QTextBoundaryFinder_String(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_ToStart(QTextBoundaryFinder* self);
void QTextBoundaryFinder_ToEnd(QTextBoundaryFinder* self);
ptrdiff_t QTextBoundaryFinder_Position(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_SetPosition(QTextBoundaryFinder* self, ptrdiff_t position);
ptrdiff_t QTextBoundaryFinder_ToNextBoundary(QTextBoundaryFinder* self);
ptrdiff_t QTextBoundaryFinder_ToPreviousBoundary(QTextBoundaryFinder* self);
bool QTextBoundaryFinder_IsAtBoundary(const QTextBoundaryFinder* self);
int QTextBoundaryFinder_BoundaryReasons(const QTextBoundaryFinder* self);
void QTextBoundaryFinder_Delete(QTextBoundaryFinder* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
