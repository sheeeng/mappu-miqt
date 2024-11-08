#include <QFont>
#include <QFontDialog>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qfontdialog.h>
#include "gen_qfontdialog.h"
#include "_cgo_export.h"

QFontDialog* QFontDialog_new(QWidget* parent) {
	return new QFontDialog(parent);
}

QFontDialog* QFontDialog_new2() {
	return new QFontDialog();
}

QFontDialog* QFontDialog_new3(QFont* initial) {
	return new QFontDialog(*initial);
}

QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent) {
	return new QFontDialog(*initial, parent);
}

QMetaObject* QFontDialog_MetaObject(const QFontDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFontDialog_Metacast(QFontDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFontDialog_Tr(const char* s) {
	QString _ret = QFontDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font) {
	self->setCurrentFont(*font);
}

QFont* QFontDialog_CurrentFont(const QFontDialog* self) {
	return new QFont(self->currentFont());
}

QFont* QFontDialog_SelectedFont(const QFontDialog* self) {
	return new QFont(self->selectedFont());
}

void QFontDialog_SetOption(QFontDialog* self, int option) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option));
}

bool QFontDialog_TestOption(const QFontDialog* self, int option) {
	return self->testOption(static_cast<QFontDialog::FontDialogOption>(option));
}

void QFontDialog_SetOptions(QFontDialog* self, int options) {
	self->setOptions(static_cast<QFontDialog::FontDialogOptions>(options));
}

int QFontDialog_Options(const QFontDialog* self) {
	QFontDialog::FontDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QFontDialog_SetVisible(QFontDialog* self, bool visible) {
	self->setVisible(visible);
}

QFont* QFontDialog_GetFont(bool* ok) {
	return new QFont(QFontDialog::getFont(ok));
}

QFont* QFontDialog_GetFont2(bool* ok, QFont* initial) {
	return new QFont(QFontDialog::getFont(ok, *initial));
}

void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font) {
	self->currentFontChanged(*font);
}

void QFontDialog_connect_CurrentFontChanged(QFontDialog* self, intptr_t slot) {
	QFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::currentFontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QFontDialog_CurrentFontChanged(slot, sigval1);
	});
}

void QFontDialog_FontSelected(QFontDialog* self, QFont* font) {
	self->fontSelected(*font);
}

void QFontDialog_connect_FontSelected(QFontDialog* self, intptr_t slot) {
	QFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::fontSelected), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QFontDialog_FontSelected(slot, sigval1);
	});
}

struct miqt_string QFontDialog_Tr2(const char* s, const char* c) {
	QString _ret = QFontDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFontDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontDialog_SetOption2(QFontDialog* self, int option, bool on) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option), on);
}

QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent) {
	return new QFont(QFontDialog::getFont(ok, parent));
}

QFont* QFontDialog_GetFont3(bool* ok, QFont* initial, QWidget* parent) {
	return new QFont(QFontDialog::getFont(ok, *initial, parent));
}

QFont* QFontDialog_GetFont4(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString));
}

QFont* QFontDialog_GetFont5(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title, int options) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString, static_cast<QFontDialog::FontDialogOptions>(options)));
}

void QFontDialog_Delete(QFontDialog* self) {
	delete self;
}

