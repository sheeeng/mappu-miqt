package network

/*

#include "gen_qhttp2configuration.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QHttp2Configuration struct {
	h *C.QHttp2Configuration
}

func (this *QHttp2Configuration) cPointer() *C.QHttp2Configuration {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHttp2Configuration) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHttp2Configuration constructs the type using only CGO pointers.
func newQHttp2Configuration(h *C.QHttp2Configuration) *QHttp2Configuration {
	if h == nil {
		return nil
	}

	return &QHttp2Configuration{h: h}
}

// UnsafeNewQHttp2Configuration constructs the type using only unsafe pointers.
func UnsafeNewQHttp2Configuration(h unsafe.Pointer) *QHttp2Configuration {
	return newQHttp2Configuration((*C.QHttp2Configuration)(h))
}

// NewQHttp2Configuration constructs a new QHttp2Configuration object.
func NewQHttp2Configuration() *QHttp2Configuration {

	return newQHttp2Configuration(C.QHttp2Configuration_new())
}

// NewQHttp2Configuration2 constructs a new QHttp2Configuration object.
func NewQHttp2Configuration2(other *QHttp2Configuration) *QHttp2Configuration {

	return newQHttp2Configuration(C.QHttp2Configuration_new2(other.cPointer()))
}

func (this *QHttp2Configuration) OperatorAssign(other *QHttp2Configuration) {
	C.QHttp2Configuration_OperatorAssign(this.h, other.cPointer())
}

func (this *QHttp2Configuration) SetServerPushEnabled(enable bool) {
	C.QHttp2Configuration_SetServerPushEnabled(this.h, (C.bool)(enable))
}

func (this *QHttp2Configuration) ServerPushEnabled() bool {
	return (bool)(C.QHttp2Configuration_ServerPushEnabled(this.h))
}

func (this *QHttp2Configuration) SetHuffmanCompressionEnabled(enable bool) {
	C.QHttp2Configuration_SetHuffmanCompressionEnabled(this.h, (C.bool)(enable))
}

func (this *QHttp2Configuration) HuffmanCompressionEnabled() bool {
	return (bool)(C.QHttp2Configuration_HuffmanCompressionEnabled(this.h))
}

func (this *QHttp2Configuration) SetSessionReceiveWindowSize(size uint) bool {
	return (bool)(C.QHttp2Configuration_SetSessionReceiveWindowSize(this.h, (C.uint)(size)))
}

func (this *QHttp2Configuration) SessionReceiveWindowSize() uint {
	return (uint)(C.QHttp2Configuration_SessionReceiveWindowSize(this.h))
}

func (this *QHttp2Configuration) SetStreamReceiveWindowSize(size uint) bool {
	return (bool)(C.QHttp2Configuration_SetStreamReceiveWindowSize(this.h, (C.uint)(size)))
}

func (this *QHttp2Configuration) StreamReceiveWindowSize() uint {
	return (uint)(C.QHttp2Configuration_StreamReceiveWindowSize(this.h))
}

func (this *QHttp2Configuration) SetMaxFrameSize(size uint) bool {
	return (bool)(C.QHttp2Configuration_SetMaxFrameSize(this.h, (C.uint)(size)))
}

func (this *QHttp2Configuration) MaxFrameSize() uint {
	return (uint)(C.QHttp2Configuration_MaxFrameSize(this.h))
}

func (this *QHttp2Configuration) Swap(other *QHttp2Configuration) {
	C.QHttp2Configuration_Swap(this.h, other.cPointer())
}

// Delete this object from C++ memory.
func (this *QHttp2Configuration) Delete() {
	C.QHttp2Configuration_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHttp2Configuration) GoGC() {
	runtime.SetFinalizer(this, func(this *QHttp2Configuration) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
