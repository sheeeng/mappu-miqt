#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINECLIENTCERTIFICATESTORE_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINECLIENTCERTIFICATESTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSslCertificate;
class QSslKey;
class QWebEngineClientCertificateStore;
#else
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslKey QSslKey;
typedef struct QWebEngineClientCertificateStore QWebEngineClientCertificateStore;
#endif

void QWebEngineClientCertificateStore_Add(QWebEngineClientCertificateStore* self, QSslCertificate* certificate, QSslKey* privateKey);
struct miqt_array /* of QSslCertificate* */  QWebEngineClientCertificateStore_Certificates(const QWebEngineClientCertificateStore* self);
void QWebEngineClientCertificateStore_Remove(QWebEngineClientCertificateStore* self, QSslCertificate* certificate);
void QWebEngineClientCertificateStore_Clear(QWebEngineClientCertificateStore* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif