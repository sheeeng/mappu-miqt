package qt6

/*

#include "gen_qtestsupport_gui.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTest__QTouchEventSequence struct {
	h *C.QTest__QTouchEventSequence
}

func (this *QTest__QTouchEventSequence) cPointer() *C.QTest__QTouchEventSequence {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTest__QTouchEventSequence) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTest__QTouchEventSequence(h *C.QTest__QTouchEventSequence) *QTest__QTouchEventSequence {
	if h == nil {
		return nil
	}
	return &QTest__QTouchEventSequence{h: h}
}

func UnsafeNewQTest__QTouchEventSequence(h unsafe.Pointer) *QTest__QTouchEventSequence {
	return newQTest__QTouchEventSequence((*C.QTest__QTouchEventSequence)(h))
}

func (this *QTest__QTouchEventSequence) Press(touchId int, pt *QPoint) *QTest__QTouchEventSequence {
	return UnsafeNewQTest__QTouchEventSequence(unsafe.Pointer(C.QTest__QTouchEventSequence_Press(this.h, (C.int)(touchId), pt.cPointer())))
}

func (this *QTest__QTouchEventSequence) Move(touchId int, pt *QPoint) *QTest__QTouchEventSequence {
	return UnsafeNewQTest__QTouchEventSequence(unsafe.Pointer(C.QTest__QTouchEventSequence_Move(this.h, (C.int)(touchId), pt.cPointer())))
}

func (this *QTest__QTouchEventSequence) Release(touchId int, pt *QPoint) *QTest__QTouchEventSequence {
	return UnsafeNewQTest__QTouchEventSequence(unsafe.Pointer(C.QTest__QTouchEventSequence_Release(this.h, (C.int)(touchId), pt.cPointer())))
}

func (this *QTest__QTouchEventSequence) Stationary(touchId int) *QTest__QTouchEventSequence {
	return UnsafeNewQTest__QTouchEventSequence(unsafe.Pointer(C.QTest__QTouchEventSequence_Stationary(this.h, (C.int)(touchId))))
}

func (this *QTest__QTouchEventSequence) Commit() bool {
	return (bool)(C.QTest__QTouchEventSequence_Commit(this.h))
}

func (this *QTest__QTouchEventSequence) Press3(touchId int, pt *QPoint, window *QWindow) *QTest__QTouchEventSequence {
	return UnsafeNewQTest__QTouchEventSequence(unsafe.Pointer(C.QTest__QTouchEventSequence_Press3(this.h, (C.int)(touchId), pt.cPointer(), window.cPointer())))
}

func (this *QTest__QTouchEventSequence) Move3(touchId int, pt *QPoint, window *QWindow) *QTest__QTouchEventSequence {
	return UnsafeNewQTest__QTouchEventSequence(unsafe.Pointer(C.QTest__QTouchEventSequence_Move3(this.h, (C.int)(touchId), pt.cPointer(), window.cPointer())))
}

func (this *QTest__QTouchEventSequence) Release3(touchId int, pt *QPoint, window *QWindow) *QTest__QTouchEventSequence {
	return UnsafeNewQTest__QTouchEventSequence(unsafe.Pointer(C.QTest__QTouchEventSequence_Release3(this.h, (C.int)(touchId), pt.cPointer(), window.cPointer())))
}

func (this *QTest__QTouchEventSequence) Commit1(processEvents bool) bool {
	return (bool)(C.QTest__QTouchEventSequence_Commit1(this.h, (C.bool)(processEvents)))
}

// Delete this object from C++ memory.
func (this *QTest__QTouchEventSequence) Delete() {
	C.QTest__QTouchEventSequence_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTest__QTouchEventSequence) GoGC() {
	runtime.SetFinalizer(this, func(this *QTest__QTouchEventSequence) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}