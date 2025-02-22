package qt6

/*

#include "gen_qguiapplication.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGuiApplication struct {
	h *C.QGuiApplication
	*QCoreApplication
}

func (this *QGuiApplication) cPointer() *C.QGuiApplication {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGuiApplication) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGuiApplication constructs the type using only CGO pointers.
func newQGuiApplication(h *C.QGuiApplication) *QGuiApplication {
	if h == nil {
		return nil
	}
	var outptr_QCoreApplication *C.QCoreApplication = nil
	C.QGuiApplication_virtbase(h, &outptr_QCoreApplication)

	return &QGuiApplication{h: h,
		QCoreApplication: newQCoreApplication(outptr_QCoreApplication)}
}

// UnsafeNewQGuiApplication constructs the type using only unsafe pointers.
func UnsafeNewQGuiApplication(h unsafe.Pointer) *QGuiApplication {
	return newQGuiApplication((*C.QGuiApplication)(h))
}

// NewQGuiApplication constructs a new QGuiApplication object.
func NewQGuiApplication(args []string) *QGuiApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	return newQGuiApplication(C.QGuiApplication_new(argc, &argv[0]))
}

// NewQGuiApplication2 constructs a new QGuiApplication object.
func NewQGuiApplication2(args []string, param3 int) *QGuiApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	return newQGuiApplication(C.QGuiApplication_new2(argc, &argv[0], (C.int)(param3)))
}

func (this *QGuiApplication) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGuiApplication_MetaObject(this.h))
}

func (this *QGuiApplication) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGuiApplication_Metacast(this.h, param1_Cstring))
}

func QGuiApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGuiApplication_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_SetApplicationDisplayName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QGuiApplication_SetApplicationDisplayName(name_ms)
}

func QGuiApplication_ApplicationDisplayName() string {
	var _ms C.struct_miqt_string = C.QGuiApplication_ApplicationDisplayName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_SetDesktopFileName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QGuiApplication_SetDesktopFileName(name_ms)
}

func QGuiApplication_DesktopFileName() string {
	var _ms C.struct_miqt_string = C.QGuiApplication_DesktopFileName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_AllWindows() []*QWindow {
	var _ma C.struct_miqt_array = C.QGuiApplication_AllWindows()
	_ret := make([]*QWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWindow(_outCast[i])
	}
	return _ret
}

func QGuiApplication_TopLevelWindows() []*QWindow {
	var _ma C.struct_miqt_array = C.QGuiApplication_TopLevelWindows()
	_ret := make([]*QWindow, int(_ma.len))
	_outCast := (*[0xffff]*C.QWindow)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQWindow(_outCast[i])
	}
	return _ret
}

func QGuiApplication_TopLevelAt(pos *QPoint) *QWindow {
	return newQWindow(C.QGuiApplication_TopLevelAt(pos.cPointer()))
}

func QGuiApplication_SetWindowIcon(icon *QIcon) {
	C.QGuiApplication_SetWindowIcon(icon.cPointer())
}

func QGuiApplication_WindowIcon() *QIcon {
	_goptr := newQIcon(C.QGuiApplication_WindowIcon())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGuiApplication_PlatformName() string {
	var _ms C.struct_miqt_string = C.QGuiApplication_PlatformName()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_ModalWindow() *QWindow {
	return newQWindow(C.QGuiApplication_ModalWindow())
}

func QGuiApplication_FocusWindow() *QWindow {
	return newQWindow(C.QGuiApplication_FocusWindow())
}

func QGuiApplication_FocusObject() *QObject {
	return newQObject(C.QGuiApplication_FocusObject())
}

func QGuiApplication_PrimaryScreen() *QScreen {
	return newQScreen(C.QGuiApplication_PrimaryScreen())
}

func QGuiApplication_Screens() []*QScreen {
	var _ma C.struct_miqt_array = C.QGuiApplication_Screens()
	_ret := make([]*QScreen, int(_ma.len))
	_outCast := (*[0xffff]*C.QScreen)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQScreen(_outCast[i])
	}
	return _ret
}

func QGuiApplication_ScreenAt(point *QPoint) *QScreen {
	return newQScreen(C.QGuiApplication_ScreenAt(point.cPointer()))
}

func (this *QGuiApplication) DevicePixelRatio() float64 {
	return (float64)(C.QGuiApplication_DevicePixelRatio(this.h))
}

func QGuiApplication_OverrideCursor() *QCursor {
	return newQCursor(C.QGuiApplication_OverrideCursor())
}

func QGuiApplication_SetOverrideCursor(overrideCursor *QCursor) {
	C.QGuiApplication_SetOverrideCursor(overrideCursor.cPointer())
}

func QGuiApplication_ChangeOverrideCursor(param1 *QCursor) {
	C.QGuiApplication_ChangeOverrideCursor(param1.cPointer())
}

func QGuiApplication_RestoreOverrideCursor() {
	C.QGuiApplication_RestoreOverrideCursor()
}

func QGuiApplication_Font() *QFont {
	_goptr := newQFont(C.QGuiApplication_Font())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGuiApplication_SetFont(font *QFont) {
	C.QGuiApplication_SetFont(font.cPointer())
}

func QGuiApplication_Clipboard() *QClipboard {
	return newQClipboard(C.QGuiApplication_Clipboard())
}

func QGuiApplication_Palette() *QPalette {
	_goptr := newQPalette(C.QGuiApplication_Palette())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGuiApplication_SetPalette(pal *QPalette) {
	C.QGuiApplication_SetPalette(pal.cPointer())
}

func QGuiApplication_KeyboardModifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGuiApplication_KeyboardModifiers())
}

func QGuiApplication_QueryKeyboardModifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGuiApplication_QueryKeyboardModifiers())
}

func QGuiApplication_MouseButtons() MouseButton {
	return (MouseButton)(C.QGuiApplication_MouseButtons())
}

func QGuiApplication_SetLayoutDirection(direction LayoutDirection) {
	C.QGuiApplication_SetLayoutDirection((C.int)(direction))
}

func QGuiApplication_LayoutDirection() LayoutDirection {
	return (LayoutDirection)(C.QGuiApplication_LayoutDirection())
}

func QGuiApplication_IsRightToLeft() bool {
	return (bool)(C.QGuiApplication_IsRightToLeft())
}

func QGuiApplication_IsLeftToRight() bool {
	return (bool)(C.QGuiApplication_IsLeftToRight())
}

func QGuiApplication_StyleHints() *QStyleHints {
	return newQStyleHints(C.QGuiApplication_StyleHints())
}

func QGuiApplication_SetDesktopSettingsAware(on bool) {
	C.QGuiApplication_SetDesktopSettingsAware((C.bool)(on))
}

func QGuiApplication_DesktopSettingsAware() bool {
	return (bool)(C.QGuiApplication_DesktopSettingsAware())
}

func QGuiApplication_InputMethod() *QInputMethod {
	return newQInputMethod(C.QGuiApplication_InputMethod())
}

func QGuiApplication_SetQuitOnLastWindowClosed(quit bool) {
	C.QGuiApplication_SetQuitOnLastWindowClosed((C.bool)(quit))
}

func QGuiApplication_QuitOnLastWindowClosed() bool {
	return (bool)(C.QGuiApplication_QuitOnLastWindowClosed())
}

func QGuiApplication_ApplicationState() ApplicationState {
	return (ApplicationState)(C.QGuiApplication_ApplicationState())
}

func QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(policy HighDpiScaleFactorRoundingPolicy) {
	C.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy((C.int)(policy))
}

func QGuiApplication_HighDpiScaleFactorRoundingPolicy() HighDpiScaleFactorRoundingPolicy {
	return (HighDpiScaleFactorRoundingPolicy)(C.QGuiApplication_HighDpiScaleFactorRoundingPolicy())
}

func QGuiApplication_Exec() int {
	return (int)(C.QGuiApplication_Exec())
}

func (this *QGuiApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	return (bool)(C.QGuiApplication_Notify(this.h, param1.cPointer(), param2.cPointer()))
}

func (this *QGuiApplication) IsSessionRestored() bool {
	return (bool)(C.QGuiApplication_IsSessionRestored(this.h))
}

func (this *QGuiApplication) SessionId() string {
	var _ms C.struct_miqt_string = C.QGuiApplication_SessionId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGuiApplication) SessionKey() string {
	var _ms C.struct_miqt_string = C.QGuiApplication_SessionKey(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGuiApplication) IsSavingSession() bool {
	return (bool)(C.QGuiApplication_IsSavingSession(this.h))
}

func QGuiApplication_Sync() {
	C.QGuiApplication_Sync()
}

func (this *QGuiApplication) FontDatabaseChanged() {
	C.QGuiApplication_FontDatabaseChanged(this.h)
}
func (this *QGuiApplication) OnFontDatabaseChanged(slot func()) {
	C.QGuiApplication_connect_FontDatabaseChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_FontDatabaseChanged
func miqt_exec_callback_QGuiApplication_FontDatabaseChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGuiApplication) ScreenAdded(screen *QScreen) {
	C.QGuiApplication_ScreenAdded(this.h, screen.cPointer())
}
func (this *QGuiApplication) OnScreenAdded(slot func(screen *QScreen)) {
	C.QGuiApplication_connect_ScreenAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_ScreenAdded
func miqt_exec_callback_QGuiApplication_ScreenAdded(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScreen(screen)

	gofunc(slotval1)
}

func (this *QGuiApplication) ScreenRemoved(screen *QScreen) {
	C.QGuiApplication_ScreenRemoved(this.h, screen.cPointer())
}
func (this *QGuiApplication) OnScreenRemoved(slot func(screen *QScreen)) {
	C.QGuiApplication_connect_ScreenRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_ScreenRemoved
func miqt_exec_callback_QGuiApplication_ScreenRemoved(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScreen(screen)

	gofunc(slotval1)
}

func (this *QGuiApplication) PrimaryScreenChanged(screen *QScreen) {
	C.QGuiApplication_PrimaryScreenChanged(this.h, screen.cPointer())
}
func (this *QGuiApplication) OnPrimaryScreenChanged(slot func(screen *QScreen)) {
	C.QGuiApplication_connect_PrimaryScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_PrimaryScreenChanged
func miqt_exec_callback_QGuiApplication_PrimaryScreenChanged(cb C.intptr_t, screen *C.QScreen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(screen *QScreen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQScreen(screen)

	gofunc(slotval1)
}

func (this *QGuiApplication) LastWindowClosed() {
	C.QGuiApplication_LastWindowClosed(this.h)
}
func (this *QGuiApplication) OnLastWindowClosed(slot func()) {
	C.QGuiApplication_connect_LastWindowClosed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_LastWindowClosed
func miqt_exec_callback_QGuiApplication_LastWindowClosed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGuiApplication) FocusObjectChanged(focusObject *QObject) {
	C.QGuiApplication_FocusObjectChanged(this.h, focusObject.cPointer())
}
func (this *QGuiApplication) OnFocusObjectChanged(slot func(focusObject *QObject)) {
	C.QGuiApplication_connect_FocusObjectChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_FocusObjectChanged
func miqt_exec_callback_QGuiApplication_FocusObjectChanged(cb C.intptr_t, focusObject *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(focusObject *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(focusObject)

	gofunc(slotval1)
}

func (this *QGuiApplication) FocusWindowChanged(focusWindow *QWindow) {
	C.QGuiApplication_FocusWindowChanged(this.h, focusWindow.cPointer())
}
func (this *QGuiApplication) OnFocusWindowChanged(slot func(focusWindow *QWindow)) {
	C.QGuiApplication_connect_FocusWindowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_FocusWindowChanged
func miqt_exec_callback_QGuiApplication_FocusWindowChanged(cb C.intptr_t, focusWindow *C.QWindow) {
	gofunc, ok := cgo.Handle(cb).Value().(func(focusWindow *QWindow))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWindow(focusWindow)

	gofunc(slotval1)
}

func (this *QGuiApplication) ApplicationStateChanged(state ApplicationState) {
	C.QGuiApplication_ApplicationStateChanged(this.h, (C.int)(state))
}
func (this *QGuiApplication) OnApplicationStateChanged(slot func(state ApplicationState)) {
	C.QGuiApplication_connect_ApplicationStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_ApplicationStateChanged
func miqt_exec_callback_QGuiApplication_ApplicationStateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state ApplicationState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ApplicationState)(state)

	gofunc(slotval1)
}

func (this *QGuiApplication) LayoutDirectionChanged(direction LayoutDirection) {
	C.QGuiApplication_LayoutDirectionChanged(this.h, (C.int)(direction))
}
func (this *QGuiApplication) OnLayoutDirectionChanged(slot func(direction LayoutDirection)) {
	C.QGuiApplication_connect_LayoutDirectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_LayoutDirectionChanged
func miqt_exec_callback_QGuiApplication_LayoutDirectionChanged(cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(direction LayoutDirection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (LayoutDirection)(direction)

	gofunc(slotval1)
}

func (this *QGuiApplication) CommitDataRequest(sessionManager *QSessionManager) {
	C.QGuiApplication_CommitDataRequest(this.h, sessionManager.cPointer())
}
func (this *QGuiApplication) OnCommitDataRequest(slot func(sessionManager *QSessionManager)) {
	C.QGuiApplication_connect_CommitDataRequest(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_CommitDataRequest
func miqt_exec_callback_QGuiApplication_CommitDataRequest(cb C.intptr_t, sessionManager *C.QSessionManager) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sessionManager *QSessionManager))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSessionManager(sessionManager)

	gofunc(slotval1)
}

func (this *QGuiApplication) SaveStateRequest(sessionManager *QSessionManager) {
	C.QGuiApplication_SaveStateRequest(this.h, sessionManager.cPointer())
}
func (this *QGuiApplication) OnSaveStateRequest(slot func(sessionManager *QSessionManager)) {
	C.QGuiApplication_connect_SaveStateRequest(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_SaveStateRequest
func miqt_exec_callback_QGuiApplication_SaveStateRequest(cb C.intptr_t, sessionManager *C.QSessionManager) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sessionManager *QSessionManager))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSessionManager(sessionManager)

	gofunc(slotval1)
}

func (this *QGuiApplication) ApplicationDisplayNameChanged() {
	C.QGuiApplication_ApplicationDisplayNameChanged(this.h)
}
func (this *QGuiApplication) OnApplicationDisplayNameChanged(slot func()) {
	C.QGuiApplication_connect_ApplicationDisplayNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_ApplicationDisplayNameChanged
func miqt_exec_callback_QGuiApplication_ApplicationDisplayNameChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGuiApplication) PaletteChanged(pal *QPalette) {
	C.QGuiApplication_PaletteChanged(this.h, pal.cPointer())
}
func (this *QGuiApplication) OnPaletteChanged(slot func(pal *QPalette)) {
	C.QGuiApplication_connect_PaletteChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_PaletteChanged
func miqt_exec_callback_QGuiApplication_PaletteChanged(cb C.intptr_t, pal *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pal *QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPalette(pal)

	gofunc(slotval1)
}

func (this *QGuiApplication) FontChanged(font *QFont) {
	C.QGuiApplication_FontChanged(this.h, font.cPointer())
}
func (this *QGuiApplication) OnFontChanged(slot func(font *QFont)) {
	C.QGuiApplication_connect_FontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGuiApplication_FontChanged
func miqt_exec_callback_QGuiApplication_FontChanged(cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFont(font)

	gofunc(slotval1)
}

func QGuiApplication_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGuiApplication_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGuiApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGuiApplication_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGuiApplication) callVirtualBase_Notify(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QGuiApplication_virtualbase_Notify(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QGuiApplication) OnNotify(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QGuiApplication_override_virtual_Notify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGuiApplication_Notify
func miqt_exec_callback_QGuiApplication_Notify(self *C.QGuiApplication, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QGuiApplication{h: self}).callVirtualBase_Notify, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGuiApplication) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QGuiApplication_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QGuiApplication) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QGuiApplication_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGuiApplication_Event
func miqt_exec_callback_QGuiApplication_Event(self *C.QGuiApplication, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QGuiApplication{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGuiApplication) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGuiApplication_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGuiApplication) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGuiApplication_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGuiApplication_EventFilter
func miqt_exec_callback_QGuiApplication_EventFilter(self *C.QGuiApplication, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGuiApplication{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGuiApplication) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGuiApplication_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGuiApplication) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGuiApplication_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGuiApplication_TimerEvent
func miqt_exec_callback_QGuiApplication_TimerEvent(self *C.QGuiApplication, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGuiApplication{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGuiApplication) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGuiApplication_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGuiApplication) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGuiApplication_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGuiApplication_ChildEvent
func miqt_exec_callback_QGuiApplication_ChildEvent(self *C.QGuiApplication, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGuiApplication{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGuiApplication) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGuiApplication_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGuiApplication) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGuiApplication_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGuiApplication_CustomEvent
func miqt_exec_callback_QGuiApplication_CustomEvent(self *C.QGuiApplication, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGuiApplication{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGuiApplication) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGuiApplication_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGuiApplication) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGuiApplication_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGuiApplication_ConnectNotify
func miqt_exec_callback_QGuiApplication_ConnectNotify(self *C.QGuiApplication, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGuiApplication{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGuiApplication) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGuiApplication_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGuiApplication) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGuiApplication_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGuiApplication_DisconnectNotify
func miqt_exec_callback_QGuiApplication_DisconnectNotify(self *C.QGuiApplication, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGuiApplication{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGuiApplication) Delete() {
	C.QGuiApplication_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGuiApplication) GoGC() {
	runtime.SetFinalizer(this, func(this *QGuiApplication) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
