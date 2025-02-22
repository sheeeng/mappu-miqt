package network

/*

#include "gen_qlocalsocket.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLocalSocket__LocalSocketError int

const (
	QLocalSocket__ConnectionRefusedError          QLocalSocket__LocalSocketError = 0
	QLocalSocket__PeerClosedError                 QLocalSocket__LocalSocketError = 1
	QLocalSocket__ServerNotFoundError             QLocalSocket__LocalSocketError = 2
	QLocalSocket__SocketAccessError               QLocalSocket__LocalSocketError = 3
	QLocalSocket__SocketResourceError             QLocalSocket__LocalSocketError = 4
	QLocalSocket__SocketTimeoutError              QLocalSocket__LocalSocketError = 5
	QLocalSocket__DatagramTooLargeError           QLocalSocket__LocalSocketError = 6
	QLocalSocket__ConnectionError                 QLocalSocket__LocalSocketError = 7
	QLocalSocket__UnsupportedSocketOperationError QLocalSocket__LocalSocketError = 10
	QLocalSocket__UnknownSocketError              QLocalSocket__LocalSocketError = -1
	QLocalSocket__OperationError                  QLocalSocket__LocalSocketError = 19
)

type QLocalSocket__LocalSocketState int

const (
	QLocalSocket__UnconnectedState QLocalSocket__LocalSocketState = 0
	QLocalSocket__ConnectingState  QLocalSocket__LocalSocketState = 2
	QLocalSocket__ConnectedState   QLocalSocket__LocalSocketState = 3
	QLocalSocket__ClosingState     QLocalSocket__LocalSocketState = 6
)

type QLocalSocket struct {
	h *C.QLocalSocket
	*qt.QIODevice
}

func (this *QLocalSocket) cPointer() *C.QLocalSocket {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLocalSocket) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLocalSocket constructs the type using only CGO pointers.
func newQLocalSocket(h *C.QLocalSocket) *QLocalSocket {
	if h == nil {
		return nil
	}
	var outptr_QIODevice *C.QIODevice = nil
	C.QLocalSocket_virtbase(h, &outptr_QIODevice)

	return &QLocalSocket{h: h,
		QIODevice: qt.UnsafeNewQIODevice(unsafe.Pointer(outptr_QIODevice))}
}

// UnsafeNewQLocalSocket constructs the type using only unsafe pointers.
func UnsafeNewQLocalSocket(h unsafe.Pointer) *QLocalSocket {
	return newQLocalSocket((*C.QLocalSocket)(h))
}

// NewQLocalSocket constructs a new QLocalSocket object.
func NewQLocalSocket() *QLocalSocket {

	return newQLocalSocket(C.QLocalSocket_new())
}

// NewQLocalSocket2 constructs a new QLocalSocket object.
func NewQLocalSocket2(parent *qt.QObject) *QLocalSocket {

	return newQLocalSocket(C.QLocalSocket_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QLocalSocket) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QLocalSocket_MetaObject(this.h)))
}

func (this *QLocalSocket) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLocalSocket_Metacast(this.h, param1_Cstring))
}

func QLocalSocket_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLocalSocket_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalSocket_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLocalSocket_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalSocket) ConnectToServer() {
	C.QLocalSocket_ConnectToServer(this.h)
}

func (this *QLocalSocket) ConnectToServerWithName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QLocalSocket_ConnectToServerWithName(this.h, name_ms)
}

func (this *QLocalSocket) DisconnectFromServer() {
	C.QLocalSocket_DisconnectFromServer(this.h)
}

func (this *QLocalSocket) SetServerName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QLocalSocket_SetServerName(this.h, name_ms)
}

func (this *QLocalSocket) ServerName() string {
	var _ms C.struct_miqt_string = C.QLocalSocket_ServerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalSocket) FullServerName() string {
	var _ms C.struct_miqt_string = C.QLocalSocket_FullServerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalSocket) Abort() {
	C.QLocalSocket_Abort(this.h)
}

func (this *QLocalSocket) IsSequential() bool {
	return (bool)(C.QLocalSocket_IsSequential(this.h))
}

func (this *QLocalSocket) BytesAvailable() int64 {
	return (int64)(C.QLocalSocket_BytesAvailable(this.h))
}

func (this *QLocalSocket) BytesToWrite() int64 {
	return (int64)(C.QLocalSocket_BytesToWrite(this.h))
}

func (this *QLocalSocket) CanReadLine() bool {
	return (bool)(C.QLocalSocket_CanReadLine(this.h))
}

func (this *QLocalSocket) Open(openMode qt.QIODevice__OpenModeFlag) bool {
	return (bool)(C.QLocalSocket_Open(this.h, (C.int)(openMode)))
}

func (this *QLocalSocket) Close() {
	C.QLocalSocket_Close(this.h)
}

func (this *QLocalSocket) Error() QLocalSocket__LocalSocketError {
	return (QLocalSocket__LocalSocketError)(C.QLocalSocket_Error(this.h))
}

func (this *QLocalSocket) Flush() bool {
	return (bool)(C.QLocalSocket_Flush(this.h))
}

func (this *QLocalSocket) IsValid() bool {
	return (bool)(C.QLocalSocket_IsValid(this.h))
}

func (this *QLocalSocket) ReadBufferSize() int64 {
	return (int64)(C.QLocalSocket_ReadBufferSize(this.h))
}

func (this *QLocalSocket) SetReadBufferSize(size int64) {
	C.QLocalSocket_SetReadBufferSize(this.h, (C.longlong)(size))
}

func (this *QLocalSocket) SetSocketDescriptor(socketDescriptor uintptr) bool {
	return (bool)(C.QLocalSocket_SetSocketDescriptor(this.h, (C.intptr_t)(socketDescriptor)))
}

func (this *QLocalSocket) SocketDescriptor() uintptr {
	return (uintptr)(C.QLocalSocket_SocketDescriptor(this.h))
}

func (this *QLocalSocket) State() QLocalSocket__LocalSocketState {
	return (QLocalSocket__LocalSocketState)(C.QLocalSocket_State(this.h))
}

func (this *QLocalSocket) WaitForBytesWritten(msecs int) bool {
	return (bool)(C.QLocalSocket_WaitForBytesWritten(this.h, (C.int)(msecs)))
}

func (this *QLocalSocket) WaitForConnected() bool {
	return (bool)(C.QLocalSocket_WaitForConnected(this.h))
}

func (this *QLocalSocket) WaitForDisconnected() bool {
	return (bool)(C.QLocalSocket_WaitForDisconnected(this.h))
}

func (this *QLocalSocket) WaitForReadyRead(msecs int) bool {
	return (bool)(C.QLocalSocket_WaitForReadyRead(this.h, (C.int)(msecs)))
}

func (this *QLocalSocket) Connected() {
	C.QLocalSocket_Connected(this.h)
}
func (this *QLocalSocket) OnConnected(slot func()) {
	C.QLocalSocket_connect_Connected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalSocket_Connected
func miqt_exec_callback_QLocalSocket_Connected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLocalSocket) Disconnected() {
	C.QLocalSocket_Disconnected(this.h)
}
func (this *QLocalSocket) OnDisconnected(slot func()) {
	C.QLocalSocket_connect_Disconnected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalSocket_Disconnected
func miqt_exec_callback_QLocalSocket_Disconnected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLocalSocket) ErrorWithSocketError(socketError QLocalSocket__LocalSocketError) {
	C.QLocalSocket_ErrorWithSocketError(this.h, (C.int)(socketError))
}
func (this *QLocalSocket) OnErrorWithSocketError(slot func(socketError QLocalSocket__LocalSocketError)) {
	C.QLocalSocket_connect_ErrorWithSocketError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalSocket_ErrorWithSocketError
func miqt_exec_callback_QLocalSocket_ErrorWithSocketError(cb C.intptr_t, socketError C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socketError QLocalSocket__LocalSocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QLocalSocket__LocalSocketError)(socketError)

	gofunc(slotval1)
}

func (this *QLocalSocket) ErrorOccurred(socketError QLocalSocket__LocalSocketError) {
	C.QLocalSocket_ErrorOccurred(this.h, (C.int)(socketError))
}
func (this *QLocalSocket) OnErrorOccurred(slot func(socketError QLocalSocket__LocalSocketError)) {
	C.QLocalSocket_connect_ErrorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalSocket_ErrorOccurred
func miqt_exec_callback_QLocalSocket_ErrorOccurred(cb C.intptr_t, socketError C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socketError QLocalSocket__LocalSocketError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QLocalSocket__LocalSocketError)(socketError)

	gofunc(slotval1)
}

func (this *QLocalSocket) StateChanged(socketState QLocalSocket__LocalSocketState) {
	C.QLocalSocket_StateChanged(this.h, (C.int)(socketState))
}
func (this *QLocalSocket) OnStateChanged(slot func(socketState QLocalSocket__LocalSocketState)) {
	C.QLocalSocket_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLocalSocket_StateChanged
func miqt_exec_callback_QLocalSocket_StateChanged(cb C.intptr_t, socketState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(socketState QLocalSocket__LocalSocketState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QLocalSocket__LocalSocketState)(socketState)

	gofunc(slotval1)
}

func QLocalSocket_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalSocket_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalSocket_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalSocket_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalSocket_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalSocket_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocalSocket_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLocalSocket_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocalSocket) ConnectToServer1(openMode qt.QIODevice__OpenModeFlag) {
	C.QLocalSocket_ConnectToServer1(this.h, (C.int)(openMode))
}

func (this *QLocalSocket) ConnectToServer2(name string, openMode qt.QIODevice__OpenModeFlag) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QLocalSocket_ConnectToServer2(this.h, name_ms, (C.int)(openMode))
}

func (this *QLocalSocket) SetSocketDescriptor2(socketDescriptor uintptr, socketState QLocalSocket__LocalSocketState) bool {
	return (bool)(C.QLocalSocket_SetSocketDescriptor2(this.h, (C.intptr_t)(socketDescriptor), (C.int)(socketState)))
}

func (this *QLocalSocket) SetSocketDescriptor3(socketDescriptor uintptr, socketState QLocalSocket__LocalSocketState, openMode qt.QIODevice__OpenModeFlag) bool {
	return (bool)(C.QLocalSocket_SetSocketDescriptor3(this.h, (C.intptr_t)(socketDescriptor), (C.int)(socketState), (C.int)(openMode)))
}

func (this *QLocalSocket) WaitForConnected1(msecs int) bool {
	return (bool)(C.QLocalSocket_WaitForConnected1(this.h, (C.int)(msecs)))
}

func (this *QLocalSocket) WaitForDisconnected1(msecs int) bool {
	return (bool)(C.QLocalSocket_WaitForDisconnected1(this.h, (C.int)(msecs)))
}

func (this *QLocalSocket) callVirtualBase_IsSequential() bool {

	return (bool)(C.QLocalSocket_virtualbase_IsSequential(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnIsSequential(slot func(super func() bool) bool) {
	ok := C.QLocalSocket_override_virtual_IsSequential(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_IsSequential
func miqt_exec_callback_QLocalSocket_IsSequential(self *C.QLocalSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_IsSequential)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_BytesAvailable() int64 {

	return (int64)(C.QLocalSocket_virtualbase_BytesAvailable(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnBytesAvailable(slot func(super func() int64) int64) {
	ok := C.QLocalSocket_override_virtual_BytesAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_BytesAvailable
func miqt_exec_callback_QLocalSocket_BytesAvailable(self *C.QLocalSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_BytesAvailable)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_BytesToWrite() int64 {

	return (int64)(C.QLocalSocket_virtualbase_BytesToWrite(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnBytesToWrite(slot func(super func() int64) int64) {
	ok := C.QLocalSocket_override_virtual_BytesToWrite(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_BytesToWrite
func miqt_exec_callback_QLocalSocket_BytesToWrite(self *C.QLocalSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_BytesToWrite)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_CanReadLine() bool {

	return (bool)(C.QLocalSocket_virtualbase_CanReadLine(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnCanReadLine(slot func(super func() bool) bool) {
	ok := C.QLocalSocket_override_virtual_CanReadLine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_CanReadLine
func miqt_exec_callback_QLocalSocket_CanReadLine(self *C.QLocalSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_CanReadLine)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Open(openMode qt.QIODevice__OpenModeFlag) bool {

	return (bool)(C.QLocalSocket_virtualbase_Open(unsafe.Pointer(this.h), (C.int)(openMode)))

}
func (this *QLocalSocket) OnOpen(slot func(super func(openMode qt.QIODevice__OpenModeFlag) bool, openMode qt.QIODevice__OpenModeFlag) bool) {
	ok := C.QLocalSocket_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_Open
func miqt_exec_callback_QLocalSocket_Open(self *C.QLocalSocket, cb C.intptr_t, openMode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(openMode qt.QIODevice__OpenModeFlag) bool, openMode qt.QIODevice__OpenModeFlag) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QIODevice__OpenModeFlag)(openMode)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Open, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Close() {

	C.QLocalSocket_virtualbase_Close(unsafe.Pointer(this.h))

}
func (this *QLocalSocket) OnClose(slot func(super func())) {
	ok := C.QLocalSocket_override_virtual_Close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_Close
func miqt_exec_callback_QLocalSocket_Close(self *C.QLocalSocket, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QLocalSocket{h: self}).callVirtualBase_Close)

}

func (this *QLocalSocket) callVirtualBase_WaitForBytesWritten(msecs int) bool {

	return (bool)(C.QLocalSocket_virtualbase_WaitForBytesWritten(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QLocalSocket) OnWaitForBytesWritten(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QLocalSocket_override_virtual_WaitForBytesWritten(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_WaitForBytesWritten
func miqt_exec_callback_QLocalSocket_WaitForBytesWritten(self *C.QLocalSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_WaitForBytesWritten, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_WaitForReadyRead(msecs int) bool {

	return (bool)(C.QLocalSocket_virtualbase_WaitForReadyRead(unsafe.Pointer(this.h), (C.int)(msecs)))

}
func (this *QLocalSocket) OnWaitForReadyRead(slot func(super func(msecs int) bool, msecs int) bool) {
	ok := C.QLocalSocket_override_virtual_WaitForReadyRead(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_WaitForReadyRead
func miqt_exec_callback_QLocalSocket_WaitForReadyRead(self *C.QLocalSocket, cb C.intptr_t, msecs C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msecs int) bool, msecs int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msecs)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_WaitForReadyRead, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_ReadData(param1 string, param2 int64) int64 {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))

	return (int64)(C.QLocalSocket_virtualbase_ReadData(unsafe.Pointer(this.h), param1_Cstring, (C.longlong)(param2)))

}
func (this *QLocalSocket) OnReadData(slot func(super func(param1 string, param2 int64) int64, param1 string, param2 int64) int64) {
	ok := C.QLocalSocket_override_virtual_ReadData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_ReadData
func miqt_exec_callback_QLocalSocket_ReadData(self *C.QLocalSocket, cb C.intptr_t, param1 *C.char, param2 C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string, param2 int64) int64, param1 string, param2 int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := C.GoString(param1_ret)

	slotval2 := (int64)(param2)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_ReadData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_WriteData(param1 string, param2 int64) int64 {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))

	return (int64)(C.QLocalSocket_virtualbase_WriteData(unsafe.Pointer(this.h), param1_Cstring, (C.longlong)(param2)))

}
func (this *QLocalSocket) OnWriteData(slot func(super func(param1 string, param2 int64) int64, param1 string, param2 int64) int64) {
	ok := C.QLocalSocket_override_virtual_WriteData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_WriteData
func miqt_exec_callback_QLocalSocket_WriteData(self *C.QLocalSocket, cb C.intptr_t, param1 *C.const_char, param2 C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 string, param2 int64) int64, param1 string, param2 int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := C.GoString(param1_ret)

	slotval2 := (int64)(param2)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_WriteData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Pos() int64 {

	return (int64)(C.QLocalSocket_virtualbase_Pos(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnPos(slot func(super func() int64) int64) {
	ok := C.QLocalSocket_override_virtual_Pos(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_Pos
func miqt_exec_callback_QLocalSocket_Pos(self *C.QLocalSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Pos)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Size() int64 {

	return (int64)(C.QLocalSocket_virtualbase_Size(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnSize(slot func(super func() int64) int64) {
	ok := C.QLocalSocket_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_Size
func miqt_exec_callback_QLocalSocket_Size(self *C.QLocalSocket, cb C.intptr_t) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Size)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Seek(pos int64) bool {

	return (bool)(C.QLocalSocket_virtualbase_Seek(unsafe.Pointer(this.h), (C.longlong)(pos)))

}
func (this *QLocalSocket) OnSeek(slot func(super func(pos int64) bool, pos int64) bool) {
	ok := C.QLocalSocket_override_virtual_Seek(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_Seek
func miqt_exec_callback_QLocalSocket_Seek(self *C.QLocalSocket, cb C.intptr_t, pos C.longlong) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos int64) bool, pos int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int64)(pos)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Seek, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_AtEnd() bool {

	return (bool)(C.QLocalSocket_virtualbase_AtEnd(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnAtEnd(slot func(super func() bool) bool) {
	ok := C.QLocalSocket_override_virtual_AtEnd(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_AtEnd
func miqt_exec_callback_QLocalSocket_AtEnd(self *C.QLocalSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_AtEnd)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Reset() bool {

	return (bool)(C.QLocalSocket_virtualbase_Reset(unsafe.Pointer(this.h)))

}
func (this *QLocalSocket) OnReset(slot func(super func() bool) bool) {
	ok := C.QLocalSocket_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_Reset
func miqt_exec_callback_QLocalSocket_Reset(self *C.QLocalSocket, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Reset)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_ReadLineData(data string, maxlen int64) int64 {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (int64)(C.QLocalSocket_virtualbase_ReadLineData(unsafe.Pointer(this.h), data_Cstring, (C.longlong)(maxlen)))

}
func (this *QLocalSocket) OnReadLineData(slot func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64) {
	ok := C.QLocalSocket_override_virtual_ReadLineData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_ReadLineData
func miqt_exec_callback_QLocalSocket_ReadLineData(self *C.QLocalSocket, cb C.intptr_t, data *C.char, maxlen C.longlong) C.longlong {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, maxlen int64) int64, data string, maxlen int64) int64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int64)(maxlen)

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_ReadLineData, slotval1, slotval2)

	return (C.longlong)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QLocalSocket_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLocalSocket) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QLocalSocket_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_Event
func miqt_exec_callback_QLocalSocket_Event(self *C.QLocalSocket, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QLocalSocket_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLocalSocket) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QLocalSocket_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_EventFilter
func miqt_exec_callback_QLocalSocket_EventFilter(self *C.QLocalSocket, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLocalSocket{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLocalSocket) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QLocalSocket_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QLocalSocket) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QLocalSocket_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_TimerEvent
func miqt_exec_callback_QLocalSocket_TimerEvent(self *C.QLocalSocket, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLocalSocket) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QLocalSocket_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QLocalSocket) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QLocalSocket_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_ChildEvent
func miqt_exec_callback_QLocalSocket_ChildEvent(self *C.QLocalSocket, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLocalSocket) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QLocalSocket_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QLocalSocket) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QLocalSocket_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_CustomEvent
func miqt_exec_callback_QLocalSocket_CustomEvent(self *C.QLocalSocket, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLocalSocket) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QLocalSocket_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLocalSocket) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QLocalSocket_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_ConnectNotify
func miqt_exec_callback_QLocalSocket_ConnectNotify(self *C.QLocalSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLocalSocket) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QLocalSocket_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLocalSocket) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QLocalSocket_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLocalSocket_DisconnectNotify
func miqt_exec_callback_QLocalSocket_DisconnectNotify(self *C.QLocalSocket, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLocalSocket{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLocalSocket) Delete() {
	C.QLocalSocket_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLocalSocket) GoGC() {
	runtime.SetFinalizer(this, func(this *QLocalSocket) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
