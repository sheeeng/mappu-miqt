package qt6

/*

#include "gen_qmdiarea.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMdiArea__AreaOption int

const (
	QMdiArea__DontMaximizeSubWindowOnActivation QMdiArea__AreaOption = 1
)

type QMdiArea__WindowOrder int

const (
	QMdiArea__CreationOrder          QMdiArea__WindowOrder = 0
	QMdiArea__StackingOrder          QMdiArea__WindowOrder = 1
	QMdiArea__ActivationHistoryOrder QMdiArea__WindowOrder = 2
)

type QMdiArea__ViewMode int

const (
	QMdiArea__SubWindowView QMdiArea__ViewMode = 0
	QMdiArea__TabbedView    QMdiArea__ViewMode = 1
)

type QMdiArea struct {
	h *C.QMdiArea
	*QAbstractScrollArea
}

func (this *QMdiArea) cPointer() *C.QMdiArea {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMdiArea) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMdiArea constructs the type using only CGO pointers.
func newQMdiArea(h *C.QMdiArea) *QMdiArea {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QMdiArea_virtbase(h, &outptr_QAbstractScrollArea)

	return &QMdiArea{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(outptr_QAbstractScrollArea)}
}

// UnsafeNewQMdiArea constructs the type using only unsafe pointers.
func UnsafeNewQMdiArea(h unsafe.Pointer) *QMdiArea {
	return newQMdiArea((*C.QMdiArea)(h))
}

// NewQMdiArea constructs a new QMdiArea object.
func NewQMdiArea(parent *QWidget) *QMdiArea {

	return newQMdiArea(C.QMdiArea_new(parent.cPointer()))
}

// NewQMdiArea2 constructs a new QMdiArea object.
func NewQMdiArea2() *QMdiArea {

	return newQMdiArea(C.QMdiArea_new2())
}

func (this *QMdiArea) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMdiArea_MetaObject(this.h))
}

func (this *QMdiArea) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMdiArea_Metacast(this.h, param1_Cstring))
}

func QMdiArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiArea) SizeHint() *QSize {
	_goptr := newQSize(C.QMdiArea_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QMdiArea_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) CurrentSubWindow() *QMdiSubWindow {
	return newQMdiSubWindow(C.QMdiArea_CurrentSubWindow(this.h))
}

func (this *QMdiArea) ActiveSubWindow() *QMdiSubWindow {
	return newQMdiSubWindow(C.QMdiArea_ActiveSubWindow(this.h))
}

func (this *QMdiArea) SubWindowList() []*QMdiSubWindow {
	var _ma C.struct_miqt_array = C.QMdiArea_SubWindowList(this.h)
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQMdiSubWindow(_outCast[i])
	}
	return _ret
}

func (this *QMdiArea) AddSubWindow(widget *QWidget) *QMdiSubWindow {
	return newQMdiSubWindow(C.QMdiArea_AddSubWindow(this.h, widget.cPointer()))
}

func (this *QMdiArea) RemoveSubWindow(widget *QWidget) {
	C.QMdiArea_RemoveSubWindow(this.h, widget.cPointer())
}

func (this *QMdiArea) Background() *QBrush {
	_goptr := newQBrush(C.QMdiArea_Background(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiArea) SetBackground(background *QBrush) {
	C.QMdiArea_SetBackground(this.h, background.cPointer())
}

func (this *QMdiArea) ActivationOrder() QMdiArea__WindowOrder {
	return (QMdiArea__WindowOrder)(C.QMdiArea_ActivationOrder(this.h))
}

func (this *QMdiArea) SetActivationOrder(order QMdiArea__WindowOrder) {
	C.QMdiArea_SetActivationOrder(this.h, (C.int)(order))
}

func (this *QMdiArea) SetOption(option QMdiArea__AreaOption) {
	C.QMdiArea_SetOption(this.h, (C.int)(option))
}

func (this *QMdiArea) TestOption(opton QMdiArea__AreaOption) bool {
	return (bool)(C.QMdiArea_TestOption(this.h, (C.int)(opton)))
}

func (this *QMdiArea) SetViewMode(mode QMdiArea__ViewMode) {
	C.QMdiArea_SetViewMode(this.h, (C.int)(mode))
}

func (this *QMdiArea) ViewMode() QMdiArea__ViewMode {
	return (QMdiArea__ViewMode)(C.QMdiArea_ViewMode(this.h))
}

func (this *QMdiArea) DocumentMode() bool {
	return (bool)(C.QMdiArea_DocumentMode(this.h))
}

func (this *QMdiArea) SetDocumentMode(enabled bool) {
	C.QMdiArea_SetDocumentMode(this.h, (C.bool)(enabled))
}

func (this *QMdiArea) SetTabsClosable(closable bool) {
	C.QMdiArea_SetTabsClosable(this.h, (C.bool)(closable))
}

func (this *QMdiArea) TabsClosable() bool {
	return (bool)(C.QMdiArea_TabsClosable(this.h))
}

func (this *QMdiArea) SetTabsMovable(movable bool) {
	C.QMdiArea_SetTabsMovable(this.h, (C.bool)(movable))
}

func (this *QMdiArea) TabsMovable() bool {
	return (bool)(C.QMdiArea_TabsMovable(this.h))
}

func (this *QMdiArea) SetTabShape(shape QTabWidget__TabShape) {
	C.QMdiArea_SetTabShape(this.h, (C.int)(shape))
}

func (this *QMdiArea) TabShape() QTabWidget__TabShape {
	return (QTabWidget__TabShape)(C.QMdiArea_TabShape(this.h))
}

func (this *QMdiArea) SetTabPosition(position QTabWidget__TabPosition) {
	C.QMdiArea_SetTabPosition(this.h, (C.int)(position))
}

func (this *QMdiArea) TabPosition() QTabWidget__TabPosition {
	return (QTabWidget__TabPosition)(C.QMdiArea_TabPosition(this.h))
}

func (this *QMdiArea) SubWindowActivated(param1 *QMdiSubWindow) {
	C.QMdiArea_SubWindowActivated(this.h, param1.cPointer())
}
func (this *QMdiArea) OnSubWindowActivated(slot func(param1 *QMdiSubWindow)) {
	C.QMdiArea_connect_SubWindowActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMdiArea_SubWindowActivated
func miqt_exec_callback_QMdiArea_SubWindowActivated(cb C.intptr_t, param1 *C.QMdiSubWindow) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QMdiSubWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMdiSubWindow(param1)

	gofunc(slotval1)
}

func (this *QMdiArea) SetActiveSubWindow(window *QMdiSubWindow) {
	C.QMdiArea_SetActiveSubWindow(this.h, window.cPointer())
}

func (this *QMdiArea) TileSubWindows() {
	C.QMdiArea_TileSubWindows(this.h)
}

func (this *QMdiArea) CascadeSubWindows() {
	C.QMdiArea_CascadeSubWindows(this.h)
}

func (this *QMdiArea) CloseActiveSubWindow() {
	C.QMdiArea_CloseActiveSubWindow(this.h)
}

func (this *QMdiArea) CloseAllSubWindows() {
	C.QMdiArea_CloseAllSubWindows(this.h)
}

func (this *QMdiArea) ActivateNextSubWindow() {
	C.QMdiArea_ActivateNextSubWindow(this.h)
}

func (this *QMdiArea) ActivatePreviousSubWindow() {
	C.QMdiArea_ActivatePreviousSubWindow(this.h)
}

func QMdiArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMdiArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMdiArea_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMdiArea) SubWindowList1(order QMdiArea__WindowOrder) []*QMdiSubWindow {
	var _ma C.struct_miqt_array = C.QMdiArea_SubWindowList1(this.h, (C.int)(order))
	_ret := make([]*QMdiSubWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQMdiSubWindow(_outCast[i])
	}
	return _ret
}

func (this *QMdiArea) AddSubWindow2(widget *QWidget, flags WindowType) *QMdiSubWindow {
	return newQMdiSubWindow(C.QMdiArea_AddSubWindow2(this.h, widget.cPointer(), (C.int)(flags)))
}

func (this *QMdiArea) SetOption2(option QMdiArea__AreaOption, on bool) {
	C.QMdiArea_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

func (this *QMdiArea) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QMdiArea_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMdiArea_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_SizeHint
func miqt_exec_callback_QMdiArea_SizeHint(self *C.QMdiArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QMdiArea_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMdiArea_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_MinimumSizeHint
func miqt_exec_callback_QMdiArea_MinimumSizeHint(self *C.QMdiArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QMdiArea_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QMdiArea) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QMdiArea_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_SetupViewport
func miqt_exec_callback_QMdiArea_SetupViewport(self *C.QMdiArea, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QMdiArea{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QMdiArea) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QMdiArea_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMdiArea) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QMdiArea_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_Event
func miqt_exec_callback_QMdiArea_Event(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QMdiArea_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QMdiArea) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QMdiArea_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_EventFilter
func miqt_exec_callback_QMdiArea_EventFilter(self *C.QMdiArea, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_PaintEvent(paintEvent *QPaintEvent) {

	C.QMdiArea_virtualbase_PaintEvent(unsafe.Pointer(this.h), paintEvent.cPointer())

}
func (this *QMdiArea) OnPaintEvent(slot func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent)) {
	ok := C.QMdiArea_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_PaintEvent
func miqt_exec_callback_QMdiArea_PaintEvent(self *C.QMdiArea, cb C.intptr_t, paintEvent *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(paintEvent *QPaintEvent), paintEvent *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(paintEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ChildEvent(childEvent *QChildEvent) {

	C.QMdiArea_virtualbase_ChildEvent(unsafe.Pointer(this.h), childEvent.cPointer())

}
func (this *QMdiArea) OnChildEvent(slot func(super func(childEvent *QChildEvent), childEvent *QChildEvent)) {
	ok := C.QMdiArea_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ChildEvent
func miqt_exec_callback_QMdiArea_ChildEvent(self *C.QMdiArea, cb C.intptr_t, childEvent *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(childEvent *QChildEvent), childEvent *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(childEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ResizeEvent(resizeEvent *QResizeEvent) {

	C.QMdiArea_virtualbase_ResizeEvent(unsafe.Pointer(this.h), resizeEvent.cPointer())

}
func (this *QMdiArea) OnResizeEvent(slot func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent)) {
	ok := C.QMdiArea_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ResizeEvent
func miqt_exec_callback_QMdiArea_ResizeEvent(self *C.QMdiArea, cb C.intptr_t, resizeEvent *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(resizeEvent *QResizeEvent), resizeEvent *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(resizeEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_TimerEvent(timerEvent *QTimerEvent) {

	C.QMdiArea_virtualbase_TimerEvent(unsafe.Pointer(this.h), timerEvent.cPointer())

}
func (this *QMdiArea) OnTimerEvent(slot func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent)) {
	ok := C.QMdiArea_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_TimerEvent
func miqt_exec_callback_QMdiArea_TimerEvent(self *C.QMdiArea, cb C.intptr_t, timerEvent *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timerEvent *QTimerEvent), timerEvent *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(timerEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ShowEvent(showEvent *QShowEvent) {

	C.QMdiArea_virtualbase_ShowEvent(unsafe.Pointer(this.h), showEvent.cPointer())

}
func (this *QMdiArea) OnShowEvent(slot func(super func(showEvent *QShowEvent), showEvent *QShowEvent)) {
	ok := C.QMdiArea_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ShowEvent
func miqt_exec_callback_QMdiArea_ShowEvent(self *C.QMdiArea, cb C.intptr_t, showEvent *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(showEvent *QShowEvent), showEvent *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(showEvent)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QMdiArea_virtualbase_ViewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMdiArea) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QMdiArea_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ViewportEvent
func miqt_exec_callback_QMdiArea_ViewportEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QMdiArea_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QMdiArea) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QMdiArea_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ScrollContentsBy
func miqt_exec_callback_QMdiArea_ScrollContentsBy(self *C.QMdiArea, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QMdiArea) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMdiArea_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_MousePressEvent
func miqt_exec_callback_QMdiArea_MousePressEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMdiArea_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_MouseReleaseEvent
func miqt_exec_callback_QMdiArea_MouseReleaseEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMdiArea_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_MouseDoubleClickEvent
func miqt_exec_callback_QMdiArea_MouseDoubleClickEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QMdiArea_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QMdiArea_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_MouseMoveEvent
func miqt_exec_callback_QMdiArea_MouseMoveEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QMdiArea_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QMdiArea_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_WheelEvent
func miqt_exec_callback_QMdiArea_WheelEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QMdiArea_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QMdiArea_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ContextMenuEvent
func miqt_exec_callback_QMdiArea_ContextMenuEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DragEnterEvent(param1 *QDragEnterEvent) {

	C.QMdiArea_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDragEnterEvent(slot func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent)) {
	ok := C.QMdiArea_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_DragEnterEvent
func miqt_exec_callback_QMdiArea_DragEnterEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DragMoveEvent(param1 *QDragMoveEvent) {

	C.QMdiArea_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDragMoveEvent(slot func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent)) {
	ok := C.QMdiArea_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_DragMoveEvent
func miqt_exec_callback_QMdiArea_DragMoveEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragMoveEvent), param1 *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DragLeaveEvent(param1 *QDragLeaveEvent) {

	C.QMdiArea_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDragLeaveEvent(slot func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent)) {
	ok := C.QMdiArea_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_DragLeaveEvent
func miqt_exec_callback_QMdiArea_DragLeaveEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragLeaveEvent), param1 *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_DropEvent(param1 *QDropEvent) {

	C.QMdiArea_virtualbase_DropEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnDropEvent(slot func(super func(param1 *QDropEvent), param1 *QDropEvent)) {
	ok := C.QMdiArea_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_DropEvent
func miqt_exec_callback_QMdiArea_DropEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDropEvent), param1 *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QMdiArea_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QMdiArea_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_KeyPressEvent
func miqt_exec_callback_QMdiArea_KeyPressEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QMdiArea_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QMdiArea_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ViewportSizeHint
func miqt_exec_callback_QMdiArea_ViewportSizeHint(self *C.QMdiArea, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QMdiArea_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QMdiArea_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ChangeEvent
func miqt_exec_callback_QMdiArea_ChangeEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QMdiArea_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QMdiArea) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QMdiArea_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_InitStyleOption
func miqt_exec_callback_QMdiArea_InitStyleOption(self *C.QMdiArea, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QMdiArea{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QMdiArea) callVirtualBase_DevType() int {

	return (int)(C.QMdiArea_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QMdiArea) OnDevType(slot func(super func() int) int) {
	ok := C.QMdiArea_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_DevType
func miqt_exec_callback_QMdiArea_DevType(self *C.QMdiArea, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_SetVisible(visible bool) {

	C.QMdiArea_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QMdiArea) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QMdiArea_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_SetVisible
func miqt_exec_callback_QMdiArea_SetVisible(self *C.QMdiArea, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QMdiArea{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QMdiArea) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QMdiArea_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMdiArea) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QMdiArea_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_HeightForWidth
func miqt_exec_callback_QMdiArea_HeightForWidth(self *C.QMdiArea, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QMdiArea_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QMdiArea) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QMdiArea_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_HasHeightForWidth
func miqt_exec_callback_QMdiArea_HasHeightForWidth(self *C.QMdiArea, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QMdiArea_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QMdiArea) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QMdiArea_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_PaintEngine
func miqt_exec_callback_QMdiArea_PaintEngine(self *C.QMdiArea, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QMdiArea_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QMdiArea_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_KeyReleaseEvent
func miqt_exec_callback_QMdiArea_KeyReleaseEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QMdiArea_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QMdiArea_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_FocusInEvent
func miqt_exec_callback_QMdiArea_FocusInEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QMdiArea_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QMdiArea_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_FocusOutEvent
func miqt_exec_callback_QMdiArea_FocusOutEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QMdiArea_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QMdiArea_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_EnterEvent
func miqt_exec_callback_QMdiArea_EnterEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QMdiArea_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMdiArea_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_LeaveEvent
func miqt_exec_callback_QMdiArea_LeaveEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QMdiArea_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QMdiArea_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_MoveEvent
func miqt_exec_callback_QMdiArea_MoveEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QMdiArea_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QMdiArea_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_CloseEvent
func miqt_exec_callback_QMdiArea_CloseEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QMdiArea_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QMdiArea_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_TabletEvent
func miqt_exec_callback_QMdiArea_TabletEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QMdiArea_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QMdiArea_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ActionEvent
func miqt_exec_callback_QMdiArea_ActionEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QMdiArea_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QMdiArea_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_HideEvent
func miqt_exec_callback_QMdiArea_HideEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QMdiArea_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QMdiArea) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QMdiArea_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_NativeEvent
func miqt_exec_callback_QMdiArea_NativeEvent(self *C.QMdiArea, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QMdiArea_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QMdiArea) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QMdiArea_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_Metric
func miqt_exec_callback_QMdiArea_Metric(self *C.QMdiArea, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_InitPainter(painter *QPainter) {

	C.QMdiArea_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QMdiArea) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QMdiArea_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_InitPainter
func miqt_exec_callback_QMdiArea_InitPainter(self *C.QMdiArea, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QMdiArea{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QMdiArea) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QMdiArea_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QMdiArea) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QMdiArea_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_Redirected
func miqt_exec_callback_QMdiArea_Redirected(self *C.QMdiArea, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QMdiArea_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QMdiArea) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QMdiArea_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_SharedPainter
func miqt_exec_callback_QMdiArea_SharedPainter(self *C.QMdiArea, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QMdiArea_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QMdiArea) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QMdiArea_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_InputMethodEvent
func miqt_exec_callback_QMdiArea_InputMethodEvent(self *C.QMdiArea, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QMdiArea{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QMdiArea_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMdiArea) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QMdiArea_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_InputMethodQuery
func miqt_exec_callback_QMdiArea_InputMethodQuery(self *C.QMdiArea, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QMdiArea) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QMdiArea_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QMdiArea) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QMdiArea_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_FocusNextPrevChild
func miqt_exec_callback_QMdiArea_FocusNextPrevChild(self *C.QMdiArea, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QMdiArea{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMdiArea) callVirtualBase_CustomEvent(event *QEvent) {

	C.QMdiArea_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMdiArea) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QMdiArea_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_CustomEvent
func miqt_exec_callback_QMdiArea_CustomEvent(self *C.QMdiArea, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMdiArea{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMdiArea) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QMdiArea_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMdiArea) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMdiArea_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_ConnectNotify
func miqt_exec_callback_QMdiArea_ConnectNotify(self *C.QMdiArea, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMdiArea{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMdiArea) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QMdiArea_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMdiArea) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QMdiArea_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QMdiArea_DisconnectNotify
func miqt_exec_callback_QMdiArea_DisconnectNotify(self *C.QMdiArea, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMdiArea{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMdiArea) Delete() {
	C.QMdiArea_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMdiArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QMdiArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
