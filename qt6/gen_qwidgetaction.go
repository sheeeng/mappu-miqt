package qt6

/*

#include "gen_qwidgetaction.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWidgetAction struct {
	h *C.QWidgetAction
	*QAction
}

func (this *QWidgetAction) cPointer() *C.QWidgetAction {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWidgetAction) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWidgetAction constructs the type using only CGO pointers.
func newQWidgetAction(h *C.QWidgetAction) *QWidgetAction {
	if h == nil {
		return nil
	}
	var outptr_QAction *C.QAction = nil
	C.QWidgetAction_virtbase(h, &outptr_QAction)

	return &QWidgetAction{h: h,
		QAction: newQAction(outptr_QAction)}
}

// UnsafeNewQWidgetAction constructs the type using only unsafe pointers.
func UnsafeNewQWidgetAction(h unsafe.Pointer) *QWidgetAction {
	return newQWidgetAction((*C.QWidgetAction)(h))
}

// NewQWidgetAction constructs a new QWidgetAction object.
func NewQWidgetAction(parent *QObject) *QWidgetAction {

	return newQWidgetAction(C.QWidgetAction_new(parent.cPointer()))
}

func (this *QWidgetAction) MetaObject() *QMetaObject {
	return newQMetaObject(C.QWidgetAction_MetaObject(this.h))
}

func (this *QWidgetAction) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWidgetAction_Metacast(this.h, param1_Cstring))
}

func QWidgetAction_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWidgetAction_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidgetAction) SetDefaultWidget(w *QWidget) {
	C.QWidgetAction_SetDefaultWidget(this.h, w.cPointer())
}

func (this *QWidgetAction) DefaultWidget() *QWidget {
	return newQWidget(C.QWidgetAction_DefaultWidget(this.h))
}

func (this *QWidgetAction) RequestWidget(parent *QWidget) *QWidget {
	return newQWidget(C.QWidgetAction_RequestWidget(this.h, parent.cPointer()))
}

func (this *QWidgetAction) ReleaseWidget(widget *QWidget) {
	C.QWidgetAction_ReleaseWidget(this.h, widget.cPointer())
}

func QWidgetAction_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidgetAction_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWidgetAction_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWidgetAction_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWidgetAction) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QWidgetAction_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QWidgetAction) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QWidgetAction_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetAction_Event
func miqt_exec_callback_QWidgetAction_Event(self *C.QWidgetAction, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QWidgetAction{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetAction) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QWidgetAction_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QWidgetAction) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QWidgetAction_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetAction_EventFilter
func miqt_exec_callback_QWidgetAction_EventFilter(self *C.QWidgetAction, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QWidgetAction{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetAction) callVirtualBase_CreateWidget(parent *QWidget) *QWidget {

	return newQWidget(C.QWidgetAction_virtualbase_CreateWidget(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QWidgetAction) OnCreateWidget(slot func(super func(parent *QWidget) *QWidget, parent *QWidget) *QWidget) {
	ok := C.QWidgetAction_override_virtual_CreateWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetAction_CreateWidget
func miqt_exec_callback_QWidgetAction_CreateWidget(self *C.QWidgetAction, cb C.intptr_t, parent *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QWidget) *QWidget, parent *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(parent)

	virtualReturn := gofunc((&QWidgetAction{h: self}).callVirtualBase_CreateWidget, slotval1)

	return virtualReturn.cPointer()

}

func (this *QWidgetAction) callVirtualBase_DeleteWidget(widget *QWidget) {

	C.QWidgetAction_virtualbase_DeleteWidget(unsafe.Pointer(this.h), widget.cPointer())

}
func (this *QWidgetAction) OnDeleteWidget(slot func(super func(widget *QWidget), widget *QWidget)) {
	ok := C.QWidgetAction_override_virtual_DeleteWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetAction_DeleteWidget
func miqt_exec_callback_QWidgetAction_DeleteWidget(self *C.QWidgetAction, cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widget *QWidget), widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(widget)

	gofunc((&QWidgetAction{h: self}).callVirtualBase_DeleteWidget, slotval1)

}

func (this *QWidgetAction) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QWidgetAction_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidgetAction) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QWidgetAction_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetAction_TimerEvent
func miqt_exec_callback_QWidgetAction_TimerEvent(self *C.QWidgetAction, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QWidgetAction{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWidgetAction) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QWidgetAction_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidgetAction) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QWidgetAction_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetAction_ChildEvent
func miqt_exec_callback_QWidgetAction_ChildEvent(self *C.QWidgetAction, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QWidgetAction{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWidgetAction) callVirtualBase_CustomEvent(event *QEvent) {

	C.QWidgetAction_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QWidgetAction) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QWidgetAction_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetAction_CustomEvent
func miqt_exec_callback_QWidgetAction_CustomEvent(self *C.QWidgetAction, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QWidgetAction{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWidgetAction) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QWidgetAction_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWidgetAction) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWidgetAction_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetAction_ConnectNotify
func miqt_exec_callback_QWidgetAction_ConnectNotify(self *C.QWidgetAction, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWidgetAction{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWidgetAction) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QWidgetAction_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QWidgetAction) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QWidgetAction_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetAction_DisconnectNotify
func miqt_exec_callback_QWidgetAction_DisconnectNotify(self *C.QWidgetAction, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QWidgetAction{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWidgetAction) Delete() {
	C.QWidgetAction_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidgetAction) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidgetAction) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
