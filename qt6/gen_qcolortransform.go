package qt6

/*

#include "gen_qcolortransform.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QColorTransform struct {
	h *C.QColorTransform
}

func (this *QColorTransform) cPointer() *C.QColorTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColorTransform) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQColorTransform constructs the type using only CGO pointers.
func newQColorTransform(h *C.QColorTransform) *QColorTransform {
	if h == nil {
		return nil
	}

	return &QColorTransform{h: h}
}

// UnsafeNewQColorTransform constructs the type using only unsafe pointers.
func UnsafeNewQColorTransform(h unsafe.Pointer) *QColorTransform {
	return newQColorTransform((*C.QColorTransform)(h))
}

// NewQColorTransform constructs a new QColorTransform object.
func NewQColorTransform() *QColorTransform {

	return newQColorTransform(C.QColorTransform_new())
}

// NewQColorTransform2 constructs a new QColorTransform object.
func NewQColorTransform2(colorTransform *QColorTransform) *QColorTransform {

	return newQColorTransform(C.QColorTransform_new2(colorTransform.cPointer()))
}

func (this *QColorTransform) OperatorAssign(other *QColorTransform) {
	C.QColorTransform_OperatorAssign(this.h, other.cPointer())
}

func (this *QColorTransform) Swap(other *QColorTransform) {
	C.QColorTransform_Swap(this.h, other.cPointer())
}

func (this *QColorTransform) IsIdentity() bool {
	return (bool)(C.QColorTransform_IsIdentity(this.h))
}

func (this *QColorTransform) Map(argb uint) uint {
	return (uint)(C.QColorTransform_Map(this.h, (C.uint)(argb)))
}

func (this *QColorTransform) MapWithRgba64(rgba64 QRgba64) *QRgba64 {
	_goptr := newQRgba64(C.QColorTransform_MapWithRgba64(this.h, rgba64.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColorTransform) MapWithColor(color *QColor) *QColor {
	_goptr := newQColor(C.QColorTransform_MapWithColor(this.h, color.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QColorTransform) Delete() {
	C.QColorTransform_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColorTransform) GoGC() {
	runtime.SetFinalizer(this, func(this *QColorTransform) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
