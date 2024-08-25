#include "gen_qradiobutton.h"
#include "qradiobutton.h"

#include <QMetaObject>
#include <QRadioButton>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRadioButton* QRadioButton_new() {
	return new QRadioButton();
}

QRadioButton* QRadioButton_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QRadioButton(text_QString);
}

QRadioButton* QRadioButton_new3(QWidget* parent) {
	return new QRadioButton(parent);
}

QRadioButton* QRadioButton_new4(const char* text, size_t text_Strlen, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QRadioButton(text_QString, parent);
}

QMetaObject* QRadioButton_MetaObject(QRadioButton* self) {
	return (QMetaObject*) self->metaObject();
}

void QRadioButton_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QRadioButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRadioButton_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QRadioButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QRadioButton_SizeHint(QRadioButton* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QRadioButton_MinimumSizeHint(QRadioButton* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QRadioButton_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QRadioButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRadioButton_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRadioButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRadioButton_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QRadioButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRadioButton_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QRadioButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRadioButton_Delete(QRadioButton* self) {
	delete self;
}
