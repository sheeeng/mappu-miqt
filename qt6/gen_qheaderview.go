package qt6

/*

#include "gen_qheaderview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHeaderView__ResizeMode int

const (
	QHeaderView__Interactive      QHeaderView__ResizeMode = 0
	QHeaderView__Stretch          QHeaderView__ResizeMode = 1
	QHeaderView__Fixed            QHeaderView__ResizeMode = 2
	QHeaderView__ResizeToContents QHeaderView__ResizeMode = 3
	QHeaderView__Custom           QHeaderView__ResizeMode = 2
)

type QHeaderView struct {
	h *C.QHeaderView
	*QAbstractItemView
}

func (this *QHeaderView) cPointer() *C.QHeaderView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHeaderView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHeaderView constructs the type using only CGO pointers.
func newQHeaderView(h *C.QHeaderView) *QHeaderView {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	C.QHeaderView_virtbase(h, &outptr_QAbstractItemView)

	return &QHeaderView{h: h,
		QAbstractItemView: newQAbstractItemView(outptr_QAbstractItemView)}
}

// UnsafeNewQHeaderView constructs the type using only unsafe pointers.
func UnsafeNewQHeaderView(h unsafe.Pointer) *QHeaderView {
	return newQHeaderView((*C.QHeaderView)(h))
}

// NewQHeaderView constructs a new QHeaderView object.
func NewQHeaderView(orientation Orientation) *QHeaderView {

	return newQHeaderView(C.QHeaderView_new((C.int)(orientation)))
}

// NewQHeaderView2 constructs a new QHeaderView object.
func NewQHeaderView2(orientation Orientation, parent *QWidget) *QHeaderView {

	return newQHeaderView(C.QHeaderView_new2((C.int)(orientation), parent.cPointer()))
}

func (this *QHeaderView) MetaObject() *QMetaObject {
	return newQMetaObject(C.QHeaderView_MetaObject(this.h))
}

func (this *QHeaderView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHeaderView_Metacast(this.h, param1_Cstring))
}

func QHeaderView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHeaderView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHeaderView) SetModel(model *QAbstractItemModel) {
	C.QHeaderView_SetModel(this.h, model.cPointer())
}

func (this *QHeaderView) Orientation() Orientation {
	return (Orientation)(C.QHeaderView_Orientation(this.h))
}

func (this *QHeaderView) Offset() int {
	return (int)(C.QHeaderView_Offset(this.h))
}

func (this *QHeaderView) Length() int {
	return (int)(C.QHeaderView_Length(this.h))
}

func (this *QHeaderView) SizeHint() *QSize {
	_goptr := newQSize(C.QHeaderView_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHeaderView) SetVisible(v bool) {
	C.QHeaderView_SetVisible(this.h, (C.bool)(v))
}

func (this *QHeaderView) SectionSizeHint(logicalIndex int) int {
	return (int)(C.QHeaderView_SectionSizeHint(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) VisualIndexAt(position int) int {
	return (int)(C.QHeaderView_VisualIndexAt(this.h, (C.int)(position)))
}

func (this *QHeaderView) LogicalIndexAt(position int) int {
	return (int)(C.QHeaderView_LogicalIndexAt(this.h, (C.int)(position)))
}

func (this *QHeaderView) LogicalIndexAt2(x int, y int) int {
	return (int)(C.QHeaderView_LogicalIndexAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QHeaderView) LogicalIndexAtWithPos(pos *QPoint) int {
	return (int)(C.QHeaderView_LogicalIndexAtWithPos(this.h, pos.cPointer()))
}

func (this *QHeaderView) SectionSize(logicalIndex int) int {
	return (int)(C.QHeaderView_SectionSize(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SectionPosition(logicalIndex int) int {
	return (int)(C.QHeaderView_SectionPosition(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SectionViewportPosition(logicalIndex int) int {
	return (int)(C.QHeaderView_SectionViewportPosition(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) MoveSection(from int, to int) {
	C.QHeaderView_MoveSection(this.h, (C.int)(from), (C.int)(to))
}

func (this *QHeaderView) SwapSections(first int, second int) {
	C.QHeaderView_SwapSections(this.h, (C.int)(first), (C.int)(second))
}

func (this *QHeaderView) ResizeSection(logicalIndex int, size int) {
	C.QHeaderView_ResizeSection(this.h, (C.int)(logicalIndex), (C.int)(size))
}

func (this *QHeaderView) ResizeSections(mode QHeaderView__ResizeMode) {
	C.QHeaderView_ResizeSections(this.h, (C.int)(mode))
}

func (this *QHeaderView) IsSectionHidden(logicalIndex int) bool {
	return (bool)(C.QHeaderView_IsSectionHidden(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SetSectionHidden(logicalIndex int, hide bool) {
	C.QHeaderView_SetSectionHidden(this.h, (C.int)(logicalIndex), (C.bool)(hide))
}

func (this *QHeaderView) HiddenSectionCount() int {
	return (int)(C.QHeaderView_HiddenSectionCount(this.h))
}

func (this *QHeaderView) HideSection(logicalIndex int) {
	C.QHeaderView_HideSection(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) ShowSection(logicalIndex int) {
	C.QHeaderView_ShowSection(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) Count() int {
	return (int)(C.QHeaderView_Count(this.h))
}

func (this *QHeaderView) VisualIndex(logicalIndex int) int {
	return (int)(C.QHeaderView_VisualIndex(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) LogicalIndex(visualIndex int) int {
	return (int)(C.QHeaderView_LogicalIndex(this.h, (C.int)(visualIndex)))
}

func (this *QHeaderView) SetSectionsMovable(movable bool) {
	C.QHeaderView_SetSectionsMovable(this.h, (C.bool)(movable))
}

func (this *QHeaderView) SectionsMovable() bool {
	return (bool)(C.QHeaderView_SectionsMovable(this.h))
}

func (this *QHeaderView) SetFirstSectionMovable(movable bool) {
	C.QHeaderView_SetFirstSectionMovable(this.h, (C.bool)(movable))
}

func (this *QHeaderView) IsFirstSectionMovable() bool {
	return (bool)(C.QHeaderView_IsFirstSectionMovable(this.h))
}

func (this *QHeaderView) SetSectionsClickable(clickable bool) {
	C.QHeaderView_SetSectionsClickable(this.h, (C.bool)(clickable))
}

func (this *QHeaderView) SectionsClickable() bool {
	return (bool)(C.QHeaderView_SectionsClickable(this.h))
}

func (this *QHeaderView) SetHighlightSections(highlight bool) {
	C.QHeaderView_SetHighlightSections(this.h, (C.bool)(highlight))
}

func (this *QHeaderView) HighlightSections() bool {
	return (bool)(C.QHeaderView_HighlightSections(this.h))
}

func (this *QHeaderView) SectionResizeMode(logicalIndex int) QHeaderView__ResizeMode {
	return (QHeaderView__ResizeMode)(C.QHeaderView_SectionResizeMode(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SetSectionResizeMode(mode QHeaderView__ResizeMode) {
	C.QHeaderView_SetSectionResizeMode(this.h, (C.int)(mode))
}

func (this *QHeaderView) SetSectionResizeMode2(logicalIndex int, mode QHeaderView__ResizeMode) {
	C.QHeaderView_SetSectionResizeMode2(this.h, (C.int)(logicalIndex), (C.int)(mode))
}

func (this *QHeaderView) SetResizeContentsPrecision(precision int) {
	C.QHeaderView_SetResizeContentsPrecision(this.h, (C.int)(precision))
}

func (this *QHeaderView) ResizeContentsPrecision() int {
	return (int)(C.QHeaderView_ResizeContentsPrecision(this.h))
}

func (this *QHeaderView) StretchSectionCount() int {
	return (int)(C.QHeaderView_StretchSectionCount(this.h))
}

func (this *QHeaderView) SetSortIndicatorShown(show bool) {
	C.QHeaderView_SetSortIndicatorShown(this.h, (C.bool)(show))
}

func (this *QHeaderView) IsSortIndicatorShown() bool {
	return (bool)(C.QHeaderView_IsSortIndicatorShown(this.h))
}

func (this *QHeaderView) SetSortIndicator(logicalIndex int, order SortOrder) {
	C.QHeaderView_SetSortIndicator(this.h, (C.int)(logicalIndex), (C.int)(order))
}

func (this *QHeaderView) SortIndicatorSection() int {
	return (int)(C.QHeaderView_SortIndicatorSection(this.h))
}

func (this *QHeaderView) SortIndicatorOrder() SortOrder {
	return (SortOrder)(C.QHeaderView_SortIndicatorOrder(this.h))
}

func (this *QHeaderView) SetSortIndicatorClearable(clearable bool) {
	C.QHeaderView_SetSortIndicatorClearable(this.h, (C.bool)(clearable))
}

func (this *QHeaderView) IsSortIndicatorClearable() bool {
	return (bool)(C.QHeaderView_IsSortIndicatorClearable(this.h))
}

func (this *QHeaderView) StretchLastSection() bool {
	return (bool)(C.QHeaderView_StretchLastSection(this.h))
}

func (this *QHeaderView) SetStretchLastSection(stretch bool) {
	C.QHeaderView_SetStretchLastSection(this.h, (C.bool)(stretch))
}

func (this *QHeaderView) CascadingSectionResizes() bool {
	return (bool)(C.QHeaderView_CascadingSectionResizes(this.h))
}

func (this *QHeaderView) SetCascadingSectionResizes(enable bool) {
	C.QHeaderView_SetCascadingSectionResizes(this.h, (C.bool)(enable))
}

func (this *QHeaderView) DefaultSectionSize() int {
	return (int)(C.QHeaderView_DefaultSectionSize(this.h))
}

func (this *QHeaderView) SetDefaultSectionSize(size int) {
	C.QHeaderView_SetDefaultSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) ResetDefaultSectionSize() {
	C.QHeaderView_ResetDefaultSectionSize(this.h)
}

func (this *QHeaderView) MinimumSectionSize() int {
	return (int)(C.QHeaderView_MinimumSectionSize(this.h))
}

func (this *QHeaderView) SetMinimumSectionSize(size int) {
	C.QHeaderView_SetMinimumSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) MaximumSectionSize() int {
	return (int)(C.QHeaderView_MaximumSectionSize(this.h))
}

func (this *QHeaderView) SetMaximumSectionSize(size int) {
	C.QHeaderView_SetMaximumSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) DefaultAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QHeaderView_DefaultAlignment(this.h))
}

func (this *QHeaderView) SetDefaultAlignment(alignment AlignmentFlag) {
	C.QHeaderView_SetDefaultAlignment(this.h, (C.int)(alignment))
}

func (this *QHeaderView) DoItemsLayout() {
	C.QHeaderView_DoItemsLayout(this.h)
}

func (this *QHeaderView) SectionsMoved() bool {
	return (bool)(C.QHeaderView_SectionsMoved(this.h))
}

func (this *QHeaderView) SectionsHidden() bool {
	return (bool)(C.QHeaderView_SectionsHidden(this.h))
}

func (this *QHeaderView) SaveState() []byte {
	var _bytearray C.struct_miqt_string = C.QHeaderView_SaveState(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QHeaderView) RestoreState(state []byte) bool {
	state_alias := C.struct_miqt_string{}
	if len(state) > 0 {
		state_alias.data = (*C.char)(unsafe.Pointer(&state[0]))
	} else {
		state_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	state_alias.len = C.size_t(len(state))
	return (bool)(C.QHeaderView_RestoreState(this.h, state_alias))
}

func (this *QHeaderView) Reset() {
	C.QHeaderView_Reset(this.h)
}

func (this *QHeaderView) SetOffset(offset int) {
	C.QHeaderView_SetOffset(this.h, (C.int)(offset))
}

func (this *QHeaderView) SetOffsetToSectionPosition(visualIndex int) {
	C.QHeaderView_SetOffsetToSectionPosition(this.h, (C.int)(visualIndex))
}

func (this *QHeaderView) SetOffsetToLastSection() {
	C.QHeaderView_SetOffsetToLastSection(this.h)
}

func (this *QHeaderView) HeaderDataChanged(orientation Orientation, logicalFirst int, logicalLast int) {
	C.QHeaderView_HeaderDataChanged(this.h, (C.int)(orientation), (C.int)(logicalFirst), (C.int)(logicalLast))
}

func (this *QHeaderView) SectionMoved(logicalIndex int, oldVisualIndex int, newVisualIndex int) {
	C.QHeaderView_SectionMoved(this.h, (C.int)(logicalIndex), (C.int)(oldVisualIndex), (C.int)(newVisualIndex))
}
func (this *QHeaderView) OnSectionMoved(slot func(logicalIndex int, oldVisualIndex int, newVisualIndex int)) {
	C.QHeaderView_connect_SectionMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionMoved
func miqt_exec_callback_QHeaderView_SectionMoved(cb C.intptr_t, logicalIndex C.int, oldVisualIndex C.int, newVisualIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int, oldVisualIndex int, newVisualIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	slotval2 := (int)(oldVisualIndex)

	slotval3 := (int)(newVisualIndex)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QHeaderView) SectionResized(logicalIndex int, oldSize int, newSize int) {
	C.QHeaderView_SectionResized(this.h, (C.int)(logicalIndex), (C.int)(oldSize), (C.int)(newSize))
}
func (this *QHeaderView) OnSectionResized(slot func(logicalIndex int, oldSize int, newSize int)) {
	C.QHeaderView_connect_SectionResized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionResized
func miqt_exec_callback_QHeaderView_SectionResized(cb C.intptr_t, logicalIndex C.int, oldSize C.int, newSize C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int, oldSize int, newSize int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	slotval2 := (int)(oldSize)

	slotval3 := (int)(newSize)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QHeaderView) SectionPressed(logicalIndex int) {
	C.QHeaderView_SectionPressed(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionPressed(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionPressed
func miqt_exec_callback_QHeaderView_SectionPressed(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionClicked(logicalIndex int) {
	C.QHeaderView_SectionClicked(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionClicked(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionClicked
func miqt_exec_callback_QHeaderView_SectionClicked(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionEntered(logicalIndex int) {
	C.QHeaderView_SectionEntered(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionEntered(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionEntered
func miqt_exec_callback_QHeaderView_SectionEntered(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionDoubleClicked(logicalIndex int) {
	C.QHeaderView_SectionDoubleClicked(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionDoubleClicked(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionDoubleClicked
func miqt_exec_callback_QHeaderView_SectionDoubleClicked(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionCountChanged(oldCount int, newCount int) {
	C.QHeaderView_SectionCountChanged(this.h, (C.int)(oldCount), (C.int)(newCount))
}
func (this *QHeaderView) OnSectionCountChanged(slot func(oldCount int, newCount int)) {
	C.QHeaderView_connect_SectionCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionCountChanged
func miqt_exec_callback_QHeaderView_SectionCountChanged(cb C.intptr_t, oldCount C.int, newCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(oldCount int, newCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(oldCount)

	slotval2 := (int)(newCount)

	gofunc(slotval1, slotval2)
}

func (this *QHeaderView) SectionHandleDoubleClicked(logicalIndex int) {
	C.QHeaderView_SectionHandleDoubleClicked(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionHandleDoubleClicked(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionHandleDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionHandleDoubleClicked
func miqt_exec_callback_QHeaderView_SectionHandleDoubleClicked(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) GeometriesChanged() {
	C.QHeaderView_GeometriesChanged(this.h)
}
func (this *QHeaderView) OnGeometriesChanged(slot func()) {
	C.QHeaderView_connect_GeometriesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_GeometriesChanged
func miqt_exec_callback_QHeaderView_GeometriesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHeaderView) SortIndicatorChanged(logicalIndex int, order SortOrder) {
	C.QHeaderView_SortIndicatorChanged(this.h, (C.int)(logicalIndex), (C.int)(order))
}
func (this *QHeaderView) OnSortIndicatorChanged(slot func(logicalIndex int, order SortOrder)) {
	C.QHeaderView_connect_SortIndicatorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SortIndicatorChanged
func miqt_exec_callback_QHeaderView_SortIndicatorChanged(cb C.intptr_t, logicalIndex C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	slotval2 := (SortOrder)(order)

	gofunc(slotval1, slotval2)
}

func (this *QHeaderView) SortIndicatorClearableChanged(clearable bool) {
	C.QHeaderView_SortIndicatorClearableChanged(this.h, (C.bool)(clearable))
}
func (this *QHeaderView) OnSortIndicatorClearableChanged(slot func(clearable bool)) {
	C.QHeaderView_connect_SortIndicatorClearableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SortIndicatorClearableChanged
func miqt_exec_callback_QHeaderView_SortIndicatorClearableChanged(cb C.intptr_t, clearable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(clearable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(clearable)

	gofunc(slotval1)
}

func QHeaderView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHeaderView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHeaderView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHeaderView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHeaderView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QHeaderView_virtualbase_SetModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QHeaderView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QHeaderView_override_virtual_SetModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SetModel
func miqt_exec_callback_QHeaderView_SetModel(self *C.QHeaderView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QHeaderView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QHeaderView_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QHeaderView_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SizeHint
func miqt_exec_callback_QHeaderView_SizeHint(self *C.QHeaderView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SetVisible(v bool) {

	C.QHeaderView_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(v))

}
func (this *QHeaderView) OnSetVisible(slot func(super func(v bool), v bool)) {
	ok := C.QHeaderView_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SetVisible
func miqt_exec_callback_QHeaderView_SetVisible(self *C.QHeaderView, cb C.intptr_t, v C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(v bool), v bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(v)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QHeaderView) callVirtualBase_DoItemsLayout() {

	C.QHeaderView_virtualbase_DoItemsLayout(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnDoItemsLayout(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_DoItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_DoItemsLayout
func miqt_exec_callback_QHeaderView_DoItemsLayout(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QHeaderView) callVirtualBase_Reset() {

	C.QHeaderView_virtualbase_Reset(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnReset(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_Reset
func miqt_exec_callback_QHeaderView_Reset(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_Reset)

}

func (this *QHeaderView) callVirtualBase_CurrentChanged(current *QModelIndex, old *QModelIndex) {

	C.QHeaderView_virtualbase_CurrentChanged(unsafe.Pointer(this.h), current.cPointer(), old.cPointer())

}
func (this *QHeaderView) OnCurrentChanged(slot func(super func(current *QModelIndex, old *QModelIndex), current *QModelIndex, old *QModelIndex)) {
	ok := C.QHeaderView_override_virtual_CurrentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_CurrentChanged
func miqt_exec_callback_QHeaderView_CurrentChanged(self *C.QHeaderView, cb C.intptr_t, current *C.QModelIndex, old *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, old *QModelIndex), current *QModelIndex, old *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(old)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QHeaderView_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QHeaderView) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QHeaderView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_Event
func miqt_exec_callback_QHeaderView_Event(self *C.QHeaderView, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QHeaderView_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QHeaderView_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_PaintEvent
func miqt_exec_callback_QHeaderView_PaintEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QHeaderView_virtualbase_MousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QHeaderView_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_MousePressEvent
func miqt_exec_callback_QHeaderView_MousePressEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QHeaderView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QHeaderView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_MouseMoveEvent
func miqt_exec_callback_QHeaderView_MouseMoveEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QHeaderView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QHeaderView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_MouseReleaseEvent
func miqt_exec_callback_QHeaderView_MouseReleaseEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MouseDoubleClickEvent(e *QMouseEvent) {

	C.QHeaderView_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnMouseDoubleClickEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QHeaderView_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_MouseDoubleClickEvent
func miqt_exec_callback_QHeaderView_MouseDoubleClickEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ViewportEvent(e *QEvent) bool {

	return (bool)(C.QHeaderView_virtualbase_ViewportEvent(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QHeaderView) OnViewportEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QHeaderView_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ViewportEvent
func miqt_exec_callback_QHeaderView_ViewportEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_PaintSection(painter *QPainter, rect *QRect, logicalIndex int) {

	C.QHeaderView_virtualbase_PaintSection(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), (C.int)(logicalIndex))

}
func (this *QHeaderView) OnPaintSection(slot func(super func(painter *QPainter, rect *QRect, logicalIndex int), painter *QPainter, rect *QRect, logicalIndex int)) {
	ok := C.QHeaderView_override_virtual_PaintSection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_PaintSection
func miqt_exec_callback_QHeaderView_PaintSection(self *C.QHeaderView, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRect, logicalIndex int), painter *QPainter, rect *QRect, logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRect(rect)

	slotval3 := (int)(logicalIndex)

	gofunc((&QHeaderView{h: self}).callVirtualBase_PaintSection, slotval1, slotval2, slotval3)

}

func (this *QHeaderView) callVirtualBase_SectionSizeFromContents(logicalIndex int) *QSize {

	_goptr := newQSize(C.QHeaderView_virtualbase_SectionSizeFromContents(unsafe.Pointer(this.h), (C.int)(logicalIndex)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnSectionSizeFromContents(slot func(super func(logicalIndex int) *QSize, logicalIndex int) *QSize) {
	ok := C.QHeaderView_override_virtual_SectionSizeFromContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SectionSizeFromContents
func miqt_exec_callback_QHeaderView_SectionSizeFromContents(self *C.QHeaderView, cb C.intptr_t, logicalIndex C.int) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(logicalIndex int) *QSize, logicalIndex int) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SectionSizeFromContents, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QHeaderView_virtualbase_HorizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QHeaderView_override_virtual_HorizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_HorizontalOffset
func miqt_exec_callback_QHeaderView_HorizontalOffset(self *C.QHeaderView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_VerticalOffset() int {

	return (int)(C.QHeaderView_virtualbase_VerticalOffset(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QHeaderView_override_virtual_VerticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_VerticalOffset
func miqt_exec_callback_QHeaderView_VerticalOffset(self *C.QHeaderView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_UpdateGeometries() {

	C.QHeaderView_virtualbase_UpdateGeometries(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnUpdateGeometries(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_UpdateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_UpdateGeometries
func miqt_exec_callback_QHeaderView_UpdateGeometries(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QHeaderView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QHeaderView_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QHeaderView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QHeaderView_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ScrollContentsBy
func miqt_exec_callback_QHeaderView_ScrollContentsBy(self *C.QHeaderView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QHeaderView_virtualbase_DataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QHeaderView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QHeaderView_override_virtual_DataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_DataChanged
func miqt_exec_callback_QHeaderView_DataChanged(self *C.QHeaderView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(topLeft)

	slotval2 := newQModelIndex(bottomRight)

	var roles_ma C.struct_miqt_array = roles
	roles_ret := make([]int, int(roles_ma.len))
	roles_outCast := (*[0xffff]C.int)(unsafe.Pointer(roles_ma.data)) // hey ya
	for i := 0; i < int(roles_ma.len); i++ {
		roles_ret[i] = (int)(roles_outCast[i])
	}
	slotval3 := roles_ret

	gofunc((&QHeaderView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QHeaderView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QHeaderView_virtualbase_RowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QHeaderView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QHeaderView_override_virtual_RowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_RowsInserted
func miqt_exec_callback_QHeaderView_RowsInserted(self *C.QHeaderView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QHeaderView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QHeaderView) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QHeaderView_virtualbase_VisualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QHeaderView_override_virtual_VisualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_VisualRect
func miqt_exec_callback_QHeaderView_VisualRect(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QHeaderView_virtualbase_ScrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QHeaderView) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QHeaderView_override_virtual_ScrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ScrollTo
func miqt_exec_callback_QHeaderView_ScrollTo(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_goptr := newQModelIndex(C.QHeaderView_virtualbase_IndexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QHeaderView_override_virtual_IndexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_IndexAt
func miqt_exec_callback_QHeaderView_IndexAt(self *C.QHeaderView, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(p)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QHeaderView_virtualbase_IsIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QHeaderView) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QHeaderView_override_virtual_IsIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_IsIndexHidden
func miqt_exec_callback_QHeaderView_IsIndexHidden(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_MoveCursor(param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QHeaderView_virtualbase_MoveCursor(unsafe.Pointer(this.h), (C.int)(param1), (C.int)(param2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnMoveCursor(slot func(super func(param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex, param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex) {
	ok := C.QHeaderView_override_virtual_MoveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_MoveCursor
func miqt_exec_callback_QHeaderView_MoveCursor(self *C.QHeaderView, cb C.intptr_t, param1 C.int, param2 C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex, param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(param1)

	slotval2 := (KeyboardModifier)(param2)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SetSelection(rect *QRect, flags QItemSelectionModel__SelectionFlag) {

	C.QHeaderView_virtualbase_SetSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(flags))

}
func (this *QHeaderView) OnSetSelection(slot func(super func(rect *QRect, flags QItemSelectionModel__SelectionFlag), rect *QRect, flags QItemSelectionModel__SelectionFlag)) {
	ok := C.QHeaderView_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SetSelection
func miqt_exec_callback_QHeaderView_SetSelection(self *C.QHeaderView, cb C.intptr_t, rect *C.QRect, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, flags QItemSelectionModel__SelectionFlag), rect *QRect, flags QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(flags)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_goptr := newQRegion(C.QHeaderView_virtualbase_VisualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QHeaderView_override_virtual_VisualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_VisualRegionForSelection
func miqt_exec_callback_QHeaderView_VisualRegionForSelection(self *C.QHeaderView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_InitStyleOptionForIndex(option *QStyleOptionHeader, logicalIndex int) {

	C.QHeaderView_virtualbase_InitStyleOptionForIndex(unsafe.Pointer(this.h), option.cPointer(), (C.int)(logicalIndex))

}
func (this *QHeaderView) OnInitStyleOptionForIndex(slot func(super func(option *QStyleOptionHeader, logicalIndex int), option *QStyleOptionHeader, logicalIndex int)) {
	ok := C.QHeaderView_override_virtual_InitStyleOptionForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_InitStyleOptionForIndex
func miqt_exec_callback_QHeaderView_InitStyleOptionForIndex(self *C.QHeaderView, cb C.intptr_t, option *C.QStyleOptionHeader, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionHeader, logicalIndex int), option *QStyleOptionHeader, logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionHeader(option)

	slotval2 := (int)(logicalIndex)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InitStyleOptionForIndex, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_InitStyleOption(option *QStyleOptionHeader) {

	C.QHeaderView_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QHeaderView) OnInitStyleOption(slot func(super func(option *QStyleOptionHeader), option *QStyleOptionHeader)) {
	ok := C.QHeaderView_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_InitStyleOption
func miqt_exec_callback_QHeaderView_InitStyleOption(self *C.QHeaderView, cb C.intptr_t, option *C.QStyleOptionHeader) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionHeader), option *QStyleOptionHeader))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionHeader(option)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QHeaderView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QHeaderView_virtualbase_SetSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QHeaderView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QHeaderView_override_virtual_SetSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SetSelectionModel
func miqt_exec_callback_QHeaderView_SetSelectionModel(self *C.QHeaderView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QHeaderView) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QHeaderView_virtualbase_KeyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QHeaderView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QHeaderView_override_virtual_KeyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_KeyboardSearch
func miqt_exec_callback_QHeaderView_KeyboardSearch(self *C.QHeaderView, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QHeaderView{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QHeaderView) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QHeaderView_virtualbase_SizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QHeaderView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QHeaderView_override_virtual_SizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SizeHintForRow
func miqt_exec_callback_QHeaderView_SizeHintForRow(self *C.QHeaderView, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QHeaderView_virtualbase_SizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QHeaderView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QHeaderView_override_virtual_SizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SizeHintForColumn
func miqt_exec_callback_QHeaderView_SizeHintForColumn(self *C.QHeaderView, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_ItemDelegateForIndex(index *QModelIndex) *QAbstractItemDelegate {

	return newQAbstractItemDelegate(C.QHeaderView_virtualbase_ItemDelegateForIndex(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QHeaderView) OnItemDelegateForIndex(slot func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate) {
	ok := C.QHeaderView_override_virtual_ItemDelegateForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ItemDelegateForIndex
func miqt_exec_callback_QHeaderView_ItemDelegateForIndex(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex) *C.QAbstractItemDelegate {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_ItemDelegateForIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QHeaderView_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QHeaderView_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_InputMethodQuery
func miqt_exec_callback_QHeaderView_InputMethodQuery(self *C.QHeaderView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QHeaderView_virtualbase_SetRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QHeaderView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QHeaderView_override_virtual_SetRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SetRootIndex
func miqt_exec_callback_QHeaderView_SetRootIndex(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QHeaderView) callVirtualBase_SelectAll() {

	C.QHeaderView_virtualbase_SelectAll(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnSelectAll(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_SelectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SelectAll
func miqt_exec_callback_QHeaderView_SelectAll(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_SelectAll)

}

func (this *QHeaderView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QHeaderView_virtualbase_RowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QHeaderView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QHeaderView_override_virtual_RowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_RowsAboutToBeRemoved
func miqt_exec_callback_QHeaderView_RowsAboutToBeRemoved(self *C.QHeaderView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QHeaderView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QHeaderView) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QHeaderView_virtualbase_SelectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QHeaderView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QHeaderView_override_virtual_SelectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SelectionChanged
func miqt_exec_callback_QHeaderView_SelectionChanged(self *C.QHeaderView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_UpdateEditorData() {

	C.QHeaderView_virtualbase_UpdateEditorData(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnUpdateEditorData(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_UpdateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_UpdateEditorData
func miqt_exec_callback_QHeaderView_UpdateEditorData(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QHeaderView) callVirtualBase_UpdateEditorGeometries() {

	C.QHeaderView_virtualbase_UpdateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_UpdateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_UpdateEditorGeometries
func miqt_exec_callback_QHeaderView_UpdateEditorGeometries(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QHeaderView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QHeaderView_virtualbase_VerticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QHeaderView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QHeaderView_override_virtual_VerticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_VerticalScrollbarAction
func miqt_exec_callback_QHeaderView_VerticalScrollbarAction(self *C.QHeaderView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QHeaderView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QHeaderView) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QHeaderView_virtualbase_HorizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QHeaderView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QHeaderView_override_virtual_HorizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_HorizontalScrollbarAction
func miqt_exec_callback_QHeaderView_HorizontalScrollbarAction(self *C.QHeaderView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QHeaderView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QHeaderView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QHeaderView_virtualbase_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QHeaderView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QHeaderView_override_virtual_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_VerticalScrollbarValueChanged
func miqt_exec_callback_QHeaderView_VerticalScrollbarValueChanged(self *C.QHeaderView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QHeaderView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QHeaderView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QHeaderView_virtualbase_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QHeaderView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QHeaderView_override_virtual_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_HorizontalScrollbarValueChanged
func miqt_exec_callback_QHeaderView_HorizontalScrollbarValueChanged(self *C.QHeaderView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QHeaderView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QHeaderView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QHeaderView_virtualbase_CloseEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QHeaderView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QHeaderView_override_virtual_CloseEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_CloseEditor
func miqt_exec_callback_QHeaderView_CloseEditor(self *C.QHeaderView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_CommitData(editor *QWidget) {

	C.QHeaderView_virtualbase_CommitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QHeaderView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QHeaderView_override_virtual_CommitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_CommitData
func miqt_exec_callback_QHeaderView_CommitData(self *C.QHeaderView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QHeaderView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QHeaderView_virtualbase_EditorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QHeaderView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QHeaderView_override_virtual_EditorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_EditorDestroyed
func miqt_exec_callback_QHeaderView_EditorDestroyed(self *C.QHeaderView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QHeaderView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QHeaderView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QHeaderView_virtualbase_SelectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QHeaderView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QHeaderView_override_virtual_SelectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SelectedIndexes
func miqt_exec_callback_QHeaderView_SelectedIndexes(self *C.QHeaderView, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QHeaderView) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QHeaderView_virtualbase_Edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QHeaderView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QHeaderView_override_virtual_Edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_Edit2
func miqt_exec_callback_QHeaderView_Edit2(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QHeaderView_virtualbase_SelectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QHeaderView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QHeaderView_override_virtual_SelectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SelectionCommand
func miqt_exec_callback_QHeaderView_SelectionCommand(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QHeaderView_virtualbase_StartDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QHeaderView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QHeaderView_override_virtual_StartDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_StartDrag
func miqt_exec_callback_QHeaderView_StartDrag(self *C.QHeaderView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QHeaderView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QHeaderView) callVirtualBase_InitViewItemOption(option *QStyleOptionViewItem) {

	C.QHeaderView_virtualbase_InitViewItemOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QHeaderView) OnInitViewItemOption(slot func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem)) {
	ok := C.QHeaderView_override_virtual_InitViewItemOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_InitViewItemOption
func miqt_exec_callback_QHeaderView_InitViewItemOption(self *C.QHeaderView, cb C.intptr_t, option *C.QStyleOptionViewItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InitViewItemOption, slotval1)

}

func (this *QHeaderView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QHeaderView_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QHeaderView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QHeaderView_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_FocusNextPrevChild
func miqt_exec_callback_QHeaderView_FocusNextPrevChild(self *C.QHeaderView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QHeaderView_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QHeaderView_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_DragEnterEvent
func miqt_exec_callback_QHeaderView_DragEnterEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QHeaderView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QHeaderView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_DragMoveEvent
func miqt_exec_callback_QHeaderView_DragMoveEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QHeaderView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QHeaderView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_DragLeaveEvent
func miqt_exec_callback_QHeaderView_DragLeaveEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QHeaderView_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QHeaderView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_DropEvent
func miqt_exec_callback_QHeaderView_DropEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QHeaderView_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QHeaderView_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_FocusInEvent
func miqt_exec_callback_QHeaderView_FocusInEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QHeaderView_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QHeaderView_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_FocusOutEvent
func miqt_exec_callback_QHeaderView_FocusOutEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QHeaderView_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QHeaderView_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_KeyPressEvent
func miqt_exec_callback_QHeaderView_KeyPressEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QHeaderView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QHeaderView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ResizeEvent
func miqt_exec_callback_QHeaderView_ResizeEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QHeaderView_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QHeaderView_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_TimerEvent
func miqt_exec_callback_QHeaderView_TimerEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QHeaderView_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QHeaderView_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_InputMethodEvent
func miqt_exec_callback_QHeaderView_InputMethodEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QHeaderView_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QHeaderView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QHeaderView_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_EventFilter
func miqt_exec_callback_QHeaderView_EventFilter(self *C.QHeaderView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QHeaderView_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QHeaderView_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ViewportSizeHint
func miqt_exec_callback_QHeaderView_ViewportSizeHint(self *C.QHeaderView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QHeaderView_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QHeaderView_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_MinimumSizeHint
func miqt_exec_callback_QHeaderView_MinimumSizeHint(self *C.QHeaderView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QHeaderView_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QHeaderView) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QHeaderView_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SetupViewport
func miqt_exec_callback_QHeaderView_SetupViewport(self *C.QHeaderView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QHeaderView) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QHeaderView_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QHeaderView) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QHeaderView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_WheelEvent
func miqt_exec_callback_QHeaderView_WheelEvent(self *C.QHeaderView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QHeaderView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QHeaderView_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QHeaderView) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QHeaderView_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ContextMenuEvent
func miqt_exec_callback_QHeaderView_ContextMenuEvent(self *C.QHeaderView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QHeaderView_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QHeaderView) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QHeaderView_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ChangeEvent
func miqt_exec_callback_QHeaderView_ChangeEvent(self *C.QHeaderView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_DevType() int {

	return (int)(C.QHeaderView_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnDevType(slot func(super func() int) int) {
	ok := C.QHeaderView_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_DevType
func miqt_exec_callback_QHeaderView_DevType(self *C.QHeaderView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QHeaderView_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHeaderView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QHeaderView_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_HeightForWidth
func miqt_exec_callback_QHeaderView_HeightForWidth(self *C.QHeaderView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QHeaderView_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QHeaderView_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_HasHeightForWidth
func miqt_exec_callback_QHeaderView_HasHeightForWidth(self *C.QHeaderView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QHeaderView_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QHeaderView_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_PaintEngine
func miqt_exec_callback_QHeaderView_PaintEngine(self *C.QHeaderView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QHeaderView_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QHeaderView_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_KeyReleaseEvent
func miqt_exec_callback_QHeaderView_KeyReleaseEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QHeaderView_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QHeaderView_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_EnterEvent
func miqt_exec_callback_QHeaderView_EnterEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QHeaderView_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QHeaderView_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_LeaveEvent
func miqt_exec_callback_QHeaderView_LeaveEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QHeaderView_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QHeaderView_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_MoveEvent
func miqt_exec_callback_QHeaderView_MoveEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QHeaderView_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QHeaderView_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_CloseEvent
func miqt_exec_callback_QHeaderView_CloseEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QHeaderView_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QHeaderView_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_TabletEvent
func miqt_exec_callback_QHeaderView_TabletEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QHeaderView_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QHeaderView_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ActionEvent
func miqt_exec_callback_QHeaderView_ActionEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QHeaderView_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QHeaderView_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ShowEvent
func miqt_exec_callback_QHeaderView_ShowEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QHeaderView_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QHeaderView_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_HideEvent
func miqt_exec_callback_QHeaderView_HideEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QHeaderView_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QHeaderView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QHeaderView_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_NativeEvent
func miqt_exec_callback_QHeaderView_NativeEvent(self *C.QHeaderView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QHeaderView_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHeaderView) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QHeaderView_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_Metric
func miqt_exec_callback_QHeaderView_Metric(self *C.QHeaderView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_InitPainter(painter *QPainter) {

	C.QHeaderView_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QHeaderView) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QHeaderView_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_InitPainter
func miqt_exec_callback_QHeaderView_InitPainter(self *C.QHeaderView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QHeaderView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QHeaderView_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QHeaderView) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QHeaderView_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_Redirected
func miqt_exec_callback_QHeaderView_Redirected(self *C.QHeaderView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QHeaderView_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QHeaderView_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_SharedPainter
func miqt_exec_callback_QHeaderView_SharedPainter(self *C.QHeaderView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QHeaderView_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QHeaderView_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ChildEvent
func miqt_exec_callback_QHeaderView_ChildEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QHeaderView_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QHeaderView_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_CustomEvent
func miqt_exec_callback_QHeaderView_CustomEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QHeaderView_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QHeaderView) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QHeaderView_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_ConnectNotify
func miqt_exec_callback_QHeaderView_ConnectNotify(self *C.QHeaderView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHeaderView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QHeaderView_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QHeaderView) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QHeaderView_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_DisconnectNotify
func miqt_exec_callback_QHeaderView_DisconnectNotify(self *C.QHeaderView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHeaderView) Delete() {
	C.QHeaderView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHeaderView) GoGC() {
	runtime.SetFinalizer(this, func(this *QHeaderView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
