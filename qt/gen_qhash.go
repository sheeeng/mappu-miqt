package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qhash.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QHashData struct {
	h *C.QHashData
}

func (this *QHashData) cPointer() *C.QHashData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQHashData(h *C.QHashData) *QHashData {
	return &QHashData{h: h}
}

func newQHashData_U(h unsafe.Pointer) *QHashData {
	return newQHashData((*C.QHashData)(h))
}

func (this *QHashData) WillGrow() bool {
	ret := C.QHashData_WillGrow(this.h)
	return (bool)(ret)
}

func (this *QHashData) HasShrunk() {
	C.QHashData_HasShrunk(this.h)
}

func (this *QHashData) Rehash(hint int) {
	C.QHashData_Rehash(this.h, (C.int)(hint))
}

func (this *QHashData) Delete() {
	C.QHashData_Delete(this.h)
}

type QHashDummyValue struct {
	h *C.QHashDummyValue
}

func (this *QHashDummyValue) cPointer() *C.QHashDummyValue {
	if this == nil {
		return nil
	}
	return this.h
}

func newQHashDummyValue(h *C.QHashDummyValue) *QHashDummyValue {
	return &QHashDummyValue{h: h}
}

func newQHashDummyValue_U(h unsafe.Pointer) *QHashDummyValue {
	return newQHashDummyValue((*C.QHashDummyValue)(h))
}

// NewQHashDummyValue constructs a new QHashDummyValue object.
func NewQHashDummyValue() *QHashDummyValue {
	ret := C.QHashDummyValue_new()
	return newQHashDummyValue(ret)
}

// NewQHashDummyValue2 constructs a new QHashDummyValue object.
func NewQHashDummyValue2(param1 *QHashDummyValue) *QHashDummyValue {
	ret := C.QHashDummyValue_new2(param1.cPointer())
	return newQHashDummyValue(ret)
}

func (this *QHashDummyValue) Delete() {
	C.QHashDummyValue_Delete(this.h)
}