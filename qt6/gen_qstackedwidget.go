package qt6

/*

#include "gen_qstackedwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStackedWidget struct {
	h *C.QStackedWidget
	*QFrame
}

func (this *QStackedWidget) cPointer() *C.QStackedWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStackedWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStackedWidget constructs the type using only CGO pointers.
func newQStackedWidget(h *C.QStackedWidget) *QStackedWidget {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QStackedWidget_virtbase(h, &outptr_QFrame)

	return &QStackedWidget{h: h,
		QFrame: newQFrame(outptr_QFrame)}
}

// UnsafeNewQStackedWidget constructs the type using only unsafe pointers.
func UnsafeNewQStackedWidget(h unsafe.Pointer) *QStackedWidget {
	return newQStackedWidget((*C.QStackedWidget)(h))
}

// NewQStackedWidget constructs a new QStackedWidget object.
func NewQStackedWidget(parent *QWidget) *QStackedWidget {

	return newQStackedWidget(C.QStackedWidget_new(parent.cPointer()))
}

// NewQStackedWidget2 constructs a new QStackedWidget object.
func NewQStackedWidget2() *QStackedWidget {

	return newQStackedWidget(C.QStackedWidget_new2())
}

func (this *QStackedWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QStackedWidget_MetaObject(this.h))
}

func (this *QStackedWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStackedWidget_Metacast(this.h, param1_Cstring))
}

func QStackedWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStackedWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStackedWidget) AddWidget(w *QWidget) int {
	return (int)(C.QStackedWidget_AddWidget(this.h, w.cPointer()))
}

func (this *QStackedWidget) InsertWidget(index int, w *QWidget) int {
	return (int)(C.QStackedWidget_InsertWidget(this.h, (C.int)(index), w.cPointer()))
}

func (this *QStackedWidget) RemoveWidget(w *QWidget) {
	C.QStackedWidget_RemoveWidget(this.h, w.cPointer())
}

func (this *QStackedWidget) CurrentWidget() *QWidget {
	return newQWidget(C.QStackedWidget_CurrentWidget(this.h))
}

func (this *QStackedWidget) CurrentIndex() int {
	return (int)(C.QStackedWidget_CurrentIndex(this.h))
}

func (this *QStackedWidget) IndexOf(param1 *QWidget) int {
	return (int)(C.QStackedWidget_IndexOf(this.h, param1.cPointer()))
}

func (this *QStackedWidget) Widget(param1 int) *QWidget {
	return newQWidget(C.QStackedWidget_Widget(this.h, (C.int)(param1)))
}

func (this *QStackedWidget) Count() int {
	return (int)(C.QStackedWidget_Count(this.h))
}

func (this *QStackedWidget) SetCurrentIndex(index int) {
	C.QStackedWidget_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QStackedWidget) SetCurrentWidget(w *QWidget) {
	C.QStackedWidget_SetCurrentWidget(this.h, w.cPointer())
}

func (this *QStackedWidget) CurrentChanged(param1 int) {
	C.QStackedWidget_CurrentChanged(this.h, (C.int)(param1))
}
func (this *QStackedWidget) OnCurrentChanged(slot func(param1 int)) {
	C.QStackedWidget_connect_CurrentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedWidget_CurrentChanged
func miqt_exec_callback_QStackedWidget_CurrentChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QStackedWidget) WidgetRemoved(index int) {
	C.QStackedWidget_WidgetRemoved(this.h, (C.int)(index))
}
func (this *QStackedWidget) OnWidgetRemoved(slot func(index int)) {
	C.QStackedWidget_connect_WidgetRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedWidget_WidgetRemoved
func miqt_exec_callback_QStackedWidget_WidgetRemoved(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func QStackedWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStackedWidget) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QStackedWidget_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QStackedWidget) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QStackedWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_Event
func miqt_exec_callback_QStackedWidget_Event(self *C.QStackedWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStackedWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QStackedWidget_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QStackedWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_SizeHint
func miqt_exec_callback_QStackedWidget_SizeHint(self *C.QStackedWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QStackedWidget) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QStackedWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStackedWidget) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QStackedWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_PaintEvent
func miqt_exec_callback_QStackedWidget_PaintEvent(self *C.QStackedWidget, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QStackedWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStackedWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QStackedWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_ChangeEvent
func miqt_exec_callback_QStackedWidget_ChangeEvent(self *C.QStackedWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QStackedWidget_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QStackedWidget) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QStackedWidget_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_InitStyleOption
func miqt_exec_callback_QStackedWidget_InitStyleOption(self *C.QStackedWidget, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QStackedWidget) callVirtualBase_DevType() int {

	return (int)(C.QStackedWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QStackedWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QStackedWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_DevType
func miqt_exec_callback_QStackedWidget_DevType(self *C.QStackedWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QStackedWidget) callVirtualBase_SetVisible(visible bool) {

	C.QStackedWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QStackedWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QStackedWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_SetVisible
func miqt_exec_callback_QStackedWidget_SetVisible(self *C.QStackedWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QStackedWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QStackedWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QStackedWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_MinimumSizeHint
func miqt_exec_callback_QStackedWidget_MinimumSizeHint(self *C.QStackedWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QStackedWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QStackedWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QStackedWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QStackedWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_HeightForWidth
func miqt_exec_callback_QStackedWidget_HeightForWidth(self *C.QStackedWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStackedWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QStackedWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QStackedWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QStackedWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_HasHeightForWidth
func miqt_exec_callback_QStackedWidget_HasHeightForWidth(self *C.QStackedWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QStackedWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QStackedWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QStackedWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QStackedWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_PaintEngine
func miqt_exec_callback_QStackedWidget_PaintEngine(self *C.QStackedWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QStackedWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QStackedWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QStackedWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_MousePressEvent
func miqt_exec_callback_QStackedWidget_MousePressEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QStackedWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QStackedWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_MouseReleaseEvent
func miqt_exec_callback_QStackedWidget_MouseReleaseEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QStackedWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QStackedWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_MouseDoubleClickEvent
func miqt_exec_callback_QStackedWidget_MouseDoubleClickEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QStackedWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QStackedWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_MouseMoveEvent
func miqt_exec_callback_QStackedWidget_MouseMoveEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QStackedWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QStackedWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_WheelEvent
func miqt_exec_callback_QStackedWidget_WheelEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QStackedWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QStackedWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_KeyPressEvent
func miqt_exec_callback_QStackedWidget_KeyPressEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QStackedWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QStackedWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_KeyReleaseEvent
func miqt_exec_callback_QStackedWidget_KeyReleaseEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QStackedWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QStackedWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_FocusInEvent
func miqt_exec_callback_QStackedWidget_FocusInEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QStackedWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QStackedWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_FocusOutEvent
func miqt_exec_callback_QStackedWidget_FocusOutEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QStackedWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QStackedWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_EnterEvent
func miqt_exec_callback_QStackedWidget_EnterEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QStackedWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStackedWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_LeaveEvent
func miqt_exec_callback_QStackedWidget_LeaveEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QStackedWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QStackedWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_MoveEvent
func miqt_exec_callback_QStackedWidget_MoveEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QStackedWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QStackedWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_ResizeEvent
func miqt_exec_callback_QStackedWidget_ResizeEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QStackedWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QStackedWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_CloseEvent
func miqt_exec_callback_QStackedWidget_CloseEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QStackedWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QStackedWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_ContextMenuEvent
func miqt_exec_callback_QStackedWidget_ContextMenuEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QStackedWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QStackedWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_TabletEvent
func miqt_exec_callback_QStackedWidget_TabletEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QStackedWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QStackedWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_ActionEvent
func miqt_exec_callback_QStackedWidget_ActionEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QStackedWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QStackedWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_DragEnterEvent
func miqt_exec_callback_QStackedWidget_DragEnterEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QStackedWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QStackedWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_DragMoveEvent
func miqt_exec_callback_QStackedWidget_DragMoveEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QStackedWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QStackedWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_DragLeaveEvent
func miqt_exec_callback_QStackedWidget_DragLeaveEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QStackedWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QStackedWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_DropEvent
func miqt_exec_callback_QStackedWidget_DropEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QStackedWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QStackedWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_ShowEvent
func miqt_exec_callback_QStackedWidget_ShowEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QStackedWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QStackedWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_HideEvent
func miqt_exec_callback_QStackedWidget_HideEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QStackedWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QStackedWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QStackedWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_NativeEvent
func miqt_exec_callback_QStackedWidget_NativeEvent(self *C.QStackedWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStackedWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QStackedWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QStackedWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QStackedWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_Metric
func miqt_exec_callback_QStackedWidget_Metric(self *C.QStackedWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStackedWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QStackedWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QStackedWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QStackedWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_InitPainter
func miqt_exec_callback_QStackedWidget_InitPainter(self *C.QStackedWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QStackedWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QStackedWidget_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QStackedWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QStackedWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_Redirected
func miqt_exec_callback_QStackedWidget_Redirected(self *C.QStackedWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStackedWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QStackedWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QStackedWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QStackedWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_SharedPainter
func miqt_exec_callback_QStackedWidget_SharedPainter(self *C.QStackedWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QStackedWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QStackedWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QStackedWidget) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QStackedWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_InputMethodEvent
func miqt_exec_callback_QStackedWidget_InputMethodEvent(self *C.QStackedWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QStackedWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedWidget) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QStackedWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_InputMethodQuery
func miqt_exec_callback_QStackedWidget_InputMethodQuery(self *C.QStackedWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStackedWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QStackedWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QStackedWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QStackedWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_FocusNextPrevChild
func miqt_exec_callback_QStackedWidget_FocusNextPrevChild(self *C.QStackedWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStackedWidget) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QStackedWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QStackedWidget) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QStackedWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_EventFilter
func miqt_exec_callback_QStackedWidget_EventFilter(self *C.QStackedWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QStackedWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStackedWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QStackedWidget_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QStackedWidget_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_TimerEvent
func miqt_exec_callback_QStackedWidget_TimerEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QStackedWidget_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QStackedWidget_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_ChildEvent
func miqt_exec_callback_QStackedWidget_ChildEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QStackedWidget_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStackedWidget_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_CustomEvent
func miqt_exec_callback_QStackedWidget_CustomEvent(self *C.QStackedWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QStackedWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QStackedWidget_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStackedWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStackedWidget_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_ConnectNotify
func miqt_exec_callback_QStackedWidget_ConnectNotify(self *C.QStackedWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QStackedWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QStackedWidget_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStackedWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStackedWidget_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedWidget_DisconnectNotify
func miqt_exec_callback_QStackedWidget_DisconnectNotify(self *C.QStackedWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStackedWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QStackedWidget) Delete() {
	C.QStackedWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStackedWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QStackedWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
