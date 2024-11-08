package qt6

/*

#include "gen_qtreewidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTreeWidgetItem__ItemType int

const (
	QTreeWidgetItem__Type     QTreeWidgetItem__ItemType = 0
	QTreeWidgetItem__UserType QTreeWidgetItem__ItemType = 1000
)

type QTreeWidgetItem__ChildIndicatorPolicy int

const (
	QTreeWidgetItem__ShowIndicator                  QTreeWidgetItem__ChildIndicatorPolicy = 0
	QTreeWidgetItem__DontShowIndicator              QTreeWidgetItem__ChildIndicatorPolicy = 1
	QTreeWidgetItem__DontShowIndicatorWhenChildless QTreeWidgetItem__ChildIndicatorPolicy = 2
)

type QTreeWidgetItem struct {
	h *C.QTreeWidgetItem
}

func (this *QTreeWidgetItem) cPointer() *C.QTreeWidgetItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTreeWidgetItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTreeWidgetItem(h *C.QTreeWidgetItem) *QTreeWidgetItem {
	if h == nil {
		return nil
	}
	return &QTreeWidgetItem{h: h}
}

func UnsafeNewQTreeWidgetItem(h unsafe.Pointer) *QTreeWidgetItem {
	return newQTreeWidgetItem((*C.QTreeWidgetItem)(h))
}

// NewQTreeWidgetItem constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem() *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new()
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem2 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem2(strings []string) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}
	ret := C.QTreeWidgetItem_new2(strings_ma)
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem3 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem3(treeview *QTreeWidget) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new3(treeview.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem4 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem4(treeview *QTreeWidget, strings []string) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}
	ret := C.QTreeWidgetItem_new4(treeview.cPointer(), strings_ma)
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem5 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem5(treeview *QTreeWidget, after *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new5(treeview.cPointer(), after.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem6 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem6(parent *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new6(parent.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem7 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem7(parent *QTreeWidgetItem, strings []string) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}
	ret := C.QTreeWidgetItem_new7(parent.cPointer(), strings_ma)
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem8 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem8(parent *QTreeWidgetItem, after *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new8(parent.cPointer(), after.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem9 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem9(other *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new9(other.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem10 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem10(typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new10((C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem11 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem11(strings []string, typeVal int) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}
	ret := C.QTreeWidgetItem_new11(strings_ma, (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem12 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem12(treeview *QTreeWidget, typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new12(treeview.cPointer(), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem13 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem13(treeview *QTreeWidget, strings []string, typeVal int) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}
	ret := C.QTreeWidgetItem_new13(treeview.cPointer(), strings_ma, (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem14 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem14(treeview *QTreeWidget, after *QTreeWidgetItem, typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new14(treeview.cPointer(), after.cPointer(), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem15 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem15(parent *QTreeWidgetItem, typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new15(parent.cPointer(), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem16 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem16(parent *QTreeWidgetItem, strings []string, typeVal int) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}
	ret := C.QTreeWidgetItem_new16(parent.cPointer(), strings_ma, (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem17 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem17(parent *QTreeWidgetItem, after *QTreeWidgetItem, typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new17(parent.cPointer(), after.cPointer(), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

func (this *QTreeWidgetItem) Clone() *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidgetItem_Clone(this.h)))
}

func (this *QTreeWidgetItem) TreeWidget() *QTreeWidget {
	return UnsafeNewQTreeWidget(unsafe.Pointer(C.QTreeWidgetItem_TreeWidget(this.h)))
}

func (this *QTreeWidgetItem) SetSelected(selectVal bool) {
	C.QTreeWidgetItem_SetSelected(this.h, (C.bool)(selectVal))
}

func (this *QTreeWidgetItem) IsSelected() bool {
	return (bool)(C.QTreeWidgetItem_IsSelected(this.h))
}

func (this *QTreeWidgetItem) SetHidden(hide bool) {
	C.QTreeWidgetItem_SetHidden(this.h, (C.bool)(hide))
}

func (this *QTreeWidgetItem) IsHidden() bool {
	return (bool)(C.QTreeWidgetItem_IsHidden(this.h))
}

func (this *QTreeWidgetItem) SetExpanded(expand bool) {
	C.QTreeWidgetItem_SetExpanded(this.h, (C.bool)(expand))
}

func (this *QTreeWidgetItem) IsExpanded() bool {
	return (bool)(C.QTreeWidgetItem_IsExpanded(this.h))
}

func (this *QTreeWidgetItem) SetFirstColumnSpanned(span bool) {
	C.QTreeWidgetItem_SetFirstColumnSpanned(this.h, (C.bool)(span))
}

func (this *QTreeWidgetItem) IsFirstColumnSpanned() bool {
	return (bool)(C.QTreeWidgetItem_IsFirstColumnSpanned(this.h))
}

func (this *QTreeWidgetItem) SetDisabled(disabled bool) {
	C.QTreeWidgetItem_SetDisabled(this.h, (C.bool)(disabled))
}

func (this *QTreeWidgetItem) IsDisabled() bool {
	return (bool)(C.QTreeWidgetItem_IsDisabled(this.h))
}

func (this *QTreeWidgetItem) SetChildIndicatorPolicy(policy QTreeWidgetItem__ChildIndicatorPolicy) {
	C.QTreeWidgetItem_SetChildIndicatorPolicy(this.h, (C.int)(policy))
}

func (this *QTreeWidgetItem) ChildIndicatorPolicy() QTreeWidgetItem__ChildIndicatorPolicy {
	return (QTreeWidgetItem__ChildIndicatorPolicy)(C.QTreeWidgetItem_ChildIndicatorPolicy(this.h))
}

func (this *QTreeWidgetItem) Flags() ItemFlag {
	return (ItemFlag)(C.QTreeWidgetItem_Flags(this.h))
}

func (this *QTreeWidgetItem) SetFlags(flags ItemFlag) {
	C.QTreeWidgetItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QTreeWidgetItem) Text(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_Text(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetText(column int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTreeWidgetItem_SetText(this.h, (C.int)(column), text_ms)
}

func (this *QTreeWidgetItem) Icon(column int) *QIcon {
	_ret := C.QTreeWidgetItem_Icon(this.h, (C.int)(column))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetIcon(column int, icon *QIcon) {
	C.QTreeWidgetItem_SetIcon(this.h, (C.int)(column), icon.cPointer())
}

func (this *QTreeWidgetItem) StatusTip(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_StatusTip(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetStatusTip(column int, statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QTreeWidgetItem_SetStatusTip(this.h, (C.int)(column), statusTip_ms)
}

func (this *QTreeWidgetItem) ToolTip(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_ToolTip(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetToolTip(column int, toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QTreeWidgetItem_SetToolTip(this.h, (C.int)(column), toolTip_ms)
}

func (this *QTreeWidgetItem) WhatsThis(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_WhatsThis(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetWhatsThis(column int, whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QTreeWidgetItem_SetWhatsThis(this.h, (C.int)(column), whatsThis_ms)
}

func (this *QTreeWidgetItem) Font(column int) *QFont {
	_ret := C.QTreeWidgetItem_Font(this.h, (C.int)(column))
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetFont(column int, font *QFont) {
	C.QTreeWidgetItem_SetFont(this.h, (C.int)(column), font.cPointer())
}

func (this *QTreeWidgetItem) TextAlignment(column int) int {
	return (int)(C.QTreeWidgetItem_TextAlignment(this.h, (C.int)(column)))
}

func (this *QTreeWidgetItem) SetTextAlignment(column int, alignment int) {
	C.QTreeWidgetItem_SetTextAlignment(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QTreeWidgetItem) SetTextAlignment2(column int, alignment AlignmentFlag) {
	C.QTreeWidgetItem_SetTextAlignment2(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QTreeWidgetItem) SetTextAlignment3(column int, alignment AlignmentFlag) {
	C.QTreeWidgetItem_SetTextAlignment3(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QTreeWidgetItem) Background(column int) *QBrush {
	_ret := C.QTreeWidgetItem_Background(this.h, (C.int)(column))
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetBackground(column int, brush *QBrush) {
	C.QTreeWidgetItem_SetBackground(this.h, (C.int)(column), brush.cPointer())
}

func (this *QTreeWidgetItem) Foreground(column int) *QBrush {
	_ret := C.QTreeWidgetItem_Foreground(this.h, (C.int)(column))
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetForeground(column int, brush *QBrush) {
	C.QTreeWidgetItem_SetForeground(this.h, (C.int)(column), brush.cPointer())
}

func (this *QTreeWidgetItem) CheckState(column int) CheckState {
	return (CheckState)(C.QTreeWidgetItem_CheckState(this.h, (C.int)(column)))
}

func (this *QTreeWidgetItem) SetCheckState(column int, state CheckState) {
	C.QTreeWidgetItem_SetCheckState(this.h, (C.int)(column), (C.int)(state))
}

func (this *QTreeWidgetItem) SizeHint(column int) *QSize {
	_ret := C.QTreeWidgetItem_SizeHint(this.h, (C.int)(column))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetSizeHint(column int, size *QSize) {
	C.QTreeWidgetItem_SetSizeHint(this.h, (C.int)(column), size.cPointer())
}

func (this *QTreeWidgetItem) Data(column int, role int) *QVariant {
	_ret := C.QTreeWidgetItem_Data(this.h, (C.int)(column), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetData(column int, role int, value *QVariant) {
	C.QTreeWidgetItem_SetData(this.h, (C.int)(column), (C.int)(role), value.cPointer())
}

func (this *QTreeWidgetItem) OperatorLesser(other *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidgetItem_OperatorLesser(this.h, other.cPointer()))
}

func (this *QTreeWidgetItem) Read(in *QDataStream) {
	C.QTreeWidgetItem_Read(this.h, in.cPointer())
}

func (this *QTreeWidgetItem) Write(out *QDataStream) {
	C.QTreeWidgetItem_Write(this.h, out.cPointer())
}

func (this *QTreeWidgetItem) OperatorAssign(other *QTreeWidgetItem) {
	C.QTreeWidgetItem_OperatorAssign(this.h, other.cPointer())
}

func (this *QTreeWidgetItem) Parent() *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidgetItem_Parent(this.h)))
}

func (this *QTreeWidgetItem) Child(index int) *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidgetItem_Child(this.h, (C.int)(index))))
}

func (this *QTreeWidgetItem) ChildCount() int {
	return (int)(C.QTreeWidgetItem_ChildCount(this.h))
}

func (this *QTreeWidgetItem) ColumnCount() int {
	return (int)(C.QTreeWidgetItem_ColumnCount(this.h))
}

func (this *QTreeWidgetItem) IndexOfChild(child *QTreeWidgetItem) int {
	return (int)(C.QTreeWidgetItem_IndexOfChild(this.h, child.cPointer()))
}

func (this *QTreeWidgetItem) AddChild(child *QTreeWidgetItem) {
	C.QTreeWidgetItem_AddChild(this.h, child.cPointer())
}

func (this *QTreeWidgetItem) InsertChild(index int, child *QTreeWidgetItem) {
	C.QTreeWidgetItem_InsertChild(this.h, (C.int)(index), child.cPointer())
}

func (this *QTreeWidgetItem) RemoveChild(child *QTreeWidgetItem) {
	C.QTreeWidgetItem_RemoveChild(this.h, child.cPointer())
}

func (this *QTreeWidgetItem) TakeChild(index int) *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidgetItem_TakeChild(this.h, (C.int)(index))))
}

func (this *QTreeWidgetItem) AddChildren(children []*QTreeWidgetItem) {
	children_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(children))))
	defer C.free(unsafe.Pointer(children_CArray))
	for i := range children {
		children_CArray[i] = children[i].cPointer()
	}
	children_ma := C.struct_miqt_array{len: C.size_t(len(children)), data: unsafe.Pointer(children_CArray)}
	C.QTreeWidgetItem_AddChildren(this.h, children_ma)
}

func (this *QTreeWidgetItem) InsertChildren(index int, children []*QTreeWidgetItem) {
	children_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(children))))
	defer C.free(unsafe.Pointer(children_CArray))
	for i := range children {
		children_CArray[i] = children[i].cPointer()
	}
	children_ma := C.struct_miqt_array{len: C.size_t(len(children)), data: unsafe.Pointer(children_CArray)}
	C.QTreeWidgetItem_InsertChildren(this.h, (C.int)(index), children_ma)
}

func (this *QTreeWidgetItem) TakeChildren() []*QTreeWidgetItem {
	var _ma C.struct_miqt_array = C.QTreeWidgetItem_TakeChildren(this.h)
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQTreeWidgetItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QTreeWidgetItem) Type() int {
	return (int)(C.QTreeWidgetItem_Type(this.h))
}

func (this *QTreeWidgetItem) SortChildren(column int, order SortOrder) {
	C.QTreeWidgetItem_SortChildren(this.h, (C.int)(column), (C.int)(order))
}

// Delete this object from C++ memory.
func (this *QTreeWidgetItem) Delete() {
	C.QTreeWidgetItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTreeWidgetItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QTreeWidgetItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTreeWidget struct {
	h *C.QTreeWidget
	*QTreeView
}

func (this *QTreeWidget) cPointer() *C.QTreeWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTreeWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTreeWidget(h *C.QTreeWidget) *QTreeWidget {
	if h == nil {
		return nil
	}
	return &QTreeWidget{h: h, QTreeView: UnsafeNewQTreeView(unsafe.Pointer(h))}
}

func UnsafeNewQTreeWidget(h unsafe.Pointer) *QTreeWidget {
	return newQTreeWidget((*C.QTreeWidget)(h))
}

// NewQTreeWidget constructs a new QTreeWidget object.
func NewQTreeWidget(parent *QWidget) *QTreeWidget {
	ret := C.QTreeWidget_new(parent.cPointer())
	return newQTreeWidget(ret)
}

// NewQTreeWidget2 constructs a new QTreeWidget object.
func NewQTreeWidget2() *QTreeWidget {
	ret := C.QTreeWidget_new2()
	return newQTreeWidget(ret)
}

func (this *QTreeWidget) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTreeWidget_MetaObject(this.h)))
}

func (this *QTreeWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTreeWidget_Metacast(this.h, param1_Cstring))
}

func QTreeWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidget) ColumnCount() int {
	return (int)(C.QTreeWidget_ColumnCount(this.h))
}

func (this *QTreeWidget) SetColumnCount(columns int) {
	C.QTreeWidget_SetColumnCount(this.h, (C.int)(columns))
}

func (this *QTreeWidget) InvisibleRootItem() *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_InvisibleRootItem(this.h)))
}

func (this *QTreeWidget) TopLevelItem(index int) *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_TopLevelItem(this.h, (C.int)(index))))
}

func (this *QTreeWidget) TopLevelItemCount() int {
	return (int)(C.QTreeWidget_TopLevelItemCount(this.h))
}

func (this *QTreeWidget) InsertTopLevelItem(index int, item *QTreeWidgetItem) {
	C.QTreeWidget_InsertTopLevelItem(this.h, (C.int)(index), item.cPointer())
}

func (this *QTreeWidget) AddTopLevelItem(item *QTreeWidgetItem) {
	C.QTreeWidget_AddTopLevelItem(this.h, item.cPointer())
}

func (this *QTreeWidget) TakeTopLevelItem(index int) *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_TakeTopLevelItem(this.h, (C.int)(index))))
}

func (this *QTreeWidget) IndexOfTopLevelItem(item *QTreeWidgetItem) int {
	return (int)(C.QTreeWidget_IndexOfTopLevelItem(this.h, item.cPointer()))
}

func (this *QTreeWidget) InsertTopLevelItems(index int, items []*QTreeWidgetItem) {
	items_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QTreeWidget_InsertTopLevelItems(this.h, (C.int)(index), items_ma)
}

func (this *QTreeWidget) AddTopLevelItems(items []*QTreeWidgetItem) {
	items_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QTreeWidget_AddTopLevelItems(this.h, items_ma)
}

func (this *QTreeWidget) HeaderItem() *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_HeaderItem(this.h)))
}

func (this *QTreeWidget) SetHeaderItem(item *QTreeWidgetItem) {
	C.QTreeWidget_SetHeaderItem(this.h, item.cPointer())
}

func (this *QTreeWidget) SetHeaderLabels(labels []string) {
	labels_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	for i := range labels {
		labels_i_ms := C.struct_miqt_string{}
		labels_i_ms.data = C.CString(labels[i])
		labels_i_ms.len = C.size_t(len(labels[i]))
		defer C.free(unsafe.Pointer(labels_i_ms.data))
		labels_CArray[i] = labels_i_ms
	}
	labels_ma := C.struct_miqt_array{len: C.size_t(len(labels)), data: unsafe.Pointer(labels_CArray)}
	C.QTreeWidget_SetHeaderLabels(this.h, labels_ma)
}

func (this *QTreeWidget) SetHeaderLabel(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QTreeWidget_SetHeaderLabel(this.h, label_ms)
}

func (this *QTreeWidget) CurrentItem() *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_CurrentItem(this.h)))
}

func (this *QTreeWidget) CurrentColumn() int {
	return (int)(C.QTreeWidget_CurrentColumn(this.h))
}

func (this *QTreeWidget) SetCurrentItem(item *QTreeWidgetItem) {
	C.QTreeWidget_SetCurrentItem(this.h, item.cPointer())
}

func (this *QTreeWidget) SetCurrentItem2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_SetCurrentItem2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) SetCurrentItem3(item *QTreeWidgetItem, column int, command QItemSelectionModel__SelectionFlag) {
	C.QTreeWidget_SetCurrentItem3(this.h, item.cPointer(), (C.int)(column), (C.int)(command))
}

func (this *QTreeWidget) ItemAt(p *QPoint) *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_ItemAt(this.h, p.cPointer())))
}

func (this *QTreeWidget) ItemAt2(x int, y int) *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y))))
}

func (this *QTreeWidget) VisualItemRect(item *QTreeWidgetItem) *QRect {
	_ret := C.QTreeWidget_VisualItemRect(this.h, item.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidget) SortColumn() int {
	return (int)(C.QTreeWidget_SortColumn(this.h))
}

func (this *QTreeWidget) SortItems(column int, order SortOrder) {
	C.QTreeWidget_SortItems(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTreeWidget) EditItem(item *QTreeWidgetItem) {
	C.QTreeWidget_EditItem(this.h, item.cPointer())
}

func (this *QTreeWidget) OpenPersistentEditor(item *QTreeWidgetItem) {
	C.QTreeWidget_OpenPersistentEditor(this.h, item.cPointer())
}

func (this *QTreeWidget) ClosePersistentEditor(item *QTreeWidgetItem) {
	C.QTreeWidget_ClosePersistentEditor(this.h, item.cPointer())
}

func (this *QTreeWidget) IsPersistentEditorOpen(item *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidget_IsPersistentEditorOpen(this.h, item.cPointer()))
}

func (this *QTreeWidget) ItemWidget(item *QTreeWidgetItem, column int) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QTreeWidget_ItemWidget(this.h, item.cPointer(), (C.int)(column))))
}

func (this *QTreeWidget) SetItemWidget(item *QTreeWidgetItem, column int, widget *QWidget) {
	C.QTreeWidget_SetItemWidget(this.h, item.cPointer(), (C.int)(column), widget.cPointer())
}

func (this *QTreeWidget) RemoveItemWidget(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_RemoveItemWidget(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) SelectedItems() []*QTreeWidgetItem {
	var _ma C.struct_miqt_array = C.QTreeWidget_SelectedItems(this.h)
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQTreeWidgetItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QTreeWidget) FindItems(text string, flags MatchFlag) []*QTreeWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QTreeWidget_FindItems(this.h, text_ms, (C.int)(flags))
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQTreeWidgetItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QTreeWidget) ItemAbove(item *QTreeWidgetItem) *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_ItemAbove(this.h, item.cPointer())))
}

func (this *QTreeWidget) ItemBelow(item *QTreeWidgetItem) *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_ItemBelow(this.h, item.cPointer())))
}

func (this *QTreeWidget) IndexFromItem(item *QTreeWidgetItem) *QModelIndex {
	_ret := C.QTreeWidget_IndexFromItem(this.h, item.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidget) ItemFromIndex(index *QModelIndex) *QTreeWidgetItem {
	return UnsafeNewQTreeWidgetItem(unsafe.Pointer(C.QTreeWidget_ItemFromIndex(this.h, index.cPointer())))
}

func (this *QTreeWidget) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QTreeWidget_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QTreeWidget) ScrollToItem(item *QTreeWidgetItem) {
	C.QTreeWidget_ScrollToItem(this.h, item.cPointer())
}

func (this *QTreeWidget) ExpandItem(item *QTreeWidgetItem) {
	C.QTreeWidget_ExpandItem(this.h, item.cPointer())
}

func (this *QTreeWidget) CollapseItem(item *QTreeWidgetItem) {
	C.QTreeWidget_CollapseItem(this.h, item.cPointer())
}

func (this *QTreeWidget) Clear() {
	C.QTreeWidget_Clear(this.h)
}

func (this *QTreeWidget) ItemPressed(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemPressed(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemPressed(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemPressed
func miqt_exec_callback_QTreeWidget_ItemPressed(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(item))
	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemClicked(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemClicked(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemClicked(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemClicked
func miqt_exec_callback_QTreeWidget_ItemClicked(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(item))
	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemDoubleClicked(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemDoubleClicked(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemDoubleClicked(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemDoubleClicked
func miqt_exec_callback_QTreeWidget_ItemDoubleClicked(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(item))
	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemActivated(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemActivated(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemActivated(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemActivated
func miqt_exec_callback_QTreeWidget_ItemActivated(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(item))
	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemEntered(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemEntered(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemEntered(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemEntered
func miqt_exec_callback_QTreeWidget_ItemEntered(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(item))
	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemChanged(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemChanged(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemChanged(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemChanged
func miqt_exec_callback_QTreeWidget_ItemChanged(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(item))
	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemExpanded(item *QTreeWidgetItem) {
	C.QTreeWidget_ItemExpanded(this.h, item.cPointer())
}
func (this *QTreeWidget) OnItemExpanded(slot func(item *QTreeWidgetItem)) {
	C.QTreeWidget_connect_ItemExpanded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemExpanded
func miqt_exec_callback_QTreeWidget_ItemExpanded(cb C.intptr_t, item *C.QTreeWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(item))

	gofunc(slotval1)
}

func (this *QTreeWidget) ItemCollapsed(item *QTreeWidgetItem) {
	C.QTreeWidget_ItemCollapsed(this.h, item.cPointer())
}
func (this *QTreeWidget) OnItemCollapsed(slot func(item *QTreeWidgetItem)) {
	C.QTreeWidget_connect_ItemCollapsed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemCollapsed
func miqt_exec_callback_QTreeWidget_ItemCollapsed(cb C.intptr_t, item *C.QTreeWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(item))

	gofunc(slotval1)
}

func (this *QTreeWidget) CurrentItemChanged(current *QTreeWidgetItem, previous *QTreeWidgetItem) {
	C.QTreeWidget_CurrentItemChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QTreeWidget) OnCurrentItemChanged(slot func(current *QTreeWidgetItem, previous *QTreeWidgetItem)) {
	C.QTreeWidget_connect_CurrentItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_CurrentItemChanged
func miqt_exec_callback_QTreeWidget_CurrentItemChanged(cb C.intptr_t, current *C.QTreeWidgetItem, previous *C.QTreeWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QTreeWidgetItem, previous *QTreeWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(current))
	slotval2 := UnsafeNewQTreeWidgetItem(unsafe.Pointer(previous))

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemSelectionChanged() {
	C.QTreeWidget_ItemSelectionChanged(this.h)
}
func (this *QTreeWidget) OnItemSelectionChanged(slot func()) {
	C.QTreeWidget_connect_ItemSelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemSelectionChanged
func miqt_exec_callback_QTreeWidget_ItemSelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QTreeWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidget) EditItem2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_EditItem2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) OpenPersistentEditor2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_OpenPersistentEditor2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) ClosePersistentEditor2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ClosePersistentEditor2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) IsPersistentEditorOpen2(item *QTreeWidgetItem, column int) bool {
	return (bool)(C.QTreeWidget_IsPersistentEditorOpen2(this.h, item.cPointer(), (C.int)(column)))
}

func (this *QTreeWidget) FindItems3(text string, flags MatchFlag, column int) []*QTreeWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QTreeWidget_FindItems3(this.h, text_ms, (C.int)(flags), (C.int)(column))
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQTreeWidgetItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QTreeWidget) IndexFromItem2(item *QTreeWidgetItem, column int) *QModelIndex {
	_ret := C.QTreeWidget_IndexFromItem2(this.h, item.cPointer(), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidget) ScrollToItem2(item *QTreeWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QTreeWidget_ScrollToItem2(this.h, item.cPointer(), (C.int)(hint))
}

// Delete this object from C++ memory.
func (this *QTreeWidget) Delete() {
	C.QTreeWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTreeWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QTreeWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
