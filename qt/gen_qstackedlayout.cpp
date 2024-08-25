#include "gen_qstackedlayout.h"
#include "qstackedlayout.h"

#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QStackedLayout>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStackedLayout* QStackedLayout_new() {
	return new QStackedLayout();
}

QStackedLayout* QStackedLayout_new2(QWidget* parent) {
	return new QStackedLayout(parent);
}

QStackedLayout* QStackedLayout_new3(QLayout* parentLayout) {
	return new QStackedLayout(parentLayout);
}

QMetaObject* QStackedLayout_MetaObject(QStackedLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void QStackedLayout_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStackedLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedLayout_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStackedLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w) {
	return self->insertWidget(static_cast<int>(index), w);
}

QWidget* QStackedLayout_CurrentWidget(QStackedLayout* self) {
	return self->currentWidget();
}

int QStackedLayout_CurrentIndex(QStackedLayout* self) {
	return self->currentIndex();
}

QWidget* QStackedLayout_Widget(QStackedLayout* self, int param1) {
	return self->widget(static_cast<int>(param1));
}

int QStackedLayout_Count(QStackedLayout* self) {
	return self->count();
}

void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QSize* QStackedLayout_SizeHint(QStackedLayout* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QStackedLayout_MinimumSize(QStackedLayout* self) {
	QSize ret = self->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QLayoutItem* QStackedLayout_ItemAt(QStackedLayout* self, int param1) {
	return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1) {
	return self->takeAt(static_cast<int>(param1));
}

void QStackedLayout_SetGeometry(QStackedLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

bool QStackedLayout_HasHeightForWidth(QStackedLayout* self) {
	return self->hasHeightForWidth();
}

int QStackedLayout_HeightForWidth(QStackedLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index) {
	self->widgetRemoved(static_cast<int>(index));
}

void QStackedLayout_connect_WidgetRemoved(QStackedLayout* self, void* slot) {
	QStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::widgetRemoved), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStackedLayout_CurrentChanged(QStackedLayout* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QStackedLayout_connect_CurrentChanged(QStackedLayout* self, void* slot) {
	QStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::currentChanged), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w) {
	self->setCurrentWidget(w);
}

void QStackedLayout_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStackedLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedLayout_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStackedLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedLayout_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStackedLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedLayout_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStackedLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStackedLayout_Delete(QStackedLayout* self) {
	delete self;
}
