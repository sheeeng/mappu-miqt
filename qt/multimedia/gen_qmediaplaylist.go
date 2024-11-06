package multimedia

/*

#include "gen_qmediaplaylist.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaPlaylist__PlaybackMode int

const (
	QMediaPlaylist__CurrentItemOnce   QMediaPlaylist__PlaybackMode = 0
	QMediaPlaylist__CurrentItemInLoop QMediaPlaylist__PlaybackMode = 1
	QMediaPlaylist__Sequential        QMediaPlaylist__PlaybackMode = 2
	QMediaPlaylist__Loop              QMediaPlaylist__PlaybackMode = 3
	QMediaPlaylist__Random            QMediaPlaylist__PlaybackMode = 4
)

type QMediaPlaylist__Error int

const (
	QMediaPlaylist__NoError                 QMediaPlaylist__Error = 0
	QMediaPlaylist__FormatError             QMediaPlaylist__Error = 1
	QMediaPlaylist__FormatNotSupportedError QMediaPlaylist__Error = 2
	QMediaPlaylist__NetworkError            QMediaPlaylist__Error = 3
	QMediaPlaylist__AccessDeniedError       QMediaPlaylist__Error = 4
)

type QMediaPlaylist struct {
	h *C.QMediaPlaylist
	*qt.QObject
	*QMediaBindableInterface
}

func (this *QMediaPlaylist) cPointer() *C.QMediaPlaylist {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaPlaylist) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQMediaPlaylist(h *C.QMediaPlaylist) *QMediaPlaylist {
	if h == nil {
		return nil
	}
	return &QMediaPlaylist{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h)), QMediaBindableInterface: UnsafeNewQMediaBindableInterface(unsafe.Pointer(h))}
}

func UnsafeNewQMediaPlaylist(h unsafe.Pointer) *QMediaPlaylist {
	return newQMediaPlaylist((*C.QMediaPlaylist)(h))
}

// NewQMediaPlaylist constructs a new QMediaPlaylist object.
func NewQMediaPlaylist() *QMediaPlaylist {
	ret := C.QMediaPlaylist_new()
	return newQMediaPlaylist(ret)
}

// NewQMediaPlaylist2 constructs a new QMediaPlaylist object.
func NewQMediaPlaylist2(parent *qt.QObject) *QMediaPlaylist {
	ret := C.QMediaPlaylist_new2((*C.QObject)(parent.UnsafePointer()))
	return newQMediaPlaylist(ret)
}

func (this *QMediaPlaylist) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaPlaylist_MetaObject(this.h)))
}

func (this *QMediaPlaylist) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaPlaylist_Metacast(this.h, param1_Cstring))
}

func QMediaPlaylist_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlaylist_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlaylist_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlaylist_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlaylist) MediaObject() *QMediaObject {
	return UnsafeNewQMediaObject(unsafe.Pointer(C.QMediaPlaylist_MediaObject(this.h)))
}

func (this *QMediaPlaylist) PlaybackMode() QMediaPlaylist__PlaybackMode {
	return (QMediaPlaylist__PlaybackMode)(C.QMediaPlaylist_PlaybackMode(this.h))
}

func (this *QMediaPlaylist) SetPlaybackMode(mode QMediaPlaylist__PlaybackMode) {
	C.QMediaPlaylist_SetPlaybackMode(this.h, (C.int)(mode))
}

func (this *QMediaPlaylist) CurrentIndex() int {
	return (int)(C.QMediaPlaylist_CurrentIndex(this.h))
}

func (this *QMediaPlaylist) CurrentMedia() *QMediaContent {
	_ret := C.QMediaPlaylist_CurrentMedia(this.h)
	_goptr := newQMediaContent(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlaylist) NextIndex() int {
	return (int)(C.QMediaPlaylist_NextIndex(this.h))
}

func (this *QMediaPlaylist) PreviousIndex() int {
	return (int)(C.QMediaPlaylist_PreviousIndex(this.h))
}

func (this *QMediaPlaylist) Media(index int) *QMediaContent {
	_ret := C.QMediaPlaylist_Media(this.h, (C.int)(index))
	_goptr := newQMediaContent(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaPlaylist) MediaCount() int {
	return (int)(C.QMediaPlaylist_MediaCount(this.h))
}

func (this *QMediaPlaylist) IsEmpty() bool {
	return (bool)(C.QMediaPlaylist_IsEmpty(this.h))
}

func (this *QMediaPlaylist) IsReadOnly() bool {
	return (bool)(C.QMediaPlaylist_IsReadOnly(this.h))
}

func (this *QMediaPlaylist) AddMedia(content *QMediaContent) bool {
	return (bool)(C.QMediaPlaylist_AddMedia(this.h, content.cPointer()))
}

func (this *QMediaPlaylist) AddMediaWithItems(items []QMediaContent) bool {
	items_CArray := (*[0xffff]*C.QMediaContent)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	return (bool)(C.QMediaPlaylist_AddMediaWithItems(this.h, items_ma))
}

func (this *QMediaPlaylist) InsertMedia(index int, content *QMediaContent) bool {
	return (bool)(C.QMediaPlaylist_InsertMedia(this.h, (C.int)(index), content.cPointer()))
}

func (this *QMediaPlaylist) InsertMedia2(index int, items []QMediaContent) bool {
	items_CArray := (*[0xffff]*C.QMediaContent)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	return (bool)(C.QMediaPlaylist_InsertMedia2(this.h, (C.int)(index), items_ma))
}

func (this *QMediaPlaylist) MoveMedia(from int, to int) bool {
	return (bool)(C.QMediaPlaylist_MoveMedia(this.h, (C.int)(from), (C.int)(to)))
}

func (this *QMediaPlaylist) RemoveMedia(pos int) bool {
	return (bool)(C.QMediaPlaylist_RemoveMedia(this.h, (C.int)(pos)))
}

func (this *QMediaPlaylist) RemoveMedia2(start int, end int) bool {
	return (bool)(C.QMediaPlaylist_RemoveMedia2(this.h, (C.int)(start), (C.int)(end)))
}

func (this *QMediaPlaylist) Clear() bool {
	return (bool)(C.QMediaPlaylist_Clear(this.h))
}

func (this *QMediaPlaylist) Load(request *network.QNetworkRequest) {
	C.QMediaPlaylist_Load(this.h, (*C.QNetworkRequest)(request.UnsafePointer()))
}

func (this *QMediaPlaylist) LoadWithLocation(location *qt.QUrl) {
	C.QMediaPlaylist_LoadWithLocation(this.h, (*C.QUrl)(location.UnsafePointer()))
}

func (this *QMediaPlaylist) LoadWithDevice(device *qt.QIODevice) {
	C.QMediaPlaylist_LoadWithDevice(this.h, (*C.QIODevice)(device.UnsafePointer()))
}

func (this *QMediaPlaylist) Save(location *qt.QUrl) bool {
	return (bool)(C.QMediaPlaylist_Save(this.h, (*C.QUrl)(location.UnsafePointer())))
}

func (this *QMediaPlaylist) Save2(device *qt.QIODevice, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QMediaPlaylist_Save2(this.h, (*C.QIODevice)(device.UnsafePointer()), format_Cstring))
}

func (this *QMediaPlaylist) Error() QMediaPlaylist__Error {
	return (QMediaPlaylist__Error)(C.QMediaPlaylist_Error(this.h))
}

func (this *QMediaPlaylist) ErrorString() string {
	var _ms C.struct_miqt_string = C.QMediaPlaylist_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlaylist) Shuffle() {
	C.QMediaPlaylist_Shuffle(this.h)
}

func (this *QMediaPlaylist) Next() {
	C.QMediaPlaylist_Next(this.h)
}

func (this *QMediaPlaylist) Previous() {
	C.QMediaPlaylist_Previous(this.h)
}

func (this *QMediaPlaylist) SetCurrentIndex(index int) {
	C.QMediaPlaylist_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QMediaPlaylist) CurrentIndexChanged(index int) {
	C.QMediaPlaylist_CurrentIndexChanged(this.h, (C.int)(index))
}
func (this *QMediaPlaylist) OnCurrentIndexChanged(slot func(index int)) {
	C.QMediaPlaylist_connect_CurrentIndexChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_CurrentIndexChanged
func miqt_exec_callback_QMediaPlaylist_CurrentIndexChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QMediaPlaylist) PlaybackModeChanged(mode QMediaPlaylist__PlaybackMode) {
	C.QMediaPlaylist_PlaybackModeChanged(this.h, (C.int)(mode))
}
func (this *QMediaPlaylist) OnPlaybackModeChanged(slot func(mode QMediaPlaylist__PlaybackMode)) {
	C.QMediaPlaylist_connect_PlaybackModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_PlaybackModeChanged
func miqt_exec_callback_QMediaPlaylist_PlaybackModeChanged(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode QMediaPlaylist__PlaybackMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QMediaPlaylist__PlaybackMode)(mode)

	gofunc(slotval1)
}

func (this *QMediaPlaylist) CurrentMediaChanged(param1 *QMediaContent) {
	C.QMediaPlaylist_CurrentMediaChanged(this.h, param1.cPointer())
}
func (this *QMediaPlaylist) OnCurrentMediaChanged(slot func(param1 *QMediaContent)) {
	C.QMediaPlaylist_connect_CurrentMediaChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_CurrentMediaChanged
func miqt_exec_callback_QMediaPlaylist_CurrentMediaChanged(cb C.intptr_t, param1 *C.QMediaContent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QMediaContent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMediaContent(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QMediaPlaylist) MediaAboutToBeInserted(start int, end int) {
	C.QMediaPlaylist_MediaAboutToBeInserted(this.h, (C.int)(start), (C.int)(end))
}
func (this *QMediaPlaylist) OnMediaAboutToBeInserted(slot func(start int, end int)) {
	C.QMediaPlaylist_connect_MediaAboutToBeInserted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_MediaAboutToBeInserted
func miqt_exec_callback_QMediaPlaylist_MediaAboutToBeInserted(cb C.intptr_t, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(start)

	slotval2 := (int)(end)

	gofunc(slotval1, slotval2)
}

func (this *QMediaPlaylist) MediaInserted(start int, end int) {
	C.QMediaPlaylist_MediaInserted(this.h, (C.int)(start), (C.int)(end))
}
func (this *QMediaPlaylist) OnMediaInserted(slot func(start int, end int)) {
	C.QMediaPlaylist_connect_MediaInserted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_MediaInserted
func miqt_exec_callback_QMediaPlaylist_MediaInserted(cb C.intptr_t, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(start)

	slotval2 := (int)(end)

	gofunc(slotval1, slotval2)
}

func (this *QMediaPlaylist) MediaAboutToBeRemoved(start int, end int) {
	C.QMediaPlaylist_MediaAboutToBeRemoved(this.h, (C.int)(start), (C.int)(end))
}
func (this *QMediaPlaylist) OnMediaAboutToBeRemoved(slot func(start int, end int)) {
	C.QMediaPlaylist_connect_MediaAboutToBeRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_MediaAboutToBeRemoved
func miqt_exec_callback_QMediaPlaylist_MediaAboutToBeRemoved(cb C.intptr_t, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(start)

	slotval2 := (int)(end)

	gofunc(slotval1, slotval2)
}

func (this *QMediaPlaylist) MediaRemoved(start int, end int) {
	C.QMediaPlaylist_MediaRemoved(this.h, (C.int)(start), (C.int)(end))
}
func (this *QMediaPlaylist) OnMediaRemoved(slot func(start int, end int)) {
	C.QMediaPlaylist_connect_MediaRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_MediaRemoved
func miqt_exec_callback_QMediaPlaylist_MediaRemoved(cb C.intptr_t, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(start)

	slotval2 := (int)(end)

	gofunc(slotval1, slotval2)
}

func (this *QMediaPlaylist) MediaChanged(start int, end int) {
	C.QMediaPlaylist_MediaChanged(this.h, (C.int)(start), (C.int)(end))
}
func (this *QMediaPlaylist) OnMediaChanged(slot func(start int, end int)) {
	C.QMediaPlaylist_connect_MediaChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_MediaChanged
func miqt_exec_callback_QMediaPlaylist_MediaChanged(cb C.intptr_t, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(start)

	slotval2 := (int)(end)

	gofunc(slotval1, slotval2)
}

func (this *QMediaPlaylist) Loaded() {
	C.QMediaPlaylist_Loaded(this.h)
}
func (this *QMediaPlaylist) OnLoaded(slot func()) {
	C.QMediaPlaylist_connect_Loaded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_Loaded
func miqt_exec_callback_QMediaPlaylist_Loaded(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMediaPlaylist) LoadFailed() {
	C.QMediaPlaylist_LoadFailed(this.h)
}
func (this *QMediaPlaylist) OnLoadFailed(slot func()) {
	C.QMediaPlaylist_connect_LoadFailed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaPlaylist_LoadFailed
func miqt_exec_callback_QMediaPlaylist_LoadFailed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QMediaPlaylist_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlaylist_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlaylist_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlaylist_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlaylist_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlaylist_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaPlaylist_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaPlaylist_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaPlaylist) NextIndex1(steps int) int {
	return (int)(C.QMediaPlaylist_NextIndex1(this.h, (C.int)(steps)))
}

func (this *QMediaPlaylist) PreviousIndex1(steps int) int {
	return (int)(C.QMediaPlaylist_PreviousIndex1(this.h, (C.int)(steps)))
}

func (this *QMediaPlaylist) Load2(request *network.QNetworkRequest, format string) {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	C.QMediaPlaylist_Load2(this.h, (*C.QNetworkRequest)(request.UnsafePointer()), format_Cstring)
}

func (this *QMediaPlaylist) Load22(location *qt.QUrl, format string) {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	C.QMediaPlaylist_Load22(this.h, (*C.QUrl)(location.UnsafePointer()), format_Cstring)
}

func (this *QMediaPlaylist) Load23(device *qt.QIODevice, format string) {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	C.QMediaPlaylist_Load23(this.h, (*C.QIODevice)(device.UnsafePointer()), format_Cstring)
}

func (this *QMediaPlaylist) Save22(location *qt.QUrl, format string) bool {
	format_Cstring := C.CString(format)
	defer C.free(unsafe.Pointer(format_Cstring))
	return (bool)(C.QMediaPlaylist_Save22(this.h, (*C.QUrl)(location.UnsafePointer()), format_Cstring))
}

// Delete this object from C++ memory.
func (this *QMediaPlaylist) Delete() {
	C.QMediaPlaylist_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaPlaylist) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaPlaylist) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}