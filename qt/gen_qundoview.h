#ifndef GEN_QUNDOVIEW_H
#define GEN_QUNDOVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIcon;
class QMetaObject;
class QUndoGroup;
class QUndoStack;
class QUndoView;
class QWidget;
#else
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QUndoGroup QUndoGroup;
typedef struct QUndoStack QUndoStack;
typedef struct QUndoView QUndoView;
typedef struct QWidget QWidget;
#endif

QUndoView* QUndoView_new();
QUndoView* QUndoView_new2(QUndoStack* stack);
QUndoView* QUndoView_new3(QUndoGroup* group);
QUndoView* QUndoView_new4(QWidget* parent);
QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent);
QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent);
QMetaObject* QUndoView_MetaObject(QUndoView* self);
void QUndoView_Tr(char* s, char** _out, int* _out_Strlen);
void QUndoView_TrUtf8(char* s, char** _out, int* _out_Strlen);
QUndoStack* QUndoView_Stack(QUndoView* self);
QUndoGroup* QUndoView_Group(QUndoView* self);
void QUndoView_SetEmptyLabel(QUndoView* self, const char* label, size_t label_Strlen);
void QUndoView_EmptyLabel(QUndoView* self, char** _out, int* _out_Strlen);
void QUndoView_SetCleanIcon(QUndoView* self, QIcon* icon);
QIcon* QUndoView_CleanIcon(QUndoView* self);
void QUndoView_SetStack(QUndoView* self, QUndoStack* stack);
void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group);
void QUndoView_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QUndoView_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QUndoView_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QUndoView_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QUndoView_Delete(QUndoView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif