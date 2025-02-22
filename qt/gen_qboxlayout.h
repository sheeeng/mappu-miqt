#pragma once
#ifndef MIQT_QT_GEN_QBOXLAYOUT_H
#define MIQT_QT_GEN_QBOXLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBoxLayout;
class QChildEvent;
class QEvent;
class QHBoxLayout;
class QLayout;
class QLayoutItem;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QSize;
class QSpacerItem;
class QTimerEvent;
class QVBoxLayout;
class QWidget;
#else
typedef struct QBoxLayout QBoxLayout;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHBoxLayout QHBoxLayout;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QSpacerItem QSpacerItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVBoxLayout QVBoxLayout;
typedef struct QWidget QWidget;
#endif

QBoxLayout* QBoxLayout_new(int param1);
QBoxLayout* QBoxLayout_new2(int param1, QWidget* parent);
void QBoxLayout_virtbase(QBoxLayout* src, QLayout** outptr_QLayout);
QMetaObject* QBoxLayout_MetaObject(const QBoxLayout* self);
void* QBoxLayout_Metacast(QBoxLayout* self, const char* param1);
struct miqt_string QBoxLayout_Tr(const char* s);
struct miqt_string QBoxLayout_TrUtf8(const char* s);
int QBoxLayout_Direction(const QBoxLayout* self);
void QBoxLayout_SetDirection(QBoxLayout* self, int direction);
void QBoxLayout_AddSpacing(QBoxLayout* self, int size);
void QBoxLayout_AddStretch(QBoxLayout* self);
void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem);
void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1);
void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout);
void QBoxLayout_AddStrut(QBoxLayout* self, int param1);
void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1);
void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size);
void QBoxLayout_InsertStretch(QBoxLayout* self, int index);
void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem);
void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget);
void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout);
void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2);
int QBoxLayout_Spacing(const QBoxLayout* self);
void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing);
bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch);
bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch);
void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch);
int QBoxLayout_Stretch(const QBoxLayout* self, int index);
QSize* QBoxLayout_SizeHint(const QBoxLayout* self);
QSize* QBoxLayout_MinimumSize(const QBoxLayout* self);
QSize* QBoxLayout_MaximumSize(const QBoxLayout* self);
bool QBoxLayout_HasHeightForWidth(const QBoxLayout* self);
int QBoxLayout_HeightForWidth(const QBoxLayout* self, int param1);
int QBoxLayout_MinimumHeightForWidth(const QBoxLayout* self, int param1);
int QBoxLayout_ExpandingDirections(const QBoxLayout* self);
void QBoxLayout_Invalidate(QBoxLayout* self);
QLayoutItem* QBoxLayout_ItemAt(const QBoxLayout* self, int param1);
QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1);
int QBoxLayout_Count(const QBoxLayout* self);
void QBoxLayout_SetGeometry(QBoxLayout* self, QRect* geometry);
struct miqt_string QBoxLayout_Tr2(const char* s, const char* c);
struct miqt_string QBoxLayout_Tr3(const char* s, const char* c, int n);
struct miqt_string QBoxLayout_TrUtf82(const char* s, const char* c);
struct miqt_string QBoxLayout_TrUtf83(const char* s, const char* c, int n);
void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch);
void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch);
void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment);
void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch);
void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch);
void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch);
void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment);
void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch);
bool QBoxLayout_override_virtual_AddItem(void* self, intptr_t slot);
void QBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1);
bool QBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QBoxLayout_virtualbase_SizeHint(const void* self);
bool QBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QBoxLayout_virtualbase_MinimumSize(const void* self);
bool QBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QBoxLayout_virtualbase_MaximumSize(const void* self);
bool QBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_HasHeightForWidth(const void* self);
bool QBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QBoxLayout_virtualbase_HeightForWidth(const void* self, int param1);
bool QBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1);
bool QBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QBoxLayout_virtualbase_ExpandingDirections(const void* self);
bool QBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QBoxLayout_virtualbase_Invalidate(void* self);
bool QBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QBoxLayout_virtualbase_ItemAt(const void* self, int param1);
bool QBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QBoxLayout_virtualbase_TakeAt(void* self, int param1);
bool QBoxLayout_override_virtual_Count(void* self, intptr_t slot);
int QBoxLayout_virtualbase_Count(const void* self);
bool QBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry);
bool QBoxLayout_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QBoxLayout_virtualbase_Geometry(const void* self);
bool QBoxLayout_override_virtual_IndexOf(void* self, intptr_t slot);
int QBoxLayout_virtualbase_IndexOf(const void* self, QWidget* param1);
bool QBoxLayout_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_IsEmpty(const void* self);
bool QBoxLayout_override_virtual_ControlTypes(void* self, intptr_t slot);
int QBoxLayout_virtualbase_ControlTypes(const void* self);
bool QBoxLayout_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QBoxLayout_virtualbase_Layout(void* self);
bool QBoxLayout_override_virtual_ChildEvent(void* self, intptr_t slot);
void QBoxLayout_virtualbase_ChildEvent(void* self, QChildEvent* e);
bool QBoxLayout_override_virtual_Event(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_Event(void* self, QEvent* event);
bool QBoxLayout_override_virtual_EventFilter(void* self, intptr_t slot);
bool QBoxLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QBoxLayout_override_virtual_TimerEvent(void* self, intptr_t slot);
void QBoxLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QBoxLayout_override_virtual_CustomEvent(void* self, intptr_t slot);
void QBoxLayout_virtualbase_CustomEvent(void* self, QEvent* event);
bool QBoxLayout_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QBoxLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QBoxLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QBoxLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
bool QBoxLayout_override_virtual_Widget(void* self, intptr_t slot);
QWidget* QBoxLayout_virtualbase_Widget(void* self);
bool QBoxLayout_override_virtual_SpacerItem(void* self, intptr_t slot);
QSpacerItem* QBoxLayout_virtualbase_SpacerItem(void* self);
void QBoxLayout_Delete(QBoxLayout* self);

QHBoxLayout* QHBoxLayout_new(QWidget* parent);
QHBoxLayout* QHBoxLayout_new2();
void QHBoxLayout_virtbase(QHBoxLayout* src, QBoxLayout** outptr_QBoxLayout);
QMetaObject* QHBoxLayout_MetaObject(const QHBoxLayout* self);
void* QHBoxLayout_Metacast(QHBoxLayout* self, const char* param1);
struct miqt_string QHBoxLayout_Tr(const char* s);
struct miqt_string QHBoxLayout_TrUtf8(const char* s);
struct miqt_string QHBoxLayout_Tr2(const char* s, const char* c);
struct miqt_string QHBoxLayout_Tr3(const char* s, const char* c, int n);
struct miqt_string QHBoxLayout_TrUtf82(const char* s, const char* c);
struct miqt_string QHBoxLayout_TrUtf83(const char* s, const char* c, int n);
bool QHBoxLayout_override_virtual_AddItem(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1);
bool QHBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QHBoxLayout_virtualbase_SizeHint(const void* self);
bool QHBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QHBoxLayout_virtualbase_MinimumSize(const void* self);
bool QHBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QHBoxLayout_virtualbase_MaximumSize(const void* self);
bool QHBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QHBoxLayout_virtualbase_HasHeightForWidth(const void* self);
bool QHBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_HeightForWidth(const void* self, int param1);
bool QHBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1);
bool QHBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_ExpandingDirections(const void* self);
bool QHBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_Invalidate(void* self);
bool QHBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QHBoxLayout_virtualbase_ItemAt(const void* self, int param1);
bool QHBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QHBoxLayout_virtualbase_TakeAt(void* self, int param1);
bool QHBoxLayout_override_virtual_Count(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_Count(const void* self);
bool QHBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry);
bool QHBoxLayout_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QHBoxLayout_virtualbase_Geometry(const void* self);
bool QHBoxLayout_override_virtual_IndexOf(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_IndexOf(const void* self, QWidget* param1);
bool QHBoxLayout_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QHBoxLayout_virtualbase_IsEmpty(const void* self);
bool QHBoxLayout_override_virtual_ControlTypes(void* self, intptr_t slot);
int QHBoxLayout_virtualbase_ControlTypes(const void* self);
bool QHBoxLayout_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QHBoxLayout_virtualbase_Layout(void* self);
bool QHBoxLayout_override_virtual_ChildEvent(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_ChildEvent(void* self, QChildEvent* e);
bool QHBoxLayout_override_virtual_Event(void* self, intptr_t slot);
bool QHBoxLayout_virtualbase_Event(void* self, QEvent* event);
bool QHBoxLayout_override_virtual_EventFilter(void* self, intptr_t slot);
bool QHBoxLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QHBoxLayout_override_virtual_TimerEvent(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QHBoxLayout_override_virtual_CustomEvent(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_CustomEvent(void* self, QEvent* event);
bool QHBoxLayout_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QHBoxLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QHBoxLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
bool QHBoxLayout_override_virtual_Widget(void* self, intptr_t slot);
QWidget* QHBoxLayout_virtualbase_Widget(void* self);
bool QHBoxLayout_override_virtual_SpacerItem(void* self, intptr_t slot);
QSpacerItem* QHBoxLayout_virtualbase_SpacerItem(void* self);
void QHBoxLayout_Delete(QHBoxLayout* self);

QVBoxLayout* QVBoxLayout_new(QWidget* parent);
QVBoxLayout* QVBoxLayout_new2();
void QVBoxLayout_virtbase(QVBoxLayout* src, QBoxLayout** outptr_QBoxLayout);
QMetaObject* QVBoxLayout_MetaObject(const QVBoxLayout* self);
void* QVBoxLayout_Metacast(QVBoxLayout* self, const char* param1);
struct miqt_string QVBoxLayout_Tr(const char* s);
struct miqt_string QVBoxLayout_TrUtf8(const char* s);
struct miqt_string QVBoxLayout_Tr2(const char* s, const char* c);
struct miqt_string QVBoxLayout_Tr3(const char* s, const char* c, int n);
struct miqt_string QVBoxLayout_TrUtf82(const char* s, const char* c);
struct miqt_string QVBoxLayout_TrUtf83(const char* s, const char* c, int n);
bool QVBoxLayout_override_virtual_AddItem(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_AddItem(void* self, QLayoutItem* param1);
bool QVBoxLayout_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QVBoxLayout_virtualbase_SizeHint(const void* self);
bool QVBoxLayout_override_virtual_MinimumSize(void* self, intptr_t slot);
QSize* QVBoxLayout_virtualbase_MinimumSize(const void* self);
bool QVBoxLayout_override_virtual_MaximumSize(void* self, intptr_t slot);
QSize* QVBoxLayout_virtualbase_MaximumSize(const void* self);
bool QVBoxLayout_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QVBoxLayout_virtualbase_HasHeightForWidth(const void* self);
bool QVBoxLayout_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_HeightForWidth(const void* self, int param1);
bool QVBoxLayout_override_virtual_MinimumHeightForWidth(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_MinimumHeightForWidth(const void* self, int param1);
bool QVBoxLayout_override_virtual_ExpandingDirections(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_ExpandingDirections(const void* self);
bool QVBoxLayout_override_virtual_Invalidate(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_Invalidate(void* self);
bool QVBoxLayout_override_virtual_ItemAt(void* self, intptr_t slot);
QLayoutItem* QVBoxLayout_virtualbase_ItemAt(const void* self, int param1);
bool QVBoxLayout_override_virtual_TakeAt(void* self, intptr_t slot);
QLayoutItem* QVBoxLayout_virtualbase_TakeAt(void* self, int param1);
bool QVBoxLayout_override_virtual_Count(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_Count(const void* self);
bool QVBoxLayout_override_virtual_SetGeometry(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_SetGeometry(void* self, QRect* geometry);
bool QVBoxLayout_override_virtual_Geometry(void* self, intptr_t slot);
QRect* QVBoxLayout_virtualbase_Geometry(const void* self);
bool QVBoxLayout_override_virtual_IndexOf(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_IndexOf(const void* self, QWidget* param1);
bool QVBoxLayout_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QVBoxLayout_virtualbase_IsEmpty(const void* self);
bool QVBoxLayout_override_virtual_ControlTypes(void* self, intptr_t slot);
int QVBoxLayout_virtualbase_ControlTypes(const void* self);
bool QVBoxLayout_override_virtual_Layout(void* self, intptr_t slot);
QLayout* QVBoxLayout_virtualbase_Layout(void* self);
bool QVBoxLayout_override_virtual_ChildEvent(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_ChildEvent(void* self, QChildEvent* e);
bool QVBoxLayout_override_virtual_Event(void* self, intptr_t slot);
bool QVBoxLayout_virtualbase_Event(void* self, QEvent* event);
bool QVBoxLayout_override_virtual_EventFilter(void* self, intptr_t slot);
bool QVBoxLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QVBoxLayout_override_virtual_TimerEvent(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QVBoxLayout_override_virtual_CustomEvent(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_CustomEvent(void* self, QEvent* event);
bool QVBoxLayout_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QVBoxLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QVBoxLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
bool QVBoxLayout_override_virtual_Widget(void* self, intptr_t slot);
QWidget* QVBoxLayout_virtualbase_Widget(void* self);
bool QVBoxLayout_override_virtual_SpacerItem(void* self, intptr_t slot);
QSpacerItem* QVBoxLayout_virtualbase_SpacerItem(void* self);
void QVBoxLayout_Delete(QVBoxLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
