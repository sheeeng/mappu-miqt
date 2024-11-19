#pragma once
#ifndef MIQT_QT6_GEN_QCRYPTOGRAPHICHASH_H
#define MIQT_QT6_GEN_QCRYPTOGRAPHICHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QByteArrayView;
class QCryptographicHash;
class QIODevice;
#else
typedef struct QByteArray QByteArray;
typedef struct QByteArrayView QByteArrayView;
typedef struct QCryptographicHash QCryptographicHash;
typedef struct QIODevice QIODevice;
#endif

void QCryptographicHash_new(int method, QCryptographicHash** outptr_QCryptographicHash);
void QCryptographicHash_Reset(QCryptographicHash* self);
void QCryptographicHash_AddData(QCryptographicHash* self, const char* data, ptrdiff_t length);
void QCryptographicHash_AddDataWithData(QCryptographicHash* self, QByteArrayView* data);
bool QCryptographicHash_AddDataWithDevice(QCryptographicHash* self, QIODevice* device);
struct miqt_string QCryptographicHash_Result(const QCryptographicHash* self);
QByteArrayView* QCryptographicHash_ResultView(const QCryptographicHash* self);
struct miqt_string QCryptographicHash_Hash(QByteArrayView* data, int method);
int QCryptographicHash_HashLength(int method);
void QCryptographicHash_Delete(QCryptographicHash* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
