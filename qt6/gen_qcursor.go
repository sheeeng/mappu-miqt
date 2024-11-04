package qt6

/*

#include "gen_qcursor.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCursor struct {
	h *C.QCursor
}

func (this *QCursor) cPointer() *C.QCursor {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCursor) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCursor(h *C.QCursor) *QCursor {
	if h == nil {
		return nil
	}
	return &QCursor{h: h}
}

func UnsafeNewQCursor(h unsafe.Pointer) *QCursor {
	return newQCursor((*C.QCursor)(h))
}

// NewQCursor constructs a new QCursor object.
func NewQCursor() *QCursor {
	ret := C.QCursor_new()
	return newQCursor(ret)
}

// NewQCursor2 constructs a new QCursor object.
func NewQCursor2(shape CursorShape) *QCursor {
	ret := C.QCursor_new2((C.int)(shape))
	return newQCursor(ret)
}

// NewQCursor3 constructs a new QCursor object.
func NewQCursor3(bitmap *QBitmap, mask *QBitmap) *QCursor {
	ret := C.QCursor_new3(bitmap.cPointer(), mask.cPointer())
	return newQCursor(ret)
}

// NewQCursor4 constructs a new QCursor object.
func NewQCursor4(pixmap *QPixmap) *QCursor {
	ret := C.QCursor_new4(pixmap.cPointer())
	return newQCursor(ret)
}

// NewQCursor5 constructs a new QCursor object.
func NewQCursor5(cursor *QCursor) *QCursor {
	ret := C.QCursor_new5(cursor.cPointer())
	return newQCursor(ret)
}

// NewQCursor6 constructs a new QCursor object.
func NewQCursor6(bitmap *QBitmap, mask *QBitmap, hotX int) *QCursor {
	ret := C.QCursor_new6(bitmap.cPointer(), mask.cPointer(), (C.int)(hotX))
	return newQCursor(ret)
}

// NewQCursor7 constructs a new QCursor object.
func NewQCursor7(bitmap *QBitmap, mask *QBitmap, hotX int, hotY int) *QCursor {
	ret := C.QCursor_new7(bitmap.cPointer(), mask.cPointer(), (C.int)(hotX), (C.int)(hotY))
	return newQCursor(ret)
}

// NewQCursor8 constructs a new QCursor object.
func NewQCursor8(pixmap *QPixmap, hotX int) *QCursor {
	ret := C.QCursor_new8(pixmap.cPointer(), (C.int)(hotX))
	return newQCursor(ret)
}

// NewQCursor9 constructs a new QCursor object.
func NewQCursor9(pixmap *QPixmap, hotX int, hotY int) *QCursor {
	ret := C.QCursor_new9(pixmap.cPointer(), (C.int)(hotX), (C.int)(hotY))
	return newQCursor(ret)
}

func (this *QCursor) OperatorAssign(cursor *QCursor) {
	C.QCursor_OperatorAssign(this.h, cursor.cPointer())
}

func (this *QCursor) Swap(other *QCursor) {
	C.QCursor_Swap(this.h, other.cPointer())
}

func (this *QCursor) Shape() CursorShape {
	return (CursorShape)(C.QCursor_Shape(this.h))
}

func (this *QCursor) SetShape(newShape CursorShape) {
	C.QCursor_SetShape(this.h, (C.int)(newShape))
}

func (this *QCursor) Bitmap(param1 ReturnByValueConstant) *QBitmap {
	_ret := C.QCursor_Bitmap(this.h, (C.int)(param1))
	_goptr := newQBitmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Mask(param1 ReturnByValueConstant) *QBitmap {
	_ret := C.QCursor_Mask(this.h, (C.int)(param1))
	_goptr := newQBitmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Bitmap2() *QBitmap {
	_ret := C.QCursor_Bitmap2(this.h)
	_goptr := newQBitmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Mask2() *QBitmap {
	_ret := C.QCursor_Mask2(this.h)
	_goptr := newQBitmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) Pixmap() *QPixmap {
	_ret := C.QCursor_Pixmap(this.h)
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCursor) HotSpot() *QPoint {
	_ret := C.QCursor_HotSpot(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCursor_Pos() *QPoint {
	_ret := C.QCursor_Pos()
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCursor_PosWithScreen(screen *QScreen) *QPoint {
	_ret := C.QCursor_PosWithScreen(screen.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QCursor_SetPos(x int, y int) {
	C.QCursor_SetPos((C.int)(x), (C.int)(y))
}

func QCursor_SetPos2(screen *QScreen, x int, y int) {
	C.QCursor_SetPos2(screen.cPointer(), (C.int)(x), (C.int)(y))
}

func QCursor_SetPosWithQPoint(p *QPoint) {
	C.QCursor_SetPosWithQPoint(p.cPointer())
}

func QCursor_SetPos3(screen *QScreen, p *QPoint) {
	C.QCursor_SetPos3(screen.cPointer(), p.cPointer())
}

// Delete this object from C++ memory.
func (this *QCursor) Delete() {
	C.QCursor_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCursor) GoGC() {
	runtime.SetFinalizer(this, func(this *QCursor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}