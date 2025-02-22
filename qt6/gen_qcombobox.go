package qt6

/*

#include "gen_qcombobox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QComboBox__InsertPolicy int

const (
	QComboBox__NoInsert             QComboBox__InsertPolicy = 0
	QComboBox__InsertAtTop          QComboBox__InsertPolicy = 1
	QComboBox__InsertAtCurrent      QComboBox__InsertPolicy = 2
	QComboBox__InsertAtBottom       QComboBox__InsertPolicy = 3
	QComboBox__InsertAfterCurrent   QComboBox__InsertPolicy = 4
	QComboBox__InsertBeforeCurrent  QComboBox__InsertPolicy = 5
	QComboBox__InsertAlphabetically QComboBox__InsertPolicy = 6
)

type QComboBox__SizeAdjustPolicy int

const (
	QComboBox__AdjustToContents                      QComboBox__SizeAdjustPolicy = 0
	QComboBox__AdjustToContentsOnFirstShow           QComboBox__SizeAdjustPolicy = 1
	QComboBox__AdjustToMinimumContentsLengthWithIcon QComboBox__SizeAdjustPolicy = 2
)

type QComboBox struct {
	h *C.QComboBox
	*QWidget
}

func (this *QComboBox) cPointer() *C.QComboBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QComboBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQComboBox constructs the type using only CGO pointers.
func newQComboBox(h *C.QComboBox) *QComboBox {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QComboBox_virtbase(h, &outptr_QWidget)

	return &QComboBox{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQComboBox constructs the type using only unsafe pointers.
func UnsafeNewQComboBox(h unsafe.Pointer) *QComboBox {
	return newQComboBox((*C.QComboBox)(h))
}

// NewQComboBox constructs a new QComboBox object.
func NewQComboBox(parent *QWidget) *QComboBox {

	return newQComboBox(C.QComboBox_new(parent.cPointer()))
}

// NewQComboBox2 constructs a new QComboBox object.
func NewQComboBox2() *QComboBox {

	return newQComboBox(C.QComboBox_new2())
}

func (this *QComboBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QComboBox_MetaObject(this.h))
}

func (this *QComboBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QComboBox_Metacast(this.h, param1_Cstring))
}

func QComboBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QComboBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) MaxVisibleItems() int {
	return (int)(C.QComboBox_MaxVisibleItems(this.h))
}

func (this *QComboBox) SetMaxVisibleItems(maxItems int) {
	C.QComboBox_SetMaxVisibleItems(this.h, (C.int)(maxItems))
}

func (this *QComboBox) Count() int {
	return (int)(C.QComboBox_Count(this.h))
}

func (this *QComboBox) SetMaxCount(max int) {
	C.QComboBox_SetMaxCount(this.h, (C.int)(max))
}

func (this *QComboBox) MaxCount() int {
	return (int)(C.QComboBox_MaxCount(this.h))
}

func (this *QComboBox) DuplicatesEnabled() bool {
	return (bool)(C.QComboBox_DuplicatesEnabled(this.h))
}

func (this *QComboBox) SetDuplicatesEnabled(enable bool) {
	C.QComboBox_SetDuplicatesEnabled(this.h, (C.bool)(enable))
}

func (this *QComboBox) SetFrame(frame bool) {
	C.QComboBox_SetFrame(this.h, (C.bool)(frame))
}

func (this *QComboBox) HasFrame() bool {
	return (bool)(C.QComboBox_HasFrame(this.h))
}

func (this *QComboBox) FindText(text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QComboBox_FindText(this.h, text_ms))
}

func (this *QComboBox) FindData(data *QVariant) int {
	return (int)(C.QComboBox_FindData(this.h, data.cPointer()))
}

func (this *QComboBox) InsertPolicy() QComboBox__InsertPolicy {
	return (QComboBox__InsertPolicy)(C.QComboBox_InsertPolicy(this.h))
}

func (this *QComboBox) SetInsertPolicy(policy QComboBox__InsertPolicy) {
	C.QComboBox_SetInsertPolicy(this.h, (C.int)(policy))
}

func (this *QComboBox) SizeAdjustPolicy() QComboBox__SizeAdjustPolicy {
	return (QComboBox__SizeAdjustPolicy)(C.QComboBox_SizeAdjustPolicy(this.h))
}

func (this *QComboBox) SetSizeAdjustPolicy(policy QComboBox__SizeAdjustPolicy) {
	C.QComboBox_SetSizeAdjustPolicy(this.h, (C.int)(policy))
}

func (this *QComboBox) MinimumContentsLength() int {
	return (int)(C.QComboBox_MinimumContentsLength(this.h))
}

func (this *QComboBox) SetMinimumContentsLength(characters int) {
	C.QComboBox_SetMinimumContentsLength(this.h, (C.int)(characters))
}

func (this *QComboBox) IconSize() *QSize {
	_goptr := newQSize(C.QComboBox_IconSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) SetIconSize(size *QSize) {
	C.QComboBox_SetIconSize(this.h, size.cPointer())
}

func (this *QComboBox) SetPlaceholderText(placeholderText string) {
	placeholderText_ms := C.struct_miqt_string{}
	placeholderText_ms.data = C.CString(placeholderText)
	placeholderText_ms.len = C.size_t(len(placeholderText))
	defer C.free(unsafe.Pointer(placeholderText_ms.data))
	C.QComboBox_SetPlaceholderText(this.h, placeholderText_ms)
}

func (this *QComboBox) PlaceholderText() string {
	var _ms C.struct_miqt_string = C.QComboBox_PlaceholderText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) IsEditable() bool {
	return (bool)(C.QComboBox_IsEditable(this.h))
}

func (this *QComboBox) SetEditable(editable bool) {
	C.QComboBox_SetEditable(this.h, (C.bool)(editable))
}

func (this *QComboBox) SetLineEdit(edit *QLineEdit) {
	C.QComboBox_SetLineEdit(this.h, edit.cPointer())
}

func (this *QComboBox) LineEdit() *QLineEdit {
	return newQLineEdit(C.QComboBox_LineEdit(this.h))
}

func (this *QComboBox) SetValidator(v *QValidator) {
	C.QComboBox_SetValidator(this.h, v.cPointer())
}

func (this *QComboBox) Validator() *QValidator {
	return newQValidator(C.QComboBox_Validator(this.h))
}

func (this *QComboBox) SetCompleter(c *QCompleter) {
	C.QComboBox_SetCompleter(this.h, c.cPointer())
}

func (this *QComboBox) Completer() *QCompleter {
	return newQCompleter(C.QComboBox_Completer(this.h))
}

func (this *QComboBox) ItemDelegate() *QAbstractItemDelegate {
	return newQAbstractItemDelegate(C.QComboBox_ItemDelegate(this.h))
}

func (this *QComboBox) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QComboBox_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QComboBox) Model() *QAbstractItemModel {
	return newQAbstractItemModel(C.QComboBox_Model(this.h))
}

func (this *QComboBox) SetModel(model *QAbstractItemModel) {
	C.QComboBox_SetModel(this.h, model.cPointer())
}

func (this *QComboBox) RootModelIndex() *QModelIndex {
	_goptr := newQModelIndex(C.QComboBox_RootModelIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) SetRootModelIndex(index *QModelIndex) {
	C.QComboBox_SetRootModelIndex(this.h, index.cPointer())
}

func (this *QComboBox) ModelColumn() int {
	return (int)(C.QComboBox_ModelColumn(this.h))
}

func (this *QComboBox) SetModelColumn(visibleColumn int) {
	C.QComboBox_SetModelColumn(this.h, (C.int)(visibleColumn))
}

func (this *QComboBox) CurrentIndex() int {
	return (int)(C.QComboBox_CurrentIndex(this.h))
}

func (this *QComboBox) CurrentText() string {
	var _ms C.struct_miqt_string = C.QComboBox_CurrentText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) CurrentData() *QVariant {
	_goptr := newQVariant(C.QComboBox_CurrentData(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) ItemText(index int) string {
	var _ms C.struct_miqt_string = C.QComboBox_ItemText(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) ItemIcon(index int) *QIcon {
	_goptr := newQIcon(C.QComboBox_ItemIcon(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) ItemData(index int) *QVariant {
	_goptr := newQVariant(C.QComboBox_ItemData(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) AddItem(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_AddItem(this.h, text_ms)
}

func (this *QComboBox) AddItem2(icon *QIcon, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_AddItem2(this.h, icon.cPointer(), text_ms)
}

func (this *QComboBox) AddItems(texts []string) {
	texts_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(texts))))
	defer C.free(unsafe.Pointer(texts_CArray))
	for i := range texts {
		texts_i_ms := C.struct_miqt_string{}
		texts_i_ms.data = C.CString(texts[i])
		texts_i_ms.len = C.size_t(len(texts[i]))
		defer C.free(unsafe.Pointer(texts_i_ms.data))
		texts_CArray[i] = texts_i_ms
	}
	texts_ma := C.struct_miqt_array{len: C.size_t(len(texts)), data: unsafe.Pointer(texts_CArray)}
	C.QComboBox_AddItems(this.h, texts_ma)
}

func (this *QComboBox) InsertItem(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_InsertItem(this.h, (C.int)(index), text_ms)
}

func (this *QComboBox) InsertItem2(index int, icon *QIcon, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_InsertItem2(this.h, (C.int)(index), icon.cPointer(), text_ms)
}

func (this *QComboBox) InsertItems(index int, texts []string) {
	texts_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(texts))))
	defer C.free(unsafe.Pointer(texts_CArray))
	for i := range texts {
		texts_i_ms := C.struct_miqt_string{}
		texts_i_ms.data = C.CString(texts[i])
		texts_i_ms.len = C.size_t(len(texts[i]))
		defer C.free(unsafe.Pointer(texts_i_ms.data))
		texts_CArray[i] = texts_i_ms
	}
	texts_ma := C.struct_miqt_array{len: C.size_t(len(texts)), data: unsafe.Pointer(texts_CArray)}
	C.QComboBox_InsertItems(this.h, (C.int)(index), texts_ma)
}

func (this *QComboBox) InsertSeparator(index int) {
	C.QComboBox_InsertSeparator(this.h, (C.int)(index))
}

func (this *QComboBox) RemoveItem(index int) {
	C.QComboBox_RemoveItem(this.h, (C.int)(index))
}

func (this *QComboBox) SetItemText(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_SetItemText(this.h, (C.int)(index), text_ms)
}

func (this *QComboBox) SetItemIcon(index int, icon *QIcon) {
	C.QComboBox_SetItemIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QComboBox) SetItemData(index int, value *QVariant) {
	C.QComboBox_SetItemData(this.h, (C.int)(index), value.cPointer())
}

func (this *QComboBox) View() *QAbstractItemView {
	return newQAbstractItemView(C.QComboBox_View(this.h))
}

func (this *QComboBox) SetView(itemView *QAbstractItemView) {
	C.QComboBox_SetView(this.h, itemView.cPointer())
}

func (this *QComboBox) SizeHint() *QSize {
	_goptr := newQSize(C.QComboBox_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QComboBox_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) ShowPopup() {
	C.QComboBox_ShowPopup(this.h)
}

func (this *QComboBox) HidePopup() {
	C.QComboBox_HidePopup(this.h)
}

func (this *QComboBox) Event(event *QEvent) bool {
	return (bool)(C.QComboBox_Event(this.h, event.cPointer()))
}

func (this *QComboBox) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QComboBox_InputMethodQuery(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) InputMethodQuery2(query InputMethodQuery, argument *QVariant) *QVariant {
	_goptr := newQVariant(C.QComboBox_InputMethodQuery2(this.h, (C.int)(query), argument.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) Clear() {
	C.QComboBox_Clear(this.h)
}

func (this *QComboBox) ClearEditText() {
	C.QComboBox_ClearEditText(this.h)
}

func (this *QComboBox) SetEditText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_SetEditText(this.h, text_ms)
}

func (this *QComboBox) SetCurrentIndex(index int) {
	C.QComboBox_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QComboBox) SetCurrentText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_SetCurrentText(this.h, text_ms)
}

func (this *QComboBox) EditTextChanged(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_EditTextChanged(this.h, param1_ms)
}
func (this *QComboBox) OnEditTextChanged(slot func(param1 string)) {
	C.QComboBox_connect_EditTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_EditTextChanged
func miqt_exec_callback_QComboBox_EditTextChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QComboBox) Activated(index int) {
	C.QComboBox_Activated(this.h, (C.int)(index))
}
func (this *QComboBox) OnActivated(slot func(index int)) {
	C.QComboBox_connect_Activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_Activated
func miqt_exec_callback_QComboBox_Activated(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QComboBox) TextActivated(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_TextActivated(this.h, param1_ms)
}
func (this *QComboBox) OnTextActivated(slot func(param1 string)) {
	C.QComboBox_connect_TextActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_TextActivated
func miqt_exec_callback_QComboBox_TextActivated(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QComboBox) Highlighted(index int) {
	C.QComboBox_Highlighted(this.h, (C.int)(index))
}
func (this *QComboBox) OnHighlighted(slot func(index int)) {
	C.QComboBox_connect_Highlighted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_Highlighted
func miqt_exec_callback_QComboBox_Highlighted(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QComboBox) TextHighlighted(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_TextHighlighted(this.h, param1_ms)
}
func (this *QComboBox) OnTextHighlighted(slot func(param1 string)) {
	C.QComboBox_connect_TextHighlighted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_TextHighlighted
func miqt_exec_callback_QComboBox_TextHighlighted(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QComboBox) CurrentIndexChanged(index int) {
	C.QComboBox_CurrentIndexChanged(this.h, (C.int)(index))
}
func (this *QComboBox) OnCurrentIndexChanged(slot func(index int)) {
	C.QComboBox_connect_CurrentIndexChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_CurrentIndexChanged
func miqt_exec_callback_QComboBox_CurrentIndexChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QComboBox) CurrentTextChanged(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_CurrentTextChanged(this.h, param1_ms)
}
func (this *QComboBox) OnCurrentTextChanged(slot func(param1 string)) {
	C.QComboBox_connect_CurrentTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_CurrentTextChanged
func miqt_exec_callback_QComboBox_CurrentTextChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func QComboBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QComboBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QComboBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QComboBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) FindText2(text string, flags MatchFlag) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QComboBox_FindText2(this.h, text_ms, (C.int)(flags)))
}

func (this *QComboBox) FindData2(data *QVariant, role int) int {
	return (int)(C.QComboBox_FindData2(this.h, data.cPointer(), (C.int)(role)))
}

func (this *QComboBox) FindData3(data *QVariant, role int, flags MatchFlag) int {
	return (int)(C.QComboBox_FindData3(this.h, data.cPointer(), (C.int)(role), (C.int)(flags)))
}

func (this *QComboBox) CurrentData1(role int) *QVariant {
	_goptr := newQVariant(C.QComboBox_CurrentData1(this.h, (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) ItemData2(index int, role int) *QVariant {
	_goptr := newQVariant(C.QComboBox_ItemData2(this.h, (C.int)(index), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) AddItem22(text string, userData *QVariant) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_AddItem22(this.h, text_ms, userData.cPointer())
}

func (this *QComboBox) AddItem3(icon *QIcon, text string, userData *QVariant) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_AddItem3(this.h, icon.cPointer(), text_ms, userData.cPointer())
}

func (this *QComboBox) InsertItem3(index int, text string, userData *QVariant) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_InsertItem3(this.h, (C.int)(index), text_ms, userData.cPointer())
}

func (this *QComboBox) InsertItem4(index int, icon *QIcon, text string, userData *QVariant) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_InsertItem4(this.h, (C.int)(index), icon.cPointer(), text_ms, userData.cPointer())
}

func (this *QComboBox) SetItemData3(index int, value *QVariant, role int) {
	C.QComboBox_SetItemData3(this.h, (C.int)(index), value.cPointer(), (C.int)(role))
}

func (this *QComboBox) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QComboBox_virtualbase_SetModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QComboBox) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QComboBox_override_virtual_SetModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_SetModel
func miqt_exec_callback_QComboBox_SetModel(self *C.QComboBox, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QComboBox{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QComboBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QComboBox_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QComboBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QComboBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_SizeHint
func miqt_exec_callback_QComboBox_SizeHint(self *C.QComboBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QComboBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QComboBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QComboBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QComboBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_MinimumSizeHint
func miqt_exec_callback_QComboBox_MinimumSizeHint(self *C.QComboBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QComboBox) callVirtualBase_ShowPopup() {

	C.QComboBox_virtualbase_ShowPopup(unsafe.Pointer(this.h))

}
func (this *QComboBox) OnShowPopup(slot func(super func())) {
	ok := C.QComboBox_override_virtual_ShowPopup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_ShowPopup
func miqt_exec_callback_QComboBox_ShowPopup(self *C.QComboBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QComboBox{h: self}).callVirtualBase_ShowPopup)

}

func (this *QComboBox) callVirtualBase_HidePopup() {

	C.QComboBox_virtualbase_HidePopup(unsafe.Pointer(this.h))

}
func (this *QComboBox) OnHidePopup(slot func(super func())) {
	ok := C.QComboBox_override_virtual_HidePopup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_HidePopup
func miqt_exec_callback_QComboBox_HidePopup(self *C.QComboBox, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QComboBox{h: self}).callVirtualBase_HidePopup)

}

func (this *QComboBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QComboBox_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QComboBox) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QComboBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_Event
func miqt_exec_callback_QComboBox_Event(self *C.QComboBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QComboBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QComboBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QComboBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QComboBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_InputMethodQuery
func miqt_exec_callback_QComboBox_InputMethodQuery(self *C.QComboBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QComboBox) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QComboBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QComboBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_FocusInEvent
func miqt_exec_callback_QComboBox_FocusInEvent(self *C.QComboBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QComboBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QComboBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_FocusOutEvent
func miqt_exec_callback_QComboBox_FocusOutEvent(self *C.QComboBox, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QComboBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QComboBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_ChangeEvent
func miqt_exec_callback_QComboBox_ChangeEvent(self *C.QComboBox, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QComboBox_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QComboBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_ResizeEvent
func miqt_exec_callback_QComboBox_ResizeEvent(self *C.QComboBox, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QComboBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QComboBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_PaintEvent
func miqt_exec_callback_QComboBox_PaintEvent(self *C.QComboBox, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_ShowEvent(e *QShowEvent) {

	C.QComboBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnShowEvent(slot func(super func(e *QShowEvent), e *QShowEvent)) {
	ok := C.QComboBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_ShowEvent
func miqt_exec_callback_QComboBox_ShowEvent(self *C.QComboBox, cb C.intptr_t, e *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QShowEvent), e *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_HideEvent(e *QHideEvent) {

	C.QComboBox_virtualbase_HideEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnHideEvent(slot func(super func(e *QHideEvent), e *QHideEvent)) {
	ok := C.QComboBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_HideEvent
func miqt_exec_callback_QComboBox_HideEvent(self *C.QComboBox, cb C.intptr_t, e *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QHideEvent), e *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QComboBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QComboBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_MousePressEvent
func miqt_exec_callback_QComboBox_MousePressEvent(self *C.QComboBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QComboBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QComboBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_MouseReleaseEvent
func miqt_exec_callback_QComboBox_MouseReleaseEvent(self *C.QComboBox, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QComboBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QComboBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_KeyPressEvent
func miqt_exec_callback_QComboBox_KeyPressEvent(self *C.QComboBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QComboBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QComboBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_KeyReleaseEvent
func miqt_exec_callback_QComboBox_KeyReleaseEvent(self *C.QComboBox, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QComboBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QComboBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_WheelEvent
func miqt_exec_callback_QComboBox_WheelEvent(self *C.QComboBox, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_ContextMenuEvent(e *QContextMenuEvent) {

	C.QComboBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QComboBox) OnContextMenuEvent(slot func(super func(e *QContextMenuEvent), e *QContextMenuEvent)) {
	ok := C.QComboBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_ContextMenuEvent
func miqt_exec_callback_QComboBox_ContextMenuEvent(self *C.QComboBox, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QContextMenuEvent), e *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(e)

	gofunc((&QComboBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QComboBox_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QComboBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QComboBox_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_InputMethodEvent
func miqt_exec_callback_QComboBox_InputMethodEvent(self *C.QComboBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QComboBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_InitStyleOption(option *QStyleOptionComboBox) {

	C.QComboBox_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QComboBox) OnInitStyleOption(slot func(super func(option *QStyleOptionComboBox), option *QStyleOptionComboBox)) {
	ok := C.QComboBox_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_InitStyleOption
func miqt_exec_callback_QComboBox_InitStyleOption(self *C.QComboBox, cb C.intptr_t, option *C.QStyleOptionComboBox) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionComboBox), option *QStyleOptionComboBox))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionComboBox(option)

	gofunc((&QComboBox{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QComboBox) callVirtualBase_DevType() int {

	return (int)(C.QComboBox_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QComboBox) OnDevType(slot func(super func() int) int) {
	ok := C.QComboBox_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_DevType
func miqt_exec_callback_QComboBox_DevType(self *C.QComboBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QComboBox) callVirtualBase_SetVisible(visible bool) {

	C.QComboBox_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QComboBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QComboBox_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_SetVisible
func miqt_exec_callback_QComboBox_SetVisible(self *C.QComboBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QComboBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QComboBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QComboBox_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QComboBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QComboBox_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_HeightForWidth
func miqt_exec_callback_QComboBox_HeightForWidth(self *C.QComboBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QComboBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QComboBox_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QComboBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QComboBox_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_HasHeightForWidth
func miqt_exec_callback_QComboBox_HasHeightForWidth(self *C.QComboBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QComboBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QComboBox_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QComboBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QComboBox_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_PaintEngine
func miqt_exec_callback_QComboBox_PaintEngine(self *C.QComboBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QComboBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QComboBox_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QComboBox_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_MouseDoubleClickEvent
func miqt_exec_callback_QComboBox_MouseDoubleClickEvent(self *C.QComboBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QComboBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QComboBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_MouseMoveEvent
func miqt_exec_callback_QComboBox_MouseMoveEvent(self *C.QComboBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QComboBox_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QComboBox_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_EnterEvent
func miqt_exec_callback_QComboBox_EnterEvent(self *C.QComboBox, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QComboBox_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QComboBox_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_LeaveEvent
func miqt_exec_callback_QComboBox_LeaveEvent(self *C.QComboBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QComboBox_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QComboBox_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_MoveEvent
func miqt_exec_callback_QComboBox_MoveEvent(self *C.QComboBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QComboBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QComboBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_CloseEvent
func miqt_exec_callback_QComboBox_CloseEvent(self *C.QComboBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QComboBox_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QComboBox_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_TabletEvent
func miqt_exec_callback_QComboBox_TabletEvent(self *C.QComboBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QComboBox_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QComboBox_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_ActionEvent
func miqt_exec_callback_QComboBox_ActionEvent(self *C.QComboBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QComboBox_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QComboBox_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_DragEnterEvent
func miqt_exec_callback_QComboBox_DragEnterEvent(self *C.QComboBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QComboBox_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QComboBox_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_DragMoveEvent
func miqt_exec_callback_QComboBox_DragMoveEvent(self *C.QComboBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QComboBox_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QComboBox_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_DragLeaveEvent
func miqt_exec_callback_QComboBox_DragLeaveEvent(self *C.QComboBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QComboBox_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QComboBox_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_DropEvent
func miqt_exec_callback_QComboBox_DropEvent(self *C.QComboBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QComboBox_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QComboBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QComboBox_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_NativeEvent
func miqt_exec_callback_QComboBox_NativeEvent(self *C.QComboBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QComboBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QComboBox_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QComboBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QComboBox_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_Metric
func miqt_exec_callback_QComboBox_Metric(self *C.QComboBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QComboBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QComboBox_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QComboBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QComboBox_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_InitPainter
func miqt_exec_callback_QComboBox_InitPainter(self *C.QComboBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QComboBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QComboBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QComboBox_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QComboBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QComboBox_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_Redirected
func miqt_exec_callback_QComboBox_Redirected(self *C.QComboBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QComboBox) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QComboBox_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QComboBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QComboBox_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_SharedPainter
func miqt_exec_callback_QComboBox_SharedPainter(self *C.QComboBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QComboBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QComboBox_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QComboBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QComboBox_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_FocusNextPrevChild
func miqt_exec_callback_QComboBox_FocusNextPrevChild(self *C.QComboBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QComboBox) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QComboBox_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QComboBox) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QComboBox_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_EventFilter
func miqt_exec_callback_QComboBox_EventFilter(self *C.QComboBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QComboBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QComboBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QComboBox_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QComboBox_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_TimerEvent
func miqt_exec_callback_QComboBox_TimerEvent(self *C.QComboBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QComboBox_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QComboBox_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_ChildEvent
func miqt_exec_callback_QComboBox_ChildEvent(self *C.QComboBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QComboBox_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QComboBox) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QComboBox_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_CustomEvent
func miqt_exec_callback_QComboBox_CustomEvent(self *C.QComboBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QComboBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QComboBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QComboBox_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QComboBox) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QComboBox_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_ConnectNotify
func miqt_exec_callback_QComboBox_ConnectNotify(self *C.QComboBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QComboBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QComboBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QComboBox_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QComboBox) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QComboBox_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QComboBox_DisconnectNotify
func miqt_exec_callback_QComboBox_DisconnectNotify(self *C.QComboBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QComboBox{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QComboBox) Delete() {
	C.QComboBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QComboBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QComboBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
