#ifndef GEN_QSTACKEDWIDGET_H
#define GEN_QSTACKEDWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QStackedWidget;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QStackedWidget QStackedWidget;
typedef struct QWidget QWidget;
#endif

QStackedWidget* QStackedWidget_new();
QStackedWidget* QStackedWidget_new2(QWidget* parent);
QMetaObject* QStackedWidget_MetaObject(QStackedWidget* self);
void QStackedWidget_Tr(const char* s, char** _out, int* _out_Strlen);
void QStackedWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w);
int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w);
void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w);
QWidget* QStackedWidget_CurrentWidget(QStackedWidget* self);
int QStackedWidget_CurrentIndex(QStackedWidget* self);
int QStackedWidget_IndexOf(QStackedWidget* self, QWidget* param1);
QWidget* QStackedWidget_Widget(QStackedWidget* self, int param1);
int QStackedWidget_Count(QStackedWidget* self);
void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index);
void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w);
void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1);
void QStackedWidget_connect_CurrentChanged(QStackedWidget* self, void* slot);
void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index);
void QStackedWidget_connect_WidgetRemoved(QStackedWidget* self, void* slot);
void QStackedWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStackedWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStackedWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStackedWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStackedWidget_Delete(QStackedWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
