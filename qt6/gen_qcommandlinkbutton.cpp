#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCommandLinkButton>
#include <QContextMenuEvent>
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
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcommandlinkbutton.h>
#include "gen_qcommandlinkbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QCommandLinkButton_SizeHint(void*, intptr_t);
int miqt_exec_callback_QCommandLinkButton_HeightForWidth(void*, intptr_t, int);
QSize* miqt_exec_callback_QCommandLinkButton_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_InitStyleOption(void*, intptr_t, QStyleOptionButton*);
bool miqt_exec_callback_QCommandLinkButton_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCommandLinkButton_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QCommandLinkButton_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCommandLinkButton_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCommandLinkButton_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCommandLinkButton_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
bool miqt_exec_callback_QCommandLinkButton_HitButton(void*, intptr_t, QPoint*);
void miqt_exec_callback_QCommandLinkButton_CheckStateSet(void*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_NextCheckState(void*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCommandLinkButton_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCommandLinkButton_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCommandLinkButton_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCommandLinkButton_TimerEvent(void*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QCommandLinkButton_DevType(void*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_SetVisible(void*, intptr_t, bool);
bool miqt_exec_callback_QCommandLinkButton_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QCommandLinkButton_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCommandLinkButton_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QCommandLinkButton_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QCommandLinkButton_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCommandLinkButton_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCommandLinkButton_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCommandLinkButton_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QCommandLinkButton_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QCommandLinkButton_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QCommandLinkButton_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QCommandLinkButton_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QCommandLinkButton_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QCommandLinkButton_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QCommandLinkButton_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QCommandLinkButton_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCommandLinkButton_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QCommandLinkButton_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QCommandLinkButton_Metric(void*, intptr_t, int);
void miqt_exec_callback_QCommandLinkButton_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QCommandLinkButton_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QCommandLinkButton_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QCommandLinkButton_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QCommandLinkButton_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QCommandLinkButton_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QCommandLinkButton_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCommandLinkButton_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCommandLinkButton_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCommandLinkButton_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCommandLinkButton_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCommandLinkButton final : public QCommandLinkButton {
public:

	MiqtVirtualQCommandLinkButton(QWidget* parent): QCommandLinkButton(parent) {};
	MiqtVirtualQCommandLinkButton(): QCommandLinkButton() {};
	MiqtVirtualQCommandLinkButton(const QString& text): QCommandLinkButton(text) {};
	MiqtVirtualQCommandLinkButton(const QString& text, const QString& description): QCommandLinkButton(text, description) {};
	MiqtVirtualQCommandLinkButton(const QString& text, QWidget* parent): QCommandLinkButton(text, parent) {};
	MiqtVirtualQCommandLinkButton(const QString& text, const QString& description, QWidget* parent): QCommandLinkButton(text, description, parent) {};

	virtual ~MiqtVirtualQCommandLinkButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QCommandLinkButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCommandLinkButton_SizeHint(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QCommandLinkButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QCommandLinkButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QCommandLinkButton_HeightForWidth(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QCommandLinkButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QCommandLinkButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCommandLinkButton_MinimumSizeHint(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QCommandLinkButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionButton* option) const override {
		if (handle__InitStyleOption == 0) {
			QCommandLinkButton::initStyleOption(option);
			return;
		}
		
		QStyleOptionButton* sigval1 = option;

		miqt_exec_callback_QCommandLinkButton_InitStyleOption(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionButton* option) const {

		QCommandLinkButton::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QCommandLinkButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QCommandLinkButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QCommandLinkButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QCommandLinkButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QCommandLinkButton::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QCommandLinkButton::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QCommandLinkButton::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QCommandLinkButton::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QCommandLinkButton::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QCommandLinkButton::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QCommandLinkButton::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QCommandLinkButton::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__HitButton == 0) {
			return QCommandLinkButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_HitButton(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* pos) const {

		return QCommandLinkButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CheckStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__CheckStateSet == 0) {
			QCommandLinkButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QCommandLinkButton_CheckStateSet(this, handle__CheckStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CheckStateSet() {

		QCommandLinkButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__NextCheckState == 0) {
			QCommandLinkButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QCommandLinkButton_NextCheckState(this, handle__NextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_NextCheckState() {

		QCommandLinkButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QCommandLinkButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QCommandLinkButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QCommandLinkButton::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QCommandLinkButton::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QCommandLinkButton::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QCommandLinkButton::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QCommandLinkButton::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QCommandLinkButton::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QCommandLinkButton::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QCommandLinkButton_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QCommandLinkButton::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QCommandLinkButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QCommandLinkButton_DevType(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QCommandLinkButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QCommandLinkButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QCommandLinkButton_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QCommandLinkButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QCommandLinkButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_HasHeightForWidth(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QCommandLinkButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QCommandLinkButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QCommandLinkButton_PaintEngine(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QCommandLinkButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QCommandLinkButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QCommandLinkButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QCommandLinkButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QCommandLinkButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QCommandLinkButton::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QCommandLinkButton::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QCommandLinkButton::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QCommandLinkButton::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QCommandLinkButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QCommandLinkButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QCommandLinkButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QCommandLinkButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QCommandLinkButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QCommandLinkButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QCommandLinkButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QCommandLinkButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QCommandLinkButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QCommandLinkButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QCommandLinkButton::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QCommandLinkButton::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QCommandLinkButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QCommandLinkButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QCommandLinkButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QCommandLinkButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QCommandLinkButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QCommandLinkButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QCommandLinkButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QCommandLinkButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QCommandLinkButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QCommandLinkButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QCommandLinkButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QCommandLinkButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QCommandLinkButton::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QCommandLinkButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QCommandLinkButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QCommandLinkButton_Metric(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QCommandLinkButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QCommandLinkButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QCommandLinkButton_InitPainter(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QCommandLinkButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QCommandLinkButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QCommandLinkButton_Redirected(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QCommandLinkButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QCommandLinkButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QCommandLinkButton_SharedPainter(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QCommandLinkButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QCommandLinkButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QCommandLinkButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QCommandLinkButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QCommandLinkButton_InputMethodQuery(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QCommandLinkButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QCommandLinkButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QCommandLinkButton::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QCommandLinkButton::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QCommandLinkButton::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QCommandLinkButton::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QCommandLinkButton::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QCommandLinkButton::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCommandLinkButton_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QCommandLinkButton::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QCommandLinkButton::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCommandLinkButton_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QCommandLinkButton::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QCommandLinkButton::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCommandLinkButton_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QCommandLinkButton::disconnectNotify(*signal);

	}

};

QCommandLinkButton* QCommandLinkButton_new(QWidget* parent) {
	return new MiqtVirtualQCommandLinkButton(parent);
}

QCommandLinkButton* QCommandLinkButton_new2() {
	return new MiqtVirtualQCommandLinkButton();
}

QCommandLinkButton* QCommandLinkButton_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCommandLinkButton(text_QString);
}

QCommandLinkButton* QCommandLinkButton_new4(struct miqt_string text, struct miqt_string description) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new MiqtVirtualQCommandLinkButton(text_QString, description_QString);
}

QCommandLinkButton* QCommandLinkButton_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCommandLinkButton(text_QString, parent);
}

QCommandLinkButton* QCommandLinkButton_new6(struct miqt_string text, struct miqt_string description, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new MiqtVirtualQCommandLinkButton(text_QString, description_QString, parent);
}

void QCommandLinkButton_virtbase(QCommandLinkButton* src, QPushButton** outptr_QPushButton) {
	*outptr_QPushButton = static_cast<QPushButton*>(src);
}

QMetaObject* QCommandLinkButton_MetaObject(const QCommandLinkButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCommandLinkButton_Metacast(QCommandLinkButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCommandLinkButton_Tr(const char* s) {
	QString _ret = QCommandLinkButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_Description(const QCommandLinkButton* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLinkButton_SetDescription(QCommandLinkButton* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

QSize* QCommandLinkButton_SizeHint(const QCommandLinkButton* self) {
	return new QSize(self->sizeHint());
}

int QCommandLinkButton_HeightForWidth(const QCommandLinkButton* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

QSize* QCommandLinkButton_MinimumSizeHint(const QCommandLinkButton* self) {
	return new QSize(self->minimumSizeHint());
}

void QCommandLinkButton_InitStyleOption(const QCommandLinkButton* self, QStyleOptionButton* option) {
	self->initStyleOption(option);
}

struct miqt_string QCommandLinkButton_Tr2(const char* s, const char* c) {
	QString _ret = QCommandLinkButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCommandLinkButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCommandLinkButton_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QCommandLinkButton_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_SizeHint();
}

bool QCommandLinkButton_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QCommandLinkButton_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QCommandLinkButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QCommandLinkButton_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_MinimumSizeHint();
}

bool QCommandLinkButton_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QCommandLinkButton_virtualbase_InitStyleOption(const void* self, QStyleOptionButton* option) {
	( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_InitStyleOption(option);
}

bool QCommandLinkButton_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_Event(e);
}

bool QCommandLinkButton_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_PaintEvent(param1);
}

bool QCommandLinkButton_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QCommandLinkButton_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_FocusInEvent(param1);
}

bool QCommandLinkButton_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_FocusOutEvent(param1);
}

bool QCommandLinkButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QCommandLinkButton_override_virtual_HitButton(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HitButton = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_HitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_HitButton(pos);
}

bool QCommandLinkButton_override_virtual_CheckStateSet(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CheckStateSet = slot;
	return true;
}

void QCommandLinkButton_virtualbase_CheckStateSet(void* self) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_CheckStateSet();
}

bool QCommandLinkButton_override_virtual_NextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextCheckState = slot;
	return true;
}

void QCommandLinkButton_virtualbase_NextCheckState(void* self) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_NextCheckState();
}

bool QCommandLinkButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QCommandLinkButton_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_MousePressEvent(e);
}

bool QCommandLinkButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QCommandLinkButton_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_ChangeEvent(e);
}

bool QCommandLinkButton_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_TimerEvent(e);
}

bool QCommandLinkButton_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QCommandLinkButton_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_DevType();
}

bool QCommandLinkButton_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QCommandLinkButton_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_SetVisible(visible);
}

bool QCommandLinkButton_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_HasHeightForWidth();
}

bool QCommandLinkButton_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QCommandLinkButton_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_PaintEngine();
}

bool QCommandLinkButton_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QCommandLinkButton_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_WheelEvent(event);
}

bool QCommandLinkButton_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_EnterEvent(event);
}

bool QCommandLinkButton_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_LeaveEvent(event);
}

bool QCommandLinkButton_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_MoveEvent(event);
}

bool QCommandLinkButton_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_ResizeEvent(event);
}

bool QCommandLinkButton_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_CloseEvent(event);
}

bool QCommandLinkButton_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QCommandLinkButton_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_TabletEvent(event);
}

bool QCommandLinkButton_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_ActionEvent(event);
}

bool QCommandLinkButton_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QCommandLinkButton_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QCommandLinkButton_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QCommandLinkButton_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_DropEvent(event);
}

bool QCommandLinkButton_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_ShowEvent(event);
}

bool QCommandLinkButton_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_HideEvent(event);
}

bool QCommandLinkButton_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QCommandLinkButton_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QCommandLinkButton_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_Metric(param1);
}

bool QCommandLinkButton_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QCommandLinkButton_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_InitPainter(painter);
}

bool QCommandLinkButton_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QCommandLinkButton_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_Redirected(offset);
}

bool QCommandLinkButton_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QCommandLinkButton_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_SharedPainter();
}

bool QCommandLinkButton_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QCommandLinkButton_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QCommandLinkButton_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QCommandLinkButton_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QCommandLinkButton_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QCommandLinkButton_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QCommandLinkButton_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_ChildEvent(event);
}

bool QCommandLinkButton_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QCommandLinkButton_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_CustomEvent(event);
}

bool QCommandLinkButton_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QCommandLinkButton_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QCommandLinkButton_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCommandLinkButton* self_cast = dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QCommandLinkButton_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QCommandLinkButton_Delete(QCommandLinkButton* self) {
	delete self;
}

