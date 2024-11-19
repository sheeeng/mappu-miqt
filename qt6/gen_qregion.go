package qt6

/*

#include "gen_qregion.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRegion__RegionType int

const (
	QRegion__Rectangle QRegion__RegionType = 0
	QRegion__Ellipse   QRegion__RegionType = 1
)

type QRegion struct {
	h          *C.QRegion
	isSubclass bool
}

func (this *QRegion) cPointer() *C.QRegion {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRegion) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRegion constructs the type using only CGO pointers.
func newQRegion(h *C.QRegion) *QRegion {
	if h == nil {
		return nil
	}
	return &QRegion{h: h}
}

// UnsafeNewQRegion constructs the type using only unsafe pointers.
func UnsafeNewQRegion(h unsafe.Pointer) *QRegion {
	if h == nil {
		return nil
	}

	return &QRegion{h: (*C.QRegion)(h)}
}

// NewQRegion constructs a new QRegion object.
func NewQRegion() *QRegion {
	var outptr_QRegion *C.QRegion = nil

	C.QRegion_new(&outptr_QRegion)
	ret := newQRegion(outptr_QRegion)
	ret.isSubclass = true
	return ret
}

// NewQRegion2 constructs a new QRegion object.
func NewQRegion2(x int, y int, w int, h int) *QRegion {
	var outptr_QRegion *C.QRegion = nil

	C.QRegion_new2((C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), &outptr_QRegion)
	ret := newQRegion(outptr_QRegion)
	ret.isSubclass = true
	return ret
}

// NewQRegion3 constructs a new QRegion object.
func NewQRegion3(r *QRect) *QRegion {
	var outptr_QRegion *C.QRegion = nil

	C.QRegion_new3(r.cPointer(), &outptr_QRegion)
	ret := newQRegion(outptr_QRegion)
	ret.isSubclass = true
	return ret
}

// NewQRegion4 constructs a new QRegion object.
func NewQRegion4(region *QRegion) *QRegion {
	var outptr_QRegion *C.QRegion = nil

	C.QRegion_new4(region.cPointer(), &outptr_QRegion)
	ret := newQRegion(outptr_QRegion)
	ret.isSubclass = true
	return ret
}

// NewQRegion5 constructs a new QRegion object.
func NewQRegion5(bitmap *QBitmap) *QRegion {
	var outptr_QRegion *C.QRegion = nil

	C.QRegion_new5(bitmap.cPointer(), &outptr_QRegion)
	ret := newQRegion(outptr_QRegion)
	ret.isSubclass = true
	return ret
}

// NewQRegion6 constructs a new QRegion object.
func NewQRegion6(x int, y int, w int, h int, t QRegion__RegionType) *QRegion {
	var outptr_QRegion *C.QRegion = nil

	C.QRegion_new6((C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(t), &outptr_QRegion)
	ret := newQRegion(outptr_QRegion)
	ret.isSubclass = true
	return ret
}

// NewQRegion7 constructs a new QRegion object.
func NewQRegion7(r *QRect, t QRegion__RegionType) *QRegion {
	var outptr_QRegion *C.QRegion = nil

	C.QRegion_new7(r.cPointer(), (C.int)(t), &outptr_QRegion)
	ret := newQRegion(outptr_QRegion)
	ret.isSubclass = true
	return ret
}

func (this *QRegion) OperatorAssign(param1 *QRegion) {
	C.QRegion_OperatorAssign(this.h, param1.cPointer())
}

func (this *QRegion) Swap(other *QRegion) {
	C.QRegion_Swap(this.h, other.cPointer())
}

func (this *QRegion) IsEmpty() bool {
	return (bool)(C.QRegion_IsEmpty(this.h))
}

func (this *QRegion) IsNull() bool {
	return (bool)(C.QRegion_IsNull(this.h))
}

func (this *QRegion) Begin() *QRect {
	return UnsafeNewQRect(unsafe.Pointer(C.QRegion_Begin(this.h)))
}

func (this *QRegion) Cbegin() *QRect {
	return UnsafeNewQRect(unsafe.Pointer(C.QRegion_Cbegin(this.h)))
}

func (this *QRegion) End() *QRect {
	return UnsafeNewQRect(unsafe.Pointer(C.QRegion_End(this.h)))
}

func (this *QRegion) Cend() *QRect {
	return UnsafeNewQRect(unsafe.Pointer(C.QRegion_Cend(this.h)))
}

func (this *QRegion) Contains(p *QPoint) bool {
	return (bool)(C.QRegion_Contains(this.h, p.cPointer()))
}

func (this *QRegion) ContainsWithQRect(r *QRect) bool {
	return (bool)(C.QRegion_ContainsWithQRect(this.h, r.cPointer()))
}

func (this *QRegion) Translate(dx int, dy int) {
	C.QRegion_Translate(this.h, (C.int)(dx), (C.int)(dy))
}

func (this *QRegion) TranslateWithQPoint(p *QPoint) {
	C.QRegion_TranslateWithQPoint(this.h, p.cPointer())
}

func (this *QRegion) Translated(dx int, dy int) *QRegion {
	_ret := C.QRegion_Translated(this.h, (C.int)(dx), (C.int)(dy))
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) TranslatedWithQPoint(p *QPoint) *QRegion {
	_ret := C.QRegion_TranslatedWithQPoint(this.h, p.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) United(r *QRegion) *QRegion {
	_ret := C.QRegion_United(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) UnitedWithQRect(r *QRect) *QRegion {
	_ret := C.QRegion_UnitedWithQRect(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Intersected(r *QRegion) *QRegion {
	_ret := C.QRegion_Intersected(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) IntersectedWithQRect(r *QRect) *QRegion {
	_ret := C.QRegion_IntersectedWithQRect(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Subtracted(r *QRegion) *QRegion {
	_ret := C.QRegion_Subtracted(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Xored(r *QRegion) *QRegion {
	_ret := C.QRegion_Xored(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) Intersects(r *QRegion) bool {
	return (bool)(C.QRegion_Intersects(this.h, r.cPointer()))
}

func (this *QRegion) IntersectsWithQRect(r *QRect) bool {
	return (bool)(C.QRegion_IntersectsWithQRect(this.h, r.cPointer()))
}

func (this *QRegion) BoundingRect() *QRect {
	_ret := C.QRegion_BoundingRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) SetRects(rect *QRect, num int) {
	C.QRegion_SetRects(this.h, rect.cPointer(), (C.int)(num))
}

func (this *QRegion) RectCount() int {
	return (int)(C.QRegion_RectCount(this.h))
}

func (this *QRegion) OperatorBitwiseOr(r *QRegion) *QRegion {
	_ret := C.QRegion_OperatorBitwiseOr(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorPlus(r *QRegion) *QRegion {
	_ret := C.QRegion_OperatorPlus(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorPlusWithQRect(r *QRect) *QRegion {
	_ret := C.QRegion_OperatorPlusWithQRect(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseAnd(r *QRegion) *QRegion {
	_ret := C.QRegion_OperatorBitwiseAnd(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseAndWithQRect(r *QRect) *QRegion {
	_ret := C.QRegion_OperatorBitwiseAndWithQRect(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorMinus(r *QRegion) *QRegion {
	_ret := C.QRegion_OperatorMinus(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseNot(r *QRegion) *QRegion {
	_ret := C.QRegion_OperatorBitwiseNot(this.h, r.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QRegion) OperatorBitwiseOrAssign(r *QRegion) {
	C.QRegion_OperatorBitwiseOrAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorPlusAssign(r *QRegion) *QRegion {
	return UnsafeNewQRegion(unsafe.Pointer(C.QRegion_OperatorPlusAssign(this.h, r.cPointer())))
}

func (this *QRegion) OperatorPlusAssignWithQRect(r *QRect) *QRegion {
	return UnsafeNewQRegion(unsafe.Pointer(C.QRegion_OperatorPlusAssignWithQRect(this.h, r.cPointer())))
}

func (this *QRegion) OperatorBitwiseAndAssign(r *QRegion) {
	C.QRegion_OperatorBitwiseAndAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorBitwiseAndAssignWithQRect(r *QRect) {
	C.QRegion_OperatorBitwiseAndAssignWithQRect(this.h, r.cPointer())
}

func (this *QRegion) OperatorMinusAssign(r *QRegion) *QRegion {
	return UnsafeNewQRegion(unsafe.Pointer(C.QRegion_OperatorMinusAssign(this.h, r.cPointer())))
}

func (this *QRegion) OperatorBitwiseNotAssign(r *QRegion) {
	C.QRegion_OperatorBitwiseNotAssign(this.h, r.cPointer())
}

func (this *QRegion) OperatorEqual(r *QRegion) bool {
	return (bool)(C.QRegion_OperatorEqual(this.h, r.cPointer()))
}

func (this *QRegion) OperatorNotEqual(r *QRegion) bool {
	return (bool)(C.QRegion_OperatorNotEqual(this.h, r.cPointer()))
}

// Delete this object from C++ memory.
func (this *QRegion) Delete() {
	C.QRegion_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRegion) GoGC() {
	runtime.SetFinalizer(this, func(this *QRegion) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
