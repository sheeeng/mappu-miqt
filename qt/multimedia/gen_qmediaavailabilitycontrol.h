#ifndef GEN_QMEDIAAVAILABILITYCONTROL_H
#define GEN_QMEDIAAVAILABILITYCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaAvailabilityControl;
class QMetaObject;
#else
typedef struct QMediaAvailabilityControl QMediaAvailabilityControl;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QMediaAvailabilityControl_MetaObject(const QMediaAvailabilityControl* self);
void* QMediaAvailabilityControl_Metacast(QMediaAvailabilityControl* self, const char* param1);
struct miqt_string QMediaAvailabilityControl_Tr(const char* s);
struct miqt_string QMediaAvailabilityControl_TrUtf8(const char* s);
int QMediaAvailabilityControl_Availability(const QMediaAvailabilityControl* self);
void QMediaAvailabilityControl_AvailabilityChanged(QMediaAvailabilityControl* self, int availability);
void QMediaAvailabilityControl_connect_AvailabilityChanged(QMediaAvailabilityControl* self, intptr_t slot);
struct miqt_string QMediaAvailabilityControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaAvailabilityControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaAvailabilityControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaAvailabilityControl_TrUtf83(const char* s, const char* c, int n);
void QMediaAvailabilityControl_Delete(QMediaAvailabilityControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
