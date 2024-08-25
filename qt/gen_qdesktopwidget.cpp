#include "gen_qdesktopwidget.h"
#include "qdesktopwidget.h"

#include <QDesktopWidget>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDesktopWidget* QDesktopWidget_new() {
	return new QDesktopWidget();
}

QMetaObject* QDesktopWidget_MetaObject(QDesktopWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void QDesktopWidget_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDesktopWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDesktopWidget_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDesktopWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QDesktopWidget_ScreenNumber(QDesktopWidget* self) {
	return self->screenNumber();
}

QRect* QDesktopWidget_ScreenGeometry(QDesktopWidget* self, QWidget* widget) {
	QRect ret = self->screenGeometry(widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QDesktopWidget_AvailableGeometry(QDesktopWidget* self, QWidget* widget) {
	QRect ret = self->availableGeometry(widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QDesktopWidget_IsVirtualDesktop(QDesktopWidget* self) {
	return self->isVirtualDesktop();
}

int QDesktopWidget_NumScreens(QDesktopWidget* self) {
	return self->numScreens();
}

int QDesktopWidget_ScreenCount(QDesktopWidget* self) {
	return self->screenCount();
}

int QDesktopWidget_PrimaryScreen(QDesktopWidget* self) {
	return self->primaryScreen();
}

int QDesktopWidget_ScreenNumberWithQPoint(QDesktopWidget* self, QPoint* param1) {
	return self->screenNumber(*param1);
}

QWidget* QDesktopWidget_Screen(QDesktopWidget* self) {
	return self->screen();
}

QRect* QDesktopWidget_ScreenGeometry2(QDesktopWidget* self) {
	QRect ret = self->screenGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QDesktopWidget_ScreenGeometryWithPoint(QDesktopWidget* self, QPoint* point) {
	QRect ret = self->screenGeometry(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QDesktopWidget_AvailableGeometry2(QDesktopWidget* self) {
	QRect ret = self->availableGeometry();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QDesktopWidget_AvailableGeometryWithPoint(QDesktopWidget* self, QPoint* point) {
	QRect ret = self->availableGeometry(*point);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QDesktopWidget_Resized(QDesktopWidget* self, int param1) {
	self->resized(static_cast<int>(param1));
}

void QDesktopWidget_connect_Resized(QDesktopWidget* self, void* slot) {
	QDesktopWidget::connect(self, static_cast<void (QDesktopWidget::*)(int)>(&QDesktopWidget::resized), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDesktopWidget_WorkAreaResized(QDesktopWidget* self, int param1) {
	self->workAreaResized(static_cast<int>(param1));
}

void QDesktopWidget_connect_WorkAreaResized(QDesktopWidget* self, void* slot) {
	QDesktopWidget::connect(self, static_cast<void (QDesktopWidget::*)(int)>(&QDesktopWidget::workAreaResized), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDesktopWidget_ScreenCountChanged(QDesktopWidget* self, int param1) {
	self->screenCountChanged(static_cast<int>(param1));
}

void QDesktopWidget_connect_ScreenCountChanged(QDesktopWidget* self, void* slot) {
	QDesktopWidget::connect(self, static_cast<void (QDesktopWidget::*)(int)>(&QDesktopWidget::screenCountChanged), self, [=](int param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDesktopWidget_PrimaryScreenChanged(QDesktopWidget* self) {
	self->primaryScreenChanged();
}

void QDesktopWidget_connect_PrimaryScreenChanged(QDesktopWidget* self, void* slot) {
	QDesktopWidget::connect(self, static_cast<void (QDesktopWidget::*)()>(&QDesktopWidget::primaryScreenChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDesktopWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDesktopWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDesktopWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDesktopWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDesktopWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDesktopWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDesktopWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDesktopWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QDesktopWidget_ScreenNumber1(QDesktopWidget* self, QWidget* widget) {
	return self->screenNumber(widget);
}

QWidget* QDesktopWidget_Screen1(QDesktopWidget* self, int screen) {
	return self->screen(static_cast<int>(screen));
}

QRect* QDesktopWidget_ScreenGeometry1(QDesktopWidget* self, int screen) {
	QRect ret = self->screenGeometry(static_cast<int>(screen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QDesktopWidget_AvailableGeometry1(QDesktopWidget* self, int screen) {
	QRect ret = self->availableGeometry(static_cast<int>(screen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QDesktopWidget_Delete(QDesktopWidget* self) {
	delete self;
}
