#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QScrollArea>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qscrollarea.h>
#include "gen_qscrollarea.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QScrollArea_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QScrollArea_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QScrollArea_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QScrollArea_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScrollArea_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QScrollArea_ScrollContentsBy(void*, intptr_t, int, int);
QSize* miqt_exec_callback_QScrollArea_ViewportSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QScrollArea_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QScrollArea_SetupViewport(void*, intptr_t, QWidget*);
bool miqt_exec_callback_QScrollArea_ViewportEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollArea_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QScrollArea_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollArea_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollArea_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollArea_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollArea_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QScrollArea_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QScrollArea_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QScrollArea_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QScrollArea_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QScrollArea_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QScrollArea_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QScrollArea_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QScrollArea_DevType(void*, intptr_t);
void miqt_exec_callback_QScrollArea_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QScrollArea_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QScrollArea_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QScrollArea_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QScrollArea_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QScrollArea_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QScrollArea_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QScrollArea_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollArea_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollArea_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QScrollArea_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QScrollArea_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QScrollArea_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QScrollArea_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QScrollArea_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QScrollArea_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QScrollArea_Metric(void*, intptr_t, int);
void miqt_exec_callback_QScrollArea_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QScrollArea_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QScrollArea_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QScrollArea_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QScrollArea_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QScrollArea_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScrollArea_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScrollArea_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollArea_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScrollArea_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScrollArea final : public QScrollArea {
public:

	MiqtVirtualQScrollArea(QWidget* parent): QScrollArea(parent) {};
	MiqtVirtualQScrollArea(): QScrollArea() {};

	virtual ~MiqtVirtualQScrollArea() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QScrollArea::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QScrollArea_SizeHint(const_cast<MiqtVirtualQScrollArea*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QScrollArea::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QScrollArea::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QScrollArea_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QScrollArea::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QScrollArea::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QScrollArea_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QScrollArea::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QScrollArea::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QScrollArea_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QScrollArea::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QScrollArea::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QScrollArea::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QScrollArea::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QScrollArea_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QScrollArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QScrollArea::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QScrollArea_ViewportSizeHint(const_cast<MiqtVirtualQScrollArea*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QScrollArea::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QScrollArea::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QScrollArea_MinimumSizeHint(const_cast<MiqtVirtualQScrollArea*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QScrollArea::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QScrollArea::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QScrollArea_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QScrollArea::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__ViewportEvent == 0) {
			return QScrollArea::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QScrollArea_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* param1) {

		return QScrollArea::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QScrollArea::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QScrollArea::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QScrollArea::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QScrollArea::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QScrollArea::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QScrollArea::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QScrollArea::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* param1) {

		QScrollArea::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QScrollArea::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QScrollArea::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QScrollArea::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QScrollArea::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QScrollArea::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QScrollArea::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__DragEnterEvent == 0) {
			QScrollArea::dragEnterEvent(param1);
			return;
		}
		
		QDragEnterEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* param1) {

		QScrollArea::dragEnterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (handle__DragMoveEvent == 0) {
			QScrollArea::dragMoveEvent(param1);
			return;
		}
		
		QDragMoveEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* param1) {

		QScrollArea::dragMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (handle__DragLeaveEvent == 0) {
			QScrollArea::dragLeaveEvent(param1);
			return;
		}
		
		QDragLeaveEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* param1) {

		QScrollArea::dragLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__DropEvent == 0) {
			QScrollArea::dropEvent(param1);
			return;
		}
		
		QDropEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* param1) {

		QScrollArea::dropEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QScrollArea::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QScrollArea::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QScrollArea::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QScrollArea::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QScrollArea::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QScrollArea_DevType(const_cast<MiqtVirtualQScrollArea*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QScrollArea::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QScrollArea::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QScrollArea_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QScrollArea::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QScrollArea::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QScrollArea_HeightForWidth(const_cast<MiqtVirtualQScrollArea*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QScrollArea::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QScrollArea::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QScrollArea_HasHeightForWidth(const_cast<MiqtVirtualQScrollArea*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QScrollArea::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QScrollArea::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QScrollArea_PaintEngine(const_cast<MiqtVirtualQScrollArea*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QScrollArea::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QScrollArea::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QScrollArea::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QScrollArea::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QScrollArea::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QScrollArea::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QScrollArea::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QScrollArea::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QScrollArea::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QScrollArea::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QScrollArea::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QScrollArea::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QScrollArea::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QScrollArea::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QScrollArea::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QScrollArea::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QScrollArea::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QScrollArea::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QScrollArea::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QScrollArea::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QScrollArea::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QScrollArea::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QScrollArea::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QScrollArea::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QScrollArea_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QScrollArea::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QScrollArea::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QScrollArea_Metric(const_cast<MiqtVirtualQScrollArea*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QScrollArea::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QScrollArea::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QScrollArea_InitPainter(const_cast<MiqtVirtualQScrollArea*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QScrollArea::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QScrollArea::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QScrollArea_Redirected(const_cast<MiqtVirtualQScrollArea*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QScrollArea::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QScrollArea::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QScrollArea_SharedPainter(const_cast<MiqtVirtualQScrollArea*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QScrollArea::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QScrollArea::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QScrollArea_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QScrollArea::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QScrollArea::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QScrollArea_InputMethodQuery(const_cast<MiqtVirtualQScrollArea*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QScrollArea::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QScrollArea::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QScrollArea::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QScrollArea::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QScrollArea::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QScrollArea::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScrollArea_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QScrollArea::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QScrollArea::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScrollArea_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QScrollArea::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QScrollArea::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScrollArea_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QScrollArea::disconnectNotify(*signal);

	}

};

QScrollArea* QScrollArea_new(QWidget* parent) {
	return new MiqtVirtualQScrollArea(parent);
}

QScrollArea* QScrollArea_new2() {
	return new MiqtVirtualQScrollArea();
}

void QScrollArea_virtbase(QScrollArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QScrollArea_MetaObject(const QScrollArea* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScrollArea_Metacast(QScrollArea* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScrollArea_Tr(const char* s) {
	QString _ret = QScrollArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_TrUtf8(const char* s) {
	QString _ret = QScrollArea::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QScrollArea_Widget(const QScrollArea* self) {
	return self->widget();
}

void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QScrollArea_TakeWidget(QScrollArea* self) {
	return self->takeWidget();
}

bool QScrollArea_WidgetResizable(const QScrollArea* self) {
	return self->widgetResizable();
}

void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable) {
	self->setWidgetResizable(resizable);
}

QSize* QScrollArea_SizeHint(const QScrollArea* self) {
	return new QSize(self->sizeHint());
}

bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next) {
	return self->focusNextPrevChild(next);
}

int QScrollArea_Alignment(const QScrollArea* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QScrollArea_SetAlignment(QScrollArea* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y) {
	self->ensureVisible(static_cast<int>(x), static_cast<int>(y));
}

void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget) {
	self->ensureWidgetVisible(childWidget);
}

struct miqt_string QScrollArea_Tr2(const char* s, const char* c) {
	QString _ret = QScrollArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_TrUtf82(const char* s, const char* c) {
	QString _ret = QScrollArea::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QScrollArea::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin) {
	self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin));
}

void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin) {
	self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin) {
	self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin));
}

void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin) {
	self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

bool QScrollArea_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QScrollArea_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_SizeHint();
}

bool QScrollArea_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QScrollArea_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQScrollArea*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QScrollArea_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QScrollArea_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQScrollArea*)(self) )->virtualbase_Event(param1);
}

bool QScrollArea_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QScrollArea_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQScrollArea*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QScrollArea_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QScrollArea_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QScrollArea_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QScrollArea_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QScrollArea_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QScrollArea_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_ViewportSizeHint();
}

bool QScrollArea_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QScrollArea_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_MinimumSizeHint();
}

bool QScrollArea_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QScrollArea_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QScrollArea_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QScrollArea_virtualbase_ViewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQScrollArea*)(self) )->virtualbase_ViewportEvent(param1);
}

bool QScrollArea_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QScrollArea_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_PaintEvent(param1);
}

bool QScrollArea_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QScrollArea_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QScrollArea_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QScrollArea_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QScrollArea_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QScrollArea_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_MouseDoubleClickEvent(param1);
}

bool QScrollArea_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QScrollArea_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QScrollArea_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_WheelEvent(param1);
}

bool QScrollArea_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QScrollArea_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QScrollArea_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QScrollArea_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_DragEnterEvent(param1);
}

bool QScrollArea_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_DragMoveEvent(param1);
}

bool QScrollArea_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_DragLeaveEvent(param1);
}

bool QScrollArea_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QScrollArea_virtualbase_DropEvent(void* self, QDropEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_DropEvent(param1);
}

bool QScrollArea_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QScrollArea_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QScrollArea_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QScrollArea_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QScrollArea_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QScrollArea_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_DevType();
}

bool QScrollArea_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QScrollArea_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_SetVisible(visible);
}

bool QScrollArea_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QScrollArea_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QScrollArea_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QScrollArea_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_HasHeightForWidth();
}

bool QScrollArea_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QScrollArea_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_PaintEngine();
}

bool QScrollArea_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QScrollArea_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QScrollArea_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QScrollArea_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_FocusInEvent(event);
}

bool QScrollArea_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QScrollArea_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QScrollArea_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QScrollArea_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_EnterEvent(event);
}

bool QScrollArea_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_LeaveEvent(event);
}

bool QScrollArea_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_MoveEvent(event);
}

bool QScrollArea_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QScrollArea_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_CloseEvent(event);
}

bool QScrollArea_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QScrollArea_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_TabletEvent(event);
}

bool QScrollArea_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QScrollArea_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_ActionEvent(event);
}

bool QScrollArea_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QScrollArea_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_ShowEvent(event);
}

bool QScrollArea_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QScrollArea_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_HideEvent(event);
}

bool QScrollArea_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QScrollArea_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQScrollArea*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QScrollArea_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QScrollArea_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_Metric(param1);
}

bool QScrollArea_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QScrollArea_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_InitPainter(painter);
}

bool QScrollArea_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QScrollArea_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_Redirected(offset);
}

bool QScrollArea_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QScrollArea_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_SharedPainter();
}

bool QScrollArea_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QScrollArea_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QScrollArea_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QScrollArea_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQScrollArea*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QScrollArea_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QScrollArea_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_TimerEvent(event);
}

bool QScrollArea_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QScrollArea_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_ChildEvent(event);
}

bool QScrollArea_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QScrollArea_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_CustomEvent(event);
}

bool QScrollArea_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QScrollArea_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QScrollArea_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QScrollArea_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScrollArea*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QScrollArea_Delete(QScrollArea* self) {
	delete self;
}

