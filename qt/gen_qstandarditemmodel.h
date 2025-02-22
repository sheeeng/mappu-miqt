#pragma once
#ifndef MIQT_QT_GEN_QSTANDARDITEMMODEL_H
#define MIQT_QT_GEN_QSTANDARDITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QBrush;
class QChildEvent;
class QDataStream;
class QEvent;
class QFont;
class QIcon;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QSize;
class QStandardItem;
class QStandardItemModel;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QStandardItem QStandardItem;
typedef struct QStandardItemModel QStandardItemModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QStandardItem* QStandardItem_new();
QStandardItem* QStandardItem_new2(struct miqt_string text);
QStandardItem* QStandardItem_new3(QIcon* icon, struct miqt_string text);
QStandardItem* QStandardItem_new4(int rows);
QStandardItem* QStandardItem_new5(int rows, int columns);
QVariant* QStandardItem_Data(const QStandardItem* self, int role);
void QStandardItem_SetData(QStandardItem* self, QVariant* value, int role);
void QStandardItem_ClearData(QStandardItem* self);
struct miqt_string QStandardItem_Text(const QStandardItem* self);
void QStandardItem_SetText(QStandardItem* self, struct miqt_string text);
QIcon* QStandardItem_Icon(const QStandardItem* self);
void QStandardItem_SetIcon(QStandardItem* self, QIcon* icon);
struct miqt_string QStandardItem_ToolTip(const QStandardItem* self);
void QStandardItem_SetToolTip(QStandardItem* self, struct miqt_string toolTip);
struct miqt_string QStandardItem_StatusTip(const QStandardItem* self);
void QStandardItem_SetStatusTip(QStandardItem* self, struct miqt_string statusTip);
struct miqt_string QStandardItem_WhatsThis(const QStandardItem* self);
void QStandardItem_SetWhatsThis(QStandardItem* self, struct miqt_string whatsThis);
QSize* QStandardItem_SizeHint(const QStandardItem* self);
void QStandardItem_SetSizeHint(QStandardItem* self, QSize* sizeHint);
QFont* QStandardItem_Font(const QStandardItem* self);
void QStandardItem_SetFont(QStandardItem* self, QFont* font);
int QStandardItem_TextAlignment(const QStandardItem* self);
void QStandardItem_SetTextAlignment(QStandardItem* self, int textAlignment);
QBrush* QStandardItem_Background(const QStandardItem* self);
void QStandardItem_SetBackground(QStandardItem* self, QBrush* brush);
QBrush* QStandardItem_Foreground(const QStandardItem* self);
void QStandardItem_SetForeground(QStandardItem* self, QBrush* brush);
int QStandardItem_CheckState(const QStandardItem* self);
void QStandardItem_SetCheckState(QStandardItem* self, int checkState);
struct miqt_string QStandardItem_AccessibleText(const QStandardItem* self);
void QStandardItem_SetAccessibleText(QStandardItem* self, struct miqt_string accessibleText);
struct miqt_string QStandardItem_AccessibleDescription(const QStandardItem* self);
void QStandardItem_SetAccessibleDescription(QStandardItem* self, struct miqt_string accessibleDescription);
int QStandardItem_Flags(const QStandardItem* self);
void QStandardItem_SetFlags(QStandardItem* self, int flags);
bool QStandardItem_IsEnabled(const QStandardItem* self);
void QStandardItem_SetEnabled(QStandardItem* self, bool enabled);
bool QStandardItem_IsEditable(const QStandardItem* self);
void QStandardItem_SetEditable(QStandardItem* self, bool editable);
bool QStandardItem_IsSelectable(const QStandardItem* self);
void QStandardItem_SetSelectable(QStandardItem* self, bool selectable);
bool QStandardItem_IsCheckable(const QStandardItem* self);
void QStandardItem_SetCheckable(QStandardItem* self, bool checkable);
bool QStandardItem_IsAutoTristate(const QStandardItem* self);
void QStandardItem_SetAutoTristate(QStandardItem* self, bool tristate);
bool QStandardItem_IsUserTristate(const QStandardItem* self);
void QStandardItem_SetUserTristate(QStandardItem* self, bool tristate);
bool QStandardItem_IsTristate(const QStandardItem* self);
void QStandardItem_SetTristate(QStandardItem* self, bool tristate);
bool QStandardItem_IsDragEnabled(const QStandardItem* self);
void QStandardItem_SetDragEnabled(QStandardItem* self, bool dragEnabled);
bool QStandardItem_IsDropEnabled(const QStandardItem* self);
void QStandardItem_SetDropEnabled(QStandardItem* self, bool dropEnabled);
QStandardItem* QStandardItem_Parent(const QStandardItem* self);
int QStandardItem_Row(const QStandardItem* self);
int QStandardItem_Column(const QStandardItem* self);
QModelIndex* QStandardItem_Index(const QStandardItem* self);
QStandardItemModel* QStandardItem_Model(const QStandardItem* self);
int QStandardItem_RowCount(const QStandardItem* self);
void QStandardItem_SetRowCount(QStandardItem* self, int rows);
int QStandardItem_ColumnCount(const QStandardItem* self);
void QStandardItem_SetColumnCount(QStandardItem* self, int columns);
bool QStandardItem_HasChildren(const QStandardItem* self);
QStandardItem* QStandardItem_Child(const QStandardItem* self, int row);
void QStandardItem_SetChild(QStandardItem* self, int row, int column, QStandardItem* item);
void QStandardItem_SetChild2(QStandardItem* self, int row, QStandardItem* item);
void QStandardItem_InsertRow(QStandardItem* self, int row, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_InsertColumn(QStandardItem* self, int column, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_InsertRows(QStandardItem* self, int row, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_InsertRows2(QStandardItem* self, int row, int count);
void QStandardItem_InsertColumns(QStandardItem* self, int column, int count);
void QStandardItem_RemoveRow(QStandardItem* self, int row);
void QStandardItem_RemoveColumn(QStandardItem* self, int column);
void QStandardItem_RemoveRows(QStandardItem* self, int row, int count);
void QStandardItem_RemoveColumns(QStandardItem* self, int column, int count);
void QStandardItem_AppendRow(QStandardItem* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_AppendRows(QStandardItem* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_AppendColumn(QStandardItem* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_InsertRow2(QStandardItem* self, int row, QStandardItem* item);
void QStandardItem_AppendRowWithItem(QStandardItem* self, QStandardItem* item);
QStandardItem* QStandardItem_TakeChild(QStandardItem* self, int row);
struct miqt_array /* of QStandardItem* */  QStandardItem_TakeRow(QStandardItem* self, int row);
struct miqt_array /* of QStandardItem* */  QStandardItem_TakeColumn(QStandardItem* self, int column);
void QStandardItem_SortChildren(QStandardItem* self, int column);
QStandardItem* QStandardItem_Clone(const QStandardItem* self);
int QStandardItem_Type(const QStandardItem* self);
void QStandardItem_Read(QStandardItem* self, QDataStream* in);
void QStandardItem_Write(const QStandardItem* self, QDataStream* out);
bool QStandardItem_OperatorLesser(const QStandardItem* self, QStandardItem* other);
QStandardItem* QStandardItem_Child2(const QStandardItem* self, int row, int column);
QStandardItem* QStandardItem_TakeChild2(QStandardItem* self, int row, int column);
void QStandardItem_SortChildren2(QStandardItem* self, int column, int order);
bool QStandardItem_override_virtual_Data(void* self, intptr_t slot);
QVariant* QStandardItem_virtualbase_Data(const void* self, int role);
bool QStandardItem_override_virtual_SetData(void* self, intptr_t slot);
void QStandardItem_virtualbase_SetData(void* self, QVariant* value, int role);
bool QStandardItem_override_virtual_Clone(void* self, intptr_t slot);
QStandardItem* QStandardItem_virtualbase_Clone(const void* self);
bool QStandardItem_override_virtual_Type(void* self, intptr_t slot);
int QStandardItem_virtualbase_Type(const void* self);
bool QStandardItem_override_virtual_Read(void* self, intptr_t slot);
void QStandardItem_virtualbase_Read(void* self, QDataStream* in);
bool QStandardItem_override_virtual_Write(void* self, intptr_t slot);
void QStandardItem_virtualbase_Write(const void* self, QDataStream* out);
bool QStandardItem_override_virtual_OperatorLesser(void* self, intptr_t slot);
bool QStandardItem_virtualbase_OperatorLesser(const void* self, QStandardItem* other);
void QStandardItem_Delete(QStandardItem* self);

QStandardItemModel* QStandardItemModel_new();
QStandardItemModel* QStandardItemModel_new2(int rows, int columns);
QStandardItemModel* QStandardItemModel_new3(QObject* parent);
QStandardItemModel* QStandardItemModel_new4(int rows, int columns, QObject* parent);
void QStandardItemModel_virtbase(QStandardItemModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
QMetaObject* QStandardItemModel_MetaObject(const QStandardItemModel* self);
void* QStandardItemModel_Metacast(QStandardItemModel* self, const char* param1);
struct miqt_string QStandardItemModel_Tr(const char* s);
struct miqt_string QStandardItemModel_TrUtf8(const char* s);
void QStandardItemModel_SetItemRoleNames(QStandardItemModel* self, struct miqt_map /* of int to struct miqt_string */  roleNames);
QModelIndex* QStandardItemModel_Index(const QStandardItemModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QStandardItemModel_Parent(const QStandardItemModel* self, QModelIndex* child);
int QStandardItemModel_RowCount(const QStandardItemModel* self, QModelIndex* parent);
int QStandardItemModel_ColumnCount(const QStandardItemModel* self, QModelIndex* parent);
bool QStandardItemModel_HasChildren(const QStandardItemModel* self, QModelIndex* parent);
QModelIndex* QStandardItemModel_Sibling(const QStandardItemModel* self, int row, int column, QModelIndex* idx);
QVariant* QStandardItemModel_Data(const QStandardItemModel* self, QModelIndex* index, int role);
bool QStandardItemModel_SetData(QStandardItemModel* self, QModelIndex* index, QVariant* value, int role);
bool QStandardItemModel_ClearItemData(QStandardItemModel* self, QModelIndex* index);
QVariant* QStandardItemModel_HeaderData(const QStandardItemModel* self, int section, int orientation, int role);
bool QStandardItemModel_SetHeaderData(QStandardItemModel* self, int section, int orientation, QVariant* value, int role);
bool QStandardItemModel_InsertRows(QStandardItemModel* self, int row, int count, QModelIndex* parent);
bool QStandardItemModel_InsertColumns(QStandardItemModel* self, int column, int count, QModelIndex* parent);
bool QStandardItemModel_RemoveRows(QStandardItemModel* self, int row, int count, QModelIndex* parent);
bool QStandardItemModel_RemoveColumns(QStandardItemModel* self, int column, int count, QModelIndex* parent);
int QStandardItemModel_Flags(const QStandardItemModel* self, QModelIndex* index);
int QStandardItemModel_SupportedDropActions(const QStandardItemModel* self);
struct miqt_map /* of int to QVariant* */  QStandardItemModel_ItemData(const QStandardItemModel* self, QModelIndex* index);
bool QStandardItemModel_SetItemData(QStandardItemModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QStandardItemModel_Clear(QStandardItemModel* self);
void QStandardItemModel_Sort(QStandardItemModel* self, int column, int order);
QStandardItem* QStandardItemModel_ItemFromIndex(const QStandardItemModel* self, QModelIndex* index);
QModelIndex* QStandardItemModel_IndexFromItem(const QStandardItemModel* self, QStandardItem* item);
QStandardItem* QStandardItemModel_Item(const QStandardItemModel* self, int row);
void QStandardItemModel_SetItem(QStandardItemModel* self, int row, int column, QStandardItem* item);
void QStandardItemModel_SetItem2(QStandardItemModel* self, int row, QStandardItem* item);
QStandardItem* QStandardItemModel_InvisibleRootItem(const QStandardItemModel* self);
QStandardItem* QStandardItemModel_HorizontalHeaderItem(const QStandardItemModel* self, int column);
void QStandardItemModel_SetHorizontalHeaderItem(QStandardItemModel* self, int column, QStandardItem* item);
QStandardItem* QStandardItemModel_VerticalHeaderItem(const QStandardItemModel* self, int row);
void QStandardItemModel_SetVerticalHeaderItem(QStandardItemModel* self, int row, QStandardItem* item);
void QStandardItemModel_SetHorizontalHeaderLabels(QStandardItemModel* self, struct miqt_array /* of struct miqt_string */  labels);
void QStandardItemModel_SetVerticalHeaderLabels(QStandardItemModel* self, struct miqt_array /* of struct miqt_string */  labels);
void QStandardItemModel_SetRowCount(QStandardItemModel* self, int rows);
void QStandardItemModel_SetColumnCount(QStandardItemModel* self, int columns);
void QStandardItemModel_AppendRow(QStandardItemModel* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItemModel_AppendColumn(QStandardItemModel* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItemModel_AppendRowWithItem(QStandardItemModel* self, QStandardItem* item);
void QStandardItemModel_InsertRow(QStandardItemModel* self, int row, struct miqt_array /* of QStandardItem* */  items);
void QStandardItemModel_InsertColumn(QStandardItemModel* self, int column, struct miqt_array /* of QStandardItem* */  items);
void QStandardItemModel_InsertRow2(QStandardItemModel* self, int row, QStandardItem* item);
bool QStandardItemModel_InsertRowWithRow(QStandardItemModel* self, int row);
bool QStandardItemModel_InsertColumnWithColumn(QStandardItemModel* self, int column);
QStandardItem* QStandardItemModel_TakeItem(QStandardItemModel* self, int row);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_TakeRow(QStandardItemModel* self, int row);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_TakeColumn(QStandardItemModel* self, int column);
QStandardItem* QStandardItemModel_TakeHorizontalHeaderItem(QStandardItemModel* self, int column);
QStandardItem* QStandardItemModel_TakeVerticalHeaderItem(QStandardItemModel* self, int row);
QStandardItem* QStandardItemModel_ItemPrototype(const QStandardItemModel* self);
void QStandardItemModel_SetItemPrototype(QStandardItemModel* self, QStandardItem* item);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_FindItems(const QStandardItemModel* self, struct miqt_string text);
int QStandardItemModel_SortRole(const QStandardItemModel* self);
void QStandardItemModel_SetSortRole(QStandardItemModel* self, int role);
struct miqt_array /* of struct miqt_string */  QStandardItemModel_MimeTypes(const QStandardItemModel* self);
QMimeData* QStandardItemModel_MimeData(const QStandardItemModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QStandardItemModel_DropMimeData(QStandardItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QStandardItemModel_ItemChanged(QStandardItemModel* self, QStandardItem* item);
void QStandardItemModel_connect_ItemChanged(QStandardItemModel* self, intptr_t slot);
struct miqt_string QStandardItemModel_Tr2(const char* s, const char* c);
struct miqt_string QStandardItemModel_Tr3(const char* s, const char* c, int n);
struct miqt_string QStandardItemModel_TrUtf82(const char* s, const char* c);
struct miqt_string QStandardItemModel_TrUtf83(const char* s, const char* c, int n);
QStandardItem* QStandardItemModel_Item2(const QStandardItemModel* self, int row, int column);
bool QStandardItemModel_InsertRow22(QStandardItemModel* self, int row, QModelIndex* parent);
bool QStandardItemModel_InsertColumn2(QStandardItemModel* self, int column, QModelIndex* parent);
QStandardItem* QStandardItemModel_TakeItem2(QStandardItemModel* self, int row, int column);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_FindItems2(const QStandardItemModel* self, struct miqt_string text, int flags);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_FindItems3(const QStandardItemModel* self, struct miqt_string text, int flags, int column);
bool QStandardItemModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QStandardItemModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
bool QStandardItemModel_override_virtual_Parent(void* self, intptr_t slot);
QModelIndex* QStandardItemModel_virtualbase_Parent(const void* self, QModelIndex* child);
bool QStandardItemModel_override_virtual_RowCount(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_HasChildren(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_HasChildren(const void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QStandardItemModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
bool QStandardItemModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QStandardItemModel_virtualbase_Data(const void* self, QModelIndex* index, int role);
bool QStandardItemModel_override_virtual_SetData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
bool QStandardItemModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QStandardItemModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
bool QStandardItemModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QStandardItemModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
bool QStandardItemModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
bool QStandardItemModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
bool QStandardItemModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
bool QStandardItemModel_override_virtual_Flags(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_Flags(const void* self, QModelIndex* index);
bool QStandardItemModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_SupportedDropActions(const void* self);
bool QStandardItemModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QStandardItemModel_virtualbase_ItemData(const void* self, QModelIndex* index);
bool QStandardItemModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QStandardItemModel_override_virtual_Sort(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_Sort(void* self, int column, int order);
bool QStandardItemModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QStandardItemModel_virtualbase_MimeTypes(const void* self);
bool QStandardItemModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QStandardItemModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QStandardItemModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QStandardItemModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QStandardItemModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_SupportedDragActions(const void* self);
bool QStandardItemModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QStandardItemModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QStandardItemModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QStandardItemModel_virtualbase_Buddy(const void* self, QModelIndex* index);
bool QStandardItemModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QStandardItemModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QStandardItemModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QStandardItemModel_virtualbase_Span(const void* self, QModelIndex* index);
bool QStandardItemModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QStandardItemModel_virtualbase_RoleNames(const void* self);
bool QStandardItemModel_override_virtual_Submit(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_Submit(void* self);
bool QStandardItemModel_override_virtual_Revert(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_Revert(void* self);
bool QStandardItemModel_override_virtual_Event(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_Event(void* self, QEvent* event);
bool QStandardItemModel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QStandardItemModel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QStandardItemModel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QStandardItemModel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_CustomEvent(void* self, QEvent* event);
bool QStandardItemModel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QStandardItemModel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QStandardItemModel_Delete(QStandardItemModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
