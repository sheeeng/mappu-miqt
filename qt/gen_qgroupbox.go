package qt

/*

#include "gen_qgroupbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGroupBox struct {
	h *C.QGroupBox
	*QWidget
}

func (this *QGroupBox) cPointer() *C.QGroupBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGroupBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGroupBox(h *C.QGroupBox) *QGroupBox {
	if h == nil {
		return nil
	}
	return &QGroupBox{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQGroupBox(h unsafe.Pointer) *QGroupBox {
	return newQGroupBox((*C.QGroupBox)(h))
}

// NewQGroupBox constructs a new QGroupBox object.
func NewQGroupBox(parent *QWidget) *QGroupBox {
	ret := C.QGroupBox_new(parent.cPointer())
	return newQGroupBox(ret)
}

// NewQGroupBox2 constructs a new QGroupBox object.
func NewQGroupBox2() *QGroupBox {
	ret := C.QGroupBox_new2()
	return newQGroupBox(ret)
}

// NewQGroupBox3 constructs a new QGroupBox object.
func NewQGroupBox3(title string) *QGroupBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	ret := C.QGroupBox_new3(title_ms)
	return newQGroupBox(ret)
}

// NewQGroupBox4 constructs a new QGroupBox object.
func NewQGroupBox4(title string, parent *QWidget) *QGroupBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	ret := C.QGroupBox_new4(title_ms, parent.cPointer())
	return newQGroupBox(ret)
}

func (this *QGroupBox) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGroupBox_MetaObject(this.h)))
}

func (this *QGroupBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGroupBox_Metacast(this.h, param1_Cstring))
}

func QGroupBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGroupBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGroupBox) Title() string {
	var _ms C.struct_miqt_string = C.QGroupBox_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGroupBox) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QGroupBox_SetTitle(this.h, title_ms)
}

func (this *QGroupBox) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QGroupBox_Alignment(this.h))
}

func (this *QGroupBox) SetAlignment(alignment int) {
	C.QGroupBox_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QGroupBox) MinimumSizeHint() *QSize {
	_ret := C.QGroupBox_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGroupBox) IsFlat() bool {
	return (bool)(C.QGroupBox_IsFlat(this.h))
}

func (this *QGroupBox) SetFlat(flat bool) {
	C.QGroupBox_SetFlat(this.h, (C.bool)(flat))
}

func (this *QGroupBox) IsCheckable() bool {
	return (bool)(C.QGroupBox_IsCheckable(this.h))
}

func (this *QGroupBox) SetCheckable(checkable bool) {
	C.QGroupBox_SetCheckable(this.h, (C.bool)(checkable))
}

func (this *QGroupBox) IsChecked() bool {
	return (bool)(C.QGroupBox_IsChecked(this.h))
}

func (this *QGroupBox) SetChecked(checked bool) {
	C.QGroupBox_SetChecked(this.h, (C.bool)(checked))
}

func (this *QGroupBox) Clicked() {
	C.QGroupBox_Clicked(this.h)
}
func (this *QGroupBox) OnClicked(slot func()) {
	C.QGroupBox_connect_Clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_Clicked
func miqt_exec_callback_QGroupBox_Clicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGroupBox) Toggled(param1 bool) {
	C.QGroupBox_Toggled(this.h, (C.bool)(param1))
}
func (this *QGroupBox) OnToggled(slot func(param1 bool)) {
	C.QGroupBox_connect_Toggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_Toggled
func miqt_exec_callback_QGroupBox_Toggled(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func QGroupBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGroupBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGroupBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGroupBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGroupBox) Clicked1(checked bool) {
	C.QGroupBox_Clicked1(this.h, (C.bool)(checked))
}
func (this *QGroupBox) OnClicked1(slot func(checked bool)) {
	C.QGroupBox_connect_Clicked1(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_Clicked1
func miqt_exec_callback_QGroupBox_Clicked1(cb C.intptr_t, checked C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checked)

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QGroupBox) Delete() {
	C.QGroupBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGroupBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QGroupBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
