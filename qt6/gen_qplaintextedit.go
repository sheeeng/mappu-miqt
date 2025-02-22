package qt6

/*

#include "gen_qplaintextedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPlainTextEdit__LineWrapMode int

const (
	QPlainTextEdit__NoWrap      QPlainTextEdit__LineWrapMode = 0
	QPlainTextEdit__WidgetWidth QPlainTextEdit__LineWrapMode = 1
)

type QPlainTextEdit struct {
	h *C.QPlainTextEdit
	*QAbstractScrollArea
}

func (this *QPlainTextEdit) cPointer() *C.QPlainTextEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPlainTextEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPlainTextEdit constructs the type using only CGO pointers.
func newQPlainTextEdit(h *C.QPlainTextEdit) *QPlainTextEdit {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QPlainTextEdit_virtbase(h, &outptr_QAbstractScrollArea)

	return &QPlainTextEdit{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(outptr_QAbstractScrollArea)}
}

// UnsafeNewQPlainTextEdit constructs the type using only unsafe pointers.
func UnsafeNewQPlainTextEdit(h unsafe.Pointer) *QPlainTextEdit {
	return newQPlainTextEdit((*C.QPlainTextEdit)(h))
}

// NewQPlainTextEdit constructs a new QPlainTextEdit object.
func NewQPlainTextEdit(parent *QWidget) *QPlainTextEdit {

	return newQPlainTextEdit(C.QPlainTextEdit_new(parent.cPointer()))
}

// NewQPlainTextEdit2 constructs a new QPlainTextEdit object.
func NewQPlainTextEdit2() *QPlainTextEdit {

	return newQPlainTextEdit(C.QPlainTextEdit_new2())
}

// NewQPlainTextEdit3 constructs a new QPlainTextEdit object.
func NewQPlainTextEdit3(text string) *QPlainTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQPlainTextEdit(C.QPlainTextEdit_new3(text_ms))
}

// NewQPlainTextEdit4 constructs a new QPlainTextEdit object.
func NewQPlainTextEdit4(text string, parent *QWidget) *QPlainTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQPlainTextEdit(C.QPlainTextEdit_new4(text_ms, parent.cPointer()))
}

func (this *QPlainTextEdit) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPlainTextEdit_MetaObject(this.h))
}

func (this *QPlainTextEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPlainTextEdit_Metacast(this.h, param1_Cstring))
}

func QPlainTextEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) SetDocument(document *QTextDocument) {
	C.QPlainTextEdit_SetDocument(this.h, document.cPointer())
}

func (this *QPlainTextEdit) Document() *QTextDocument {
	return newQTextDocument(C.QPlainTextEdit_Document(this.h))
}

func (this *QPlainTextEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_ms := C.struct_miqt_string{}
	placeholderText_ms.data = C.CString(placeholderText)
	placeholderText_ms.len = C.size_t(len(placeholderText))
	defer C.free(unsafe.Pointer(placeholderText_ms.data))
	C.QPlainTextEdit_SetPlaceholderText(this.h, placeholderText_ms)
}

func (this *QPlainTextEdit) PlaceholderText() string {
	var _ms C.struct_miqt_string = C.QPlainTextEdit_PlaceholderText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) SetTextCursor(cursor *QTextCursor) {
	C.QPlainTextEdit_SetTextCursor(this.h, cursor.cPointer())
}

func (this *QPlainTextEdit) TextCursor() *QTextCursor {
	_goptr := newQTextCursor(C.QPlainTextEdit_TextCursor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) IsReadOnly() bool {
	return (bool)(C.QPlainTextEdit_IsReadOnly(this.h))
}

func (this *QPlainTextEdit) SetReadOnly(ro bool) {
	C.QPlainTextEdit_SetReadOnly(this.h, (C.bool)(ro))
}

func (this *QPlainTextEdit) SetTextInteractionFlags(flags TextInteractionFlag) {
	C.QPlainTextEdit_SetTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QPlainTextEdit) TextInteractionFlags() TextInteractionFlag {
	return (TextInteractionFlag)(C.QPlainTextEdit_TextInteractionFlags(this.h))
}

func (this *QPlainTextEdit) MergeCurrentCharFormat(modifier *QTextCharFormat) {
	C.QPlainTextEdit_MergeCurrentCharFormat(this.h, modifier.cPointer())
}

func (this *QPlainTextEdit) SetCurrentCharFormat(format *QTextCharFormat) {
	C.QPlainTextEdit_SetCurrentCharFormat(this.h, format.cPointer())
}

func (this *QPlainTextEdit) CurrentCharFormat() *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QPlainTextEdit_CurrentCharFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) TabChangesFocus() bool {
	return (bool)(C.QPlainTextEdit_TabChangesFocus(this.h))
}

func (this *QPlainTextEdit) SetTabChangesFocus(b bool) {
	C.QPlainTextEdit_SetTabChangesFocus(this.h, (C.bool)(b))
}

func (this *QPlainTextEdit) SetDocumentTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QPlainTextEdit_SetDocumentTitle(this.h, title_ms)
}

func (this *QPlainTextEdit) DocumentTitle() string {
	var _ms C.struct_miqt_string = C.QPlainTextEdit_DocumentTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) IsUndoRedoEnabled() bool {
	return (bool)(C.QPlainTextEdit_IsUndoRedoEnabled(this.h))
}

func (this *QPlainTextEdit) SetUndoRedoEnabled(enable bool) {
	C.QPlainTextEdit_SetUndoRedoEnabled(this.h, (C.bool)(enable))
}

func (this *QPlainTextEdit) SetMaximumBlockCount(maximum int) {
	C.QPlainTextEdit_SetMaximumBlockCount(this.h, (C.int)(maximum))
}

func (this *QPlainTextEdit) MaximumBlockCount() int {
	return (int)(C.QPlainTextEdit_MaximumBlockCount(this.h))
}

func (this *QPlainTextEdit) LineWrapMode() QPlainTextEdit__LineWrapMode {
	return (QPlainTextEdit__LineWrapMode)(C.QPlainTextEdit_LineWrapMode(this.h))
}

func (this *QPlainTextEdit) SetLineWrapMode(mode QPlainTextEdit__LineWrapMode) {
	C.QPlainTextEdit_SetLineWrapMode(this.h, (C.int)(mode))
}

func (this *QPlainTextEdit) WordWrapMode() QTextOption__WrapMode {
	return (QTextOption__WrapMode)(C.QPlainTextEdit_WordWrapMode(this.h))
}

func (this *QPlainTextEdit) SetWordWrapMode(policy QTextOption__WrapMode) {
	C.QPlainTextEdit_SetWordWrapMode(this.h, (C.int)(policy))
}

func (this *QPlainTextEdit) SetBackgroundVisible(visible bool) {
	C.QPlainTextEdit_SetBackgroundVisible(this.h, (C.bool)(visible))
}

func (this *QPlainTextEdit) BackgroundVisible() bool {
	return (bool)(C.QPlainTextEdit_BackgroundVisible(this.h))
}

func (this *QPlainTextEdit) SetCenterOnScroll(enabled bool) {
	C.QPlainTextEdit_SetCenterOnScroll(this.h, (C.bool)(enabled))
}

func (this *QPlainTextEdit) CenterOnScroll() bool {
	return (bool)(C.QPlainTextEdit_CenterOnScroll(this.h))
}

func (this *QPlainTextEdit) Find(exp string) bool {
	exp_ms := C.struct_miqt_string{}
	exp_ms.data = C.CString(exp)
	exp_ms.len = C.size_t(len(exp))
	defer C.free(unsafe.Pointer(exp_ms.data))
	return (bool)(C.QPlainTextEdit_Find(this.h, exp_ms))
}

func (this *QPlainTextEdit) FindWithExp(exp *QRegularExpression) bool {
	return (bool)(C.QPlainTextEdit_FindWithExp(this.h, exp.cPointer()))
}

func (this *QPlainTextEdit) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QPlainTextEdit_ToPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) EnsureCursorVisible() {
	C.QPlainTextEdit_EnsureCursorVisible(this.h)
}

func (this *QPlainTextEdit) LoadResource(typeVal int, name *QUrl) *QVariant {
	_goptr := newQVariant(C.QPlainTextEdit_LoadResource(this.h, (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) CreateStandardContextMenu() *QMenu {
	return newQMenu(C.QPlainTextEdit_CreateStandardContextMenu(this.h))
}

func (this *QPlainTextEdit) CreateStandardContextMenuWithPosition(position *QPoint) *QMenu {
	return newQMenu(C.QPlainTextEdit_CreateStandardContextMenuWithPosition(this.h, position.cPointer()))
}

func (this *QPlainTextEdit) CursorForPosition(pos *QPoint) *QTextCursor {
	_goptr := newQTextCursor(C.QPlainTextEdit_CursorForPosition(this.h, pos.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) CursorRect(cursor *QTextCursor) *QRect {
	_goptr := newQRect(C.QPlainTextEdit_CursorRect(this.h, cursor.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) CursorRect2() *QRect {
	_goptr := newQRect(C.QPlainTextEdit_CursorRect2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) AnchorAt(pos *QPoint) string {
	var _ms C.struct_miqt_string = C.QPlainTextEdit_AnchorAt(this.h, pos.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) OverwriteMode() bool {
	return (bool)(C.QPlainTextEdit_OverwriteMode(this.h))
}

func (this *QPlainTextEdit) SetOverwriteMode(overwrite bool) {
	C.QPlainTextEdit_SetOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QPlainTextEdit) TabStopDistance() float64 {
	return (float64)(C.QPlainTextEdit_TabStopDistance(this.h))
}

func (this *QPlainTextEdit) SetTabStopDistance(distance float64) {
	C.QPlainTextEdit_SetTabStopDistance(this.h, (C.double)(distance))
}

func (this *QPlainTextEdit) CursorWidth() int {
	return (int)(C.QPlainTextEdit_CursorWidth(this.h))
}

func (this *QPlainTextEdit) SetCursorWidth(width int) {
	C.QPlainTextEdit_SetCursorWidth(this.h, (C.int)(width))
}

func (this *QPlainTextEdit) SetExtraSelections(selections []QTextEdit__ExtraSelection) {
	selections_CArray := (*[0xffff]*C.QTextEdit__ExtraSelection)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray)}
	C.QPlainTextEdit_SetExtraSelections(this.h, selections_ma)
}

func (this *QPlainTextEdit) ExtraSelections() []QTextEdit__ExtraSelection {
	var _ma C.struct_miqt_array = C.QPlainTextEdit_ExtraSelections(this.h)
	_ret := make([]QTextEdit__ExtraSelection, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextEdit__ExtraSelection)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQTextEdit__ExtraSelection(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QPlainTextEdit) MoveCursor(operation QTextCursor__MoveOperation) {
	C.QPlainTextEdit_MoveCursor(this.h, (C.int)(operation))
}

func (this *QPlainTextEdit) CanPaste() bool {
	return (bool)(C.QPlainTextEdit_CanPaste(this.h))
}

func (this *QPlainTextEdit) Print(printer *QPagedPaintDevice) {
	C.QPlainTextEdit_Print(this.h, printer.cPointer())
}

func (this *QPlainTextEdit) BlockCount() int {
	return (int)(C.QPlainTextEdit_BlockCount(this.h))
}

func (this *QPlainTextEdit) InputMethodQuery(property InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QPlainTextEdit_InputMethodQuery(this.h, (C.int)(property)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) InputMethodQuery2(query InputMethodQuery, argument QVariant) *QVariant {
	_goptr := newQVariant(C.QPlainTextEdit_InputMethodQuery2(this.h, (C.int)(query), argument.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) SetPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPlainTextEdit_SetPlainText(this.h, text_ms)
}

func (this *QPlainTextEdit) Cut() {
	C.QPlainTextEdit_Cut(this.h)
}

func (this *QPlainTextEdit) Copy() {
	C.QPlainTextEdit_Copy(this.h)
}

func (this *QPlainTextEdit) Paste() {
	C.QPlainTextEdit_Paste(this.h)
}

func (this *QPlainTextEdit) Undo() {
	C.QPlainTextEdit_Undo(this.h)
}

func (this *QPlainTextEdit) Redo() {
	C.QPlainTextEdit_Redo(this.h)
}

func (this *QPlainTextEdit) Clear() {
	C.QPlainTextEdit_Clear(this.h)
}

func (this *QPlainTextEdit) SelectAll() {
	C.QPlainTextEdit_SelectAll(this.h)
}

func (this *QPlainTextEdit) InsertPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPlainTextEdit_InsertPlainText(this.h, text_ms)
}

func (this *QPlainTextEdit) AppendPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPlainTextEdit_AppendPlainText(this.h, text_ms)
}

func (this *QPlainTextEdit) AppendHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QPlainTextEdit_AppendHtml(this.h, html_ms)
}

func (this *QPlainTextEdit) CenterCursor() {
	C.QPlainTextEdit_CenterCursor(this.h)
}

func (this *QPlainTextEdit) ZoomIn() {
	C.QPlainTextEdit_ZoomIn(this.h)
}

func (this *QPlainTextEdit) ZoomOut() {
	C.QPlainTextEdit_ZoomOut(this.h)
}

func (this *QPlainTextEdit) TextChanged() {
	C.QPlainTextEdit_TextChanged(this.h)
}
func (this *QPlainTextEdit) OnTextChanged(slot func()) {
	C.QPlainTextEdit_connect_TextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_TextChanged
func miqt_exec_callback_QPlainTextEdit_TextChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPlainTextEdit) UndoAvailable(b bool) {
	C.QPlainTextEdit_UndoAvailable(this.h, (C.bool)(b))
}
func (this *QPlainTextEdit) OnUndoAvailable(slot func(b bool)) {
	C.QPlainTextEdit_connect_UndoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_UndoAvailable
func miqt_exec_callback_QPlainTextEdit_UndoAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QPlainTextEdit) RedoAvailable(b bool) {
	C.QPlainTextEdit_RedoAvailable(this.h, (C.bool)(b))
}
func (this *QPlainTextEdit) OnRedoAvailable(slot func(b bool)) {
	C.QPlainTextEdit_connect_RedoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_RedoAvailable
func miqt_exec_callback_QPlainTextEdit_RedoAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QPlainTextEdit) CopyAvailable(b bool) {
	C.QPlainTextEdit_CopyAvailable(this.h, (C.bool)(b))
}
func (this *QPlainTextEdit) OnCopyAvailable(slot func(b bool)) {
	C.QPlainTextEdit_connect_CopyAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_CopyAvailable
func miqt_exec_callback_QPlainTextEdit_CopyAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QPlainTextEdit) SelectionChanged() {
	C.QPlainTextEdit_SelectionChanged(this.h)
}
func (this *QPlainTextEdit) OnSelectionChanged(slot func()) {
	C.QPlainTextEdit_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_SelectionChanged
func miqt_exec_callback_QPlainTextEdit_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPlainTextEdit) CursorPositionChanged() {
	C.QPlainTextEdit_CursorPositionChanged(this.h)
}
func (this *QPlainTextEdit) OnCursorPositionChanged(slot func()) {
	C.QPlainTextEdit_connect_CursorPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_CursorPositionChanged
func miqt_exec_callback_QPlainTextEdit_CursorPositionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPlainTextEdit) UpdateRequest(rect *QRect, dy int) {
	C.QPlainTextEdit_UpdateRequest(this.h, rect.cPointer(), (C.int)(dy))
}
func (this *QPlainTextEdit) OnUpdateRequest(slot func(rect *QRect, dy int)) {
	C.QPlainTextEdit_connect_UpdateRequest(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_UpdateRequest
func miqt_exec_callback_QPlainTextEdit_UpdateRequest(cb C.intptr_t, rect *C.QRect, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect *QRect, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (int)(dy)

	gofunc(slotval1, slotval2)
}

func (this *QPlainTextEdit) BlockCountChanged(newBlockCount int) {
	C.QPlainTextEdit_BlockCountChanged(this.h, (C.int)(newBlockCount))
}
func (this *QPlainTextEdit) OnBlockCountChanged(slot func(newBlockCount int)) {
	C.QPlainTextEdit_connect_BlockCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_BlockCountChanged
func miqt_exec_callback_QPlainTextEdit_BlockCountChanged(cb C.intptr_t, newBlockCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newBlockCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(newBlockCount)

	gofunc(slotval1)
}

func (this *QPlainTextEdit) ModificationChanged(param1 bool) {
	C.QPlainTextEdit_ModificationChanged(this.h, (C.bool)(param1))
}
func (this *QPlainTextEdit) OnModificationChanged(slot func(param1 bool)) {
	C.QPlainTextEdit_connect_ModificationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_ModificationChanged
func miqt_exec_callback_QPlainTextEdit_ModificationChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func QPlainTextEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) Find2(exp string, options QTextDocument__FindFlag) bool {
	exp_ms := C.struct_miqt_string{}
	exp_ms.data = C.CString(exp)
	exp_ms.len = C.size_t(len(exp))
	defer C.free(unsafe.Pointer(exp_ms.data))
	return (bool)(C.QPlainTextEdit_Find2(this.h, exp_ms, (C.int)(options)))
}

func (this *QPlainTextEdit) Find22(exp *QRegularExpression, options QTextDocument__FindFlag) bool {
	return (bool)(C.QPlainTextEdit_Find22(this.h, exp.cPointer(), (C.int)(options)))
}

func (this *QPlainTextEdit) MoveCursor2(operation QTextCursor__MoveOperation, mode QTextCursor__MoveMode) {
	C.QPlainTextEdit_MoveCursor2(this.h, (C.int)(operation), (C.int)(mode))
}

func (this *QPlainTextEdit) ZoomIn1(rangeVal int) {
	C.QPlainTextEdit_ZoomIn1(this.h, (C.int)(rangeVal))
}

func (this *QPlainTextEdit) ZoomOut1(rangeVal int) {
	C.QPlainTextEdit_ZoomOut1(this.h, (C.int)(rangeVal))
}

func (this *QPlainTextEdit) callVirtualBase_LoadResource(typeVal int, name *QUrl) *QVariant {

	_goptr := newQVariant(C.QPlainTextEdit_virtualbase_LoadResource(unsafe.Pointer(this.h), (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPlainTextEdit) OnLoadResource(slot func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant) {
	ok := C.QPlainTextEdit_override_virtual_LoadResource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_LoadResource
func miqt_exec_callback_QPlainTextEdit_LoadResource(self *C.QPlainTextEdit, cb C.intptr_t, typeVal C.int, name *C.QUrl) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(typeVal)

	slotval2 := newQUrl(name)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_LoadResource, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QPlainTextEdit) callVirtualBase_InputMethodQuery(property InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QPlainTextEdit_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(property)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPlainTextEdit) OnInputMethodQuery(slot func(super func(property InputMethodQuery) *QVariant, property InputMethodQuery) *QVariant) {
	ok := C.QPlainTextEdit_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_InputMethodQuery
func miqt_exec_callback_QPlainTextEdit_InputMethodQuery(self *C.QPlainTextEdit, cb C.intptr_t, property C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(property InputMethodQuery) *QVariant, property InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(property)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPlainTextEdit) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QPlainTextEdit_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QPlainTextEdit) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QPlainTextEdit_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_Event
func miqt_exec_callback_QPlainTextEdit_Event(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QPlainTextEdit_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QPlainTextEdit_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_TimerEvent
func miqt_exec_callback_QPlainTextEdit_TimerEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QPlainTextEdit_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QPlainTextEdit_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_KeyPressEvent
func miqt_exec_callback_QPlainTextEdit_KeyPressEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QPlainTextEdit_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QPlainTextEdit_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_KeyReleaseEvent
func miqt_exec_callback_QPlainTextEdit_KeyReleaseEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QPlainTextEdit_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QPlainTextEdit_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ResizeEvent
func miqt_exec_callback_QPlainTextEdit_ResizeEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QPlainTextEdit_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QPlainTextEdit_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_PaintEvent
func miqt_exec_callback_QPlainTextEdit_PaintEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QPlainTextEdit_virtualbase_MousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QPlainTextEdit_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_MousePressEvent
func miqt_exec_callback_QPlainTextEdit_MousePressEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QPlainTextEdit_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QPlainTextEdit_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_MouseMoveEvent
func miqt_exec_callback_QPlainTextEdit_MouseMoveEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QPlainTextEdit_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QPlainTextEdit_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_MouseReleaseEvent
func miqt_exec_callback_QPlainTextEdit_MouseReleaseEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_MouseDoubleClickEvent(e *QMouseEvent) {

	C.QPlainTextEdit_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnMouseDoubleClickEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QPlainTextEdit_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_MouseDoubleClickEvent
func miqt_exec_callback_QPlainTextEdit_MouseDoubleClickEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QPlainTextEdit_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QPlainTextEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QPlainTextEdit_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_FocusNextPrevChild
func miqt_exec_callback_QPlainTextEdit_FocusNextPrevChild(self *C.QPlainTextEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_ContextMenuEvent(e *QContextMenuEvent) {

	C.QPlainTextEdit_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnContextMenuEvent(slot func(super func(e *QContextMenuEvent), e *QContextMenuEvent)) {
	ok := C.QPlainTextEdit_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ContextMenuEvent
func miqt_exec_callback_QPlainTextEdit_ContextMenuEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QContextMenuEvent), e *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_DragEnterEvent(e *QDragEnterEvent) {

	C.QPlainTextEdit_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnDragEnterEvent(slot func(super func(e *QDragEnterEvent), e *QDragEnterEvent)) {
	ok := C.QPlainTextEdit_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_DragEnterEvent
func miqt_exec_callback_QPlainTextEdit_DragEnterEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragEnterEvent), e *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QPlainTextEdit_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	ok := C.QPlainTextEdit_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_DragLeaveEvent
func miqt_exec_callback_QPlainTextEdit_DragLeaveEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QPlainTextEdit_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	ok := C.QPlainTextEdit_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_DragMoveEvent
func miqt_exec_callback_QPlainTextEdit_DragMoveEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_DropEvent(e *QDropEvent) {

	C.QPlainTextEdit_virtualbase_DropEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnDropEvent(slot func(super func(e *QDropEvent), e *QDropEvent)) {
	ok := C.QPlainTextEdit_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_DropEvent
func miqt_exec_callback_QPlainTextEdit_DropEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDropEvent), e *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QPlainTextEdit_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QPlainTextEdit_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_FocusInEvent
func miqt_exec_callback_QPlainTextEdit_FocusInEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QPlainTextEdit_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QPlainTextEdit_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_FocusOutEvent
func miqt_exec_callback_QPlainTextEdit_FocusOutEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QPlainTextEdit_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPlainTextEdit) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QPlainTextEdit_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ShowEvent
func miqt_exec_callback_QPlainTextEdit_ShowEvent(self *C.QPlainTextEdit, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QPlainTextEdit_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QPlainTextEdit_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ChangeEvent
func miqt_exec_callback_QPlainTextEdit_ChangeEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QPlainTextEdit_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QPlainTextEdit) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QPlainTextEdit_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_WheelEvent
func miqt_exec_callback_QPlainTextEdit_WheelEvent(self *C.QPlainTextEdit, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_CreateMimeDataFromSelection() *QMimeData {

	return newQMimeData(C.QPlainTextEdit_virtualbase_CreateMimeDataFromSelection(unsafe.Pointer(this.h)))

}
func (this *QPlainTextEdit) OnCreateMimeDataFromSelection(slot func(super func() *QMimeData) *QMimeData) {
	ok := C.QPlainTextEdit_override_virtual_CreateMimeDataFromSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_CreateMimeDataFromSelection
func miqt_exec_callback_QPlainTextEdit_CreateMimeDataFromSelection(self *C.QPlainTextEdit, cb C.intptr_t) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMimeData) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_CreateMimeDataFromSelection)

	return virtualReturn.cPointer()

}

func (this *QPlainTextEdit) callVirtualBase_CanInsertFromMimeData(source *QMimeData) bool {

	return (bool)(C.QPlainTextEdit_virtualbase_CanInsertFromMimeData(unsafe.Pointer(this.h), source.cPointer()))

}
func (this *QPlainTextEdit) OnCanInsertFromMimeData(slot func(super func(source *QMimeData) bool, source *QMimeData) bool) {
	ok := C.QPlainTextEdit_override_virtual_CanInsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_CanInsertFromMimeData
func miqt_exec_callback_QPlainTextEdit_CanInsertFromMimeData(self *C.QPlainTextEdit, cb C.intptr_t, source *C.QMimeData) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData) bool, source *QMimeData) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(source)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_CanInsertFromMimeData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_InsertFromMimeData(source *QMimeData) {

	C.QPlainTextEdit_virtualbase_InsertFromMimeData(unsafe.Pointer(this.h), source.cPointer())

}
func (this *QPlainTextEdit) OnInsertFromMimeData(slot func(super func(source *QMimeData), source *QMimeData)) {
	ok := C.QPlainTextEdit_override_virtual_InsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_InsertFromMimeData
func miqt_exec_callback_QPlainTextEdit_InsertFromMimeData(self *C.QPlainTextEdit, cb C.intptr_t, source *C.QMimeData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData), source *QMimeData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(source)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_InsertFromMimeData, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QPlainTextEdit_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QPlainTextEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QPlainTextEdit_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_InputMethodEvent
func miqt_exec_callback_QPlainTextEdit_InputMethodEvent(self *C.QPlainTextEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QPlainTextEdit_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QPlainTextEdit) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QPlainTextEdit_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ScrollContentsBy
func miqt_exec_callback_QPlainTextEdit_ScrollContentsBy(self *C.QPlainTextEdit, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QPlainTextEdit) callVirtualBase_DoSetTextCursor(cursor *QTextCursor) {

	C.QPlainTextEdit_virtualbase_DoSetTextCursor(unsafe.Pointer(this.h), cursor.cPointer())

}
func (this *QPlainTextEdit) OnDoSetTextCursor(slot func(super func(cursor *QTextCursor), cursor *QTextCursor)) {
	ok := C.QPlainTextEdit_override_virtual_DoSetTextCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_DoSetTextCursor
func miqt_exec_callback_QPlainTextEdit_DoSetTextCursor(self *C.QPlainTextEdit, cb C.intptr_t, cursor *C.QTextCursor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursor *QTextCursor), cursor *QTextCursor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextCursor(cursor)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_DoSetTextCursor, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QPlainTextEdit_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPlainTextEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QPlainTextEdit_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_MinimumSizeHint
func miqt_exec_callback_QPlainTextEdit_MinimumSizeHint(self *C.QPlainTextEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QPlainTextEdit) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QPlainTextEdit_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPlainTextEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QPlainTextEdit_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_SizeHint
func miqt_exec_callback_QPlainTextEdit_SizeHint(self *C.QPlainTextEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QPlainTextEdit) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QPlainTextEdit_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QPlainTextEdit) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QPlainTextEdit_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_SetupViewport
func miqt_exec_callback_QPlainTextEdit_SetupViewport(self *C.QPlainTextEdit, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QPlainTextEdit_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QPlainTextEdit) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QPlainTextEdit_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_EventFilter
func miqt_exec_callback_QPlainTextEdit_EventFilter(self *C.QPlainTextEdit, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_ViewportEvent(param1 *QEvent) bool {

	return (bool)(C.QPlainTextEdit_virtualbase_ViewportEvent(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QPlainTextEdit) OnViewportEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QPlainTextEdit_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ViewportEvent
func miqt_exec_callback_QPlainTextEdit_ViewportEvent(self *C.QPlainTextEdit, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QPlainTextEdit_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPlainTextEdit) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QPlainTextEdit_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ViewportSizeHint
func miqt_exec_callback_QPlainTextEdit_ViewportSizeHint(self *C.QPlainTextEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QPlainTextEdit) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QPlainTextEdit_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QPlainTextEdit) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QPlainTextEdit_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_InitStyleOption
func miqt_exec_callback_QPlainTextEdit_InitStyleOption(self *C.QPlainTextEdit, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_DevType() int {

	return (int)(C.QPlainTextEdit_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QPlainTextEdit) OnDevType(slot func(super func() int) int) {
	ok := C.QPlainTextEdit_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_DevType
func miqt_exec_callback_QPlainTextEdit_DevType(self *C.QPlainTextEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_SetVisible(visible bool) {

	C.QPlainTextEdit_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPlainTextEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QPlainTextEdit_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_SetVisible
func miqt_exec_callback_QPlainTextEdit_SetVisible(self *C.QPlainTextEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QPlainTextEdit_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPlainTextEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QPlainTextEdit_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_HeightForWidth
func miqt_exec_callback_QPlainTextEdit_HeightForWidth(self *C.QPlainTextEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QPlainTextEdit_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QPlainTextEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QPlainTextEdit_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_HasHeightForWidth
func miqt_exec_callback_QPlainTextEdit_HasHeightForWidth(self *C.QPlainTextEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QPlainTextEdit_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QPlainTextEdit) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QPlainTextEdit_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_PaintEngine
func miqt_exec_callback_QPlainTextEdit_PaintEngine(self *C.QPlainTextEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QPlainTextEdit) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QPlainTextEdit_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextEdit) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QPlainTextEdit_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_EnterEvent
func miqt_exec_callback_QPlainTextEdit_EnterEvent(self *C.QPlainTextEdit, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QPlainTextEdit_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextEdit) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPlainTextEdit_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_LeaveEvent
func miqt_exec_callback_QPlainTextEdit_LeaveEvent(self *C.QPlainTextEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QPlainTextEdit_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextEdit) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QPlainTextEdit_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_MoveEvent
func miqt_exec_callback_QPlainTextEdit_MoveEvent(self *C.QPlainTextEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QPlainTextEdit_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextEdit) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QPlainTextEdit_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_CloseEvent
func miqt_exec_callback_QPlainTextEdit_CloseEvent(self *C.QPlainTextEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QPlainTextEdit_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextEdit) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QPlainTextEdit_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_TabletEvent
func miqt_exec_callback_QPlainTextEdit_TabletEvent(self *C.QPlainTextEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QPlainTextEdit_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextEdit) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QPlainTextEdit_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ActionEvent
func miqt_exec_callback_QPlainTextEdit_ActionEvent(self *C.QPlainTextEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QPlainTextEdit_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextEdit) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QPlainTextEdit_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_HideEvent
func miqt_exec_callback_QPlainTextEdit_HideEvent(self *C.QPlainTextEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QPlainTextEdit_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QPlainTextEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QPlainTextEdit_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_NativeEvent
func miqt_exec_callback_QPlainTextEdit_NativeEvent(self *C.QPlainTextEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPlainTextEdit_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPlainTextEdit) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPlainTextEdit_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_Metric
func miqt_exec_callback_QPlainTextEdit_Metric(self *C.QPlainTextEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPlainTextEdit) callVirtualBase_InitPainter(painter *QPainter) {

	C.QPlainTextEdit_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QPlainTextEdit) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QPlainTextEdit_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_InitPainter
func miqt_exec_callback_QPlainTextEdit_InitPainter(self *C.QPlainTextEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QPlainTextEdit_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QPlainTextEdit) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QPlainTextEdit_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_Redirected
func miqt_exec_callback_QPlainTextEdit_Redirected(self *C.QPlainTextEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPlainTextEdit) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QPlainTextEdit_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QPlainTextEdit) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QPlainTextEdit_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_SharedPainter
func miqt_exec_callback_QPlainTextEdit_SharedPainter(self *C.QPlainTextEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextEdit{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QPlainTextEdit) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPlainTextEdit_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextEdit) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPlainTextEdit_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ChildEvent
func miqt_exec_callback_QPlainTextEdit_ChildEvent(self *C.QPlainTextEdit, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPlainTextEdit_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextEdit) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPlainTextEdit_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_CustomEvent
func miqt_exec_callback_QPlainTextEdit_CustomEvent(self *C.QPlainTextEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPlainTextEdit_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPlainTextEdit) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPlainTextEdit_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_ConnectNotify
func miqt_exec_callback_QPlainTextEdit_ConnectNotify(self *C.QPlainTextEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPlainTextEdit) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPlainTextEdit_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPlainTextEdit) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPlainTextEdit_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextEdit_DisconnectNotify
func miqt_exec_callback_QPlainTextEdit_DisconnectNotify(self *C.QPlainTextEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPlainTextEdit{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPlainTextEdit) Delete() {
	C.QPlainTextEdit_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPlainTextEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QPlainTextEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPlainTextDocumentLayout struct {
	h *C.QPlainTextDocumentLayout
	*QAbstractTextDocumentLayout
}

func (this *QPlainTextDocumentLayout) cPointer() *C.QPlainTextDocumentLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPlainTextDocumentLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPlainTextDocumentLayout constructs the type using only CGO pointers.
func newQPlainTextDocumentLayout(h *C.QPlainTextDocumentLayout) *QPlainTextDocumentLayout {
	if h == nil {
		return nil
	}
	var outptr_QAbstractTextDocumentLayout *C.QAbstractTextDocumentLayout = nil
	C.QPlainTextDocumentLayout_virtbase(h, &outptr_QAbstractTextDocumentLayout)

	return &QPlainTextDocumentLayout{h: h,
		QAbstractTextDocumentLayout: newQAbstractTextDocumentLayout(outptr_QAbstractTextDocumentLayout)}
}

// UnsafeNewQPlainTextDocumentLayout constructs the type using only unsafe pointers.
func UnsafeNewQPlainTextDocumentLayout(h unsafe.Pointer) *QPlainTextDocumentLayout {
	return newQPlainTextDocumentLayout((*C.QPlainTextDocumentLayout)(h))
}

// NewQPlainTextDocumentLayout constructs a new QPlainTextDocumentLayout object.
func NewQPlainTextDocumentLayout(document *QTextDocument) *QPlainTextDocumentLayout {

	return newQPlainTextDocumentLayout(C.QPlainTextDocumentLayout_new(document.cPointer()))
}

func (this *QPlainTextDocumentLayout) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPlainTextDocumentLayout_MetaObject(this.h))
}

func (this *QPlainTextDocumentLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPlainTextDocumentLayout_Metacast(this.h, param1_Cstring))
}

func QPlainTextDocumentLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextDocumentLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextDocumentLayout) Draw(param1 *QPainter, param2 *QAbstractTextDocumentLayout__PaintContext) {
	C.QPlainTextDocumentLayout_Draw(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QPlainTextDocumentLayout) HitTest(param1 *QPointF, param2 HitTestAccuracy) int {
	return (int)(C.QPlainTextDocumentLayout_HitTest(this.h, param1.cPointer(), (C.int)(param2)))
}

func (this *QPlainTextDocumentLayout) PageCount() int {
	return (int)(C.QPlainTextDocumentLayout_PageCount(this.h))
}

func (this *QPlainTextDocumentLayout) DocumentSize() *QSizeF {
	_goptr := newQSizeF(C.QPlainTextDocumentLayout_DocumentSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextDocumentLayout) FrameBoundingRect(param1 *QTextFrame) *QRectF {
	_goptr := newQRectF(C.QPlainTextDocumentLayout_FrameBoundingRect(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextDocumentLayout) BlockBoundingRect(block *QTextBlock) *QRectF {
	_goptr := newQRectF(C.QPlainTextDocumentLayout_BlockBoundingRect(this.h, block.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextDocumentLayout) EnsureBlockLayout(block *QTextBlock) {
	C.QPlainTextDocumentLayout_EnsureBlockLayout(this.h, block.cPointer())
}

func (this *QPlainTextDocumentLayout) SetCursorWidth(width int) {
	C.QPlainTextDocumentLayout_SetCursorWidth(this.h, (C.int)(width))
}

func (this *QPlainTextDocumentLayout) CursorWidth() int {
	return (int)(C.QPlainTextDocumentLayout_CursorWidth(this.h))
}

func (this *QPlainTextDocumentLayout) RequestUpdate() {
	C.QPlainTextDocumentLayout_RequestUpdate(this.h)
}

func QPlainTextDocumentLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextDocumentLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextDocumentLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextDocumentLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextDocumentLayout) callVirtualBase_Draw(param1 *QPainter, param2 *QAbstractTextDocumentLayout__PaintContext) {

	C.QPlainTextDocumentLayout_virtualbase_Draw(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer())

}
func (this *QPlainTextDocumentLayout) OnDraw(slot func(super func(param1 *QPainter, param2 *QAbstractTextDocumentLayout__PaintContext), param1 *QPainter, param2 *QAbstractTextDocumentLayout__PaintContext)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_Draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_Draw
func miqt_exec_callback_QPlainTextDocumentLayout_Draw(self *C.QPlainTextDocumentLayout, cb C.intptr_t, param1 *C.QPainter, param2 *C.QAbstractTextDocumentLayout__PaintContext) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPainter, param2 *QAbstractTextDocumentLayout__PaintContext), param1 *QPainter, param2 *QAbstractTextDocumentLayout__PaintContext))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(param1)

	slotval2 := newQAbstractTextDocumentLayout__PaintContext(param2)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_Draw, slotval1, slotval2)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_HitTest(param1 *QPointF, param2 HitTestAccuracy) int {

	return (int)(C.QPlainTextDocumentLayout_virtualbase_HitTest(unsafe.Pointer(this.h), param1.cPointer(), (C.int)(param2)))

}
func (this *QPlainTextDocumentLayout) OnHitTest(slot func(super func(param1 *QPointF, param2 HitTestAccuracy) int, param1 *QPointF, param2 HitTestAccuracy) int) {
	ok := C.QPlainTextDocumentLayout_override_virtual_HitTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_HitTest
func miqt_exec_callback_QPlainTextDocumentLayout_HitTest(self *C.QPlainTextDocumentLayout, cb C.intptr_t, param1 *C.QPointF, param2 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPointF, param2 HitTestAccuracy) int, param1 *QPointF, param2 HitTestAccuracy) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(param1)

	slotval2 := (HitTestAccuracy)(param2)

	virtualReturn := gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_HitTest, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_PageCount() int {

	return (int)(C.QPlainTextDocumentLayout_virtualbase_PageCount(unsafe.Pointer(this.h)))

}
func (this *QPlainTextDocumentLayout) OnPageCount(slot func(super func() int) int) {
	ok := C.QPlainTextDocumentLayout_override_virtual_PageCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_PageCount
func miqt_exec_callback_QPlainTextDocumentLayout_PageCount(self *C.QPlainTextDocumentLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_PageCount)

	return (C.int)(virtualReturn)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_DocumentSize() *QSizeF {

	_goptr := newQSizeF(C.QPlainTextDocumentLayout_virtualbase_DocumentSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPlainTextDocumentLayout) OnDocumentSize(slot func(super func() *QSizeF) *QSizeF) {
	ok := C.QPlainTextDocumentLayout_override_virtual_DocumentSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_DocumentSize
func miqt_exec_callback_QPlainTextDocumentLayout_DocumentSize(self *C.QPlainTextDocumentLayout, cb C.intptr_t) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_DocumentSize)

	return virtualReturn.cPointer()

}

func (this *QPlainTextDocumentLayout) callVirtualBase_FrameBoundingRect(param1 *QTextFrame) *QRectF {

	_goptr := newQRectF(C.QPlainTextDocumentLayout_virtualbase_FrameBoundingRect(unsafe.Pointer(this.h), param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPlainTextDocumentLayout) OnFrameBoundingRect(slot func(super func(param1 *QTextFrame) *QRectF, param1 *QTextFrame) *QRectF) {
	ok := C.QPlainTextDocumentLayout_override_virtual_FrameBoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_FrameBoundingRect
func miqt_exec_callback_QPlainTextDocumentLayout_FrameBoundingRect(self *C.QPlainTextDocumentLayout, cb C.intptr_t, param1 *C.QTextFrame) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTextFrame) *QRectF, param1 *QTextFrame) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextFrame(param1)

	virtualReturn := gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_FrameBoundingRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPlainTextDocumentLayout) callVirtualBase_BlockBoundingRect(block *QTextBlock) *QRectF {

	_goptr := newQRectF(C.QPlainTextDocumentLayout_virtualbase_BlockBoundingRect(unsafe.Pointer(this.h), block.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPlainTextDocumentLayout) OnBlockBoundingRect(slot func(super func(block *QTextBlock) *QRectF, block *QTextBlock) *QRectF) {
	ok := C.QPlainTextDocumentLayout_override_virtual_BlockBoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_BlockBoundingRect
func miqt_exec_callback_QPlainTextDocumentLayout_BlockBoundingRect(self *C.QPlainTextDocumentLayout, cb C.intptr_t, block *C.QTextBlock) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(block *QTextBlock) *QRectF, block *QTextBlock) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextBlock(block)

	virtualReturn := gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_BlockBoundingRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QPlainTextDocumentLayout) callVirtualBase_DocumentChanged(from int, param2 int, charsAdded int) {

	C.QPlainTextDocumentLayout_virtualbase_DocumentChanged(unsafe.Pointer(this.h), (C.int)(from), (C.int)(param2), (C.int)(charsAdded))

}
func (this *QPlainTextDocumentLayout) OnDocumentChanged(slot func(super func(from int, param2 int, charsAdded int), from int, param2 int, charsAdded int)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_DocumentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_DocumentChanged
func miqt_exec_callback_QPlainTextDocumentLayout_DocumentChanged(self *C.QPlainTextDocumentLayout, cb C.intptr_t, from C.int, param2 C.int, charsAdded C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from int, param2 int, charsAdded int), from int, param2 int, charsAdded int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(from)

	slotval2 := (int)(param2)

	slotval3 := (int)(charsAdded)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_DocumentChanged, slotval1, slotval2, slotval3)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_ResizeInlineObject(item QTextInlineObject, posInDocument int, format *QTextFormat) {

	C.QPlainTextDocumentLayout_virtualbase_ResizeInlineObject(unsafe.Pointer(this.h), item.cPointer(), (C.int)(posInDocument), format.cPointer())

}
func (this *QPlainTextDocumentLayout) OnResizeInlineObject(slot func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_ResizeInlineObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_ResizeInlineObject
func miqt_exec_callback_QPlainTextDocumentLayout_ResizeInlineObject(self *C.QPlainTextDocumentLayout, cb C.intptr_t, item *C.QTextInlineObject, posInDocument C.int, format *C.QTextFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_goptr := newQTextInlineObject(item)
	item_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *item_goptr

	slotval2 := (int)(posInDocument)

	slotval3 := newQTextFormat(format)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_ResizeInlineObject, slotval1, slotval2, slotval3)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_PositionInlineObject(item QTextInlineObject, posInDocument int, format *QTextFormat) {

	C.QPlainTextDocumentLayout_virtualbase_PositionInlineObject(unsafe.Pointer(this.h), item.cPointer(), (C.int)(posInDocument), format.cPointer())

}
func (this *QPlainTextDocumentLayout) OnPositionInlineObject(slot func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_PositionInlineObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_PositionInlineObject
func miqt_exec_callback_QPlainTextDocumentLayout_PositionInlineObject(self *C.QPlainTextDocumentLayout, cb C.intptr_t, item *C.QTextInlineObject, posInDocument C.int, format *C.QTextFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item QTextInlineObject, posInDocument int, format *QTextFormat), item QTextInlineObject, posInDocument int, format *QTextFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_goptr := newQTextInlineObject(item)
	item_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *item_goptr

	slotval2 := (int)(posInDocument)

	slotval3 := newQTextFormat(format)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_PositionInlineObject, slotval1, slotval2, slotval3)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_DrawInlineObject(painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat) {

	C.QPlainTextDocumentLayout_virtualbase_DrawInlineObject(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), object.cPointer(), (C.int)(posInDocument), format.cPointer())

}
func (this *QPlainTextDocumentLayout) OnDrawInlineObject(slot func(super func(painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat), painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_DrawInlineObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_DrawInlineObject
func miqt_exec_callback_QPlainTextDocumentLayout_DrawInlineObject(self *C.QPlainTextDocumentLayout, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF, object *C.QTextInlineObject, posInDocument C.int, format *C.QTextFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat), painter *QPainter, rect *QRectF, object QTextInlineObject, posInDocument int, format *QTextFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRectF(rect)

	object_goptr := newQTextInlineObject(object)
	object_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *object_goptr

	slotval4 := (int)(posInDocument)

	slotval5 := newQTextFormat(format)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_DrawInlineObject, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QPlainTextDocumentLayout_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPlainTextDocumentLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QPlainTextDocumentLayout_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_Event
func miqt_exec_callback_QPlainTextDocumentLayout_Event(self *C.QPlainTextDocumentLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPlainTextDocumentLayout_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPlainTextDocumentLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QPlainTextDocumentLayout_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_EventFilter
func miqt_exec_callback_QPlainTextDocumentLayout_EventFilter(self *C.QPlainTextDocumentLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPlainTextDocumentLayout_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextDocumentLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_TimerEvent
func miqt_exec_callback_QPlainTextDocumentLayout_TimerEvent(self *C.QPlainTextDocumentLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPlainTextDocumentLayout_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextDocumentLayout) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_ChildEvent
func miqt_exec_callback_QPlainTextDocumentLayout_ChildEvent(self *C.QPlainTextDocumentLayout, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPlainTextDocumentLayout_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPlainTextDocumentLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_CustomEvent
func miqt_exec_callback_QPlainTextDocumentLayout_CustomEvent(self *C.QPlainTextDocumentLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPlainTextDocumentLayout_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPlainTextDocumentLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_ConnectNotify
func miqt_exec_callback_QPlainTextDocumentLayout_ConnectNotify(self *C.QPlainTextDocumentLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPlainTextDocumentLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPlainTextDocumentLayout_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPlainTextDocumentLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QPlainTextDocumentLayout_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPlainTextDocumentLayout_DisconnectNotify
func miqt_exec_callback_QPlainTextDocumentLayout_DisconnectNotify(self *C.QPlainTextDocumentLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPlainTextDocumentLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPlainTextDocumentLayout) Delete() {
	C.QPlainTextDocumentLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPlainTextDocumentLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QPlainTextDocumentLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
