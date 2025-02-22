package qt6

/*

#include "gen_qgraphicsview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsView__ViewportAnchor int

const (
	QGraphicsView__NoAnchor         QGraphicsView__ViewportAnchor = 0
	QGraphicsView__AnchorViewCenter QGraphicsView__ViewportAnchor = 1
	QGraphicsView__AnchorUnderMouse QGraphicsView__ViewportAnchor = 2
)

type QGraphicsView__CacheModeFlag int

const (
	QGraphicsView__CacheNone       QGraphicsView__CacheModeFlag = 0
	QGraphicsView__CacheBackground QGraphicsView__CacheModeFlag = 1
)

type QGraphicsView__DragMode int

const (
	QGraphicsView__NoDrag         QGraphicsView__DragMode = 0
	QGraphicsView__ScrollHandDrag QGraphicsView__DragMode = 1
	QGraphicsView__RubberBandDrag QGraphicsView__DragMode = 2
)

type QGraphicsView__ViewportUpdateMode int

const (
	QGraphicsView__FullViewportUpdate         QGraphicsView__ViewportUpdateMode = 0
	QGraphicsView__MinimalViewportUpdate      QGraphicsView__ViewportUpdateMode = 1
	QGraphicsView__SmartViewportUpdate        QGraphicsView__ViewportUpdateMode = 2
	QGraphicsView__NoViewportUpdate           QGraphicsView__ViewportUpdateMode = 3
	QGraphicsView__BoundingRectViewportUpdate QGraphicsView__ViewportUpdateMode = 4
)

type QGraphicsView__OptimizationFlag int

const (
	QGraphicsView__DontSavePainterState      QGraphicsView__OptimizationFlag = 1
	QGraphicsView__DontAdjustForAntialiasing QGraphicsView__OptimizationFlag = 2
	QGraphicsView__IndirectPainting          QGraphicsView__OptimizationFlag = 4
)

type QGraphicsView struct {
	h *C.QGraphicsView
	*QAbstractScrollArea
}

func (this *QGraphicsView) cPointer() *C.QGraphicsView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsView constructs the type using only CGO pointers.
func newQGraphicsView(h *C.QGraphicsView) *QGraphicsView {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QGraphicsView_virtbase(h, &outptr_QAbstractScrollArea)

	return &QGraphicsView{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(outptr_QAbstractScrollArea)}
}

// UnsafeNewQGraphicsView constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsView(h unsafe.Pointer) *QGraphicsView {
	return newQGraphicsView((*C.QGraphicsView)(h))
}

// NewQGraphicsView constructs a new QGraphicsView object.
func NewQGraphicsView(parent *QWidget) *QGraphicsView {

	return newQGraphicsView(C.QGraphicsView_new(parent.cPointer()))
}

// NewQGraphicsView2 constructs a new QGraphicsView object.
func NewQGraphicsView2() *QGraphicsView {

	return newQGraphicsView(C.QGraphicsView_new2())
}

// NewQGraphicsView3 constructs a new QGraphicsView object.
func NewQGraphicsView3(scene *QGraphicsScene) *QGraphicsView {

	return newQGraphicsView(C.QGraphicsView_new3(scene.cPointer()))
}

// NewQGraphicsView4 constructs a new QGraphicsView object.
func NewQGraphicsView4(scene *QGraphicsScene, parent *QWidget) *QGraphicsView {

	return newQGraphicsView(C.QGraphicsView_new4(scene.cPointer(), parent.cPointer()))
}

func (this *QGraphicsView) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsView_MetaObject(this.h))
}

func (this *QGraphicsView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsView_Metacast(this.h, param1_Cstring))
}

func QGraphicsView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsView) SizeHint() *QSize {
	_goptr := newQSize(C.QGraphicsView_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) RenderHints() QPainter__RenderHint {
	return (QPainter__RenderHint)(C.QGraphicsView_RenderHints(this.h))
}

func (this *QGraphicsView) SetRenderHint(hint QPainter__RenderHint) {
	C.QGraphicsView_SetRenderHint(this.h, (C.int)(hint))
}

func (this *QGraphicsView) SetRenderHints(hints QPainter__RenderHint) {
	C.QGraphicsView_SetRenderHints(this.h, (C.int)(hints))
}

func (this *QGraphicsView) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsView_Alignment(this.h))
}

func (this *QGraphicsView) SetAlignment(alignment AlignmentFlag) {
	C.QGraphicsView_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QGraphicsView) TransformationAnchor() QGraphicsView__ViewportAnchor {
	return (QGraphicsView__ViewportAnchor)(C.QGraphicsView_TransformationAnchor(this.h))
}

func (this *QGraphicsView) SetTransformationAnchor(anchor QGraphicsView__ViewportAnchor) {
	C.QGraphicsView_SetTransformationAnchor(this.h, (C.int)(anchor))
}

func (this *QGraphicsView) ResizeAnchor() QGraphicsView__ViewportAnchor {
	return (QGraphicsView__ViewportAnchor)(C.QGraphicsView_ResizeAnchor(this.h))
}

func (this *QGraphicsView) SetResizeAnchor(anchor QGraphicsView__ViewportAnchor) {
	C.QGraphicsView_SetResizeAnchor(this.h, (C.int)(anchor))
}

func (this *QGraphicsView) ViewportUpdateMode() QGraphicsView__ViewportUpdateMode {
	return (QGraphicsView__ViewportUpdateMode)(C.QGraphicsView_ViewportUpdateMode(this.h))
}

func (this *QGraphicsView) SetViewportUpdateMode(mode QGraphicsView__ViewportUpdateMode) {
	C.QGraphicsView_SetViewportUpdateMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) OptimizationFlags() QGraphicsView__OptimizationFlag {
	return (QGraphicsView__OptimizationFlag)(C.QGraphicsView_OptimizationFlags(this.h))
}

func (this *QGraphicsView) SetOptimizationFlag(flag QGraphicsView__OptimizationFlag) {
	C.QGraphicsView_SetOptimizationFlag(this.h, (C.int)(flag))
}

func (this *QGraphicsView) SetOptimizationFlags(flags QGraphicsView__OptimizationFlag) {
	C.QGraphicsView_SetOptimizationFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsView) DragMode() QGraphicsView__DragMode {
	return (QGraphicsView__DragMode)(C.QGraphicsView_DragMode(this.h))
}

func (this *QGraphicsView) SetDragMode(mode QGraphicsView__DragMode) {
	C.QGraphicsView_SetDragMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) RubberBandSelectionMode() ItemSelectionMode {
	return (ItemSelectionMode)(C.QGraphicsView_RubberBandSelectionMode(this.h))
}

func (this *QGraphicsView) SetRubberBandSelectionMode(mode ItemSelectionMode) {
	C.QGraphicsView_SetRubberBandSelectionMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) RubberBandRect() *QRect {
	_goptr := newQRect(C.QGraphicsView_RubberBandRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) CacheMode() QGraphicsView__CacheModeFlag {
	return (QGraphicsView__CacheModeFlag)(C.QGraphicsView_CacheMode(this.h))
}

func (this *QGraphicsView) SetCacheMode(mode QGraphicsView__CacheModeFlag) {
	C.QGraphicsView_SetCacheMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) ResetCachedContent() {
	C.QGraphicsView_ResetCachedContent(this.h)
}

func (this *QGraphicsView) IsInteractive() bool {
	return (bool)(C.QGraphicsView_IsInteractive(this.h))
}

func (this *QGraphicsView) SetInteractive(allowed bool) {
	C.QGraphicsView_SetInteractive(this.h, (C.bool)(allowed))
}

func (this *QGraphicsView) Scene() *QGraphicsScene {
	return newQGraphicsScene(C.QGraphicsView_Scene(this.h))
}

func (this *QGraphicsView) SetScene(scene *QGraphicsScene) {
	C.QGraphicsView_SetScene(this.h, scene.cPointer())
}

func (this *QGraphicsView) SceneRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsView_SceneRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetSceneRect(rect *QRectF) {
	C.QGraphicsView_SetSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsView) SetSceneRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_SetSceneRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) Transform() *QTransform {
	_goptr := newQTransform(C.QGraphicsView_Transform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) ViewportTransform() *QTransform {
	_goptr := newQTransform(C.QGraphicsView_ViewportTransform(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) IsTransformed() bool {
	return (bool)(C.QGraphicsView_IsTransformed(this.h))
}

func (this *QGraphicsView) SetTransform(matrix *QTransform) {
	C.QGraphicsView_SetTransform(this.h, matrix.cPointer())
}

func (this *QGraphicsView) ResetTransform() {
	C.QGraphicsView_ResetTransform(this.h)
}

func (this *QGraphicsView) Rotate(angle float64) {
	C.QGraphicsView_Rotate(this.h, (C.double)(angle))
}

func (this *QGraphicsView) Scale(sx float64, sy float64) {
	C.QGraphicsView_Scale(this.h, (C.double)(sx), (C.double)(sy))
}

func (this *QGraphicsView) Shear(sh float64, sv float64) {
	C.QGraphicsView_Shear(this.h, (C.double)(sh), (C.double)(sv))
}

func (this *QGraphicsView) Translate(dx float64, dy float64) {
	C.QGraphicsView_Translate(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsView) CenterOn(pos *QPointF) {
	C.QGraphicsView_CenterOn(this.h, pos.cPointer())
}

func (this *QGraphicsView) CenterOn2(x float64, y float64) {
	C.QGraphicsView_CenterOn2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QGraphicsView) CenterOnWithItem(item *QGraphicsItem) {
	C.QGraphicsView_CenterOnWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) EnsureVisible(rect *QRectF) {
	C.QGraphicsView_EnsureVisible(this.h, rect.cPointer())
}

func (this *QGraphicsView) EnsureVisible2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_EnsureVisible2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) EnsureVisibleWithItem(item *QGraphicsItem) {
	C.QGraphicsView_EnsureVisibleWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) FitInView(rect *QRectF) {
	C.QGraphicsView_FitInView(this.h, rect.cPointer())
}

func (this *QGraphicsView) FitInView2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_FitInView2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) FitInViewWithItem(item *QGraphicsItem) {
	C.QGraphicsView_FitInViewWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) Render(painter *QPainter) {
	C.QGraphicsView_Render(this.h, painter.cPointer())
}

func (this *QGraphicsView) Items() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) ItemsWithPos(pos *QPoint) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_ItemsWithPos(this.h, pos.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) Items2(x int, y int) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items2(this.h, (C.int)(x), (C.int)(y))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) ItemsWithRect(rect *QRect) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_ItemsWithRect(this.h, rect.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) Items3(x int, y int, w int, h int) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) ItemsWithPath(path *QPainterPath) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_ItemsWithPath(this.h, path.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) ItemAt(pos *QPoint) *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsView_ItemAt(this.h, pos.cPointer()))
}

func (this *QGraphicsView) ItemAt2(x int, y int) *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsView_ItemAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QGraphicsView) MapToScene(point *QPoint) *QPointF {
	_goptr := newQPointF(C.QGraphicsView_MapToScene(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapToSceneWithPath(path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsView_MapToSceneWithPath(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapFromScene(point *QPointF) *QPoint {
	_goptr := newQPoint(C.QGraphicsView_MapFromScene(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapFromSceneWithPath(path *QPainterPath) *QPainterPath {
	_goptr := newQPainterPath(C.QGraphicsView_MapFromSceneWithPath(this.h, path.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapToScene2(x int, y int) *QPointF {
	_goptr := newQPointF(C.QGraphicsView_MapToScene2(this.h, (C.int)(x), (C.int)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapFromScene2(x float64, y float64) *QPoint {
	_goptr := newQPoint(C.QGraphicsView_MapFromScene2(this.h, (C.double)(x), (C.double)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) InputMethodQuery(query InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QGraphicsView_InputMethodQuery(this.h, (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) BackgroundBrush() *QBrush {
	_goptr := newQBrush(C.QGraphicsView_BackgroundBrush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetBackgroundBrush(brush *QBrush) {
	C.QGraphicsView_SetBackgroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsView) ForegroundBrush() *QBrush {
	_goptr := newQBrush(C.QGraphicsView_ForegroundBrush(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetForegroundBrush(brush *QBrush) {
	C.QGraphicsView_SetForegroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsView) UpdateScene(rects []QRectF) {
	rects_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.size_t(8 * len(rects))))
	defer C.free(unsafe.Pointer(rects_CArray))
	for i := range rects {
		rects_CArray[i] = rects[i].cPointer()
	}
	rects_ma := C.struct_miqt_array{len: C.size_t(len(rects)), data: unsafe.Pointer(rects_CArray)}
	C.QGraphicsView_UpdateScene(this.h, rects_ma)
}

func (this *QGraphicsView) InvalidateScene() {
	C.QGraphicsView_InvalidateScene(this.h)
}

func (this *QGraphicsView) UpdateSceneRect(rect *QRectF) {
	C.QGraphicsView_UpdateSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsView) RubberBandChanged(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF) {
	C.QGraphicsView_RubberBandChanged(this.h, viewportRect.cPointer(), fromScenePoint.cPointer(), toScenePoint.cPointer())
}
func (this *QGraphicsView) OnRubberBandChanged(slot func(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF)) {
	C.QGraphicsView_connect_RubberBandChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsView_RubberBandChanged
func miqt_exec_callback_QGraphicsView_RubberBandChanged(cb C.intptr_t, viewportRect *C.QRect, fromScenePoint *C.QPointF, toScenePoint *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	viewportRect_goptr := newQRect(viewportRect)
	viewportRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *viewportRect_goptr

	fromScenePoint_goptr := newQPointF(fromScenePoint)
	fromScenePoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *fromScenePoint_goptr

	toScenePoint_goptr := newQPointF(toScenePoint)
	toScenePoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *toScenePoint_goptr

	gofunc(slotval1, slotval2, slotval3)
}

func QGraphicsView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsView) SetRenderHint2(hint QPainter__RenderHint, enabled bool) {
	C.QGraphicsView_SetRenderHint2(this.h, (C.int)(hint), (C.bool)(enabled))
}

func (this *QGraphicsView) SetOptimizationFlag2(flag QGraphicsView__OptimizationFlag, enabled bool) {
	C.QGraphicsView_SetOptimizationFlag2(this.h, (C.int)(flag), (C.bool)(enabled))
}

func (this *QGraphicsView) SetTransform2(matrix *QTransform, combine bool) {
	C.QGraphicsView_SetTransform2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsView) EnsureVisible22(rect *QRectF, xmargin int) {
	C.QGraphicsView_EnsureVisible22(this.h, rect.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible3(rect *QRectF, xmargin int, ymargin int) {
	C.QGraphicsView_EnsureVisible3(this.h, rect.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) EnsureVisible5(x float64, y float64, w float64, h float64, xmargin int) {
	C.QGraphicsView_EnsureVisible5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible6(x float64, y float64, w float64, h float64, xmargin int, ymargin int) {
	C.QGraphicsView_EnsureVisible6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) EnsureVisible23(item *QGraphicsItem, xmargin int) {
	C.QGraphicsView_EnsureVisible23(this.h, item.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible32(item *QGraphicsItem, xmargin int, ymargin int) {
	C.QGraphicsView_EnsureVisible32(this.h, item.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) FitInView22(rect *QRectF, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_FitInView22(this.h, rect.cPointer(), (C.int)(aspectRadioMode))
}

func (this *QGraphicsView) FitInView5(x float64, y float64, w float64, h float64, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_FitInView5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(aspectRadioMode))
}

func (this *QGraphicsView) FitInView23(item *QGraphicsItem, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_FitInView23(this.h, item.cPointer(), (C.int)(aspectRadioMode))
}

func (this *QGraphicsView) Render2(painter *QPainter, target *QRectF) {
	C.QGraphicsView_Render2(this.h, painter.cPointer(), target.cPointer())
}

func (this *QGraphicsView) Render3(painter *QPainter, target *QRectF, source *QRect) {
	C.QGraphicsView_Render3(this.h, painter.cPointer(), target.cPointer(), source.cPointer())
}

func (this *QGraphicsView) Render4(painter *QPainter, target *QRectF, source *QRect, aspectRatioMode AspectRatioMode) {
	C.QGraphicsView_Render4(this.h, painter.cPointer(), target.cPointer(), source.cPointer(), (C.int)(aspectRatioMode))
}

func (this *QGraphicsView) Items22(rect *QRect, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items22(this.h, rect.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) Items5(x int, y int, w int, h int, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) Items24(path *QPainterPath, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items24(this.h, path.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGraphicsItem(_outCast[i])
	}
	return _ret
}

func (this *QGraphicsView) InvalidateScene1(rect *QRectF) {
	C.QGraphicsView_InvalidateScene1(this.h, rect.cPointer())
}

func (this *QGraphicsView) InvalidateScene2(rect *QRectF, layers QGraphicsScene__SceneLayer) {
	C.QGraphicsView_InvalidateScene2(this.h, rect.cPointer(), (C.int)(layers))
}

func (this *QGraphicsView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QGraphicsView_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QGraphicsView_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_SizeHint
func miqt_exec_callback_QGraphicsView_SizeHint(self *C.QGraphicsView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsView_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsView_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_InputMethodQuery
func miqt_exec_callback_QGraphicsView_InputMethodQuery(self *C.QGraphicsView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_SetupViewport(widget *QWidget) {

	C.QGraphicsView_virtualbase_SetupViewport(unsafe.Pointer(this.h), widget.cPointer())

}
func (this *QGraphicsView) OnSetupViewport(slot func(super func(widget *QWidget), widget *QWidget)) {
	ok := C.QGraphicsView_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_SetupViewport
func miqt_exec_callback_QGraphicsView_SetupViewport(self *C.QGraphicsView, cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widget *QWidget), widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(widget)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QGraphicsView) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsView_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsView) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_Event
func miqt_exec_callback_QGraphicsView_Event(self *C.QGraphicsView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsView_virtualbase_ViewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsView) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsView_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ViewportEvent
func miqt_exec_callback_QGraphicsView_ViewportEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QGraphicsView_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QGraphicsView_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ContextMenuEvent
func miqt_exec_callback_QGraphicsView_ContextMenuEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QGraphicsView_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QGraphicsView_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_DragEnterEvent
func miqt_exec_callback_QGraphicsView_DragEnterEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QGraphicsView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QGraphicsView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_DragLeaveEvent
func miqt_exec_callback_QGraphicsView_DragLeaveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QGraphicsView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QGraphicsView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_DragMoveEvent
func miqt_exec_callback_QGraphicsView_DragMoveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QGraphicsView_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QGraphicsView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_DropEvent
func miqt_exec_callback_QGraphicsView_DropEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsView_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsView_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_FocusInEvent
func miqt_exec_callback_QGraphicsView_FocusInEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsView_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGraphicsView_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_FocusNextPrevChild
func miqt_exec_callback_QGraphicsView_FocusNextPrevChild(self *C.QGraphicsView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsView_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsView_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_FocusOutEvent
func miqt_exec_callback_QGraphicsView_FocusOutEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsView_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsView_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_KeyPressEvent
func miqt_exec_callback_QGraphicsView_KeyPressEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsView_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsView_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_KeyReleaseEvent
func miqt_exec_callback_QGraphicsView_KeyReleaseEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QGraphicsView_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGraphicsView_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsView_MouseDoubleClickEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QGraphicsView_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGraphicsView_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_MousePressEvent
func miqt_exec_callback_QGraphicsView_MousePressEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QGraphicsView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGraphicsView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_MouseMoveEvent
func miqt_exec_callback_QGraphicsView_MouseMoveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QGraphicsView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QGraphicsView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_MouseReleaseEvent
func miqt_exec_callback_QGraphicsView_MouseReleaseEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QGraphicsView_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QGraphicsView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_WheelEvent
func miqt_exec_callback_QGraphicsView_WheelEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QGraphicsView_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QGraphicsView_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_PaintEvent
func miqt_exec_callback_QGraphicsView_PaintEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QGraphicsView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QGraphicsView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ResizeEvent
func miqt_exec_callback_QGraphicsView_ResizeEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QGraphicsView_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QGraphicsView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QGraphicsView_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ScrollContentsBy
func miqt_exec_callback_QGraphicsView_ScrollContentsBy(self *C.QGraphicsView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QGraphicsView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QGraphicsView_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QGraphicsView_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ShowEvent
func miqt_exec_callback_QGraphicsView_ShowEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsView_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsView_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_InputMethodEvent
func miqt_exec_callback_QGraphicsView_InputMethodEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DrawBackground(painter *QPainter, rect *QRectF) {

	C.QGraphicsView_virtualbase_DrawBackground(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer())

}
func (this *QGraphicsView) OnDrawBackground(slot func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF)) {
	ok := C.QGraphicsView_override_virtual_DrawBackground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_DrawBackground
func miqt_exec_callback_QGraphicsView_DrawBackground(self *C.QGraphicsView, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRectF(rect)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DrawBackground, slotval1, slotval2)

}

func (this *QGraphicsView) callVirtualBase_DrawForeground(painter *QPainter, rect *QRectF) {

	C.QGraphicsView_virtualbase_DrawForeground(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer())

}
func (this *QGraphicsView) OnDrawForeground(slot func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF)) {
	ok := C.QGraphicsView_override_virtual_DrawForeground(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_DrawForeground
func miqt_exec_callback_QGraphicsView_DrawForeground(self *C.QGraphicsView, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRectF), painter *QPainter, rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRectF(rect)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DrawForeground, slotval1, slotval2)

}

func (this *QGraphicsView) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QGraphicsView_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QGraphicsView_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_MinimumSizeHint
func miqt_exec_callback_QGraphicsView_MinimumSizeHint(self *C.QGraphicsView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QGraphicsView_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QGraphicsView) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QGraphicsView_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_EventFilter
func miqt_exec_callback_QGraphicsView_EventFilter(self *C.QGraphicsView, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QGraphicsView_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QGraphicsView_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ViewportSizeHint
func miqt_exec_callback_QGraphicsView_ViewportSizeHint(self *C.QGraphicsView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QGraphicsView_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QGraphicsView) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QGraphicsView_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ChangeEvent
func miqt_exec_callback_QGraphicsView_ChangeEvent(self *C.QGraphicsView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QGraphicsView_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QGraphicsView) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QGraphicsView_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_InitStyleOption
func miqt_exec_callback_QGraphicsView_InitStyleOption(self *C.QGraphicsView, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DevType() int {

	return (int)(C.QGraphicsView_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QGraphicsView) OnDevType(slot func(super func() int) int) {
	ok := C.QGraphicsView_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_DevType
func miqt_exec_callback_QGraphicsView_DevType(self *C.QGraphicsView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_SetVisible(visible bool) {

	C.QGraphicsView_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QGraphicsView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QGraphicsView_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_SetVisible
func miqt_exec_callback_QGraphicsView_SetVisible(self *C.QGraphicsView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QGraphicsView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QGraphicsView_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGraphicsView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QGraphicsView_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_HeightForWidth
func miqt_exec_callback_QGraphicsView_HeightForWidth(self *C.QGraphicsView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QGraphicsView_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QGraphicsView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QGraphicsView_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_HasHeightForWidth
func miqt_exec_callback_QGraphicsView_HasHeightForWidth(self *C.QGraphicsView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QGraphicsView_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QGraphicsView) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QGraphicsView_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_PaintEngine
func miqt_exec_callback_QGraphicsView_PaintEngine(self *C.QGraphicsView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QGraphicsView_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QGraphicsView_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_EnterEvent
func miqt_exec_callback_QGraphicsView_EnterEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QGraphicsView_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsView_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_LeaveEvent
func miqt_exec_callback_QGraphicsView_LeaveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QGraphicsView_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QGraphicsView_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_MoveEvent
func miqt_exec_callback_QGraphicsView_MoveEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QGraphicsView_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QGraphicsView_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_CloseEvent
func miqt_exec_callback_QGraphicsView_CloseEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QGraphicsView_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QGraphicsView_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_TabletEvent
func miqt_exec_callback_QGraphicsView_TabletEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QGraphicsView_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QGraphicsView_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ActionEvent
func miqt_exec_callback_QGraphicsView_ActionEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QGraphicsView_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QGraphicsView_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_HideEvent
func miqt_exec_callback_QGraphicsView_HideEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QGraphicsView_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QGraphicsView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QGraphicsView_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_NativeEvent
func miqt_exec_callback_QGraphicsView_NativeEvent(self *C.QGraphicsView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QGraphicsView_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGraphicsView) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QGraphicsView_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_Metric
func miqt_exec_callback_QGraphicsView_Metric(self *C.QGraphicsView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsView) callVirtualBase_InitPainter(painter *QPainter) {

	C.QGraphicsView_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsView) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsView_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_InitPainter
func miqt_exec_callback_QGraphicsView_InitPainter(self *C.QGraphicsView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QGraphicsView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QGraphicsView_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QGraphicsView) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QGraphicsView_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_Redirected
func miqt_exec_callback_QGraphicsView_Redirected(self *C.QGraphicsView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QGraphicsView_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QGraphicsView) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QGraphicsView_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_SharedPainter
func miqt_exec_callback_QGraphicsView_SharedPainter(self *C.QGraphicsView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QGraphicsView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsView_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsView_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_TimerEvent
func miqt_exec_callback_QGraphicsView_TimerEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsView_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsView_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ChildEvent
func miqt_exec_callback_QGraphicsView_ChildEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsView_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsView) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsView_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_CustomEvent
func miqt_exec_callback_QGraphicsView_CustomEvent(self *C.QGraphicsView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsView_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsView) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsView_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_ConnectNotify
func miqt_exec_callback_QGraphicsView_ConnectNotify(self *C.QGraphicsView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsView_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsView) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsView_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsView_DisconnectNotify
func miqt_exec_callback_QGraphicsView_DisconnectNotify(self *C.QGraphicsView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsView) Delete() {
	C.QGraphicsView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsView) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
