package qt

/*

#include "gen_qsignaltransition.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSignalTransition struct {
	h *C.QSignalTransition
	*QAbstractTransition
}

func (this *QSignalTransition) cPointer() *C.QSignalTransition {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSignalTransition) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSignalTransition constructs the type using only CGO pointers.
func newQSignalTransition(h *C.QSignalTransition) *QSignalTransition {
	if h == nil {
		return nil
	}
	var outptr_QAbstractTransition *C.QAbstractTransition = nil
	C.QSignalTransition_virtbase(h, &outptr_QAbstractTransition)

	return &QSignalTransition{h: h,
		QAbstractTransition: newQAbstractTransition(outptr_QAbstractTransition)}
}

// UnsafeNewQSignalTransition constructs the type using only unsafe pointers.
func UnsafeNewQSignalTransition(h unsafe.Pointer) *QSignalTransition {
	return newQSignalTransition((*C.QSignalTransition)(h))
}

// NewQSignalTransition constructs a new QSignalTransition object.
func NewQSignalTransition() *QSignalTransition {

	return newQSignalTransition(C.QSignalTransition_new())
}

// NewQSignalTransition2 constructs a new QSignalTransition object.
func NewQSignalTransition2(sender *QObject, signal string) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	return newQSignalTransition(C.QSignalTransition_new2(sender.cPointer(), signal_Cstring))
}

// NewQSignalTransition3 constructs a new QSignalTransition object.
func NewQSignalTransition3(sourceState *QState) *QSignalTransition {

	return newQSignalTransition(C.QSignalTransition_new3(sourceState.cPointer()))
}

// NewQSignalTransition4 constructs a new QSignalTransition object.
func NewQSignalTransition4(sender *QObject, signal string, sourceState *QState) *QSignalTransition {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	return newQSignalTransition(C.QSignalTransition_new4(sender.cPointer(), signal_Cstring, sourceState.cPointer()))
}

func (this *QSignalTransition) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSignalTransition_MetaObject(this.h))
}

func (this *QSignalTransition) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSignalTransition_Metacast(this.h, param1_Cstring))
}

func QSignalTransition_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalTransition) SenderObject() *QObject {
	return newQObject(C.QSignalTransition_SenderObject(this.h))
}

func (this *QSignalTransition) SetSenderObject(sender *QObject) {
	C.QSignalTransition_SetSenderObject(this.h, sender.cPointer())
}

func (this *QSignalTransition) Signal() []byte {
	var _bytearray C.struct_miqt_string = C.QSignalTransition_Signal(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSignalTransition) SetSignal(signal []byte) {
	signal_alias := C.struct_miqt_string{}
	if len(signal) > 0 {
		signal_alias.data = (*C.char)(unsafe.Pointer(&signal[0]))
	} else {
		signal_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	signal_alias.len = C.size_t(len(signal))
	C.QSignalTransition_SetSignal(this.h, signal_alias)
}

func QSignalTransition_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSignalTransition_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSignalTransition_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSignalTransition) callVirtualBase_EventTest(event *QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_EventTest(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSignalTransition) OnEventTest(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSignalTransition_override_virtual_EventTest(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_EventTest
func miqt_exec_callback_QSignalTransition_EventTest(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_EventTest, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_OnTransition(event *QEvent) {

	C.QSignalTransition_virtualbase_OnTransition(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalTransition) OnOnTransition(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSignalTransition_override_virtual_OnTransition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_OnTransition
func miqt_exec_callback_QSignalTransition_OnTransition(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_OnTransition, slotval1)

}

func (this *QSignalTransition) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QSignalTransition) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QSignalTransition_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_Event
func miqt_exec_callback_QSignalTransition_Event(self *C.QSignalTransition, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSignalTransition_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSignalTransition) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSignalTransition_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_EventFilter
func miqt_exec_callback_QSignalTransition_EventFilter(self *C.QSignalTransition, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSignalTransition{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSignalTransition) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSignalTransition_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalTransition) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSignalTransition_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_TimerEvent
func miqt_exec_callback_QSignalTransition_TimerEvent(self *C.QSignalTransition, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSignalTransition) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSignalTransition_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalTransition) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSignalTransition_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_ChildEvent
func miqt_exec_callback_QSignalTransition_ChildEvent(self *C.QSignalTransition, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSignalTransition) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSignalTransition_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSignalTransition) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSignalTransition_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_CustomEvent
func miqt_exec_callback_QSignalTransition_CustomEvent(self *C.QSignalTransition, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSignalTransition) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSignalTransition_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSignalTransition) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSignalTransition_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_ConnectNotify
func miqt_exec_callback_QSignalTransition_ConnectNotify(self *C.QSignalTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSignalTransition) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSignalTransition_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSignalTransition) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSignalTransition_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSignalTransition_DisconnectNotify
func miqt_exec_callback_QSignalTransition_DisconnectNotify(self *C.QSignalTransition, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSignalTransition{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSignalTransition) Delete() {
	C.QSignalTransition_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSignalTransition) GoGC() {
	runtime.SetFinalizer(this, func(this *QSignalTransition) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
