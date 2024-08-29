#include <QBrush>
#include <QColor>
#include <QList>
#include <QPen>
#include "qpen.h"

#include "gen_qpen.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPen* QPen_new() {
	return new QPen();
}

QPen* QPen_new2(uintptr_t param1) {
	return new QPen(static_cast<Qt::PenStyle>(param1));
}

QPen* QPen_new3(QColor* color) {
	return new QPen(*color);
}

QPen* QPen_new4(QBrush* brush, double width) {
	return new QPen(*brush, static_cast<qreal>(width));
}

QPen* QPen_new5(QPen* pen) {
	return new QPen(*pen);
}

QPen* QPen_new6(QBrush* brush, double width, uintptr_t s) {
	return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s));
}

QPen* QPen_new7(QBrush* brush, double width, uintptr_t s, uintptr_t c) {
	return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c));
}

QPen* QPen_new8(QBrush* brush, double width, uintptr_t s, uintptr_t c, uintptr_t j) {
	return new QPen(*brush, static_cast<qreal>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c), static_cast<Qt::PenJoinStyle>(j));
}

void QPen_OperatorAssign(QPen* self, QPen* pen) {
	self->operator=(*pen);
}

void QPen_Swap(QPen* self, QPen* other) {
	self->swap(*other);
}

uintptr_t QPen_Style(QPen* self) {
	Qt::PenStyle ret = const_cast<const QPen*>(self)->style();
	return static_cast<uintptr_t>(ret);
}

void QPen_SetStyle(QPen* self, uintptr_t style) {
	self->setStyle(static_cast<Qt::PenStyle>(style));
}

void QPen_DashPattern(QPen* self, double** _out, size_t* _out_len) {
	QVector<double> ret = const_cast<const QPen*>(self)->dashPattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* __out = static_cast<double*>(malloc(sizeof(double) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QPen_SetDashPattern(QPen* self, double* pattern, size_t pattern_len) {
	QVector<double> pattern_QList;
	pattern_QList.reserve(pattern_len);
	for(size_t i = 0; i < pattern_len; ++i) {
		pattern_QList.push_back(pattern[i]);
	}
	self->setDashPattern(pattern_QList);
}

double QPen_DashOffset(QPen* self) {
	return const_cast<const QPen*>(self)->dashOffset();
}

void QPen_SetDashOffset(QPen* self, double doffset) {
	self->setDashOffset(static_cast<qreal>(doffset));
}

double QPen_MiterLimit(QPen* self) {
	return const_cast<const QPen*>(self)->miterLimit();
}

void QPen_SetMiterLimit(QPen* self, double limit) {
	self->setMiterLimit(static_cast<qreal>(limit));
}

double QPen_WidthF(QPen* self) {
	return const_cast<const QPen*>(self)->widthF();
}

void QPen_SetWidthF(QPen* self, double width) {
	self->setWidthF(static_cast<qreal>(width));
}

int QPen_Width(QPen* self) {
	return const_cast<const QPen*>(self)->width();
}

void QPen_SetWidth(QPen* self, int width) {
	self->setWidth(static_cast<int>(width));
}

QColor* QPen_Color(QPen* self) {
	QColor ret = const_cast<const QPen*>(self)->color();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QPen_SetColor(QPen* self, QColor* color) {
	self->setColor(*color);
}

QBrush* QPen_Brush(QPen* self) {
	QBrush ret = const_cast<const QPen*>(self)->brush();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QPen_SetBrush(QPen* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QPen_IsSolid(QPen* self) {
	return const_cast<const QPen*>(self)->isSolid();
}

uintptr_t QPen_CapStyle(QPen* self) {
	Qt::PenCapStyle ret = const_cast<const QPen*>(self)->capStyle();
	return static_cast<uintptr_t>(ret);
}

void QPen_SetCapStyle(QPen* self, uintptr_t pcs) {
	self->setCapStyle(static_cast<Qt::PenCapStyle>(pcs));
}

uintptr_t QPen_JoinStyle(QPen* self) {
	Qt::PenJoinStyle ret = const_cast<const QPen*>(self)->joinStyle();
	return static_cast<uintptr_t>(ret);
}

void QPen_SetJoinStyle(QPen* self, uintptr_t pcs) {
	self->setJoinStyle(static_cast<Qt::PenJoinStyle>(pcs));
}

bool QPen_IsCosmetic(QPen* self) {
	return const_cast<const QPen*>(self)->isCosmetic();
}

void QPen_SetCosmetic(QPen* self, bool cosmetic) {
	self->setCosmetic(cosmetic);
}

bool QPen_OperatorEqual(QPen* self, QPen* p) {
	return const_cast<const QPen*>(self)->operator==(*p);
}

bool QPen_OperatorNotEqual(QPen* self, QPen* p) {
	return const_cast<const QPen*>(self)->operator!=(*p);
}

bool QPen_IsDetached(QPen* self) {
	return self->isDetached();
}

void QPen_Delete(QPen* self) {
	delete self;
}

