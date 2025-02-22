#include <QAbstractGraphicsShapeItem>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QCursor>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEffect>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsObject>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsTransform>
#include <QGraphicsWidget>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineF>
#include <QList>
#include <QMatrix>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QTextCursor>
#include <QTextDocument>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsitem.h>
#include "gen_qgraphicsitem.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsItem_Advance(void*, intptr_t, int);
QRectF* miqt_exec_callback_QGraphicsItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsItem_Contains(void*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsItem_OpaqueArea(void*, intptr_t);
void miqt_exec_callback_QGraphicsItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsItem_ItemChange(void*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsItem_Extension(void*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsObject_ParentChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_OpacityChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_VisibleChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_EnabledChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_XChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_YChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_ZChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_RotationChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_ScaleChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_ChildrenChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_WidthChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_HeightChanged(intptr_t);
bool miqt_exec_callback_QGraphicsObject_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsObject_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsObject_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsObject_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsObject_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsObject_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsObject_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsObject_Advance(void*, intptr_t, int);
QRectF* miqt_exec_callback_QGraphicsObject_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsObject_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsObject_Contains(void*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsObject_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsObject_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsObject_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsObject_OpaqueArea(void*, intptr_t);
void miqt_exec_callback_QGraphicsObject_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsObject_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsObject_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsObject_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsObject_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsObject_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsObject_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsObject_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsObject_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsObject_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsObject_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsObject_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsObject_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsObject_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsObject_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsObject_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsObject_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsObject_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsObject_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsObject_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsObject_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsObject_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsObject_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsObject_ItemChange(void*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsObject_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsObject_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsObject_Extension(void*, intptr_t, QVariant*);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QAbstractGraphicsShapeItem_OpaqueArea(void*, intptr_t);
void miqt_exec_callback_QAbstractGraphicsShapeItem_Advance(void*, intptr_t, int);
QRectF* miqt_exec_callback_QAbstractGraphicsShapeItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QAbstractGraphicsShapeItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_Contains(void*, intptr_t, QPointF*);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
void miqt_exec_callback_QAbstractGraphicsShapeItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QAbstractGraphicsShapeItem_Type(void*, intptr_t);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QAbstractGraphicsShapeItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QAbstractGraphicsShapeItem_ItemChange(void*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QAbstractGraphicsShapeItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QAbstractGraphicsShapeItem_Extension(void*, intptr_t, QVariant*);
QRectF* miqt_exec_callback_QGraphicsPathItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsPathItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsPathItem_Contains(void*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsPathItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsPathItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsPathItem_OpaqueArea(void*, intptr_t);
int miqt_exec_callback_QGraphicsPathItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsPathItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsPathItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsPathItem_Extension(void*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsPathItem_Advance(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsPathItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsPathItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsPathItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsPathItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsPathItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsPathItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPathItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPathItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPathItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPathItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPathItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPathItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPathItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPathItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPathItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPathItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPathItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPathItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPathItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPathItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPathItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsPathItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsPathItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsPathItem_ItemChange(void*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsRectItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsRectItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsRectItem_Contains(void*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsRectItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsRectItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsRectItem_OpaqueArea(void*, intptr_t);
int miqt_exec_callback_QGraphicsRectItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsRectItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsRectItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsRectItem_Extension(void*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsRectItem_Advance(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsRectItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsRectItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsRectItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsRectItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsRectItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsRectItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsRectItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsRectItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsRectItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsRectItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsRectItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsRectItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsRectItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsRectItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsRectItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsRectItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsRectItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsRectItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsRectItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsRectItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsRectItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsRectItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsRectItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsRectItem_ItemChange(void*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsEllipseItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsEllipseItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsEllipseItem_Contains(void*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsEllipseItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsEllipseItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsEllipseItem_OpaqueArea(void*, intptr_t);
int miqt_exec_callback_QGraphicsEllipseItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsEllipseItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsEllipseItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsEllipseItem_Extension(void*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsEllipseItem_Advance(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsEllipseItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsEllipseItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsEllipseItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsEllipseItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsEllipseItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsEllipseItem_ItemChange(void*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsPolygonItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsPolygonItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsPolygonItem_Contains(void*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsPolygonItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsPolygonItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsPolygonItem_OpaqueArea(void*, intptr_t);
int miqt_exec_callback_QGraphicsPolygonItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsPolygonItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsPolygonItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsPolygonItem_Extension(void*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsPolygonItem_Advance(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsPolygonItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsPolygonItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsPolygonItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsPolygonItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsPolygonItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsPolygonItem_ItemChange(void*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsLineItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsLineItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsLineItem_Contains(void*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsLineItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsLineItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsLineItem_OpaqueArea(void*, intptr_t);
int miqt_exec_callback_QGraphicsLineItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsLineItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsLineItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsLineItem_Extension(void*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsLineItem_Advance(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsLineItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsLineItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsLineItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsLineItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsLineItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsLineItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsLineItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsLineItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsLineItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsLineItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsLineItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsLineItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsLineItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsLineItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsLineItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsLineItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsLineItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsLineItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsLineItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsLineItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsLineItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsLineItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsLineItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsLineItem_ItemChange(void*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsPixmapItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsPixmapItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsPixmapItem_Contains(void*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsPixmapItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsPixmapItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsPixmapItem_OpaqueArea(void*, intptr_t);
int miqt_exec_callback_QGraphicsPixmapItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsPixmapItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsPixmapItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsPixmapItem_Extension(void*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsPixmapItem_Advance(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsPixmapItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsPixmapItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsPixmapItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsPixmapItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsPixmapItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsPixmapItem_ItemChange(void*, intptr_t, int, QVariant*);
void miqt_exec_callback_QGraphicsTextItem_LinkActivated(intptr_t, struct miqt_string);
void miqt_exec_callback_QGraphicsTextItem_LinkHovered(intptr_t, struct miqt_string);
QRectF* miqt_exec_callback_QGraphicsTextItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsTextItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsTextItem_Contains(void*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsTextItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsTextItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsTextItem_OpaqueArea(void*, intptr_t);
int miqt_exec_callback_QGraphicsTextItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsTextItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsTextItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsTextItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsTextItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsTextItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsTextItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsTextItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsTextItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsTextItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsTextItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsTextItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsTextItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsTextItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsTextItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsTextItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QGraphicsTextItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsTextItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsTextItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
QVariant* miqt_exec_callback_QGraphicsTextItem_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsTextItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsTextItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsTextItem_Extension(void*, intptr_t, QVariant*);
bool miqt_exec_callback_QGraphicsTextItem_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsTextItem_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsTextItem_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsTextItem_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsTextItem_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsTextItem_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsTextItem_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsTextItem_Advance(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsTextItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsTextItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsTextItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QGraphicsTextItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
QVariant* miqt_exec_callback_QGraphicsTextItem_ItemChange(void*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsSimpleTextItem_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsSimpleTextItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsSimpleTextItem_Contains(void*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsSimpleTextItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsSimpleTextItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsSimpleTextItem_OpaqueArea(void*, intptr_t);
int miqt_exec_callback_QGraphicsSimpleTextItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsSimpleTextItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsSimpleTextItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsSimpleTextItem_Extension(void*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsSimpleTextItem_Advance(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsSimpleTextItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsSimpleTextItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsSimpleTextItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsSimpleTextItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsSimpleTextItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsSimpleTextItem_ItemChange(void*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsItemGroup_BoundingRect(void*, intptr_t);
void miqt_exec_callback_QGraphicsItemGroup_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsItemGroup_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsItemGroup_OpaqueArea(void*, intptr_t);
int miqt_exec_callback_QGraphicsItemGroup_Type(void*, intptr_t);
void miqt_exec_callback_QGraphicsItemGroup_Advance(void*, intptr_t, int);
QPainterPath* miqt_exec_callback_QGraphicsItemGroup_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsItemGroup_Contains(void*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsItemGroup_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsItemGroup_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsItemGroup_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsItemGroup_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsItemGroup_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsItemGroup_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItemGroup_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItemGroup_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItemGroup_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItemGroup_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsItemGroup_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsItemGroup_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItemGroup_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItemGroup_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItemGroup_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsItemGroup_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsItemGroup_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItemGroup_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItemGroup_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItemGroup_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItemGroup_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsItemGroup_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsItemGroup_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsItemGroup_ItemChange(void*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsItemGroup_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsItemGroup_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsItemGroup_Extension(void*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsItem final : public QGraphicsItem {
public:

	MiqtVirtualQGraphicsItem(): QGraphicsItem() {};
	MiqtVirtualQGraphicsItem(QGraphicsItem* parent): QGraphicsItem(parent) {};

	virtual ~MiqtVirtualQGraphicsItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsItem_BoundingRect(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItem_Shape(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_Contains(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsItem_Type(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItem_Extension(const_cast<MiqtVirtualQGraphicsItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsItem::extension(*variant));

	}

};

QGraphicsItem* QGraphicsItem_new() {
	return new MiqtVirtualQGraphicsItem();
}

QGraphicsItem* QGraphicsItem_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsItem(parent);
}

QGraphicsScene* QGraphicsItem_Scene(const QGraphicsItem* self) {
	return self->scene();
}

QGraphicsItem* QGraphicsItem_ParentItem(const QGraphicsItem* self) {
	return self->parentItem();
}

QGraphicsItem* QGraphicsItem_TopLevelItem(const QGraphicsItem* self) {
	return self->topLevelItem();
}

QGraphicsObject* QGraphicsItem_ParentObject(const QGraphicsItem* self) {
	return self->parentObject();
}

QGraphicsWidget* QGraphicsItem_ParentWidget(const QGraphicsItem* self) {
	return self->parentWidget();
}

QGraphicsWidget* QGraphicsItem_TopLevelWidget(const QGraphicsItem* self) {
	return self->topLevelWidget();
}

QGraphicsWidget* QGraphicsItem_Window(const QGraphicsItem* self) {
	return self->window();
}

QGraphicsItem* QGraphicsItem_Panel(const QGraphicsItem* self) {
	return self->panel();
}

void QGraphicsItem_SetParentItem(QGraphicsItem* self, QGraphicsItem* parent) {
	self->setParentItem(parent);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsItem_ChildItems(const QGraphicsItem* self) {
	QList<QGraphicsItem *> _ret = self->childItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QGraphicsItem_IsWidget(const QGraphicsItem* self) {
	return self->isWidget();
}

bool QGraphicsItem_IsWindow(const QGraphicsItem* self) {
	return self->isWindow();
}

bool QGraphicsItem_IsPanel(const QGraphicsItem* self) {
	return self->isPanel();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject(QGraphicsItem* self) {
	return self->toGraphicsObject();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject2(const QGraphicsItem* self) {
	return (QGraphicsObject*) self->toGraphicsObject();
}

QGraphicsItemGroup* QGraphicsItem_Group(const QGraphicsItem* self) {
	return self->group();
}

void QGraphicsItem_SetGroup(QGraphicsItem* self, QGraphicsItemGroup* group) {
	self->setGroup(group);
}

int QGraphicsItem_Flags(const QGraphicsItem* self) {
	QGraphicsItem::GraphicsItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetFlag(QGraphicsItem* self, int flag) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag));
}

void QGraphicsItem_SetFlags(QGraphicsItem* self, int flags) {
	self->setFlags(static_cast<QGraphicsItem::GraphicsItemFlags>(flags));
}

int QGraphicsItem_CacheMode(const QGraphicsItem* self) {
	QGraphicsItem::CacheMode _ret = self->cacheMode();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetCacheMode(QGraphicsItem* self, int mode) {
	self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode));
}

int QGraphicsItem_PanelModality(const QGraphicsItem* self) {
	QGraphicsItem::PanelModality _ret = self->panelModality();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetPanelModality(QGraphicsItem* self, int panelModality) {
	self->setPanelModality(static_cast<QGraphicsItem::PanelModality>(panelModality));
}

bool QGraphicsItem_IsBlockedByModalPanel(const QGraphicsItem* self) {
	return self->isBlockedByModalPanel();
}

struct miqt_string QGraphicsItem_ToolTip(const QGraphicsItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsItem_SetToolTip(QGraphicsItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

QCursor* QGraphicsItem_Cursor(const QGraphicsItem* self) {
	return new QCursor(self->cursor());
}

void QGraphicsItem_SetCursor(QGraphicsItem* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

bool QGraphicsItem_HasCursor(const QGraphicsItem* self) {
	return self->hasCursor();
}

void QGraphicsItem_UnsetCursor(QGraphicsItem* self) {
	self->unsetCursor();
}

bool QGraphicsItem_IsVisible(const QGraphicsItem* self) {
	return self->isVisible();
}

bool QGraphicsItem_IsVisibleTo(const QGraphicsItem* self, QGraphicsItem* parent) {
	return self->isVisibleTo(parent);
}

void QGraphicsItem_SetVisible(QGraphicsItem* self, bool visible) {
	self->setVisible(visible);
}

void QGraphicsItem_Hide(QGraphicsItem* self) {
	self->hide();
}

void QGraphicsItem_Show(QGraphicsItem* self) {
	self->show();
}

bool QGraphicsItem_IsEnabled(const QGraphicsItem* self) {
	return self->isEnabled();
}

void QGraphicsItem_SetEnabled(QGraphicsItem* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QGraphicsItem_IsSelected(const QGraphicsItem* self) {
	return self->isSelected();
}

void QGraphicsItem_SetSelected(QGraphicsItem* self, bool selected) {
	self->setSelected(selected);
}

bool QGraphicsItem_AcceptDrops(const QGraphicsItem* self) {
	return self->acceptDrops();
}

void QGraphicsItem_SetAcceptDrops(QGraphicsItem* self, bool on) {
	self->setAcceptDrops(on);
}

double QGraphicsItem_Opacity(const QGraphicsItem* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

double QGraphicsItem_EffectiveOpacity(const QGraphicsItem* self) {
	qreal _ret = self->effectiveOpacity();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetOpacity(QGraphicsItem* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

QGraphicsEffect* QGraphicsItem_GraphicsEffect(const QGraphicsItem* self) {
	return self->graphicsEffect();
}

void QGraphicsItem_SetGraphicsEffect(QGraphicsItem* self, QGraphicsEffect* effect) {
	self->setGraphicsEffect(effect);
}

int QGraphicsItem_AcceptedMouseButtons(const QGraphicsItem* self) {
	Qt::MouseButtons _ret = self->acceptedMouseButtons();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetAcceptedMouseButtons(QGraphicsItem* self, int buttons) {
	self->setAcceptedMouseButtons(static_cast<Qt::MouseButtons>(buttons));
}

bool QGraphicsItem_AcceptHoverEvents(const QGraphicsItem* self) {
	return self->acceptHoverEvents();
}

void QGraphicsItem_SetAcceptHoverEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptHoverEvents(enabled);
}

bool QGraphicsItem_AcceptTouchEvents(const QGraphicsItem* self) {
	return self->acceptTouchEvents();
}

void QGraphicsItem_SetAcceptTouchEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptTouchEvents(enabled);
}

bool QGraphicsItem_FiltersChildEvents(const QGraphicsItem* self) {
	return self->filtersChildEvents();
}

void QGraphicsItem_SetFiltersChildEvents(QGraphicsItem* self, bool enabled) {
	self->setFiltersChildEvents(enabled);
}

bool QGraphicsItem_HandlesChildEvents(const QGraphicsItem* self) {
	return self->handlesChildEvents();
}

void QGraphicsItem_SetHandlesChildEvents(QGraphicsItem* self, bool enabled) {
	self->setHandlesChildEvents(enabled);
}

bool QGraphicsItem_IsActive(const QGraphicsItem* self) {
	return self->isActive();
}

void QGraphicsItem_SetActive(QGraphicsItem* self, bool active) {
	self->setActive(active);
}

bool QGraphicsItem_HasFocus(const QGraphicsItem* self) {
	return self->hasFocus();
}

void QGraphicsItem_SetFocus(QGraphicsItem* self) {
	self->setFocus();
}

void QGraphicsItem_ClearFocus(QGraphicsItem* self) {
	self->clearFocus();
}

QGraphicsItem* QGraphicsItem_FocusProxy(const QGraphicsItem* self) {
	return self->focusProxy();
}

void QGraphicsItem_SetFocusProxy(QGraphicsItem* self, QGraphicsItem* item) {
	self->setFocusProxy(item);
}

QGraphicsItem* QGraphicsItem_FocusItem(const QGraphicsItem* self) {
	return self->focusItem();
}

QGraphicsItem* QGraphicsItem_FocusScopeItem(const QGraphicsItem* self) {
	return self->focusScopeItem();
}

void QGraphicsItem_GrabMouse(QGraphicsItem* self) {
	self->grabMouse();
}

void QGraphicsItem_UngrabMouse(QGraphicsItem* self) {
	self->ungrabMouse();
}

void QGraphicsItem_GrabKeyboard(QGraphicsItem* self) {
	self->grabKeyboard();
}

void QGraphicsItem_UngrabKeyboard(QGraphicsItem* self) {
	self->ungrabKeyboard();
}

QPointF* QGraphicsItem_Pos(const QGraphicsItem* self) {
	return new QPointF(self->pos());
}

double QGraphicsItem_X(const QGraphicsItem* self) {
	qreal _ret = self->x();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetX(QGraphicsItem* self, double x) {
	self->setX(static_cast<qreal>(x));
}

double QGraphicsItem_Y(const QGraphicsItem* self) {
	qreal _ret = self->y();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetY(QGraphicsItem* self, double y) {
	self->setY(static_cast<qreal>(y));
}

QPointF* QGraphicsItem_ScenePos(const QGraphicsItem* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsItem_SetPos(QGraphicsItem* self, QPointF* pos) {
	self->setPos(*pos);
}

void QGraphicsItem_SetPos2(QGraphicsItem* self, double x, double y) {
	self->setPos(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsItem_MoveBy(QGraphicsItem* self, double dx, double dy) {
	self->moveBy(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsItem_EnsureVisible(QGraphicsItem* self) {
	self->ensureVisible();
}

void QGraphicsItem_EnsureVisible2(QGraphicsItem* self, double x, double y, double w, double h) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QMatrix* QGraphicsItem_Matrix(const QGraphicsItem* self) {
	return new QMatrix(self->matrix());
}

QMatrix* QGraphicsItem_SceneMatrix(const QGraphicsItem* self) {
	return new QMatrix(self->sceneMatrix());
}

void QGraphicsItem_SetMatrix(QGraphicsItem* self, QMatrix* matrix) {
	self->setMatrix(*matrix);
}

void QGraphicsItem_ResetMatrix(QGraphicsItem* self) {
	self->resetMatrix();
}

QTransform* QGraphicsItem_Transform(const QGraphicsItem* self) {
	return new QTransform(self->transform());
}

QTransform* QGraphicsItem_SceneTransform(const QGraphicsItem* self) {
	return new QTransform(self->sceneTransform());
}

QTransform* QGraphicsItem_DeviceTransform(const QGraphicsItem* self, QTransform* viewportTransform) {
	return new QTransform(self->deviceTransform(*viewportTransform));
}

QTransform* QGraphicsItem_ItemTransform(const QGraphicsItem* self, QGraphicsItem* other) {
	return new QTransform(self->itemTransform(other));
}

void QGraphicsItem_SetTransform(QGraphicsItem* self, QTransform* matrix) {
	self->setTransform(*matrix);
}

void QGraphicsItem_ResetTransform(QGraphicsItem* self) {
	self->resetTransform();
}

void QGraphicsItem_SetRotation(QGraphicsItem* self, double angle) {
	self->setRotation(static_cast<qreal>(angle));
}

double QGraphicsItem_Rotation(const QGraphicsItem* self) {
	qreal _ret = self->rotation();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetScale(QGraphicsItem* self, double scale) {
	self->setScale(static_cast<qreal>(scale));
}

double QGraphicsItem_Scale(const QGraphicsItem* self) {
	qreal _ret = self->scale();
	return static_cast<double>(_ret);
}

struct miqt_array /* of QGraphicsTransform* */  QGraphicsItem_Transformations(const QGraphicsItem* self) {
	QList<QGraphicsTransform *> _ret = self->transformations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsTransform** _arr = static_cast<QGraphicsTransform**>(malloc(sizeof(QGraphicsTransform*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsItem_SetTransformations(QGraphicsItem* self, struct miqt_array /* of QGraphicsTransform* */  transformations) {
	QList<QGraphicsTransform *> transformations_QList;
	transformations_QList.reserve(transformations.len);
	QGraphicsTransform** transformations_arr = static_cast<QGraphicsTransform**>(transformations.data);
	for(size_t i = 0; i < transformations.len; ++i) {
		transformations_QList.push_back(transformations_arr[i]);
	}
	self->setTransformations(transformations_QList);
}

QPointF* QGraphicsItem_TransformOriginPoint(const QGraphicsItem* self) {
	return new QPointF(self->transformOriginPoint());
}

void QGraphicsItem_SetTransformOriginPoint(QGraphicsItem* self, QPointF* origin) {
	self->setTransformOriginPoint(*origin);
}

void QGraphicsItem_SetTransformOriginPoint2(QGraphicsItem* self, double ax, double ay) {
	self->setTransformOriginPoint(static_cast<qreal>(ax), static_cast<qreal>(ay));
}

void QGraphicsItem_Advance(QGraphicsItem* self, int phase) {
	self->advance(static_cast<int>(phase));
}

double QGraphicsItem_ZValue(const QGraphicsItem* self) {
	qreal _ret = self->zValue();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetZValue(QGraphicsItem* self, double z) {
	self->setZValue(static_cast<qreal>(z));
}

void QGraphicsItem_StackBefore(QGraphicsItem* self, QGraphicsItem* sibling) {
	self->stackBefore(sibling);
}

QRectF* QGraphicsItem_BoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->boundingRect());
}

QRectF* QGraphicsItem_ChildrenBoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->childrenBoundingRect());
}

QRectF* QGraphicsItem_SceneBoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->sceneBoundingRect());
}

QPainterPath* QGraphicsItem_Shape(const QGraphicsItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsItem_IsClipped(const QGraphicsItem* self) {
	return self->isClipped();
}

QPainterPath* QGraphicsItem_ClipPath(const QGraphicsItem* self) {
	return new QPainterPath(self->clipPath());
}

bool QGraphicsItem_Contains(const QGraphicsItem* self, QPointF* point) {
	return self->contains(*point);
}

bool QGraphicsItem_CollidesWithItem(const QGraphicsItem* self, QGraphicsItem* other, int mode) {
	return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsItem_CollidesWithPath(const QGraphicsItem* self, QPainterPath* path, int mode) {
	return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsItem_CollidingItems(const QGraphicsItem* self) {
	QList<QGraphicsItem *> _ret = self->collidingItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QGraphicsItem_IsObscured(const QGraphicsItem* self) {
	return self->isObscured();
}

bool QGraphicsItem_IsObscured2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return self->isObscured(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

bool QGraphicsItem_IsObscuredBy(const QGraphicsItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItem_OpaqueArea(const QGraphicsItem* self) {
	return new QPainterPath(self->opaqueArea());
}

QRegion* QGraphicsItem_BoundingRegion(const QGraphicsItem* self, QTransform* itemToDeviceTransform) {
	return new QRegion(self->boundingRegion(*itemToDeviceTransform));
}

double QGraphicsItem_BoundingRegionGranularity(const QGraphicsItem* self) {
	qreal _ret = self->boundingRegionGranularity();
	return static_cast<double>(_ret);
}

void QGraphicsItem_SetBoundingRegionGranularity(QGraphicsItem* self, double granularity) {
	self->setBoundingRegionGranularity(static_cast<qreal>(granularity));
}

void QGraphicsItem_Paint(QGraphicsItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsItem_Update(QGraphicsItem* self) {
	self->update();
}

void QGraphicsItem_Update2(QGraphicsItem* self, double x, double y, double width, double height) {
	self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

void QGraphicsItem_Scroll(QGraphicsItem* self, double dx, double dy) {
	self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QPointF* QGraphicsItem_MapToItem(const QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
	return new QPointF(self->mapToItem(item, *point));
}

QPointF* QGraphicsItem_MapToParent(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapToParent(*point));
}

QPointF* QGraphicsItem_MapToScene(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapToScene(*point));
}

QRectF* QGraphicsItem_MapRectToItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	return new QRectF(self->mapRectToItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectToParent(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectToParent(*rect));
}

QRectF* QGraphicsItem_MapRectToScene(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectToScene(*rect));
}

QPainterPath* QGraphicsItem_MapToItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	return new QPainterPath(self->mapToItem(item, *path));
}

QPainterPath* QGraphicsItem_MapToParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapToParent(*path));
}

QPainterPath* QGraphicsItem_MapToSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapToScene(*path));
}

QPointF* QGraphicsItem_MapFromItem(const QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
	return new QPointF(self->mapFromItem(item, *point));
}

QPointF* QGraphicsItem_MapFromParent(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapFromParent(*point));
}

QPointF* QGraphicsItem_MapFromScene(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapFromScene(*point));
}

QRectF* QGraphicsItem_MapRectFromItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	return new QRectF(self->mapRectFromItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectFromParent(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectFromParent(*rect));
}

QRectF* QGraphicsItem_MapRectFromScene(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectFromScene(*rect));
}

QPainterPath* QGraphicsItem_MapFromItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	return new QPainterPath(self->mapFromItem(item, *path));
}

QPainterPath* QGraphicsItem_MapFromParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapFromParent(*path));
}

QPainterPath* QGraphicsItem_MapFromSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsItem_MapToItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	return new QPointF(self->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapToParent2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapToParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapToScene2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapToScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QGraphicsItem_MapRectToItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectToParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectToScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QPointF* QGraphicsItem_MapFromItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	return new QPointF(self->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapFromParent2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapFromParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapFromScene2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QGraphicsItem_MapRectFromItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectFromParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectFromScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

bool QGraphicsItem_IsAncestorOf(const QGraphicsItem* self, QGraphicsItem* child) {
	return self->isAncestorOf(child);
}

QGraphicsItem* QGraphicsItem_CommonAncestorItem(const QGraphicsItem* self, QGraphicsItem* other) {
	return self->commonAncestorItem(other);
}

bool QGraphicsItem_IsUnderMouse(const QGraphicsItem* self) {
	return self->isUnderMouse();
}

QVariant* QGraphicsItem_Data(const QGraphicsItem* self, int key) {
	return new QVariant(self->data(static_cast<int>(key)));
}

void QGraphicsItem_SetData(QGraphicsItem* self, int key, QVariant* value) {
	self->setData(static_cast<int>(key), *value);
}

int QGraphicsItem_InputMethodHints(const QGraphicsItem* self) {
	Qt::InputMethodHints _ret = self->inputMethodHints();
	return static_cast<int>(_ret);
}

void QGraphicsItem_SetInputMethodHints(QGraphicsItem* self, int hints) {
	self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

int QGraphicsItem_Type(const QGraphicsItem* self) {
	return self->type();
}

void QGraphicsItem_InstallSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
	self->installSceneEventFilter(filterItem);
}

void QGraphicsItem_RemoveSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
	self->removeSceneEventFilter(filterItem);
}

void QGraphicsItem_SetFlag2(QGraphicsItem* self, int flag, bool enabled) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag), enabled);
}

void QGraphicsItem_SetCacheMode2(QGraphicsItem* self, int mode, QSize* cacheSize) {
	self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode), *cacheSize);
}

void QGraphicsItem_SetFocus1(QGraphicsItem* self, int focusReason) {
	self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsItem_EnsureVisible1(QGraphicsItem* self, QRectF* rect) {
	self->ensureVisible(*rect);
}

void QGraphicsItem_EnsureVisible22(QGraphicsItem* self, QRectF* rect, int xmargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsItem_EnsureVisible3(QGraphicsItem* self, QRectF* rect, int xmargin, int ymargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsItem_EnsureVisible5(QGraphicsItem* self, double x, double y, double w, double h, int xmargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsItem_EnsureVisible6(QGraphicsItem* self, double x, double y, double w, double h, int xmargin, int ymargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsItem_SetMatrix2(QGraphicsItem* self, QMatrix* matrix, bool combine) {
	self->setMatrix(*matrix, combine);
}

QTransform* QGraphicsItem_ItemTransform2(const QGraphicsItem* self, QGraphicsItem* other, bool* ok) {
	return new QTransform(self->itemTransform(other, ok));
}

void QGraphicsItem_SetTransform2(QGraphicsItem* self, QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsItem_CollidingItems1(const QGraphicsItem* self, int mode) {
	QList<QGraphicsItem *> _ret = self->collidingItems(static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QGraphicsItem_IsObscured1(const QGraphicsItem* self, QRectF* rect) {
	return self->isObscured(*rect);
}

void QGraphicsItem_Update1(QGraphicsItem* self, QRectF* rect) {
	self->update(*rect);
}

void QGraphicsItem_Scroll3(QGraphicsItem* self, double dx, double dy, QRectF* rect) {
	self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy), *rect);
}

bool QGraphicsItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

bool QGraphicsItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

bool QGraphicsItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_Type();
}

bool QGraphicsItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_ItemChange(change, value);
}

bool QGraphicsItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsItem_Delete(QGraphicsItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsObject final : public QGraphicsObject {
public:

	MiqtVirtualQGraphicsObject(): QGraphicsObject() {};
	MiqtVirtualQGraphicsObject(QGraphicsItem* parent): QGraphicsObject(parent) {};

	virtual ~MiqtVirtualQGraphicsObject() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (handle__Event == 0) {
			return QGraphicsObject::event(ev);
		}
		
		QEvent* sigval1 = ev;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* ev) {

		return QGraphicsObject::event(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsObject::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsObject::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsObject::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsObject::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsObject::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsObject::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsObject::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsObject::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsObject::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsObject_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsObject::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsObject::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsObject_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsObject::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsObject::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsObject_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsObject::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsObject_BoundingRect(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsObject::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsObject_Shape(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsObject::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsObject::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_Contains(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsObject::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsObject::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_CollidesWithItem(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsObject::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsObject::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_CollidesWithPath(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsObject::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsObject::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_IsObscuredBy(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsObject::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsObject::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsObject_OpaqueArea(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsObject::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsObject_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsObject::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsObject_Type(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsObject::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsObject::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsObject::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsObject::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsObject::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsObject::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsObject::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsObject::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsObject::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsObject::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsObject::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsObject::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsObject::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsObject::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsObject::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsObject::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsObject::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsObject::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsObject::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsObject::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsObject::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsObject::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsObject::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsObject::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsObject::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsObject::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsObject::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsObject::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsObject::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsObject::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsObject::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsObject::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsObject::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsObject::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsObject::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsObject::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsObject::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsObject::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsObject::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsObject::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsObject::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsObject::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsObject_InputMethodQuery(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsObject::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsObject::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsObject_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsObject::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsObject::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_SupportsExtension(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsObject::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsObject::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsObject_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsObject::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsObject::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsObject_Extension(const_cast<MiqtVirtualQGraphicsObject*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsObject::extension(*variant));

	}

};

QGraphicsObject* QGraphicsObject_new() {
	return new MiqtVirtualQGraphicsObject();
}

QGraphicsObject* QGraphicsObject_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsObject(parent);
}

void QGraphicsObject_virtbase(QGraphicsObject* src, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

QMetaObject* QGraphicsObject_MetaObject(const QGraphicsObject* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsObject_Metacast(QGraphicsObject* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsObject_Tr(const char* s) {
	QString _ret = QGraphicsObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsObject_TrUtf8(const char* s) {
	QString _ret = QGraphicsObject::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsObject_GrabGesture(QGraphicsObject* self, int typeVal) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_UngrabGesture(QGraphicsObject* self, int typeVal) {
	self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_ParentChanged(QGraphicsObject* self) {
	self->parentChanged();
}

void QGraphicsObject_connect_ParentChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::parentChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ParentChanged(slot);
	});
}

void QGraphicsObject_OpacityChanged(QGraphicsObject* self) {
	self->opacityChanged();
}

void QGraphicsObject_connect_OpacityChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::opacityChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_OpacityChanged(slot);
	});
}

void QGraphicsObject_VisibleChanged(QGraphicsObject* self) {
	self->visibleChanged();
}

void QGraphicsObject_connect_VisibleChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::visibleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_VisibleChanged(slot);
	});
}

void QGraphicsObject_EnabledChanged(QGraphicsObject* self) {
	self->enabledChanged();
}

void QGraphicsObject_connect_EnabledChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::enabledChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_EnabledChanged(slot);
	});
}

void QGraphicsObject_XChanged(QGraphicsObject* self) {
	self->xChanged();
}

void QGraphicsObject_connect_XChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::xChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_XChanged(slot);
	});
}

void QGraphicsObject_YChanged(QGraphicsObject* self) {
	self->yChanged();
}

void QGraphicsObject_connect_YChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::yChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_YChanged(slot);
	});
}

void QGraphicsObject_ZChanged(QGraphicsObject* self) {
	self->zChanged();
}

void QGraphicsObject_connect_ZChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::zChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ZChanged(slot);
	});
}

void QGraphicsObject_RotationChanged(QGraphicsObject* self) {
	self->rotationChanged();
}

void QGraphicsObject_connect_RotationChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::rotationChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_RotationChanged(slot);
	});
}

void QGraphicsObject_ScaleChanged(QGraphicsObject* self) {
	self->scaleChanged();
}

void QGraphicsObject_connect_ScaleChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::scaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ScaleChanged(slot);
	});
}

void QGraphicsObject_ChildrenChanged(QGraphicsObject* self) {
	self->childrenChanged();
}

void QGraphicsObject_connect_ChildrenChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::childrenChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_ChildrenChanged(slot);
	});
}

void QGraphicsObject_WidthChanged(QGraphicsObject* self) {
	self->widthChanged();
}

void QGraphicsObject_connect_WidthChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::widthChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_WidthChanged(slot);
	});
}

void QGraphicsObject_HeightChanged(QGraphicsObject* self) {
	self->heightChanged();
}

void QGraphicsObject_connect_HeightChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::heightChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_HeightChanged(slot);
	});
}

struct miqt_string QGraphicsObject_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsObject_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsObject_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsObject::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsObject_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsObject::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsObject_GrabGesture2(QGraphicsObject* self, int typeVal, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<Qt::GestureFlags>(flags));
}

bool QGraphicsObject_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsObject_virtualbase_Event(void* self, QEvent* ev) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_Event(ev);
}

bool QGraphicsObject_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsObject_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGraphicsObject_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsObject_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsObject_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsObject_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsObject_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsObject_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsObject_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QGraphicsObject_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsObject_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsObject_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

bool QGraphicsObject_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsObject_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_Shape();
}

bool QGraphicsObject_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsObject_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsObject_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsObject_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsObject_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsObject_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsObject_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsObject_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsObject_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsObject_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsObject_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

bool QGraphicsObject_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsObject_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_Type();
}

bool QGraphicsObject_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsObject_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsObject_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsObject_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsObject_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsObject_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsObject_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsObject_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsObject_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsObject_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsObject_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsObject_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsObject_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsObject_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsObject_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsObject_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsObject_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsObject_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsObject_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsObject_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsObject_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsObject_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsObject_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsObject_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsObject_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsObject_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_ItemChange(change, value);
}

bool QGraphicsObject_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsObject_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsObject_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsObject_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsObject_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsObject_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsObject_Delete(QGraphicsObject* self) {
	delete self;
}

class MiqtVirtualQAbstractGraphicsShapeItem final : public QAbstractGraphicsShapeItem {
public:

	MiqtVirtualQAbstractGraphicsShapeItem(): QAbstractGraphicsShapeItem() {};
	MiqtVirtualQAbstractGraphicsShapeItem(QGraphicsItem* parent): QAbstractGraphicsShapeItem(parent) {};

	virtual ~MiqtVirtualQAbstractGraphicsShapeItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QAbstractGraphicsShapeItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_IsObscuredBy(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QAbstractGraphicsShapeItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QAbstractGraphicsShapeItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_OpaqueArea(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QAbstractGraphicsShapeItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QAbstractGraphicsShapeItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QAbstractGraphicsShapeItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QAbstractGraphicsShapeItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_BoundingRect(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QAbstractGraphicsShapeItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_Shape(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QAbstractGraphicsShapeItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QAbstractGraphicsShapeItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_Contains(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QAbstractGraphicsShapeItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QAbstractGraphicsShapeItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_CollidesWithItem(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QAbstractGraphicsShapeItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QAbstractGraphicsShapeItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_CollidesWithPath(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QAbstractGraphicsShapeItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QAbstractGraphicsShapeItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QAbstractGraphicsShapeItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_Type(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QAbstractGraphicsShapeItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QAbstractGraphicsShapeItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QAbstractGraphicsShapeItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QAbstractGraphicsShapeItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QAbstractGraphicsShapeItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QAbstractGraphicsShapeItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QAbstractGraphicsShapeItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QAbstractGraphicsShapeItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QAbstractGraphicsShapeItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QAbstractGraphicsShapeItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QAbstractGraphicsShapeItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QAbstractGraphicsShapeItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QAbstractGraphicsShapeItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QAbstractGraphicsShapeItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QAbstractGraphicsShapeItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QAbstractGraphicsShapeItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QAbstractGraphicsShapeItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QAbstractGraphicsShapeItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QAbstractGraphicsShapeItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QAbstractGraphicsShapeItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QAbstractGraphicsShapeItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QAbstractGraphicsShapeItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QAbstractGraphicsShapeItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QAbstractGraphicsShapeItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QAbstractGraphicsShapeItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QAbstractGraphicsShapeItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QAbstractGraphicsShapeItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QAbstractGraphicsShapeItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QAbstractGraphicsShapeItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QAbstractGraphicsShapeItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QAbstractGraphicsShapeItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QAbstractGraphicsShapeItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QAbstractGraphicsShapeItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QAbstractGraphicsShapeItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QAbstractGraphicsShapeItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QAbstractGraphicsShapeItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QAbstractGraphicsShapeItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QAbstractGraphicsShapeItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QAbstractGraphicsShapeItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QAbstractGraphicsShapeItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QAbstractGraphicsShapeItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QAbstractGraphicsShapeItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_InputMethodQuery(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QAbstractGraphicsShapeItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QAbstractGraphicsShapeItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QAbstractGraphicsShapeItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QAbstractGraphicsShapeItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_SupportsExtension(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QAbstractGraphicsShapeItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QAbstractGraphicsShapeItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QAbstractGraphicsShapeItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QAbstractGraphicsShapeItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QAbstractGraphicsShapeItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_Extension(const_cast<MiqtVirtualQAbstractGraphicsShapeItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QAbstractGraphicsShapeItem::extension(*variant));

	}

};

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new() {
	return new MiqtVirtualQAbstractGraphicsShapeItem();
}

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQAbstractGraphicsShapeItem(parent);
}

void QAbstractGraphicsShapeItem_virtbase(QAbstractGraphicsShapeItem* src, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

QPen* QAbstractGraphicsShapeItem_Pen(const QAbstractGraphicsShapeItem* self) {
	return new QPen(self->pen());
}

void QAbstractGraphicsShapeItem_SetPen(QAbstractGraphicsShapeItem* self, QPen* pen) {
	self->setPen(*pen);
}

QBrush* QAbstractGraphicsShapeItem_Brush(const QAbstractGraphicsShapeItem* self) {
	return new QBrush(self->brush());
}

void QAbstractGraphicsShapeItem_SetBrush(QAbstractGraphicsShapeItem* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QAbstractGraphicsShapeItem_IsObscuredBy(const QAbstractGraphicsShapeItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QAbstractGraphicsShapeItem_OpaqueArea(const QAbstractGraphicsShapeItem* self) {
	return new QPainterPath(self->opaqueArea());
}

bool QAbstractGraphicsShapeItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QAbstractGraphicsShapeItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QAbstractGraphicsShapeItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_OpaqueArea();
}

bool QAbstractGraphicsShapeItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_Advance(phase);
}

bool QAbstractGraphicsShapeItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QAbstractGraphicsShapeItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_Shape();
}

bool QAbstractGraphicsShapeItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_Contains(point);
}

bool QAbstractGraphicsShapeItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QAbstractGraphicsShapeItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QAbstractGraphicsShapeItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QAbstractGraphicsShapeItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_Type();
}

bool QAbstractGraphicsShapeItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QAbstractGraphicsShapeItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_DropEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QAbstractGraphicsShapeItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QAbstractGraphicsShapeItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QAbstractGraphicsShapeItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_ItemChange(change, value);
}

bool QAbstractGraphicsShapeItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QAbstractGraphicsShapeItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QAbstractGraphicsShapeItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QAbstractGraphicsShapeItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_Extension(variant);
}

void QAbstractGraphicsShapeItem_Delete(QAbstractGraphicsShapeItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsPathItem final : public QGraphicsPathItem {
public:

	MiqtVirtualQGraphicsPathItem(): QGraphicsPathItem() {};
	MiqtVirtualQGraphicsPathItem(const QPainterPath& path): QGraphicsPathItem(path) {};
	MiqtVirtualQGraphicsPathItem(QGraphicsItem* parent): QGraphicsPathItem(parent) {};
	MiqtVirtualQGraphicsPathItem(const QPainterPath& path, QGraphicsItem* parent): QGraphicsPathItem(path, parent) {};

	virtual ~MiqtVirtualQGraphicsPathItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsPathItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsPathItem_BoundingRect(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsPathItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsPathItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPathItem_Shape(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsPathItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsPathItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_Contains(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsPathItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsPathItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsPathItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsPathItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsPathItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsPathItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsPathItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPathItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsPathItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsPathItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsPathItem_Type(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsPathItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsPathItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsPathItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsPathItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsPathItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsPathItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsPathItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPathItem_Extension(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsPathItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsPathItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsPathItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsPathItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsPathItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsPathItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsPathItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsPathItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsPathItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsPathItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsPathItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsPathItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsPathItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsPathItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsPathItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPathItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsPathItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPathItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsPathItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPathItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsPathItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPathItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsPathItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsPathItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsPathItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsPathItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsPathItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPathItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsPathItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPathItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsPathItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPathItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsPathItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsPathItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsPathItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsPathItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsPathItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPathItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsPathItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPathItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsPathItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPathItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsPathItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPathItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsPathItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsPathItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsPathItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsPathItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsPathItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPathItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsPathItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsPathItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsPathItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPathItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsPathItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

QGraphicsPathItem* QGraphicsPathItem_new() {
	return new MiqtVirtualQGraphicsPathItem();
}

QGraphicsPathItem* QGraphicsPathItem_new2(QPainterPath* path) {
	return new MiqtVirtualQGraphicsPathItem(*path);
}

QGraphicsPathItem* QGraphicsPathItem_new3(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPathItem(parent);
}

QGraphicsPathItem* QGraphicsPathItem_new4(QPainterPath* path, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPathItem(*path, parent);
}

void QGraphicsPathItem_virtbase(QGraphicsPathItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

QPainterPath* QGraphicsPathItem_Path(const QGraphicsPathItem* self) {
	return new QPainterPath(self->path());
}

void QGraphicsPathItem_SetPath(QGraphicsPathItem* self, QPainterPath* path) {
	self->setPath(*path);
}

QRectF* QGraphicsPathItem_BoundingRect(const QGraphicsPathItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPathItem_Shape(const QGraphicsPathItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPathItem_Contains(const QGraphicsPathItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPathItem_Paint(QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPathItem_IsObscuredBy(const QGraphicsPathItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPathItem_OpaqueArea(const QGraphicsPathItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPathItem_Type(const QGraphicsPathItem* self) {
	return self->type();
}

bool QGraphicsPathItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsPathItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsPathItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsPathItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsPathItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsPathItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsPathItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsPathItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsPathItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsPathItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsPathItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Type();
}

bool QGraphicsPathItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsPathItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsPathItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsPathItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Extension(variant);
}

bool QGraphicsPathItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsPathItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsPathItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsPathItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsPathItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsPathItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsPathItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsPathItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsPathItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsPathItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsPathItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsPathItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsPathItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsPathItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsPathItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsPathItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsPathItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsPathItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsPathItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsPathItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsPathItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsPathItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsPathItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsPathItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsPathItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsPathItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsPathItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsPathItem_Delete(QGraphicsPathItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsRectItem final : public QGraphicsRectItem {
public:

	MiqtVirtualQGraphicsRectItem(): QGraphicsRectItem() {};
	MiqtVirtualQGraphicsRectItem(const QRectF& rect): QGraphicsRectItem(rect) {};
	MiqtVirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h): QGraphicsRectItem(x, y, w, h) {};
	MiqtVirtualQGraphicsRectItem(QGraphicsItem* parent): QGraphicsRectItem(parent) {};
	MiqtVirtualQGraphicsRectItem(const QRectF& rect, QGraphicsItem* parent): QGraphicsRectItem(rect, parent) {};
	MiqtVirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent): QGraphicsRectItem(x, y, w, h, parent) {};

	virtual ~MiqtVirtualQGraphicsRectItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsRectItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsRectItem_BoundingRect(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsRectItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsRectItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsRectItem_Shape(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsRectItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsRectItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_Contains(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsRectItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsRectItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsRectItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsRectItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsRectItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsRectItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsRectItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsRectItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsRectItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsRectItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsRectItem_Type(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsRectItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsRectItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsRectItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsRectItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsRectItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsRectItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsRectItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsRectItem_Extension(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsRectItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsRectItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsRectItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsRectItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsRectItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsRectItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsRectItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsRectItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsRectItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsRectItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsRectItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsRectItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsRectItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsRectItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsRectItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsRectItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsRectItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsRectItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsRectItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsRectItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsRectItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsRectItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsRectItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsRectItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsRectItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsRectItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsRectItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsRectItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsRectItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsRectItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsRectItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsRectItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsRectItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsRectItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsRectItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsRectItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsRectItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsRectItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsRectItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsRectItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsRectItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsRectItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsRectItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsRectItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsRectItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsRectItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsRectItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsRectItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsRectItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsRectItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsRectItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsRectItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsRectItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsRectItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsRectItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

QGraphicsRectItem* QGraphicsRectItem_new() {
	return new MiqtVirtualQGraphicsRectItem();
}

QGraphicsRectItem* QGraphicsRectItem_new2(QRectF* rect) {
	return new MiqtVirtualQGraphicsRectItem(*rect);
}

QGraphicsRectItem* QGraphicsRectItem_new3(double x, double y, double w, double h) {
	return new MiqtVirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsRectItem* QGraphicsRectItem_new4(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsRectItem(parent);
}

QGraphicsRectItem* QGraphicsRectItem_new5(QRectF* rect, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsRectItem(*rect, parent);
}

QGraphicsRectItem* QGraphicsRectItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

void QGraphicsRectItem_virtbase(QGraphicsRectItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

QRectF* QGraphicsRectItem_Rect(const QGraphicsRectItem* self) {
	return new QRectF(self->rect());
}

void QGraphicsRectItem_SetRect(QGraphicsRectItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsRectItem_SetRect2(QGraphicsRectItem* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsRectItem_BoundingRect(const QGraphicsRectItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsRectItem_Shape(const QGraphicsRectItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsRectItem_Contains(const QGraphicsRectItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsRectItem_Paint(QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsRectItem_IsObscuredBy(const QGraphicsRectItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsRectItem_OpaqueArea(const QGraphicsRectItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsRectItem_Type(const QGraphicsRectItem* self) {
	return self->type();
}

bool QGraphicsRectItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsRectItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsRectItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsRectItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsRectItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsRectItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsRectItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsRectItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsRectItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsRectItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsRectItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Type();
}

bool QGraphicsRectItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsRectItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsRectItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsRectItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Extension(variant);
}

bool QGraphicsRectItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsRectItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsRectItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsRectItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsRectItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsRectItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsRectItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsRectItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsRectItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsRectItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsRectItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsRectItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsRectItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsRectItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsRectItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsRectItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsRectItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsRectItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsRectItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsRectItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsRectItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsRectItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsRectItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsRectItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsRectItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsRectItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsRectItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsRectItem_Delete(QGraphicsRectItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsEllipseItem final : public QGraphicsEllipseItem {
public:

	MiqtVirtualQGraphicsEllipseItem(): QGraphicsEllipseItem() {};
	MiqtVirtualQGraphicsEllipseItem(const QRectF& rect): QGraphicsEllipseItem(rect) {};
	MiqtVirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h): QGraphicsEllipseItem(x, y, w, h) {};
	MiqtVirtualQGraphicsEllipseItem(QGraphicsItem* parent): QGraphicsEllipseItem(parent) {};
	MiqtVirtualQGraphicsEllipseItem(const QRectF& rect, QGraphicsItem* parent): QGraphicsEllipseItem(rect, parent) {};
	MiqtVirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent): QGraphicsEllipseItem(x, y, w, h, parent) {};

	virtual ~MiqtVirtualQGraphicsEllipseItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsEllipseItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_BoundingRect(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsEllipseItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsEllipseItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_Shape(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsEllipseItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsEllipseItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_Contains(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsEllipseItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsEllipseItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsEllipseItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsEllipseItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsEllipseItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsEllipseItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsEllipseItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsEllipseItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsEllipseItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_Type(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsEllipseItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsEllipseItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsEllipseItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsEllipseItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsEllipseItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsEllipseItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsEllipseItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_Extension(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsEllipseItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsEllipseItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsEllipseItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsEllipseItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsEllipseItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsEllipseItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsEllipseItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsEllipseItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsEllipseItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsEllipseItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsEllipseItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsEllipseItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsEllipseItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsEllipseItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsEllipseItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsEllipseItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsEllipseItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsEllipseItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsEllipseItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsEllipseItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsEllipseItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsEllipseItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsEllipseItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsEllipseItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsEllipseItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsEllipseItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsEllipseItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsEllipseItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsEllipseItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsEllipseItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsEllipseItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsEllipseItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsEllipseItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsEllipseItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsEllipseItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsEllipseItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsEllipseItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsEllipseItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsEllipseItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsEllipseItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsEllipseItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsEllipseItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsEllipseItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsEllipseItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsEllipseItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsEllipseItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsEllipseItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsEllipseItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsEllipseItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsEllipseItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsEllipseItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsEllipseItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsEllipseItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

QGraphicsEllipseItem* QGraphicsEllipseItem_new() {
	return new MiqtVirtualQGraphicsEllipseItem();
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new2(QRectF* rect) {
	return new MiqtVirtualQGraphicsEllipseItem(*rect);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new3(double x, double y, double w, double h) {
	return new MiqtVirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new4(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsEllipseItem(parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new5(QRectF* rect, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsEllipseItem(*rect, parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

void QGraphicsEllipseItem_virtbase(QGraphicsEllipseItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

QRectF* QGraphicsEllipseItem_Rect(const QGraphicsEllipseItem* self) {
	return new QRectF(self->rect());
}

void QGraphicsEllipseItem_SetRect(QGraphicsEllipseItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsEllipseItem_SetRect2(QGraphicsEllipseItem* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

int QGraphicsEllipseItem_StartAngle(const QGraphicsEllipseItem* self) {
	return self->startAngle();
}

void QGraphicsEllipseItem_SetStartAngle(QGraphicsEllipseItem* self, int angle) {
	self->setStartAngle(static_cast<int>(angle));
}

int QGraphicsEllipseItem_SpanAngle(const QGraphicsEllipseItem* self) {
	return self->spanAngle();
}

void QGraphicsEllipseItem_SetSpanAngle(QGraphicsEllipseItem* self, int angle) {
	self->setSpanAngle(static_cast<int>(angle));
}

QRectF* QGraphicsEllipseItem_BoundingRect(const QGraphicsEllipseItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsEllipseItem_Shape(const QGraphicsEllipseItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsEllipseItem_Contains(const QGraphicsEllipseItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsEllipseItem_Paint(QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsEllipseItem_IsObscuredBy(const QGraphicsEllipseItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsEllipseItem_OpaqueArea(const QGraphicsEllipseItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsEllipseItem_Type(const QGraphicsEllipseItem* self) {
	return self->type();
}

bool QGraphicsEllipseItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsEllipseItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsEllipseItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsEllipseItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsEllipseItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsEllipseItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsEllipseItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsEllipseItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsEllipseItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsEllipseItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsEllipseItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Type();
}

bool QGraphicsEllipseItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsEllipseItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsEllipseItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsEllipseItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Extension(variant);
}

bool QGraphicsEllipseItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsEllipseItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsEllipseItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsEllipseItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsEllipseItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsEllipseItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsEllipseItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsEllipseItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsEllipseItem_Delete(QGraphicsEllipseItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsPolygonItem final : public QGraphicsPolygonItem {
public:

	MiqtVirtualQGraphicsPolygonItem(): QGraphicsPolygonItem() {};
	MiqtVirtualQGraphicsPolygonItem(QGraphicsItem* parent): QGraphicsPolygonItem(parent) {};

	virtual ~MiqtVirtualQGraphicsPolygonItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsPolygonItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_BoundingRect(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsPolygonItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsPolygonItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_Shape(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsPolygonItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsPolygonItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_Contains(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsPolygonItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsPolygonItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsPolygonItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsPolygonItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsPolygonItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsPolygonItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsPolygonItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsPolygonItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsPolygonItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_Type(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsPolygonItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsPolygonItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsPolygonItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsPolygonItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsPolygonItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsPolygonItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsPolygonItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_Extension(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsPolygonItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsPolygonItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsPolygonItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsPolygonItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsPolygonItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsPolygonItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsPolygonItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsPolygonItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsPolygonItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsPolygonItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsPolygonItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsPolygonItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsPolygonItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsPolygonItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsPolygonItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPolygonItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsPolygonItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPolygonItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsPolygonItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPolygonItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsPolygonItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPolygonItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsPolygonItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsPolygonItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsPolygonItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsPolygonItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsPolygonItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPolygonItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsPolygonItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPolygonItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsPolygonItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPolygonItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsPolygonItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsPolygonItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsPolygonItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsPolygonItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsPolygonItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPolygonItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsPolygonItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPolygonItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsPolygonItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPolygonItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsPolygonItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPolygonItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsPolygonItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsPolygonItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsPolygonItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsPolygonItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsPolygonItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsPolygonItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsPolygonItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsPolygonItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsPolygonItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

QGraphicsPolygonItem* QGraphicsPolygonItem_new() {
	return new MiqtVirtualQGraphicsPolygonItem();
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPolygonItem(parent);
}

void QGraphicsPolygonItem_virtbase(QGraphicsPolygonItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

int QGraphicsPolygonItem_FillRule(const QGraphicsPolygonItem* self) {
	Qt::FillRule _ret = self->fillRule();
	return static_cast<int>(_ret);
}

void QGraphicsPolygonItem_SetFillRule(QGraphicsPolygonItem* self, int rule) {
	self->setFillRule(static_cast<Qt::FillRule>(rule));
}

QRectF* QGraphicsPolygonItem_BoundingRect(const QGraphicsPolygonItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPolygonItem_Shape(const QGraphicsPolygonItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPolygonItem_Contains(const QGraphicsPolygonItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPolygonItem_Paint(QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPolygonItem_IsObscuredBy(const QGraphicsPolygonItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPolygonItem_OpaqueArea(const QGraphicsPolygonItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPolygonItem_Type(const QGraphicsPolygonItem* self) {
	return self->type();
}

bool QGraphicsPolygonItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsPolygonItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsPolygonItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsPolygonItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsPolygonItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsPolygonItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsPolygonItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsPolygonItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsPolygonItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsPolygonItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsPolygonItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Type();
}

bool QGraphicsPolygonItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsPolygonItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsPolygonItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsPolygonItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Extension(variant);
}

bool QGraphicsPolygonItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsPolygonItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsPolygonItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsPolygonItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsPolygonItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsPolygonItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsPolygonItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsPolygonItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsPolygonItem_Delete(QGraphicsPolygonItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsLineItem final : public QGraphicsLineItem {
public:

	MiqtVirtualQGraphicsLineItem(): QGraphicsLineItem() {};
	MiqtVirtualQGraphicsLineItem(const QLineF& line): QGraphicsLineItem(line) {};
	MiqtVirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2): QGraphicsLineItem(x1, y1, x2, y2) {};
	MiqtVirtualQGraphicsLineItem(QGraphicsItem* parent): QGraphicsLineItem(parent) {};
	MiqtVirtualQGraphicsLineItem(const QLineF& line, QGraphicsItem* parent): QGraphicsLineItem(line, parent) {};
	MiqtVirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem* parent): QGraphicsLineItem(x1, y1, x2, y2, parent) {};

	virtual ~MiqtVirtualQGraphicsLineItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsLineItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsLineItem_BoundingRect(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsLineItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsLineItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsLineItem_Shape(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsLineItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsLineItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_Contains(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsLineItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsLineItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsLineItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsLineItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsLineItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsLineItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsLineItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsLineItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsLineItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsLineItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsLineItem_Type(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsLineItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsLineItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsLineItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsLineItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsLineItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsLineItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsLineItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsLineItem_Extension(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsLineItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsLineItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsLineItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsLineItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsLineItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsLineItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsLineItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsLineItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsLineItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsLineItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsLineItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsLineItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsLineItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsLineItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsLineItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsLineItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsLineItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsLineItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsLineItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsLineItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsLineItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsLineItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsLineItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsLineItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsLineItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsLineItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsLineItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsLineItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsLineItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsLineItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsLineItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsLineItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsLineItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsLineItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsLineItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsLineItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsLineItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsLineItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsLineItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsLineItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsLineItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsLineItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsLineItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsLineItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsLineItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsLineItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsLineItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

QGraphicsLineItem* QGraphicsLineItem_new() {
	return new MiqtVirtualQGraphicsLineItem();
}

QGraphicsLineItem* QGraphicsLineItem_new2(QLineF* line) {
	return new MiqtVirtualQGraphicsLineItem(*line);
}

QGraphicsLineItem* QGraphicsLineItem_new3(double x1, double y1, double x2, double y2) {
	return new MiqtVirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsLineItem* QGraphicsLineItem_new4(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsLineItem(parent);
}

QGraphicsLineItem* QGraphicsLineItem_new5(QLineF* line, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsLineItem(*line, parent);
}

QGraphicsLineItem* QGraphicsLineItem_new6(double x1, double y1, double x2, double y2, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), parent);
}

void QGraphicsLineItem_virtbase(QGraphicsLineItem* src, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

QPen* QGraphicsLineItem_Pen(const QGraphicsLineItem* self) {
	return new QPen(self->pen());
}

void QGraphicsLineItem_SetPen(QGraphicsLineItem* self, QPen* pen) {
	self->setPen(*pen);
}

QLineF* QGraphicsLineItem_Line(const QGraphicsLineItem* self) {
	return new QLineF(self->line());
}

void QGraphicsLineItem_SetLine(QGraphicsLineItem* self, QLineF* line) {
	self->setLine(*line);
}

void QGraphicsLineItem_SetLine2(QGraphicsLineItem* self, double x1, double y1, double x2, double y2) {
	self->setLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QRectF* QGraphicsLineItem_BoundingRect(const QGraphicsLineItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsLineItem_Shape(const QGraphicsLineItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsLineItem_Contains(const QGraphicsLineItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsLineItem_Paint(QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsLineItem_IsObscuredBy(const QGraphicsLineItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsLineItem_OpaqueArea(const QGraphicsLineItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsLineItem_Type(const QGraphicsLineItem* self) {
	return self->type();
}

bool QGraphicsLineItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsLineItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsLineItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsLineItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsLineItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsLineItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsLineItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsLineItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsLineItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsLineItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsLineItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Type();
}

bool QGraphicsLineItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsLineItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsLineItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsLineItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Extension(variant);
}

bool QGraphicsLineItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsLineItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsLineItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsLineItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsLineItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsLineItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsLineItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsLineItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsLineItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsLineItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsLineItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsLineItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsLineItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsLineItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsLineItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsLineItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsLineItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsLineItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsLineItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsLineItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsLineItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsLineItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsLineItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsLineItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsLineItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsLineItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsLineItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsLineItem_Delete(QGraphicsLineItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsPixmapItem final : public QGraphicsPixmapItem {
public:

	MiqtVirtualQGraphicsPixmapItem(): QGraphicsPixmapItem() {};
	MiqtVirtualQGraphicsPixmapItem(const QPixmap& pixmap): QGraphicsPixmapItem(pixmap) {};
	MiqtVirtualQGraphicsPixmapItem(QGraphicsItem* parent): QGraphicsPixmapItem(parent) {};
	MiqtVirtualQGraphicsPixmapItem(const QPixmap& pixmap, QGraphicsItem* parent): QGraphicsPixmapItem(pixmap, parent) {};

	virtual ~MiqtVirtualQGraphicsPixmapItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsPixmapItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_BoundingRect(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsPixmapItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsPixmapItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_Shape(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsPixmapItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsPixmapItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_Contains(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsPixmapItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsPixmapItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsPixmapItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsPixmapItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsPixmapItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsPixmapItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsPixmapItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsPixmapItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsPixmapItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_Type(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsPixmapItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsPixmapItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsPixmapItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsPixmapItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsPixmapItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsPixmapItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsPixmapItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_Extension(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsPixmapItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsPixmapItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsPixmapItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsPixmapItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsPixmapItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsPixmapItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsPixmapItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsPixmapItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsPixmapItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsPixmapItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsPixmapItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsPixmapItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsPixmapItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsPixmapItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsPixmapItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsPixmapItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsPixmapItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsPixmapItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsPixmapItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsPixmapItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsPixmapItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsPixmapItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsPixmapItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPixmapItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsPixmapItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPixmapItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsPixmapItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPixmapItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsPixmapItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsPixmapItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsPixmapItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsPixmapItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsPixmapItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsPixmapItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsPixmapItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsPixmapItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsPixmapItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsPixmapItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsPixmapItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsPixmapItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsPixmapItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsPixmapItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsPixmapItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsPixmapItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsPixmapItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

QGraphicsPixmapItem* QGraphicsPixmapItem_new() {
	return new MiqtVirtualQGraphicsPixmapItem();
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new2(QPixmap* pixmap) {
	return new MiqtVirtualQGraphicsPixmapItem(*pixmap);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new3(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPixmapItem(parent);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new4(QPixmap* pixmap, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPixmapItem(*pixmap, parent);
}

void QGraphicsPixmapItem_virtbase(QGraphicsPixmapItem* src, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

QPixmap* QGraphicsPixmapItem_Pixmap(const QGraphicsPixmapItem* self) {
	return new QPixmap(self->pixmap());
}

void QGraphicsPixmapItem_SetPixmap(QGraphicsPixmapItem* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

int QGraphicsPixmapItem_TransformationMode(const QGraphicsPixmapItem* self) {
	Qt::TransformationMode _ret = self->transformationMode();
	return static_cast<int>(_ret);
}

void QGraphicsPixmapItem_SetTransformationMode(QGraphicsPixmapItem* self, int mode) {
	self->setTransformationMode(static_cast<Qt::TransformationMode>(mode));
}

QPointF* QGraphicsPixmapItem_Offset(const QGraphicsPixmapItem* self) {
	return new QPointF(self->offset());
}

void QGraphicsPixmapItem_SetOffset(QGraphicsPixmapItem* self, QPointF* offset) {
	self->setOffset(*offset);
}

void QGraphicsPixmapItem_SetOffset2(QGraphicsPixmapItem* self, double x, double y) {
	self->setOffset(static_cast<qreal>(x), static_cast<qreal>(y));
}

QRectF* QGraphicsPixmapItem_BoundingRect(const QGraphicsPixmapItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPixmapItem_Shape(const QGraphicsPixmapItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPixmapItem_Contains(const QGraphicsPixmapItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPixmapItem_Paint(QGraphicsPixmapItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPixmapItem_IsObscuredBy(const QGraphicsPixmapItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPixmapItem_OpaqueArea(const QGraphicsPixmapItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPixmapItem_Type(const QGraphicsPixmapItem* self) {
	return self->type();
}

int QGraphicsPixmapItem_ShapeMode(const QGraphicsPixmapItem* self) {
	QGraphicsPixmapItem::ShapeMode _ret = self->shapeMode();
	return static_cast<int>(_ret);
}

void QGraphicsPixmapItem_SetShapeMode(QGraphicsPixmapItem* self, int mode) {
	self->setShapeMode(static_cast<QGraphicsPixmapItem::ShapeMode>(mode));
}

bool QGraphicsPixmapItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsPixmapItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsPixmapItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsPixmapItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsPixmapItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsPixmapItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsPixmapItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsPixmapItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsPixmapItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsPixmapItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsPixmapItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Type();
}

bool QGraphicsPixmapItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsPixmapItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsPixmapItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsPixmapItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Extension(variant);
}

bool QGraphicsPixmapItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsPixmapItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsPixmapItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsPixmapItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsPixmapItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsPixmapItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsPixmapItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsPixmapItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsPixmapItem_Delete(QGraphicsPixmapItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsTextItem final : public QGraphicsTextItem {
public:

	MiqtVirtualQGraphicsTextItem(): QGraphicsTextItem() {};
	MiqtVirtualQGraphicsTextItem(const QString& text): QGraphicsTextItem(text) {};
	MiqtVirtualQGraphicsTextItem(QGraphicsItem* parent): QGraphicsTextItem(parent) {};
	MiqtVirtualQGraphicsTextItem(const QString& text, QGraphicsItem* parent): QGraphicsTextItem(text, parent) {};

	virtual ~MiqtVirtualQGraphicsTextItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsTextItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsTextItem_BoundingRect(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsTextItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsTextItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsTextItem_Shape(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsTextItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsTextItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_Contains(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsTextItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsTextItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsTextItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsTextItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsTextItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsTextItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsTextItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsTextItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsTextItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsTextItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsTextItem_Type(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsTextItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsTextItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsTextItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsTextItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsTextItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsTextItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsTextItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsTextItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsTextItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsTextItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsTextItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsTextItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsTextItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsTextItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsTextItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsTextItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsTextItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsTextItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsTextItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsTextItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsTextItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsTextItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsTextItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsTextItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsTextItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsTextItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsTextItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsTextItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsTextItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsTextItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsTextItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsTextItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsTextItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsTextItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsTextItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsTextItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsTextItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsTextItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsTextItem_Extension(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsTextItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (handle__Event == 0) {
			return QGraphicsTextItem::event(ev);
		}
		
		QEvent* sigval1 = ev;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* ev) {

		return QGraphicsTextItem::event(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsTextItem::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsTextItem::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsTextItem::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsTextItem::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsTextItem::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsTextItem::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsTextItem::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsTextItem::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsTextItem::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsTextItem_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsTextItem::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsTextItem::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsTextItem_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsTextItem::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsTextItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsTextItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsTextItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsTextItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsTextItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsTextItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsTextItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsTextItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsTextItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsTextItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsTextItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsTextItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsTextItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsTextItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsTextItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

QGraphicsTextItem* QGraphicsTextItem_new() {
	return new MiqtVirtualQGraphicsTextItem();
}

QGraphicsTextItem* QGraphicsTextItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQGraphicsTextItem(text_QString);
}

QGraphicsTextItem* QGraphicsTextItem_new3(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsTextItem(parent);
}

QGraphicsTextItem* QGraphicsTextItem_new4(struct miqt_string text, QGraphicsItem* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQGraphicsTextItem(text_QString, parent);
}

void QGraphicsTextItem_virtbase(QGraphicsTextItem* src, QGraphicsObject** outptr_QGraphicsObject) {
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(src);
}

QMetaObject* QGraphicsTextItem_MetaObject(const QGraphicsTextItem* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsTextItem_Metacast(QGraphicsTextItem* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsTextItem_Tr(const char* s) {
	QString _ret = QGraphicsTextItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_TrUtf8(const char* s) {
	QString _ret = QGraphicsTextItem::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_ToHtml(const QGraphicsTextItem* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTextItem_SetHtml(QGraphicsTextItem* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

struct miqt_string QGraphicsTextItem_ToPlainText(const QGraphicsTextItem* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTextItem_SetPlainText(QGraphicsTextItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

QFont* QGraphicsTextItem_Font(const QGraphicsTextItem* self) {
	return new QFont(self->font());
}

void QGraphicsTextItem_SetFont(QGraphicsTextItem* self, QFont* font) {
	self->setFont(*font);
}

void QGraphicsTextItem_SetDefaultTextColor(QGraphicsTextItem* self, QColor* c) {
	self->setDefaultTextColor(*c);
}

QColor* QGraphicsTextItem_DefaultTextColor(const QGraphicsTextItem* self) {
	return new QColor(self->defaultTextColor());
}

QRectF* QGraphicsTextItem_BoundingRect(const QGraphicsTextItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsTextItem_Shape(const QGraphicsTextItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsTextItem_Contains(const QGraphicsTextItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsTextItem_Paint(QGraphicsTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsTextItem_IsObscuredBy(const QGraphicsTextItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsTextItem_OpaqueArea(const QGraphicsTextItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsTextItem_Type(const QGraphicsTextItem* self) {
	return self->type();
}

void QGraphicsTextItem_SetTextWidth(QGraphicsTextItem* self, double width) {
	self->setTextWidth(static_cast<qreal>(width));
}

double QGraphicsTextItem_TextWidth(const QGraphicsTextItem* self) {
	qreal _ret = self->textWidth();
	return static_cast<double>(_ret);
}

void QGraphicsTextItem_AdjustSize(QGraphicsTextItem* self) {
	self->adjustSize();
}

void QGraphicsTextItem_SetDocument(QGraphicsTextItem* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QGraphicsTextItem_Document(const QGraphicsTextItem* self) {
	return self->document();
}

void QGraphicsTextItem_SetTextInteractionFlags(QGraphicsTextItem* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QGraphicsTextItem_TextInteractionFlags(const QGraphicsTextItem* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QGraphicsTextItem_SetTabChangesFocus(QGraphicsTextItem* self, bool b) {
	self->setTabChangesFocus(b);
}

bool QGraphicsTextItem_TabChangesFocus(const QGraphicsTextItem* self) {
	return self->tabChangesFocus();
}

void QGraphicsTextItem_SetOpenExternalLinks(QGraphicsTextItem* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QGraphicsTextItem_OpenExternalLinks(const QGraphicsTextItem* self) {
	return self->openExternalLinks();
}

void QGraphicsTextItem_SetTextCursor(QGraphicsTextItem* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QGraphicsTextItem_TextCursor(const QGraphicsTextItem* self) {
	return new QTextCursor(self->textCursor());
}

void QGraphicsTextItem_LinkActivated(QGraphicsTextItem* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->linkActivated(param1_QString);
}

void QGraphicsTextItem_connect_LinkActivated(QGraphicsTextItem* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkActivated), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QGraphicsTextItem_LinkActivated(slot, sigval1);
	});
}

void QGraphicsTextItem_LinkHovered(QGraphicsTextItem* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->linkHovered(param1_QString);
}

void QGraphicsTextItem_connect_LinkHovered(QGraphicsTextItem* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkHovered), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QGraphicsTextItem_LinkHovered(slot, sigval1);
	});
}

struct miqt_string QGraphicsTextItem_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsTextItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTextItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsTextItem::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTextItem::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsTextItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsTextItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsTextItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsTextItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsTextItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsTextItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsTextItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsTextItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsTextItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsTextItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsTextItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Type();
}

bool QGraphicsTextItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsTextItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsTextItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsTextItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsTextItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsTextItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsTextItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsTextItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsTextItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsTextItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsTextItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsTextItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsTextItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsTextItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsTextItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsTextItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsTextItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsTextItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsTextItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsTextItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsTextItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsTextItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsTextItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsTextItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Extension(variant);
}

bool QGraphicsTextItem_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_Event(void* self, QEvent* ev) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Event(ev);
}

bool QGraphicsTextItem_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGraphicsTextItem_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsTextItem_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsTextItem_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsTextItem_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsTextItem_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QGraphicsTextItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsTextItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsTextItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsTextItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsTextItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsTextItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsTextItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsTextItem_Delete(QGraphicsTextItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsSimpleTextItem final : public QGraphicsSimpleTextItem {
public:

	MiqtVirtualQGraphicsSimpleTextItem(): QGraphicsSimpleTextItem() {};
	MiqtVirtualQGraphicsSimpleTextItem(const QString& text): QGraphicsSimpleTextItem(text) {};
	MiqtVirtualQGraphicsSimpleTextItem(QGraphicsItem* parent): QGraphicsSimpleTextItem(parent) {};
	MiqtVirtualQGraphicsSimpleTextItem(const QString& text, QGraphicsItem* parent): QGraphicsSimpleTextItem(text, parent) {};

	virtual ~MiqtVirtualQGraphicsSimpleTextItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsSimpleTextItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_BoundingRect(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsSimpleTextItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsSimpleTextItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_Shape(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsSimpleTextItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsSimpleTextItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_Contains(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsSimpleTextItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsSimpleTextItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsSimpleTextItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsSimpleTextItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsSimpleTextItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsSimpleTextItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsSimpleTextItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsSimpleTextItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsSimpleTextItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_Type(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsSimpleTextItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsSimpleTextItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsSimpleTextItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsSimpleTextItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsSimpleTextItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsSimpleTextItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsSimpleTextItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_Extension(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsSimpleTextItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsSimpleTextItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsSimpleTextItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsSimpleTextItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsSimpleTextItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsSimpleTextItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsSimpleTextItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsSimpleTextItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsSimpleTextItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsSimpleTextItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsSimpleTextItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsSimpleTextItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsSimpleTextItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsSimpleTextItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsSimpleTextItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSimpleTextItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsSimpleTextItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSimpleTextItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsSimpleTextItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSimpleTextItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsSimpleTextItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSimpleTextItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsSimpleTextItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsSimpleTextItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsSimpleTextItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsSimpleTextItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsSimpleTextItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsSimpleTextItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsSimpleTextItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsSimpleTextItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsSimpleTextItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsSimpleTextItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsSimpleTextItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsSimpleTextItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsSimpleTextItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsSimpleTextItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsSimpleTextItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSimpleTextItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsSimpleTextItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSimpleTextItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsSimpleTextItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSimpleTextItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsSimpleTextItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSimpleTextItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsSimpleTextItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsSimpleTextItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsSimpleTextItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsSimpleTextItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsSimpleTextItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsSimpleTextItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsSimpleTextItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsSimpleTextItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsSimpleTextItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

};

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new() {
	return new MiqtVirtualQGraphicsSimpleTextItem();
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQGraphicsSimpleTextItem(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new3(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsSimpleTextItem(parent);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new4(struct miqt_string text, QGraphicsItem* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQGraphicsSimpleTextItem(text_QString, parent);
}

void QGraphicsSimpleTextItem_virtbase(QGraphicsSimpleTextItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

void QGraphicsSimpleTextItem_SetText(QGraphicsSimpleTextItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QGraphicsSimpleTextItem_Text(const QGraphicsSimpleTextItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsSimpleTextItem_SetFont(QGraphicsSimpleTextItem* self, QFont* font) {
	self->setFont(*font);
}

QFont* QGraphicsSimpleTextItem_Font(const QGraphicsSimpleTextItem* self) {
	return new QFont(self->font());
}

QRectF* QGraphicsSimpleTextItem_BoundingRect(const QGraphicsSimpleTextItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsSimpleTextItem_Shape(const QGraphicsSimpleTextItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsSimpleTextItem_Contains(const QGraphicsSimpleTextItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsSimpleTextItem_Paint(QGraphicsSimpleTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsSimpleTextItem_IsObscuredBy(const QGraphicsSimpleTextItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsSimpleTextItem_OpaqueArea(const QGraphicsSimpleTextItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsSimpleTextItem_Type(const QGraphicsSimpleTextItem* self) {
	return self->type();
}

bool QGraphicsSimpleTextItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsSimpleTextItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsSimpleTextItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsSimpleTextItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsSimpleTextItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsSimpleTextItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsSimpleTextItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsSimpleTextItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsSimpleTextItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsSimpleTextItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsSimpleTextItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Type();
}

bool QGraphicsSimpleTextItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsSimpleTextItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsSimpleTextItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsSimpleTextItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Extension(variant);
}

bool QGraphicsSimpleTextItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsSimpleTextItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsSimpleTextItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsSimpleTextItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsSimpleTextItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsSimpleTextItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsSimpleTextItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsSimpleTextItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsSimpleTextItem_Delete(QGraphicsSimpleTextItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsItemGroup final : public QGraphicsItemGroup {
public:

	MiqtVirtualQGraphicsItemGroup(): QGraphicsItemGroup() {};
	MiqtVirtualQGraphicsItemGroup(QGraphicsItem* parent): QGraphicsItemGroup(parent) {};

	virtual ~MiqtVirtualQGraphicsItemGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsItemGroup::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_BoundingRect(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsItemGroup::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsItemGroup::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsItemGroup_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsItemGroup::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsItemGroup::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_IsObscuredBy(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsItemGroup::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsItemGroup::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_OpaqueArea(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsItemGroup::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsItemGroup::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsItemGroup_Type(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsItemGroup::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsItemGroup::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsItemGroup_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsItemGroup::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsItemGroup::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_Shape(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsItemGroup::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsItemGroup::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_Contains(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsItemGroup::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsItemGroup::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_CollidesWithItem(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsItemGroup::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsItemGroup::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_CollidesWithPath(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsItemGroup::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsItemGroup::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsItemGroup::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsItemGroup::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsItemGroup::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsItemGroup::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsItemGroup::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsItemGroup::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsItemGroup::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsItemGroup::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsItemGroup::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsItemGroup::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsItemGroup::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsItemGroup::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsItemGroup::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsItemGroup::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItemGroup::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsItemGroup::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItemGroup::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsItemGroup::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItemGroup::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsItemGroup::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsItemGroup::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsItemGroup::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsItemGroup::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsItemGroup::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsItemGroup::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsItemGroup::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsItemGroup::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsItemGroup::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsItemGroup::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsItemGroup::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsItemGroup::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsItemGroup::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_InputMethodQuery(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsItemGroup::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsItemGroup::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsItemGroup::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsItemGroup::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_SupportsExtension(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsItemGroup::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsItemGroup::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsItemGroup_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsItemGroup::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsItemGroup::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_Extension(const_cast<MiqtVirtualQGraphicsItemGroup*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsItemGroup::extension(*variant));

	}

};

QGraphicsItemGroup* QGraphicsItemGroup_new() {
	return new MiqtVirtualQGraphicsItemGroup();
}

QGraphicsItemGroup* QGraphicsItemGroup_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsItemGroup(parent);
}

void QGraphicsItemGroup_virtbase(QGraphicsItemGroup* src, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

void QGraphicsItemGroup_AddToGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->addToGroup(item);
}

void QGraphicsItemGroup_RemoveFromGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->removeFromGroup(item);
}

QRectF* QGraphicsItemGroup_BoundingRect(const QGraphicsItemGroup* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsItemGroup_Paint(QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsItemGroup_IsObscuredBy(const QGraphicsItemGroup* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItemGroup_OpaqueArea(const QGraphicsItemGroup* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsItemGroup_Type(const QGraphicsItemGroup* self) {
	return self->type();
}

bool QGraphicsItemGroup_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsItemGroup_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsItemGroup_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsItemGroup_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsItemGroup_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsItemGroup_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsItemGroup_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsItemGroup_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Type();
}

bool QGraphicsItemGroup_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsItemGroup_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsItemGroup_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Shape();
}

bool QGraphicsItemGroup_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsItemGroup_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsItemGroup_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsItemGroup_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsItemGroup_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsItemGroup_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsItemGroup_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsItemGroup_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsItemGroup_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsItemGroup_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsItemGroup_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsItemGroup_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsItemGroup_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsItemGroup_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsItemGroup_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsItemGroup_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsItemGroup_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsItemGroup_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsItemGroup_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsItemGroup_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsItemGroup_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsItemGroup_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_ItemChange(change, value);
}

bool QGraphicsItemGroup_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsItemGroup_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsItemGroup_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsItemGroup_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsItemGroup_Delete(QGraphicsItemGroup* self) {
	delete self;
}

