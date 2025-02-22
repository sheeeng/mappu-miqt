#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEQUOTAREQUEST_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEQUOTAREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QUrl;
class QWebEngineQuotaRequest;
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineQuotaRequest QWebEngineQuotaRequest;
#endif

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new();
QWebEngineQuotaRequest* QWebEngineQuotaRequest_new2(QWebEngineQuotaRequest* param1);
void QWebEngineQuotaRequest_Accept(QWebEngineQuotaRequest* self);
void QWebEngineQuotaRequest_Reject(QWebEngineQuotaRequest* self);
QUrl* QWebEngineQuotaRequest_Origin(const QWebEngineQuotaRequest* self);
long long QWebEngineQuotaRequest_RequestedSize(const QWebEngineQuotaRequest* self);
bool QWebEngineQuotaRequest_OperatorEqual(const QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that);
bool QWebEngineQuotaRequest_OperatorNotEqual(const QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that);
void QWebEngineQuotaRequest_Delete(QWebEngineQuotaRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
