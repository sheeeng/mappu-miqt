#ifndef GEN_QLINEEDIT_H
#define GEN_QLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QCompleter;
class QEvent;
class QIcon;
class QLineEdit;
class QMargins;
class QMenu;
class QMetaObject;
class QPoint;
class QSize;
class QValidator;
class QVariant;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QCompleter QCompleter;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QLineEdit QLineEdit;
typedef struct QMargins QMargins;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QValidator QValidator;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QLineEdit* QLineEdit_new();
QLineEdit* QLineEdit_new2(const char* param1, size_t param1_Strlen);
QLineEdit* QLineEdit_new3(QWidget* parent);
QLineEdit* QLineEdit_new4(const char* param1, size_t param1_Strlen, QWidget* parent);
QMetaObject* QLineEdit_MetaObject(QLineEdit* self);
void QLineEdit_Tr(const char* s, char** _out, int* _out_Strlen);
void QLineEdit_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QLineEdit_Text(QLineEdit* self, char** _out, int* _out_Strlen);
void QLineEdit_DisplayText(QLineEdit* self, char** _out, int* _out_Strlen);
void QLineEdit_PlaceholderText(QLineEdit* self, char** _out, int* _out_Strlen);
void QLineEdit_SetPlaceholderText(QLineEdit* self, const char* placeholderText, size_t placeholderText_Strlen);
int QLineEdit_MaxLength(QLineEdit* self);
void QLineEdit_SetMaxLength(QLineEdit* self, int maxLength);
void QLineEdit_SetFrame(QLineEdit* self, bool frame);
bool QLineEdit_HasFrame(QLineEdit* self);
void QLineEdit_SetClearButtonEnabled(QLineEdit* self, bool enable);
bool QLineEdit_IsClearButtonEnabled(QLineEdit* self);
uintptr_t QLineEdit_EchoMode(QLineEdit* self);
void QLineEdit_SetEchoMode(QLineEdit* self, uintptr_t echoMode);
bool QLineEdit_IsReadOnly(QLineEdit* self);
void QLineEdit_SetReadOnly(QLineEdit* self, bool readOnly);
void QLineEdit_SetValidator(QLineEdit* self, QValidator* validator);
QValidator* QLineEdit_Validator(QLineEdit* self);
void QLineEdit_SetCompleter(QLineEdit* self, QCompleter* completer);
QCompleter* QLineEdit_Completer(QLineEdit* self);
QSize* QLineEdit_SizeHint(QLineEdit* self);
QSize* QLineEdit_MinimumSizeHint(QLineEdit* self);
int QLineEdit_CursorPosition(QLineEdit* self);
void QLineEdit_SetCursorPosition(QLineEdit* self, int cursorPosition);
int QLineEdit_CursorPositionAt(QLineEdit* self, QPoint* pos);
void QLineEdit_SetAlignment(QLineEdit* self, int flag);
int QLineEdit_Alignment(QLineEdit* self);
void QLineEdit_CursorForward(QLineEdit* self, bool mark);
void QLineEdit_CursorBackward(QLineEdit* self, bool mark);
void QLineEdit_CursorWordForward(QLineEdit* self, bool mark);
void QLineEdit_CursorWordBackward(QLineEdit* self, bool mark);
void QLineEdit_Backspace(QLineEdit* self);
void QLineEdit_Del(QLineEdit* self);
void QLineEdit_Home(QLineEdit* self, bool mark);
void QLineEdit_End(QLineEdit* self, bool mark);
bool QLineEdit_IsModified(QLineEdit* self);
void QLineEdit_SetModified(QLineEdit* self, bool modified);
void QLineEdit_SetSelection(QLineEdit* self, int param1, int param2);
bool QLineEdit_HasSelectedText(QLineEdit* self);
void QLineEdit_SelectedText(QLineEdit* self, char** _out, int* _out_Strlen);
int QLineEdit_SelectionStart(QLineEdit* self);
int QLineEdit_SelectionEnd(QLineEdit* self);
int QLineEdit_SelectionLength(QLineEdit* self);
bool QLineEdit_IsUndoAvailable(QLineEdit* self);
bool QLineEdit_IsRedoAvailable(QLineEdit* self);
void QLineEdit_SetDragEnabled(QLineEdit* self, bool b);
bool QLineEdit_DragEnabled(QLineEdit* self);
void QLineEdit_SetCursorMoveStyle(QLineEdit* self, uintptr_t style);
uintptr_t QLineEdit_CursorMoveStyle(QLineEdit* self);
void QLineEdit_InputMask(QLineEdit* self, char** _out, int* _out_Strlen);
void QLineEdit_SetInputMask(QLineEdit* self, const char* inputMask, size_t inputMask_Strlen);
bool QLineEdit_HasAcceptableInput(QLineEdit* self);
void QLineEdit_SetTextMargins(QLineEdit* self, int left, int top, int right, int bottom);
void QLineEdit_SetTextMarginsWithMargins(QLineEdit* self, QMargins* margins);
void QLineEdit_GetTextMargins(QLineEdit* self, int* left, int* top, int* right, int* bottom);
QMargins* QLineEdit_TextMargins(QLineEdit* self);
void QLineEdit_AddAction(QLineEdit* self, QAction* action, uintptr_t position);
QAction* QLineEdit_AddAction2(QLineEdit* self, QIcon* icon, uintptr_t position);
void QLineEdit_SetText(QLineEdit* self, const char* text, size_t text_Strlen);
void QLineEdit_Clear(QLineEdit* self);
void QLineEdit_SelectAll(QLineEdit* self);
void QLineEdit_Undo(QLineEdit* self);
void QLineEdit_Redo(QLineEdit* self);
void QLineEdit_Cut(QLineEdit* self);
void QLineEdit_Copy(QLineEdit* self);
void QLineEdit_Paste(QLineEdit* self);
void QLineEdit_Deselect(QLineEdit* self);
void QLineEdit_Insert(QLineEdit* self, const char* param1, size_t param1_Strlen);
QMenu* QLineEdit_CreateStandardContextMenu(QLineEdit* self);
void QLineEdit_TextChanged(QLineEdit* self, const char* param1, size_t param1_Strlen);
void QLineEdit_connect_TextChanged(QLineEdit* self, void* slot);
void QLineEdit_TextEdited(QLineEdit* self, const char* param1, size_t param1_Strlen);
void QLineEdit_connect_TextEdited(QLineEdit* self, void* slot);
void QLineEdit_CursorPositionChanged(QLineEdit* self, int param1, int param2);
void QLineEdit_connect_CursorPositionChanged(QLineEdit* self, void* slot);
void QLineEdit_ReturnPressed(QLineEdit* self);
void QLineEdit_connect_ReturnPressed(QLineEdit* self, void* slot);
void QLineEdit_EditingFinished(QLineEdit* self);
void QLineEdit_connect_EditingFinished(QLineEdit* self, void* slot);
void QLineEdit_SelectionChanged(QLineEdit* self);
void QLineEdit_connect_SelectionChanged(QLineEdit* self, void* slot);
void QLineEdit_InputRejected(QLineEdit* self);
void QLineEdit_connect_InputRejected(QLineEdit* self, void* slot);
QVariant* QLineEdit_InputMethodQuery(QLineEdit* self, uintptr_t param1);
QVariant* QLineEdit_InputMethodQuery2(QLineEdit* self, uintptr_t property, QVariant* argument);
bool QLineEdit_Event(QLineEdit* self, QEvent* param1);
void QLineEdit_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QLineEdit_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QLineEdit_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QLineEdit_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QLineEdit_CursorForward2(QLineEdit* self, bool mark, int steps);
void QLineEdit_CursorBackward2(QLineEdit* self, bool mark, int steps);
void QLineEdit_Delete(QLineEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
