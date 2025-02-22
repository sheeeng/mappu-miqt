#include <QActionEvent>
#include <QByteArray>
#include <QCalendar>
#include <QCalendarWidget>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDate>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMap>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTextCharFormat>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcalendarwidget.h>
#include "gen_qcalendarwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCalendarWidget_SelectionChanged(intptr_t);
void miqt_exec_callback_QCalendarWidget_Clicked(intptr_t, QDate*);
void miqt_exec_callback_QCalendarWidget_Activated(intptr_t, QDate*);
void miqt_exec_callback_QCalendarWidget_CurrentPageChanged(intptr_t, int, int);
QSize* miqt_exec_callback_QCalendarWidget_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QCalendarWidget_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QCalendarWidget_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QCalendarWidget_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCalendarWidget_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCalendarWidget_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCalendarWidget_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCalendarWidget_PaintCell(void*, intptr_t, QPainter*, QRect*, QDate*);
int miqt_exec_callback_QCalendarWidget_DevType(void*, intptr_t);
void miqt_exec_callback_QCalendarWidget_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QCalendarWidget_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QCalendarWidget_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QCalendarWidget_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QCalendarWidget_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCalendarWidget_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCalendarWidget_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCalendarWidget_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QCalendarWidget_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCalendarWidget_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCalendarWidget_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCalendarWidget_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QCalendarWidget_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCalendarWidget_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QCalendarWidget_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCalendarWidget_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QCalendarWidget_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QCalendarWidget_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QCalendarWidget_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QCalendarWidget_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QCalendarWidget_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QCalendarWidget_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QCalendarWidget_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QCalendarWidget_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCalendarWidget_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QCalendarWidget_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QCalendarWidget_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QCalendarWidget_Metric(void*, intptr_t, int);
void miqt_exec_callback_QCalendarWidget_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QCalendarWidget_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QCalendarWidget_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QCalendarWidget_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QCalendarWidget_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QCalendarWidget_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QCalendarWidget_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCalendarWidget_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCalendarWidget_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCalendarWidget_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCalendarWidget_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCalendarWidget final : public QCalendarWidget {
public:

	MiqtVirtualQCalendarWidget(QWidget* parent): QCalendarWidget(parent) {};
	MiqtVirtualQCalendarWidget(): QCalendarWidget() {};

	virtual ~MiqtVirtualQCalendarWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QCalendarWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCalendarWidget_SizeHint(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QCalendarWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QCalendarWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCalendarWidget_MinimumSizeHint(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QCalendarWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QCalendarWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QCalendarWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QCalendarWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QCalendarWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCalendarWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QCalendarWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QCalendarWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QCalendarWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QCalendarWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QCalendarWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QCalendarWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QCalendarWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintCell = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintCell(QPainter* painter, const QRect& rect, QDate date) const override {
		if (handle__PaintCell == 0) {
			QCalendarWidget::paintCell(painter, rect, date);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		QDate* sigval3 = new QDate(date);

		miqt_exec_callback_QCalendarWidget_PaintCell(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__PaintCell, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintCell(QPainter* painter, QRect* rect, QDate* date) const {

		QCalendarWidget::paintCell(painter, *rect, *date);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QCalendarWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QCalendarWidget_DevType(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QCalendarWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QCalendarWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QCalendarWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QCalendarWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QCalendarWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QCalendarWidget_HeightForWidth(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QCalendarWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QCalendarWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QCalendarWidget_HasHeightForWidth(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QCalendarWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QCalendarWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QCalendarWidget_PaintEngine(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QCalendarWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QCalendarWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QCalendarWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QCalendarWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QCalendarWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QCalendarWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QCalendarWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QCalendarWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QCalendarWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QCalendarWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QCalendarWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QCalendarWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QCalendarWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QCalendarWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QCalendarWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QCalendarWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QCalendarWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QCalendarWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QCalendarWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QCalendarWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QCalendarWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QCalendarWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QCalendarWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QCalendarWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QCalendarWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QCalendarWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QCalendarWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QCalendarWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QCalendarWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QCalendarWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QCalendarWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QCalendarWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QCalendarWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QCalendarWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QCalendarWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QCalendarWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QCalendarWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QCalendarWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QCalendarWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QCalendarWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QCalendarWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QCalendarWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QCalendarWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QCalendarWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QCalendarWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QCalendarWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QCalendarWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QCalendarWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QCalendarWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QCalendarWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QCalendarWidget_Metric(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QCalendarWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QCalendarWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QCalendarWidget_InitPainter(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QCalendarWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QCalendarWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QCalendarWidget_Redirected(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QCalendarWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QCalendarWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QCalendarWidget_SharedPainter(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QCalendarWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QCalendarWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QCalendarWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QCalendarWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QCalendarWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QCalendarWidget_InputMethodQuery(const_cast<MiqtVirtualQCalendarWidget*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QCalendarWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QCalendarWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QCalendarWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QCalendarWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QCalendarWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QCalendarWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QCalendarWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QCalendarWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QCalendarWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCalendarWidget_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QCalendarWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QCalendarWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCalendarWidget_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QCalendarWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QCalendarWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCalendarWidget_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QCalendarWidget::disconnectNotify(*signal);

	}

};

QCalendarWidget* QCalendarWidget_new(QWidget* parent) {
	return new MiqtVirtualQCalendarWidget(parent);
}

QCalendarWidget* QCalendarWidget_new2() {
	return new MiqtVirtualQCalendarWidget();
}

void QCalendarWidget_virtbase(QCalendarWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QCalendarWidget_MetaObject(const QCalendarWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCalendarWidget_Metacast(QCalendarWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCalendarWidget_Tr(const char* s) {
	QString _ret = QCalendarWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QCalendarWidget_SizeHint(const QCalendarWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QCalendarWidget_MinimumSizeHint(const QCalendarWidget* self) {
	return new QSize(self->minimumSizeHint());
}

QDate* QCalendarWidget_SelectedDate(const QCalendarWidget* self) {
	return new QDate(self->selectedDate());
}

int QCalendarWidget_YearShown(const QCalendarWidget* self) {
	return self->yearShown();
}

int QCalendarWidget_MonthShown(const QCalendarWidget* self) {
	return self->monthShown();
}

QDate* QCalendarWidget_MinimumDate(const QCalendarWidget* self) {
	return new QDate(self->minimumDate());
}

void QCalendarWidget_SetMinimumDate(QCalendarWidget* self, QDate* date) {
	self->setMinimumDate(*date);
}

QDate* QCalendarWidget_MaximumDate(const QCalendarWidget* self) {
	return new QDate(self->maximumDate());
}

void QCalendarWidget_SetMaximumDate(QCalendarWidget* self, QDate* date) {
	self->setMaximumDate(*date);
}

int QCalendarWidget_FirstDayOfWeek(const QCalendarWidget* self) {
	Qt::DayOfWeek _ret = self->firstDayOfWeek();
	return static_cast<int>(_ret);
}

void QCalendarWidget_SetFirstDayOfWeek(QCalendarWidget* self, int dayOfWeek) {
	self->setFirstDayOfWeek(static_cast<Qt::DayOfWeek>(dayOfWeek));
}

bool QCalendarWidget_IsNavigationBarVisible(const QCalendarWidget* self) {
	return self->isNavigationBarVisible();
}

bool QCalendarWidget_IsGridVisible(const QCalendarWidget* self) {
	return self->isGridVisible();
}

QCalendar* QCalendarWidget_Calendar(const QCalendarWidget* self) {
	return new QCalendar(self->calendar());
}

void QCalendarWidget_SetCalendar(QCalendarWidget* self, QCalendar* calendar) {
	self->setCalendar(*calendar);
}

int QCalendarWidget_SelectionMode(const QCalendarWidget* self) {
	QCalendarWidget::SelectionMode _ret = self->selectionMode();
	return static_cast<int>(_ret);
}

void QCalendarWidget_SetSelectionMode(QCalendarWidget* self, int mode) {
	self->setSelectionMode(static_cast<QCalendarWidget::SelectionMode>(mode));
}

int QCalendarWidget_HorizontalHeaderFormat(const QCalendarWidget* self) {
	QCalendarWidget::HorizontalHeaderFormat _ret = self->horizontalHeaderFormat();
	return static_cast<int>(_ret);
}

void QCalendarWidget_SetHorizontalHeaderFormat(QCalendarWidget* self, int format) {
	self->setHorizontalHeaderFormat(static_cast<QCalendarWidget::HorizontalHeaderFormat>(format));
}

int QCalendarWidget_VerticalHeaderFormat(const QCalendarWidget* self) {
	QCalendarWidget::VerticalHeaderFormat _ret = self->verticalHeaderFormat();
	return static_cast<int>(_ret);
}

void QCalendarWidget_SetVerticalHeaderFormat(QCalendarWidget* self, int format) {
	self->setVerticalHeaderFormat(static_cast<QCalendarWidget::VerticalHeaderFormat>(format));
}

QTextCharFormat* QCalendarWidget_HeaderTextFormat(const QCalendarWidget* self) {
	return new QTextCharFormat(self->headerTextFormat());
}

void QCalendarWidget_SetHeaderTextFormat(QCalendarWidget* self, QTextCharFormat* format) {
	self->setHeaderTextFormat(*format);
}

QTextCharFormat* QCalendarWidget_WeekdayTextFormat(const QCalendarWidget* self, int dayOfWeek) {
	return new QTextCharFormat(self->weekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek)));
}

void QCalendarWidget_SetWeekdayTextFormat(QCalendarWidget* self, int dayOfWeek, QTextCharFormat* format) {
	self->setWeekdayTextFormat(static_cast<Qt::DayOfWeek>(dayOfWeek), *format);
}

struct miqt_map /* of QDate* to QTextCharFormat* */  QCalendarWidget_DateTextFormat(const QCalendarWidget* self) {
	QMap<QDate, QTextCharFormat> _ret = self->dateTextFormat();
	// Convert QMap<> from C++ memory to manually-managed C memory
	QDate** _karr = static_cast<QDate**>(malloc(sizeof(QDate*) * _ret.size()));
	QTextCharFormat** _varr = static_cast<QTextCharFormat**>(malloc(sizeof(QTextCharFormat*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = new QDate(_itr->first);
		_varr[_ctr] = new QTextCharFormat(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QTextCharFormat* QCalendarWidget_DateTextFormatWithDate(const QCalendarWidget* self, QDate* date) {
	return new QTextCharFormat(self->dateTextFormat(*date));
}

void QCalendarWidget_SetDateTextFormat(QCalendarWidget* self, QDate* date, QTextCharFormat* format) {
	self->setDateTextFormat(*date, *format);
}

bool QCalendarWidget_IsDateEditEnabled(const QCalendarWidget* self) {
	return self->isDateEditEnabled();
}

void QCalendarWidget_SetDateEditEnabled(QCalendarWidget* self, bool enable) {
	self->setDateEditEnabled(enable);
}

int QCalendarWidget_DateEditAcceptDelay(const QCalendarWidget* self) {
	return self->dateEditAcceptDelay();
}

void QCalendarWidget_SetDateEditAcceptDelay(QCalendarWidget* self, int delay) {
	self->setDateEditAcceptDelay(static_cast<int>(delay));
}

void QCalendarWidget_SetSelectedDate(QCalendarWidget* self, QDate* date) {
	self->setSelectedDate(*date);
}

void QCalendarWidget_SetDateRange(QCalendarWidget* self, QDate* min, QDate* max) {
	self->setDateRange(*min, *max);
}

void QCalendarWidget_SetCurrentPage(QCalendarWidget* self, int year, int month) {
	self->setCurrentPage(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_SetGridVisible(QCalendarWidget* self, bool show) {
	self->setGridVisible(show);
}

void QCalendarWidget_SetNavigationBarVisible(QCalendarWidget* self, bool visible) {
	self->setNavigationBarVisible(visible);
}

void QCalendarWidget_ShowNextMonth(QCalendarWidget* self) {
	self->showNextMonth();
}

void QCalendarWidget_ShowPreviousMonth(QCalendarWidget* self) {
	self->showPreviousMonth();
}

void QCalendarWidget_ShowNextYear(QCalendarWidget* self) {
	self->showNextYear();
}

void QCalendarWidget_ShowPreviousYear(QCalendarWidget* self) {
	self->showPreviousYear();
}

void QCalendarWidget_ShowSelectedDate(QCalendarWidget* self) {
	self->showSelectedDate();
}

void QCalendarWidget_ShowToday(QCalendarWidget* self) {
	self->showToday();
}

void QCalendarWidget_SelectionChanged(QCalendarWidget* self) {
	self->selectionChanged();
}

void QCalendarWidget_connect_SelectionChanged(QCalendarWidget* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)()>(&QCalendarWidget::selectionChanged), self, [=]() {
		miqt_exec_callback_QCalendarWidget_SelectionChanged(slot);
	});
}

void QCalendarWidget_Clicked(QCalendarWidget* self, QDate* date) {
	self->clicked(*date);
}

void QCalendarWidget_connect_Clicked(QCalendarWidget* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(QDate)>(&QCalendarWidget::clicked), self, [=](QDate date) {
		QDate* sigval1 = new QDate(date);
		miqt_exec_callback_QCalendarWidget_Clicked(slot, sigval1);
	});
}

void QCalendarWidget_Activated(QCalendarWidget* self, QDate* date) {
	self->activated(*date);
}

void QCalendarWidget_connect_Activated(QCalendarWidget* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(QDate)>(&QCalendarWidget::activated), self, [=](QDate date) {
		QDate* sigval1 = new QDate(date);
		miqt_exec_callback_QCalendarWidget_Activated(slot, sigval1);
	});
}

void QCalendarWidget_CurrentPageChanged(QCalendarWidget* self, int year, int month) {
	self->currentPageChanged(static_cast<int>(year), static_cast<int>(month));
}

void QCalendarWidget_connect_CurrentPageChanged(QCalendarWidget* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget::connect(self, static_cast<void (QCalendarWidget::*)(int, int)>(&QCalendarWidget::currentPageChanged), self, [=](int year, int month) {
		int sigval1 = year;
		int sigval2 = month;
		miqt_exec_callback_QCalendarWidget_CurrentPageChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string QCalendarWidget_Tr2(const char* s, const char* c) {
	QString _ret = QCalendarWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendarWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCalendarWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCalendarWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QCalendarWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_SizeHint();
}

bool QCalendarWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QCalendarWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_MinimumSizeHint();
}

bool QCalendarWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QCalendarWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_Event(event);
}

bool QCalendarWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QCalendarWidget_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QCalendarWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QCalendarWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_ResizeEvent(event);
}

bool QCalendarWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QCalendarWidget_override_virtual_PaintCell(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintCell = slot;
	return true;
}

void QCalendarWidget_virtualbase_PaintCell(const void* self, QPainter* painter, QRect* rect, QDate* date) {
	( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_PaintCell(painter, rect, date);
}

bool QCalendarWidget_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QCalendarWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_DevType();
}

bool QCalendarWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QCalendarWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_SetVisible(visible);
}

bool QCalendarWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QCalendarWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QCalendarWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QCalendarWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_HasHeightForWidth();
}

bool QCalendarWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QCalendarWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_PaintEngine();
}

bool QCalendarWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QCalendarWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QCalendarWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QCalendarWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_WheelEvent(event);
}

bool QCalendarWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QCalendarWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QCalendarWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QCalendarWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_EnterEvent(event);
}

bool QCalendarWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_LeaveEvent(event);
}

bool QCalendarWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_PaintEvent(event);
}

bool QCalendarWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QCalendarWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QCalendarWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QCalendarWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_TabletEvent(event);
}

bool QCalendarWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_ActionEvent(event);
}

bool QCalendarWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QCalendarWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QCalendarWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QCalendarWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QCalendarWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_ShowEvent(event);
}

bool QCalendarWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QCalendarWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QCalendarWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QCalendarWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QCalendarWidget_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QCalendarWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_Metric(param1);
}

bool QCalendarWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QCalendarWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_InitPainter(painter);
}

bool QCalendarWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QCalendarWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_Redirected(offset);
}

bool QCalendarWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QCalendarWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_SharedPainter();
}

bool QCalendarWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QCalendarWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QCalendarWidget_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQCalendarWidget*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QCalendarWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QCalendarWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QCalendarWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_TimerEvent(event);
}

bool QCalendarWidget_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_ChildEvent(event);
}

bool QCalendarWidget_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QCalendarWidget_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_CustomEvent(event);
}

bool QCalendarWidget_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QCalendarWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QCalendarWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCalendarWidget* self_cast = dynamic_cast<MiqtVirtualQCalendarWidget*>( (QCalendarWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QCalendarWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCalendarWidget*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QCalendarWidget_Delete(QCalendarWidget* self) {
	delete self;
}

