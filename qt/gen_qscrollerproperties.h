#ifndef GEN_QSCROLLERPROPERTIES_H
#define GEN_QSCROLLERPROPERTIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScrollerProperties;
class QVariant;
#else
typedef struct QScrollerProperties QScrollerProperties;
typedef struct QVariant QVariant;
#endif

QScrollerProperties* QScrollerProperties_new();
QScrollerProperties* QScrollerProperties_new2(QScrollerProperties* sp);
void QScrollerProperties_OperatorAssign(QScrollerProperties* self, QScrollerProperties* sp);
bool QScrollerProperties_OperatorEqual(QScrollerProperties* self, QScrollerProperties* sp);
bool QScrollerProperties_OperatorNotEqual(QScrollerProperties* self, QScrollerProperties* sp);
void QScrollerProperties_SetDefaultScrollerProperties(QScrollerProperties* sp);
void QScrollerProperties_UnsetDefaultScrollerProperties();
QVariant* QScrollerProperties_ScrollMetric(QScrollerProperties* self, uintptr_t metric);
void QScrollerProperties_SetScrollMetric(QScrollerProperties* self, uintptr_t metric, QVariant* value);
void QScrollerProperties_Delete(QScrollerProperties* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
