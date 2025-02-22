#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDockWidget>
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
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionDockWidget>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qdockwidget.h>
#include "gen_qdockwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDockWidget_FeaturesChanged(intptr_t, int);
void miqt_exec_callback_QDockWidget_TopLevelChanged(intptr_t, bool);
void miqt_exec_callback_QDockWidget_AllowedAreasChanged(intptr_t, int);
void miqt_exec_callback_QDockWidget_VisibilityChanged(intptr_t, bool);
void miqt_exec_callback_QDockWidget_DockLocationChanged(intptr_t, int);
void miqt_exec_callback_QDockWidget_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDockWidget_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDockWidget_PaintEvent(void*, intptr_t, QPaintEvent*);
bool miqt_exec_callback_QDockWidget_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDockWidget_InitStyleOption(void*, intptr_t, QStyleOptionDockWidget*);
int miqt_exec_callback_QDockWidget_DevType(void*, intptr_t);
void miqt_exec_callback_QDockWidget_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QDockWidget_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QDockWidget_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QDockWidget_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QDockWidget_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QDockWidget_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QDockWidget_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDockWidget_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDockWidget_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDockWidget_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDockWidget_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDockWidget_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDockWidget_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDockWidget_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDockWidget_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDockWidget_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QDockWidget_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDockWidget_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDockWidget_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDockWidget_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDockWidget_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDockWidget_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDockWidget_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDockWidget_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDockWidget_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDockWidget_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDockWidget_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDockWidget_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDockWidget_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QDockWidget_Metric(void*, intptr_t, int);
void miqt_exec_callback_QDockWidget_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDockWidget_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDockWidget_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QDockWidget_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDockWidget_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QDockWidget_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QDockWidget_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDockWidget_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDockWidget_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDockWidget_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDockWidget_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDockWidget_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDockWidget final : public QDockWidget {
public:

	MiqtVirtualQDockWidget(QWidget* parent): QDockWidget(parent) {};
	MiqtVirtualQDockWidget(const QString& title): QDockWidget(title) {};
	MiqtVirtualQDockWidget(): QDockWidget() {};
	MiqtVirtualQDockWidget(const QString& title, QWidget* parent): QDockWidget(title, parent) {};
	MiqtVirtualQDockWidget(const QString& title, QWidget* parent, Qt::WindowFlags flags): QDockWidget(title, parent, flags) {};
	MiqtVirtualQDockWidget(QWidget* parent, Qt::WindowFlags flags): QDockWidget(parent, flags) {};

	virtual ~MiqtVirtualQDockWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QDockWidget::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QDockWidget::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QDockWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QDockWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QDockWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QDockWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QDockWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDockWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QDockWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionDockWidget* option) const override {
		if (handle__InitStyleOption == 0) {
			QDockWidget::initStyleOption(option);
			return;
		}
		
		QStyleOptionDockWidget* sigval1 = option;

		miqt_exec_callback_QDockWidget_InitStyleOption(const_cast<MiqtVirtualQDockWidget*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionDockWidget* option) const {

		QDockWidget::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QDockWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDockWidget_DevType(const_cast<MiqtVirtualQDockWidget*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QDockWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QDockWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDockWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QDockWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDockWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDockWidget_SizeHint(const_cast<MiqtVirtualQDockWidget*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QDockWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QDockWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDockWidget_MinimumSizeHint(const_cast<MiqtVirtualQDockWidget*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QDockWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QDockWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDockWidget_HeightForWidth(const_cast<MiqtVirtualQDockWidget*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QDockWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QDockWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDockWidget_HasHeightForWidth(const_cast<MiqtVirtualQDockWidget*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QDockWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QDockWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDockWidget_PaintEngine(const_cast<MiqtVirtualQDockWidget*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QDockWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QDockWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QDockWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QDockWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QDockWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QDockWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QDockWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QDockWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QDockWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QDockWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QDockWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QDockWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QDockWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QDockWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QDockWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QDockWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QDockWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QDockWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QDockWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QDockWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QDockWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QDockWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QDockWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QDockWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QDockWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QDockWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QDockWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QDockWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QDockWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QDockWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QDockWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QDockWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QDockWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QDockWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QDockWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QDockWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QDockWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QDockWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QDockWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QDockWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QDockWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QDockWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QDockWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QDockWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QDockWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QDockWidget::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QDockWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDockWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QDockWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDockWidget_Metric(const_cast<MiqtVirtualQDockWidget*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QDockWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QDockWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDockWidget_InitPainter(const_cast<MiqtVirtualQDockWidget*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QDockWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QDockWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDockWidget_Redirected(const_cast<MiqtVirtualQDockWidget*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QDockWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QDockWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDockWidget_SharedPainter(const_cast<MiqtVirtualQDockWidget*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QDockWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QDockWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDockWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QDockWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QDockWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDockWidget_InputMethodQuery(const_cast<MiqtVirtualQDockWidget*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QDockWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QDockWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDockWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QDockWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QDockWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDockWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QDockWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QDockWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QDockWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QDockWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QDockWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QDockWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDockWidget_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QDockWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QDockWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDockWidget_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QDockWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QDockWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDockWidget_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QDockWidget::disconnectNotify(*signal);

	}

};

QDockWidget* QDockWidget_new(QWidget* parent) {
	return new MiqtVirtualQDockWidget(parent);
}

QDockWidget* QDockWidget_new2(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQDockWidget(title_QString);
}

QDockWidget* QDockWidget_new3() {
	return new MiqtVirtualQDockWidget();
}

QDockWidget* QDockWidget_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQDockWidget(title_QString, parent);
}

QDockWidget* QDockWidget_new5(struct miqt_string title, QWidget* parent, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQDockWidget(title_QString, parent, static_cast<Qt::WindowFlags>(flags));
}

QDockWidget* QDockWidget_new6(QWidget* parent, int flags) {
	return new MiqtVirtualQDockWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

void QDockWidget_virtbase(QDockWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDockWidget_MetaObject(const QDockWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDockWidget_Metacast(QDockWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDockWidget_Tr(const char* s) {
	QString _ret = QDockWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QDockWidget_Widget(const QDockWidget* self) {
	return self->widget();
}

void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget) {
	self->setWidget(widget);
}

void QDockWidget_SetFeatures(QDockWidget* self, int features) {
	self->setFeatures(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

int QDockWidget_Features(const QDockWidget* self) {
	QDockWidget::DockWidgetFeatures _ret = self->features();
	return static_cast<int>(_ret);
}

void QDockWidget_SetFloating(QDockWidget* self, bool floating) {
	self->setFloating(floating);
}

bool QDockWidget_IsFloating(const QDockWidget* self) {
	return self->isFloating();
}

void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas) {
	self->setAllowedAreas(static_cast<Qt::DockWidgetAreas>(areas));
}

int QDockWidget_AllowedAreas(const QDockWidget* self) {
	Qt::DockWidgetAreas _ret = self->allowedAreas();
	return static_cast<int>(_ret);
}

void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget) {
	self->setTitleBarWidget(widget);
}

QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self) {
	return self->titleBarWidget();
}

bool QDockWidget_IsAreaAllowed(const QDockWidget* self, int area) {
	return self->isAreaAllowed(static_cast<Qt::DockWidgetArea>(area));
}

QAction* QDockWidget_ToggleViewAction(const QDockWidget* self) {
	return self->toggleViewAction();
}

void QDockWidget_FeaturesChanged(QDockWidget* self, int features) {
	self->featuresChanged(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

void QDockWidget_connect_FeaturesChanged(QDockWidget* self, intptr_t slot) {
	MiqtVirtualQDockWidget::connect(self, static_cast<void (QDockWidget::*)(QDockWidget::DockWidgetFeatures)>(&QDockWidget::featuresChanged), self, [=](QDockWidget::DockWidgetFeatures features) {
		QDockWidget::DockWidgetFeatures features_ret = features;
		int sigval1 = static_cast<int>(features_ret);
		miqt_exec_callback_QDockWidget_FeaturesChanged(slot, sigval1);
	});
}

void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QDockWidget_connect_TopLevelChanged(QDockWidget* self, intptr_t slot) {
	MiqtVirtualQDockWidget::connect(self, static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::topLevelChanged), self, [=](bool topLevel) {
		bool sigval1 = topLevel;
		miqt_exec_callback_QDockWidget_TopLevelChanged(slot, sigval1);
	});
}

void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<Qt::DockWidgetAreas>(allowedAreas));
}

void QDockWidget_connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot) {
	MiqtVirtualQDockWidget::connect(self, static_cast<void (QDockWidget::*)(Qt::DockWidgetAreas)>(&QDockWidget::allowedAreasChanged), self, [=](Qt::DockWidgetAreas allowedAreas) {
		Qt::DockWidgetAreas allowedAreas_ret = allowedAreas;
		int sigval1 = static_cast<int>(allowedAreas_ret);
		miqt_exec_callback_QDockWidget_AllowedAreasChanged(slot, sigval1);
	});
}

void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible) {
	self->visibilityChanged(visible);
}

void QDockWidget_connect_VisibilityChanged(QDockWidget* self, intptr_t slot) {
	MiqtVirtualQDockWidget::connect(self, static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::visibilityChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QDockWidget_VisibilityChanged(slot, sigval1);
	});
}

void QDockWidget_DockLocationChanged(QDockWidget* self, int area) {
	self->dockLocationChanged(static_cast<Qt::DockWidgetArea>(area));
}

void QDockWidget_connect_DockLocationChanged(QDockWidget* self, intptr_t slot) {
	MiqtVirtualQDockWidget::connect(self, static_cast<void (QDockWidget::*)(Qt::DockWidgetArea)>(&QDockWidget::dockLocationChanged), self, [=](Qt::DockWidgetArea area) {
		Qt::DockWidgetArea area_ret = area;
		int sigval1 = static_cast<int>(area_ret);
		miqt_exec_callback_QDockWidget_DockLocationChanged(slot, sigval1);
	});
}

struct miqt_string QDockWidget_Tr2(const char* s, const char* c) {
	QString _ret = QDockWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDockWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDockWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDockWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QDockWidget_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_ChangeEvent(event);
}

bool QDockWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QDockWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QDockWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QDockWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_PaintEvent(event);
}

bool QDockWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QDockWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDockWidget*)(self) )->virtualbase_Event(event);
}

bool QDockWidget_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QDockWidget_virtualbase_InitStyleOption(const void* self, QStyleOptionDockWidget* option) {
	( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_InitStyleOption(option);
}

bool QDockWidget_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QDockWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_DevType();
}

bool QDockWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QDockWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_SetVisible(visible);
}

bool QDockWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QDockWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_SizeHint();
}

bool QDockWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QDockWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_MinimumSizeHint();
}

bool QDockWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QDockWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QDockWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QDockWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_HasHeightForWidth();
}

bool QDockWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QDockWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_PaintEngine();
}

bool QDockWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QDockWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QDockWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QDockWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QDockWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QDockWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QDockWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QDockWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QDockWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_WheelEvent(event);
}

bool QDockWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QDockWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QDockWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QDockWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QDockWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QDockWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QDockWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QDockWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QDockWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QDockWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_EnterEvent(event);
}

bool QDockWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_LeaveEvent(event);
}

bool QDockWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QDockWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QDockWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_ResizeEvent(event);
}

bool QDockWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QDockWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QDockWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QDockWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_TabletEvent(event);
}

bool QDockWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QDockWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_ActionEvent(event);
}

bool QDockWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QDockWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QDockWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QDockWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QDockWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QDockWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QDockWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QDockWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QDockWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_ShowEvent(event);
}

bool QDockWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QDockWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QDockWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QDockWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQDockWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QDockWidget_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QDockWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_Metric(param1);
}

bool QDockWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QDockWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_InitPainter(painter);
}

bool QDockWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QDockWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_Redirected(offset);
}

bool QDockWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QDockWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_SharedPainter();
}

bool QDockWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QDockWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QDockWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QDockWidget_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDockWidget*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QDockWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QDockWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDockWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QDockWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QDockWidget_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDockWidget*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QDockWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QDockWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_TimerEvent(event);
}

bool QDockWidget_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QDockWidget_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_ChildEvent(event);
}

bool QDockWidget_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QDockWidget_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_CustomEvent(event);
}

bool QDockWidget_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QDockWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QDockWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDockWidget* self_cast = dynamic_cast<MiqtVirtualQDockWidget*>( (QDockWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QDockWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDockWidget*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QDockWidget_Delete(QDockWidget* self) {
	delete self;
}

