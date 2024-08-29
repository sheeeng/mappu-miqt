#include <QAction>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoCommand>
#include <QUndoStack>
#include "qundostack.h"

#include "gen_qundostack.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QUndoCommand* QUndoCommand_new() {
	return new QUndoCommand();
}

QUndoCommand* QUndoCommand_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QUndoCommand(text_QString);
}

QUndoCommand* QUndoCommand_new3(QUndoCommand* parent) {
	return new QUndoCommand(parent);
}

QUndoCommand* QUndoCommand_new4(const char* text, size_t text_Strlen, QUndoCommand* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QUndoCommand(text_QString, parent);
}

void QUndoCommand_Undo(QUndoCommand* self) {
	self->undo();
}

void QUndoCommand_Redo(QUndoCommand* self) {
	self->redo();
}

void QUndoCommand_Text(QUndoCommand* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUndoCommand*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoCommand_ActionText(QUndoCommand* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUndoCommand*>(self)->actionText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoCommand_SetText(QUndoCommand* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

bool QUndoCommand_IsObsolete(QUndoCommand* self) {
	return const_cast<const QUndoCommand*>(self)->isObsolete();
}

void QUndoCommand_SetObsolete(QUndoCommand* self, bool obsolete) {
	self->setObsolete(obsolete);
}

int QUndoCommand_Id(QUndoCommand* self) {
	return const_cast<const QUndoCommand*>(self)->id();
}

bool QUndoCommand_MergeWith(QUndoCommand* self, QUndoCommand* other) {
	return self->mergeWith(other);
}

int QUndoCommand_ChildCount(QUndoCommand* self) {
	return const_cast<const QUndoCommand*>(self)->childCount();
}

QUndoCommand* QUndoCommand_Child(QUndoCommand* self, int index) {
	return (QUndoCommand*) const_cast<const QUndoCommand*>(self)->child(static_cast<int>(index));
}

void QUndoCommand_Delete(QUndoCommand* self) {
	delete self;
}

QUndoStack* QUndoStack_new() {
	return new QUndoStack();
}

QUndoStack* QUndoStack_new2(QObject* parent) {
	return new QUndoStack(parent);
}

QMetaObject* QUndoStack_MetaObject(QUndoStack* self) {
	return (QMetaObject*) const_cast<const QUndoStack*>(self)->metaObject();
}

void QUndoStack_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QUndoStack::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoStack_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QUndoStack::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoStack_Clear(QUndoStack* self) {
	self->clear();
}

void QUndoStack_Push(QUndoStack* self, QUndoCommand* cmd) {
	self->push(cmd);
}

bool QUndoStack_CanUndo(QUndoStack* self) {
	return const_cast<const QUndoStack*>(self)->canUndo();
}

bool QUndoStack_CanRedo(QUndoStack* self) {
	return const_cast<const QUndoStack*>(self)->canRedo();
}

void QUndoStack_UndoText(QUndoStack* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUndoStack*>(self)->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoStack_RedoText(QUndoStack* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUndoStack*>(self)->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QUndoStack_Count(QUndoStack* self) {
	return const_cast<const QUndoStack*>(self)->count();
}

int QUndoStack_Index(QUndoStack* self) {
	return const_cast<const QUndoStack*>(self)->index();
}

void QUndoStack_Text(QUndoStack* self, int idx, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QUndoStack*>(self)->text(static_cast<int>(idx));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAction* QUndoStack_CreateUndoAction(QUndoStack* self, QObject* parent) {
	return const_cast<const QUndoStack*>(self)->createUndoAction(parent);
}

QAction* QUndoStack_CreateRedoAction(QUndoStack* self, QObject* parent) {
	return const_cast<const QUndoStack*>(self)->createRedoAction(parent);
}

bool QUndoStack_IsActive(QUndoStack* self) {
	return const_cast<const QUndoStack*>(self)->isActive();
}

bool QUndoStack_IsClean(QUndoStack* self) {
	return const_cast<const QUndoStack*>(self)->isClean();
}

int QUndoStack_CleanIndex(QUndoStack* self) {
	return const_cast<const QUndoStack*>(self)->cleanIndex();
}

void QUndoStack_BeginMacro(QUndoStack* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->beginMacro(text_QString);
}

void QUndoStack_EndMacro(QUndoStack* self) {
	self->endMacro();
}

void QUndoStack_SetUndoLimit(QUndoStack* self, int limit) {
	self->setUndoLimit(static_cast<int>(limit));
}

int QUndoStack_UndoLimit(QUndoStack* self) {
	return const_cast<const QUndoStack*>(self)->undoLimit();
}

QUndoCommand* QUndoStack_Command(QUndoStack* self, int index) {
	return (QUndoCommand*) const_cast<const QUndoStack*>(self)->command(static_cast<int>(index));
}

void QUndoStack_SetClean(QUndoStack* self) {
	self->setClean();
}

void QUndoStack_ResetClean(QUndoStack* self) {
	self->resetClean();
}

void QUndoStack_SetIndex(QUndoStack* self, int idx) {
	self->setIndex(static_cast<int>(idx));
}

void QUndoStack_Undo(QUndoStack* self) {
	self->undo();
}

void QUndoStack_Redo(QUndoStack* self) {
	self->redo();
}

void QUndoStack_SetActive(QUndoStack* self) {
	self->setActive();
}

void QUndoStack_IndexChanged(QUndoStack* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoStack_connect_IndexChanged(QUndoStack* self, void* slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(int)>(&QUndoStack::indexChanged), self, [=](int idx) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoStack_CleanChanged(QUndoStack* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoStack_connect_CleanChanged(QUndoStack* self, void* slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::cleanChanged), self, [=](bool clean) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoStack_CanUndoChanged(QUndoStack* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoStack_connect_CanUndoChanged(QUndoStack* self, void* slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canUndoChanged), self, [=](bool canUndo) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoStack_CanRedoChanged(QUndoStack* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoStack_connect_CanRedoChanged(QUndoStack* self, void* slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canRedoChanged), self, [=](bool canRedo) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoStack_UndoTextChanged(QUndoStack* self, const char* undoText, size_t undoText_Strlen) {
	QString undoText_QString = QString::fromUtf8(undoText, undoText_Strlen);
	self->undoTextChanged(undoText_QString);
}

void QUndoStack_connect_UndoTextChanged(QUndoStack* self, void* slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::undoTextChanged), self, [=](const QString& undoText) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoStack_RedoTextChanged(QUndoStack* self, const char* redoText, size_t redoText_Strlen) {
	QString redoText_QString = QString::fromUtf8(redoText, redoText_Strlen);
	self->redoTextChanged(redoText_QString);
}

void QUndoStack_connect_RedoTextChanged(QUndoStack* self, void* slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::redoTextChanged), self, [=](const QString& redoText) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QUndoStack_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QUndoStack::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoStack_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QUndoStack::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoStack_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QUndoStack::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUndoStack_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QUndoStack::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAction* QUndoStack_CreateUndoAction2(QUndoStack* self, QObject* parent, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoStack_CreateRedoAction2(QUndoStack* self, QObject* parent, const char* prefix, size_t prefix_Strlen) {
	QString prefix_QString = QString::fromUtf8(prefix, prefix_Strlen);
	return self->createRedoAction(parent, prefix_QString);
}

void QUndoStack_SetActive1(QUndoStack* self, bool active) {
	self->setActive(active);
}

void QUndoStack_Delete(QUndoStack* self) {
	delete self;
}

