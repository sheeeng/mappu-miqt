#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTSPINBOX_H
#define MIQT_QT_GEN_QABSTRACTSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSpinBox;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractSpinBox QAbstractSpinBox;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QAbstractSpinBox* QAbstractSpinBox_new(QWidget* parent);
QAbstractSpinBox* QAbstractSpinBox_new2();
void QAbstractSpinBox_virtbase(QAbstractSpinBox* src, QWidget** outptr_QWidget);
QMetaObject* QAbstractSpinBox_MetaObject(const QAbstractSpinBox* self);
void* QAbstractSpinBox_Metacast(QAbstractSpinBox* self, const char* param1);
struct miqt_string QAbstractSpinBox_Tr(const char* s);
struct miqt_string QAbstractSpinBox_TrUtf8(const char* s);
int QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, int bs);
void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, int cm);
int QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self);
bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self);
struct miqt_string QAbstractSpinBox_Text(const QAbstractSpinBox* self);
struct miqt_string QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, struct miqt_string txt);
bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w);
void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r);
bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt);
bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag);
int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame);
bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on);
bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown);
bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self);
bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event);
QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, int param1);
int QAbstractSpinBox_Validate(const QAbstractSpinBox* self, struct miqt_string input, int* pos);
void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, struct miqt_string input);
void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps);
void QAbstractSpinBox_StepUp(QAbstractSpinBox* self);
void QAbstractSpinBox_StepDown(QAbstractSpinBox* self);
void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self);
void QAbstractSpinBox_Clear(QAbstractSpinBox* self);
void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event);
void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event);
int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self);
void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self);
void QAbstractSpinBox_connect_EditingFinished(QAbstractSpinBox* self, intptr_t slot);
struct miqt_string QAbstractSpinBox_Tr2(const char* s, const char* c);
struct miqt_string QAbstractSpinBox_Tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractSpinBox_TrUtf82(const char* s, const char* c);
struct miqt_string QAbstractSpinBox_TrUtf83(const char* s, const char* c, int n);
bool QAbstractSpinBox_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QAbstractSpinBox_virtualbase_SizeHint(const void* self);
bool QAbstractSpinBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractSpinBox_virtualbase_MinimumSizeHint(const void* self);
bool QAbstractSpinBox_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_Event(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractSpinBox_virtualbase_InputMethodQuery(const void* self, int param1);
bool QAbstractSpinBox_override_virtual_Validate(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_Validate(const void* self, struct miqt_string input, int* pos);
bool QAbstractSpinBox_override_virtual_Fixup(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_Fixup(const void* self, struct miqt_string input);
bool QAbstractSpinBox_override_virtual_StepBy(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_StepBy(void* self, int steps);
bool QAbstractSpinBox_override_virtual_Clear(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_Clear(void* self);
bool QAbstractSpinBox_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QAbstractSpinBox_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QAbstractSpinBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QAbstractSpinBox_override_virtual_WheelEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QAbstractSpinBox_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QAbstractSpinBox_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QAbstractSpinBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QAbstractSpinBox_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_ChangeEvent(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_CloseEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QAbstractSpinBox_override_virtual_HideEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QAbstractSpinBox_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QAbstractSpinBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QAbstractSpinBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QAbstractSpinBox_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QAbstractSpinBox_override_virtual_PaintEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QAbstractSpinBox_override_virtual_ShowEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QAbstractSpinBox_override_virtual_StepEnabled(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_StepEnabled(const void* self);
bool QAbstractSpinBox_override_virtual_DevType(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_DevType(const void* self);
bool QAbstractSpinBox_override_virtual_SetVisible(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_SetVisible(void* self, bool visible);
bool QAbstractSpinBox_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_HeightForWidth(const void* self, int param1);
bool QAbstractSpinBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_HasHeightForWidth(const void* self);
bool QAbstractSpinBox_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractSpinBox_virtualbase_PaintEngine(const void* self);
bool QAbstractSpinBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QAbstractSpinBox_override_virtual_EnterEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_EnterEvent(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_MoveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QAbstractSpinBox_override_virtual_TabletEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QAbstractSpinBox_override_virtual_ActionEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QAbstractSpinBox_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QAbstractSpinBox_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QAbstractSpinBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QAbstractSpinBox_override_virtual_DropEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QAbstractSpinBox_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QAbstractSpinBox_override_virtual_Metric(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_Metric(const void* self, int param1);
bool QAbstractSpinBox_override_virtual_InitPainter(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QAbstractSpinBox_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractSpinBox_virtualbase_Redirected(const void* self, QPoint* offset);
bool QAbstractSpinBox_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QAbstractSpinBox_virtualbase_SharedPainter(const void* self);
bool QAbstractSpinBox_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QAbstractSpinBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QAbstractSpinBox_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractSpinBox_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QAbstractSpinBox_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_CustomEvent(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QAbstractSpinBox_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractSpinBox_Delete(QAbstractSpinBox* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
