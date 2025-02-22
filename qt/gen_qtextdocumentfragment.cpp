#include <QByteArray>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextDocumentFragment>
#include <qtextdocumentfragment.h>
#include "gen_qtextdocumentfragment.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTextDocumentFragment* QTextDocumentFragment_new() {
	return new QTextDocumentFragment();
}

QTextDocumentFragment* QTextDocumentFragment_new2(QTextDocument* document) {
	return new QTextDocumentFragment(document);
}

QTextDocumentFragment* QTextDocumentFragment_new3(QTextCursor* rangeVal) {
	return new QTextDocumentFragment(*rangeVal);
}

QTextDocumentFragment* QTextDocumentFragment_new4(QTextDocumentFragment* rhs) {
	return new QTextDocumentFragment(*rhs);
}

void QTextDocumentFragment_OperatorAssign(QTextDocumentFragment* self, QTextDocumentFragment* rhs) {
	self->operator=(*rhs);
}

bool QTextDocumentFragment_IsEmpty(const QTextDocumentFragment* self) {
	return self->isEmpty();
}

struct miqt_string QTextDocumentFragment_ToPlainText(const QTextDocumentFragment* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocumentFragment_ToHtml(const QTextDocumentFragment* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocumentFragment* QTextDocumentFragment_FromPlainText(struct miqt_string plainText) {
	QString plainText_QString = QString::fromUtf8(plainText.data, plainText.len);
	return new QTextDocumentFragment(QTextDocumentFragment::fromPlainText(plainText_QString));
}

QTextDocumentFragment* QTextDocumentFragment_FromHtml(struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(html_QString));
}

QTextDocumentFragment* QTextDocumentFragment_FromHtml2(struct miqt_string html, QTextDocument* resourceProvider) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(html_QString, resourceProvider));
}

struct miqt_string QTextDocumentFragment_ToHtml1(const QTextDocumentFragment* self, struct miqt_string encoding) {
	QByteArray encoding_QByteArray(encoding.data, encoding.len);
	QString _ret = self->toHtml(encoding_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocumentFragment_Delete(QTextDocumentFragment* self) {
	delete self;
}

