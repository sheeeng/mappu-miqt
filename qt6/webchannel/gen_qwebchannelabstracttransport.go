package webchannel

/*

#include "gen_qwebchannelabstracttransport.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebChannelAbstractTransport struct {
	h *C.QWebChannelAbstractTransport
	*qt6.QObject
}

func (this *QWebChannelAbstractTransport) cPointer() *C.QWebChannelAbstractTransport {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebChannelAbstractTransport) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebChannelAbstractTransport constructs the type using only CGO pointers.
func newQWebChannelAbstractTransport(h *C.QWebChannelAbstractTransport) *QWebChannelAbstractTransport {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebChannelAbstractTransport_virtbase(h, &outptr_QObject)

	return &QWebChannelAbstractTransport{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebChannelAbstractTransport constructs the type using only unsafe pointers.
func UnsafeNewQWebChannelAbstractTransport(h unsafe.Pointer) *QWebChannelAbstractTransport {
	return newQWebChannelAbstractTransport((*C.QWebChannelAbstractTransport)(h))
}

// NewQWebChannelAbstractTransport constructs a new QWebChannelAbstractTransport object.
func NewQWebChannelAbstractTransport() *QWebChannelAbstractTransport {

	return newQWebChannelAbstractTransport(C.QWebChannelAbstractTransport_new())
}

// NewQWebChannelAbstractTransport2 constructs a new QWebChannelAbstractTransport object.
func NewQWebChannelAbstractTransport2(parent *qt6.QObject) *QWebChannelAbstractTransport {

	return newQWebChannelAbstractTransport(C.QWebChannelAbstractTransport_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QWebChannelAbstractTransport) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebChannelAbstractTransport_MetaObject(this.h)))
}

func (this *QWebChannelAbstractTransport) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebChannelAbstractTransport_Metacast(this.h, param1_Cstring))
}

func QWebChannelAbstractTransport_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannelAbstractTransport_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebChannelAbstractTransport) SendMessage(message *qt6.QJsonObject) {
	C.QWebChannelAbstractTransport_SendMessage(this.h, (*C.QJsonObject)(message.UnsafePointer()))
}

func (this *QWebChannelAbstractTransport) MessageReceived(message *qt6.QJsonObject, transport *QWebChannelAbstractTransport) {
	C.QWebChannelAbstractTransport_MessageReceived(this.h, (*C.QJsonObject)(message.UnsafePointer()), transport.cPointer())
}
func (this *QWebChannelAbstractTransport) OnMessageReceived(slot func(message *qt6.QJsonObject, transport *QWebChannelAbstractTransport)) {
	C.QWebChannelAbstractTransport_connect_MessageReceived(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebChannelAbstractTransport_MessageReceived
func miqt_exec_callback_QWebChannelAbstractTransport_MessageReceived(cb C.intptr_t, message *C.QJsonObject, transport *C.QWebChannelAbstractTransport) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message *qt6.QJsonObject, transport *QWebChannelAbstractTransport))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQJsonObject(unsafe.Pointer(message))

	slotval2 := newQWebChannelAbstractTransport(transport)

	gofunc(slotval1, slotval2)
}

func QWebChannelAbstractTransport_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannelAbstractTransport_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebChannelAbstractTransport_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebChannelAbstractTransport_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QWebChannelAbstractTransport) OnSendMessage(slot func(message *qt6.QJsonObject)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_SendMessage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_SendMessage
func miqt_exec_callback_QWebChannelAbstractTransport_SendMessage(self *C.QWebChannelAbstractTransport, cb C.intptr_t, message *C.QJsonObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message *qt6.QJsonObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQJsonObject(unsafe.Pointer(message))

	gofunc(slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QWebChannelAbstractTransport_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebChannelAbstractTransport) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QWebChannelAbstractTransport_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_Event
func miqt_exec_callback_QWebChannelAbstractTransport_Event(self *C.QWebChannelAbstractTransport, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QWebChannelAbstractTransport_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebChannelAbstractTransport) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QWebChannelAbstractTransport_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_EventFilter
func miqt_exec_callback_QWebChannelAbstractTransport_EventFilter(self *C.QWebChannelAbstractTransport, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QWebChannelAbstractTransport_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_TimerEvent
func miqt_exec_callback_QWebChannelAbstractTransport_TimerEvent(self *C.QWebChannelAbstractTransport, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QWebChannelAbstractTransport_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_ChildEvent
func miqt_exec_callback_QWebChannelAbstractTransport_ChildEvent(self *C.QWebChannelAbstractTransport, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QWebChannelAbstractTransport_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_CustomEvent
func miqt_exec_callback_QWebChannelAbstractTransport_CustomEvent(self *C.QWebChannelAbstractTransport, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QWebChannelAbstractTransport_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_ConnectNotify
func miqt_exec_callback_QWebChannelAbstractTransport_ConnectNotify(self *C.QWebChannelAbstractTransport, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebChannelAbstractTransport) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QWebChannelAbstractTransport_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebChannelAbstractTransport) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QWebChannelAbstractTransport_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebChannelAbstractTransport_DisconnectNotify
func miqt_exec_callback_QWebChannelAbstractTransport_DisconnectNotify(self *C.QWebChannelAbstractTransport, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebChannelAbstractTransport{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebChannelAbstractTransport) Delete() {
	C.QWebChannelAbstractTransport_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebChannelAbstractTransport) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebChannelAbstractTransport) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
