package qt6

/*

#include "gen_qsplitter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSplitter struct {
	h *C.QSplitter
	*QFrame
}

func (this *QSplitter) cPointer() *C.QSplitter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSplitter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSplitter constructs the type using only CGO pointers.
func newQSplitter(h *C.QSplitter) *QSplitter {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QSplitter_virtbase(h, &outptr_QFrame)

	return &QSplitter{h: h,
		QFrame: newQFrame(outptr_QFrame)}
}

// UnsafeNewQSplitter constructs the type using only unsafe pointers.
func UnsafeNewQSplitter(h unsafe.Pointer) *QSplitter {
	return newQSplitter((*C.QSplitter)(h))
}

// NewQSplitter constructs a new QSplitter object.
func NewQSplitter(parent *QWidget) *QSplitter {

	return newQSplitter(C.QSplitter_new(parent.cPointer()))
}

// NewQSplitter2 constructs a new QSplitter object.
func NewQSplitter2() *QSplitter {

	return newQSplitter(C.QSplitter_new2())
}

// NewQSplitter3 constructs a new QSplitter object.
func NewQSplitter3(param1 Orientation) *QSplitter {

	return newQSplitter(C.QSplitter_new3((C.int)(param1)))
}

// NewQSplitter4 constructs a new QSplitter object.
func NewQSplitter4(param1 Orientation, parent *QWidget) *QSplitter {

	return newQSplitter(C.QSplitter_new4((C.int)(param1), parent.cPointer()))
}

func (this *QSplitter) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSplitter_MetaObject(this.h))
}

func (this *QSplitter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSplitter_Metacast(this.h, param1_Cstring))
}

func QSplitter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplitter_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplitter) AddWidget(widget *QWidget) {
	C.QSplitter_AddWidget(this.h, widget.cPointer())
}

func (this *QSplitter) InsertWidget(index int, widget *QWidget) {
	C.QSplitter_InsertWidget(this.h, (C.int)(index), widget.cPointer())
}

func (this *QSplitter) ReplaceWidget(index int, widget *QWidget) *QWidget {
	return newQWidget(C.QSplitter_ReplaceWidget(this.h, (C.int)(index), widget.cPointer()))
}

func (this *QSplitter) SetOrientation(orientation Orientation) {
	C.QSplitter_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QSplitter) Orientation() Orientation {
	return (Orientation)(C.QSplitter_Orientation(this.h))
}

func (this *QSplitter) SetChildrenCollapsible(childrenCollapsible bool) {
	C.QSplitter_SetChildrenCollapsible(this.h, (C.bool)(childrenCollapsible))
}

func (this *QSplitter) ChildrenCollapsible() bool {
	return (bool)(C.QSplitter_ChildrenCollapsible(this.h))
}

func (this *QSplitter) SetCollapsible(index int, param2 bool) {
	C.QSplitter_SetCollapsible(this.h, (C.int)(index), (C.bool)(param2))
}

func (this *QSplitter) IsCollapsible(index int) bool {
	return (bool)(C.QSplitter_IsCollapsible(this.h, (C.int)(index)))
}

func (this *QSplitter) SetOpaqueResize() {
	C.QSplitter_SetOpaqueResize(this.h)
}

func (this *QSplitter) OpaqueResize() bool {
	return (bool)(C.QSplitter_OpaqueResize(this.h))
}

func (this *QSplitter) Refresh() {
	C.QSplitter_Refresh(this.h)
}

func (this *QSplitter) SizeHint() *QSize {
	_goptr := newQSize(C.QSplitter_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplitter) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QSplitter_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplitter) Sizes() []int {
	var _ma C.struct_miqt_array = C.QSplitter_Sizes(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QSplitter) SetSizes(list []int) {
	list_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (C.int)(list[i])
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QSplitter_SetSizes(this.h, list_ma)
}

func (this *QSplitter) SaveState() []byte {
	var _bytearray C.struct_miqt_string = C.QSplitter_SaveState(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSplitter) RestoreState(state []byte) bool {
	state_alias := C.struct_miqt_string{}
	if len(state) > 0 {
		state_alias.data = (*C.char)(unsafe.Pointer(&state[0]))
	} else {
		state_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	state_alias.len = C.size_t(len(state))
	return (bool)(C.QSplitter_RestoreState(this.h, state_alias))
}

func (this *QSplitter) HandleWidth() int {
	return (int)(C.QSplitter_HandleWidth(this.h))
}

func (this *QSplitter) SetHandleWidth(handleWidth int) {
	C.QSplitter_SetHandleWidth(this.h, (C.int)(handleWidth))
}

func (this *QSplitter) IndexOf(w *QWidget) int {
	return (int)(C.QSplitter_IndexOf(this.h, w.cPointer()))
}

func (this *QSplitter) Widget(index int) *QWidget {
	return newQWidget(C.QSplitter_Widget(this.h, (C.int)(index)))
}

func (this *QSplitter) Count() int {
	return (int)(C.QSplitter_Count(this.h))
}

func (this *QSplitter) GetRange(index int, param2 *int, param3 *int) {
	C.QSplitter_GetRange(this.h, (C.int)(index), (*C.int)(unsafe.Pointer(param2)), (*C.int)(unsafe.Pointer(param3)))
}

func (this *QSplitter) Handle(index int) *QSplitterHandle {
	return newQSplitterHandle(C.QSplitter_Handle(this.h, (C.int)(index)))
}

func (this *QSplitter) SetStretchFactor(index int, stretch int) {
	C.QSplitter_SetStretchFactor(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QSplitter) SplitterMoved(pos int, index int) {
	C.QSplitter_SplitterMoved(this.h, (C.int)(pos), (C.int)(index))
}
func (this *QSplitter) OnSplitterMoved(slot func(pos int, index int)) {
	C.QSplitter_connect_SplitterMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplitter_SplitterMoved
func miqt_exec_callback_QSplitter_SplitterMoved(cb C.intptr_t, pos C.int, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos int, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(pos)

	slotval2 := (int)(index)

	gofunc(slotval1, slotval2)
}

func QSplitter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplitter) SetOpaqueResize1(opaque bool) {
	C.QSplitter_SetOpaqueResize1(this.h, (C.bool)(opaque))
}

func (this *QSplitter) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSplitter_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitter) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplitter_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_SizeHint
func miqt_exec_callback_QSplitter_SizeHint(self *C.QSplitter, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QSplitter_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitter) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplitter_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_MinimumSizeHint
func miqt_exec_callback_QSplitter_MinimumSizeHint(self *C.QSplitter, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_CreateHandle() *QSplitterHandle {

	return newQSplitterHandle(C.QSplitter_virtualbase_CreateHandle(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnCreateHandle(slot func(super func() *QSplitterHandle) *QSplitterHandle) {
	ok := C.QSplitter_override_virtual_CreateHandle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_CreateHandle
func miqt_exec_callback_QSplitter_CreateHandle(self *C.QSplitter, cb C.intptr_t) *C.QSplitterHandle {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSplitterHandle) *QSplitterHandle)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_CreateHandle)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_ChildEvent(param1 *QChildEvent) {

	C.QSplitter_virtualbase_ChildEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnChildEvent(slot func(super func(param1 *QChildEvent), param1 *QChildEvent)) {
	ok := C.QSplitter_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_ChildEvent
func miqt_exec_callback_QSplitter_ChildEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QChildEvent), param1 *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QSplitter_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QSplitter) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QSplitter_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_Event
func miqt_exec_callback_QSplitter_Event(self *C.QSplitter, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QSplitter_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QSplitter_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_ResizeEvent
func miqt_exec_callback_QSplitter_ResizeEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QSplitter_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QSplitter_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_ChangeEvent
func miqt_exec_callback_QSplitter_ChangeEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QSplitter_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QSplitter_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_PaintEvent
func miqt_exec_callback_QSplitter_PaintEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QSplitter_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QSplitter) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QSplitter_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_InitStyleOption
func miqt_exec_callback_QSplitter_InitStyleOption(self *C.QSplitter, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QSplitter{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QSplitter) callVirtualBase_DevType() int {

	return (int)(C.QSplitter_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnDevType(slot func(super func() int) int) {
	ok := C.QSplitter_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_DevType
func miqt_exec_callback_QSplitter_DevType(self *C.QSplitter, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_SetVisible(visible bool) {

	C.QSplitter_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSplitter) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSplitter_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_SetVisible
func miqt_exec_callback_QSplitter_SetVisible(self *C.QSplitter, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSplitter{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSplitter) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSplitter_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplitter) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSplitter_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_HeightForWidth
func miqt_exec_callback_QSplitter_HeightForWidth(self *C.QSplitter, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSplitter_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSplitter_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_HasHeightForWidth
func miqt_exec_callback_QSplitter_HasHeightForWidth(self *C.QSplitter, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSplitter_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSplitter_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_PaintEngine
func miqt_exec_callback_QSplitter_PaintEngine(self *C.QSplitter, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QSplitter_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitter_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_MousePressEvent
func miqt_exec_callback_QSplitter_MousePressEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QSplitter_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitter_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_MouseReleaseEvent
func miqt_exec_callback_QSplitter_MouseReleaseEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSplitter_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitter_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_MouseDoubleClickEvent
func miqt_exec_callback_QSplitter_MouseDoubleClickEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QSplitter_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitter_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_MouseMoveEvent
func miqt_exec_callback_QSplitter_MouseMoveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSplitter_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QSplitter_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_WheelEvent
func miqt_exec_callback_QSplitter_WheelEvent(self *C.QSplitter, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSplitter_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplitter_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_KeyPressEvent
func miqt_exec_callback_QSplitter_KeyPressEvent(self *C.QSplitter, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSplitter_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplitter_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_KeyReleaseEvent
func miqt_exec_callback_QSplitter_KeyReleaseEvent(self *C.QSplitter, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSplitter_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplitter_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_FocusInEvent
func miqt_exec_callback_QSplitter_FocusInEvent(self *C.QSplitter, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSplitter_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplitter_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_FocusOutEvent
func miqt_exec_callback_QSplitter_FocusOutEvent(self *C.QSplitter, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QSplitter_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QSplitter_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_EnterEvent
func miqt_exec_callback_QSplitter_EnterEvent(self *C.QSplitter, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSplitter_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitter_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_LeaveEvent
func miqt_exec_callback_QSplitter_LeaveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSplitter_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QSplitter_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_MoveEvent
func miqt_exec_callback_QSplitter_MoveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSplitter_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSplitter_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_CloseEvent
func miqt_exec_callback_QSplitter_CloseEvent(self *C.QSplitter, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSplitter_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSplitter_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_ContextMenuEvent
func miqt_exec_callback_QSplitter_ContextMenuEvent(self *C.QSplitter, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSplitter_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSplitter_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_TabletEvent
func miqt_exec_callback_QSplitter_TabletEvent(self *C.QSplitter, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSplitter_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSplitter_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_ActionEvent
func miqt_exec_callback_QSplitter_ActionEvent(self *C.QSplitter, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSplitter_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSplitter_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_DragEnterEvent
func miqt_exec_callback_QSplitter_DragEnterEvent(self *C.QSplitter, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSplitter_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSplitter_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_DragMoveEvent
func miqt_exec_callback_QSplitter_DragMoveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSplitter_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSplitter_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_DragLeaveEvent
func miqt_exec_callback_QSplitter_DragLeaveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSplitter_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSplitter_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_DropEvent
func miqt_exec_callback_QSplitter_DropEvent(self *C.QSplitter, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSplitter_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QSplitter_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_ShowEvent
func miqt_exec_callback_QSplitter_ShowEvent(self *C.QSplitter, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSplitter_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QSplitter_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_HideEvent
func miqt_exec_callback_QSplitter_HideEvent(self *C.QSplitter, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSplitter_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QSplitter) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QSplitter_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_NativeEvent
func miqt_exec_callback_QSplitter_NativeEvent(self *C.QSplitter, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSplitter_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplitter) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSplitter_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_Metric
func miqt_exec_callback_QSplitter_Metric(self *C.QSplitter, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_InitPainter(painter *QPainter) {

	C.QSplitter_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSplitter) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSplitter_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_InitPainter
func miqt_exec_callback_QSplitter_InitPainter(self *C.QSplitter, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSplitter{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSplitter) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSplitter_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSplitter) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSplitter_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_Redirected
func miqt_exec_callback_QSplitter_Redirected(self *C.QSplitter, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QSplitter_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSplitter_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_SharedPainter
func miqt_exec_callback_QSplitter_SharedPainter(self *C.QSplitter, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSplitter_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSplitter_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_InputMethodEvent
func miqt_exec_callback_QSplitter_InputMethodEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QSplitter_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitter) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSplitter_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_InputMethodQuery
func miqt_exec_callback_QSplitter_InputMethodQuery(self *C.QSplitter, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSplitter_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSplitter) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSplitter_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_FocusNextPrevChild
func miqt_exec_callback_QSplitter_FocusNextPrevChild(self *C.QSplitter, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSplitter_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSplitter) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSplitter_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_EventFilter
func miqt_exec_callback_QSplitter_EventFilter(self *C.QSplitter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSplitter_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSplitter_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_TimerEvent
func miqt_exec_callback_QSplitter_TimerEvent(self *C.QSplitter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSplitter_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitter_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_CustomEvent
func miqt_exec_callback_QSplitter_CustomEvent(self *C.QSplitter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSplitter_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplitter) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplitter_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_ConnectNotify
func miqt_exec_callback_QSplitter_ConnectNotify(self *C.QSplitter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplitter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSplitter) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSplitter_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplitter) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplitter_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_DisconnectNotify
func miqt_exec_callback_QSplitter_DisconnectNotify(self *C.QSplitter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplitter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSplitter) Delete() {
	C.QSplitter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplitter) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplitter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSplitterHandle struct {
	h *C.QSplitterHandle
	*QWidget
}

func (this *QSplitterHandle) cPointer() *C.QSplitterHandle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSplitterHandle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSplitterHandle constructs the type using only CGO pointers.
func newQSplitterHandle(h *C.QSplitterHandle) *QSplitterHandle {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QSplitterHandle_virtbase(h, &outptr_QWidget)

	return &QSplitterHandle{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQSplitterHandle constructs the type using only unsafe pointers.
func UnsafeNewQSplitterHandle(h unsafe.Pointer) *QSplitterHandle {
	return newQSplitterHandle((*C.QSplitterHandle)(h))
}

// NewQSplitterHandle constructs a new QSplitterHandle object.
func NewQSplitterHandle(o Orientation, parent *QSplitter) *QSplitterHandle {

	return newQSplitterHandle(C.QSplitterHandle_new((C.int)(o), parent.cPointer()))
}

func (this *QSplitterHandle) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSplitterHandle_MetaObject(this.h))
}

func (this *QSplitterHandle) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSplitterHandle_Metacast(this.h, param1_Cstring))
}

func QSplitterHandle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplitterHandle_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplitterHandle) SetOrientation(o Orientation) {
	C.QSplitterHandle_SetOrientation(this.h, (C.int)(o))
}

func (this *QSplitterHandle) Orientation() Orientation {
	return (Orientation)(C.QSplitterHandle_Orientation(this.h))
}

func (this *QSplitterHandle) OpaqueResize() bool {
	return (bool)(C.QSplitterHandle_OpaqueResize(this.h))
}

func (this *QSplitterHandle) Splitter() *QSplitter {
	return newQSplitter(C.QSplitterHandle_Splitter(this.h))
}

func (this *QSplitterHandle) SizeHint() *QSize {
	_goptr := newQSize(C.QSplitterHandle_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSplitterHandle_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitterHandle_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitterHandle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitterHandle_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplitterHandle) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSplitterHandle_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitterHandle) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplitterHandle_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_SizeHint
func miqt_exec_callback_QSplitterHandle_SizeHint(self *C.QSplitterHandle, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QSplitterHandle_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QSplitterHandle_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_PaintEvent
func miqt_exec_callback_QSplitterHandle_PaintEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QSplitterHandle_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QSplitterHandle_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_MouseMoveEvent
func miqt_exec_callback_QSplitterHandle_MouseMoveEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QSplitterHandle_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QSplitterHandle_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_MousePressEvent
func miqt_exec_callback_QSplitterHandle_MousePressEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QSplitterHandle_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QSplitterHandle_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_MouseReleaseEvent
func miqt_exec_callback_QSplitterHandle_MouseReleaseEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QSplitterHandle_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QSplitterHandle_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_ResizeEvent
func miqt_exec_callback_QSplitterHandle_ResizeEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QSplitterHandle_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QSplitterHandle) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QSplitterHandle_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_Event
func miqt_exec_callback_QSplitterHandle_Event(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_DevType() int {

	return (int)(C.QSplitterHandle_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QSplitterHandle) OnDevType(slot func(super func() int) int) {
	ok := C.QSplitterHandle_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_DevType
func miqt_exec_callback_QSplitterHandle_DevType(self *C.QSplitterHandle, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_SetVisible(visible bool) {

	C.QSplitterHandle_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSplitterHandle) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSplitterHandle_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_SetVisible
func miqt_exec_callback_QSplitterHandle_SetVisible(self *C.QSplitterHandle, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QSplitterHandle_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitterHandle) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplitterHandle_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_MinimumSizeHint
func miqt_exec_callback_QSplitterHandle_MinimumSizeHint(self *C.QSplitterHandle, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSplitterHandle_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplitterHandle) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSplitterHandle_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_HeightForWidth
func miqt_exec_callback_QSplitterHandle_HeightForWidth(self *C.QSplitterHandle, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSplitterHandle_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSplitterHandle) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSplitterHandle_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_HasHeightForWidth
func miqt_exec_callback_QSplitterHandle_HasHeightForWidth(self *C.QSplitterHandle, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSplitterHandle_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QSplitterHandle) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSplitterHandle_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_PaintEngine
func miqt_exec_callback_QSplitterHandle_PaintEngine(self *C.QSplitterHandle, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSplitterHandle_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitterHandle_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_MouseDoubleClickEvent
func miqt_exec_callback_QSplitterHandle_MouseDoubleClickEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSplitterHandle_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QSplitterHandle_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_WheelEvent
func miqt_exec_callback_QSplitterHandle_WheelEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSplitterHandle_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplitterHandle_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_KeyPressEvent
func miqt_exec_callback_QSplitterHandle_KeyPressEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSplitterHandle_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplitterHandle_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_KeyReleaseEvent
func miqt_exec_callback_QSplitterHandle_KeyReleaseEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSplitterHandle_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplitterHandle_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_FocusInEvent
func miqt_exec_callback_QSplitterHandle_FocusInEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSplitterHandle_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplitterHandle_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_FocusOutEvent
func miqt_exec_callback_QSplitterHandle_FocusOutEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QSplitterHandle_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QSplitterHandle_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_EnterEvent
func miqt_exec_callback_QSplitterHandle_EnterEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSplitterHandle_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitterHandle_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_LeaveEvent
func miqt_exec_callback_QSplitterHandle_LeaveEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSplitterHandle_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QSplitterHandle_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_MoveEvent
func miqt_exec_callback_QSplitterHandle_MoveEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSplitterHandle_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSplitterHandle_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_CloseEvent
func miqt_exec_callback_QSplitterHandle_CloseEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSplitterHandle_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSplitterHandle_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_ContextMenuEvent
func miqt_exec_callback_QSplitterHandle_ContextMenuEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSplitterHandle_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSplitterHandle_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_TabletEvent
func miqt_exec_callback_QSplitterHandle_TabletEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSplitterHandle_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSplitterHandle_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_ActionEvent
func miqt_exec_callback_QSplitterHandle_ActionEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSplitterHandle_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSplitterHandle_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_DragEnterEvent
func miqt_exec_callback_QSplitterHandle_DragEnterEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSplitterHandle_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSplitterHandle_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_DragMoveEvent
func miqt_exec_callback_QSplitterHandle_DragMoveEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSplitterHandle_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSplitterHandle_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_DragLeaveEvent
func miqt_exec_callback_QSplitterHandle_DragLeaveEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSplitterHandle_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSplitterHandle_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_DropEvent
func miqt_exec_callback_QSplitterHandle_DropEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSplitterHandle_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QSplitterHandle_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_ShowEvent
func miqt_exec_callback_QSplitterHandle_ShowEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSplitterHandle_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QSplitterHandle_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_HideEvent
func miqt_exec_callback_QSplitterHandle_HideEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSplitterHandle_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QSplitterHandle) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QSplitterHandle_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_NativeEvent
func miqt_exec_callback_QSplitterHandle_NativeEvent(self *C.QSplitterHandle, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QSplitterHandle_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QSplitterHandle_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_ChangeEvent
func miqt_exec_callback_QSplitterHandle_ChangeEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSplitterHandle_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplitterHandle) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSplitterHandle_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_Metric
func miqt_exec_callback_QSplitterHandle_Metric(self *C.QSplitterHandle, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_InitPainter(painter *QPainter) {

	C.QSplitterHandle_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSplitterHandle) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSplitterHandle_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_InitPainter
func miqt_exec_callback_QSplitterHandle_InitPainter(self *C.QSplitterHandle, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSplitterHandle_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSplitterHandle) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSplitterHandle_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_Redirected
func miqt_exec_callback_QSplitterHandle_Redirected(self *C.QSplitterHandle, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QSplitterHandle_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSplitterHandle) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSplitterHandle_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_SharedPainter
func miqt_exec_callback_QSplitterHandle_SharedPainter(self *C.QSplitterHandle, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSplitterHandle_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSplitterHandle_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_InputMethodEvent
func miqt_exec_callback_QSplitterHandle_InputMethodEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QSplitterHandle_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitterHandle) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSplitterHandle_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_InputMethodQuery
func miqt_exec_callback_QSplitterHandle_InputMethodQuery(self *C.QSplitterHandle, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSplitterHandle_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSplitterHandle) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSplitterHandle_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_FocusNextPrevChild
func miqt_exec_callback_QSplitterHandle_FocusNextPrevChild(self *C.QSplitterHandle, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSplitterHandle_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSplitterHandle) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSplitterHandle_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_EventFilter
func miqt_exec_callback_QSplitterHandle_EventFilter(self *C.QSplitterHandle, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSplitterHandle_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSplitterHandle_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_TimerEvent
func miqt_exec_callback_QSplitterHandle_TimerEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSplitterHandle_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSplitterHandle_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_ChildEvent
func miqt_exec_callback_QSplitterHandle_ChildEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSplitterHandle_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitterHandle_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_CustomEvent
func miqt_exec_callback_QSplitterHandle_CustomEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSplitterHandle_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplitterHandle) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplitterHandle_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_ConnectNotify
func miqt_exec_callback_QSplitterHandle_ConnectNotify(self *C.QSplitterHandle, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSplitterHandle_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplitterHandle) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplitterHandle_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_DisconnectNotify
func miqt_exec_callback_QSplitterHandle_DisconnectNotify(self *C.QSplitterHandle, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSplitterHandle) Delete() {
	C.QSplitterHandle_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplitterHandle) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplitterHandle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
