#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsciapis.h>
#include "gen_qsciapis.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciAPIs_ApiPreparationCancelled(intptr_t);
void miqt_exec_callback_QsciAPIs_ApiPreparationStarted(intptr_t);
void miqt_exec_callback_QsciAPIs_ApiPreparationFinished(intptr_t);
void miqt_exec_callback_QsciAPIs_UpdateAutoCompletionList(void*, intptr_t, struct miqt_array /* of struct miqt_string */ , struct miqt_array /* of struct miqt_string */ );
void miqt_exec_callback_QsciAPIs_AutoCompletionSelected(void*, intptr_t, struct miqt_string);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciAPIs_CallTips(void*, intptr_t, struct miqt_array /* of struct miqt_string */ , int, int, struct miqt_array /* of int */ );
bool miqt_exec_callback_QsciAPIs_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciAPIs_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciAPIs_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciAPIs_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciAPIs_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QsciAPIs_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciAPIs_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciAPIs final : public QsciAPIs {
public:

	MiqtVirtualQsciAPIs(QsciLexer* lexer): QsciAPIs(lexer) {};

	virtual ~MiqtVirtualQsciAPIs() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateAutoCompletionList = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateAutoCompletionList(const QStringList& context, QStringList& list) override {
		if (handle__UpdateAutoCompletionList == 0) {
			QsciAPIs::updateAutoCompletionList(context, list);
			return;
		}
		
		const QStringList& context_ret = context;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* context_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * context_ret.length()));
		for (size_t i = 0, e = context_ret.length(); i < e; ++i) {
			QString context_lv_ret = context_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray context_lv_b = context_lv_ret.toUtf8();
			struct miqt_string context_lv_ms;
			context_lv_ms.len = context_lv_b.length();
			context_lv_ms.data = static_cast<char*>(malloc(context_lv_ms.len));
			memcpy(context_lv_ms.data, context_lv_b.data(), context_lv_ms.len);
			context_arr[i] = context_lv_ms;
		}
		struct miqt_array context_out;
		context_out.len = context_ret.length();
		context_out.data = static_cast<void*>(context_arr);
		struct miqt_array /* of struct miqt_string */  sigval1 = context_out;
		QStringList& list_ret = list;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* list_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * list_ret.length()));
		for (size_t i = 0, e = list_ret.length(); i < e; ++i) {
			QString list_lv_ret = list_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray list_lv_b = list_lv_ret.toUtf8();
			struct miqt_string list_lv_ms;
			list_lv_ms.len = list_lv_b.length();
			list_lv_ms.data = static_cast<char*>(malloc(list_lv_ms.len));
			memcpy(list_lv_ms.data, list_lv_b.data(), list_lv_ms.len);
			list_arr[i] = list_lv_ms;
		}
		struct miqt_array list_out;
		list_out.len = list_ret.length();
		list_out.data = static_cast<void*>(list_arr);
		struct miqt_array /* of struct miqt_string */  sigval2 = list_out;

		miqt_exec_callback_QsciAPIs_UpdateAutoCompletionList(this, handle__UpdateAutoCompletionList, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateAutoCompletionList(struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list) {
		QStringList context_QList;
		context_QList.reserve(context.len);
		struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
		for(size_t i = 0; i < context.len; ++i) {
			QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
			context_QList.push_back(context_arr_i_QString);
		}
		QStringList list_QList;
		list_QList.reserve(list.len);
		struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
		for(size_t i = 0; i < list.len; ++i) {
			QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
			list_QList.push_back(list_arr_i_QString);
		}

		QsciAPIs::updateAutoCompletionList(context_QList, list_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionSelected = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoCompletionSelected(const QString& sel) override {
		if (handle__AutoCompletionSelected == 0) {
			QsciAPIs::autoCompletionSelected(sel);
			return;
		}
		
		const QString sel_ret = sel;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray sel_b = sel_ret.toUtf8();
		struct miqt_string sel_ms;
		sel_ms.len = sel_b.length();
		sel_ms.data = static_cast<char*>(malloc(sel_ms.len));
		memcpy(sel_ms.data, sel_b.data(), sel_ms.len);
		struct miqt_string sigval1 = sel_ms;

		miqt_exec_callback_QsciAPIs_AutoCompletionSelected(this, handle__AutoCompletionSelected, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AutoCompletionSelected(struct miqt_string sel) {
		QString sel_QString = QString::fromUtf8(sel.data, sel.len);

		QsciAPIs::autoCompletionSelected(sel_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CallTips = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList callTips(const QStringList& context, int commas, QsciScintilla::CallTipsStyle style, QList<int>& shifts) override {
		if (handle__CallTips == 0) {
			return QsciAPIs::callTips(context, commas, style, shifts);
		}
		
		const QStringList& context_ret = context;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* context_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * context_ret.length()));
		for (size_t i = 0, e = context_ret.length(); i < e; ++i) {
			QString context_lv_ret = context_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray context_lv_b = context_lv_ret.toUtf8();
			struct miqt_string context_lv_ms;
			context_lv_ms.len = context_lv_b.length();
			context_lv_ms.data = static_cast<char*>(malloc(context_lv_ms.len));
			memcpy(context_lv_ms.data, context_lv_b.data(), context_lv_ms.len);
			context_arr[i] = context_lv_ms;
		}
		struct miqt_array context_out;
		context_out.len = context_ret.length();
		context_out.data = static_cast<void*>(context_arr);
		struct miqt_array /* of struct miqt_string */  sigval1 = context_out;
		int sigval2 = commas;
		QsciScintilla::CallTipsStyle style_ret = style;
		int sigval3 = static_cast<int>(style_ret);
		QList<int>& shifts_ret = shifts;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* shifts_arr = static_cast<int*>(malloc(sizeof(int) * shifts_ret.length()));
		for (size_t i = 0, e = shifts_ret.length(); i < e; ++i) {
			shifts_arr[i] = shifts_ret[i];
		}
		struct miqt_array shifts_out;
		shifts_out.len = shifts_ret.length();
		shifts_out.data = static_cast<void*>(shifts_arr);
		struct miqt_array /* of int */  sigval4 = shifts_out;

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciAPIs_CallTips(this, handle__CallTips, sigval1, sigval2, sigval3, sigval4);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of struct miqt_string */  virtualbase_CallTips(struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts) {
		QStringList context_QList;
		context_QList.reserve(context.len);
		struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
		for(size_t i = 0; i < context.len; ++i) {
			QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
			context_QList.push_back(context_arr_i_QString);
		}
		QList<int> shifts_QList;
		shifts_QList.reserve(shifts.len);
		int* shifts_arr = static_cast<int*>(shifts.data);
		for(size_t i = 0; i < shifts.len; ++i) {
			shifts_QList.push_back(static_cast<int>(shifts_arr[i]));
		}

		QStringList _ret = QsciAPIs::callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			QString _lv_ret = _ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray _lv_b = _lv_ret.toUtf8();
			struct miqt_string _lv_ms;
			_lv_ms.len = _lv_b.length();
			_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
			memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
			_arr[i] = _lv_ms;
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QsciAPIs::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QsciAPIs_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QsciAPIs::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QsciAPIs::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciAPIs_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QsciAPIs::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciAPIs::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciAPIs_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciAPIs::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciAPIs::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciAPIs_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciAPIs::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciAPIs::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciAPIs_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciAPIs::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciAPIs::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciAPIs_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciAPIs::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciAPIs::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciAPIs_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciAPIs::disconnectNotify(*signal);

	}

};

QsciAPIs* QsciAPIs_new(QsciLexer* lexer) {
	return new MiqtVirtualQsciAPIs(lexer);
}

void QsciAPIs_virtbase(QsciAPIs* src, QsciAbstractAPIs** outptr_QsciAbstractAPIs) {
	*outptr_QsciAbstractAPIs = static_cast<QsciAbstractAPIs*>(src);
}

QMetaObject* QsciAPIs_MetaObject(const QsciAPIs* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciAPIs_Metacast(QsciAPIs* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciAPIs_Tr(const char* s) {
	QString _ret = QsciAPIs::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAPIs_TrUtf8(const char* s) {
	QString _ret = QsciAPIs::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciAPIs_Add(QsciAPIs* self, struct miqt_string entry) {
	QString entry_QString = QString::fromUtf8(entry.data, entry.len);
	self->add(entry_QString);
}

void QsciAPIs_Clear(QsciAPIs* self) {
	self->clear();
}

bool QsciAPIs_Load(QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->load(filename_QString);
}

void QsciAPIs_Remove(QsciAPIs* self, struct miqt_string entry) {
	QString entry_QString = QString::fromUtf8(entry.data, entry.len);
	self->remove(entry_QString);
}

void QsciAPIs_Prepare(QsciAPIs* self) {
	self->prepare();
}

void QsciAPIs_CancelPreparation(QsciAPIs* self) {
	self->cancelPreparation();
}

struct miqt_string QsciAPIs_DefaultPreparedName(const QsciAPIs* self) {
	QString _ret = self->defaultPreparedName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciAPIs_IsPrepared(const QsciAPIs* self) {
	return self->isPrepared();
}

bool QsciAPIs_LoadPrepared(QsciAPIs* self) {
	return self->loadPrepared();
}

bool QsciAPIs_SavePrepared(const QsciAPIs* self) {
	return self->savePrepared();
}

void QsciAPIs_UpdateAutoCompletionList(QsciAPIs* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list) {
	QStringList context_QList;
	context_QList.reserve(context.len);
	struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
	for(size_t i = 0; i < context.len; ++i) {
		QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
		context_QList.push_back(context_arr_i_QString);
	}
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	self->updateAutoCompletionList(context_QList, list_QList);
}

void QsciAPIs_AutoCompletionSelected(QsciAPIs* self, struct miqt_string sel) {
	QString sel_QString = QString::fromUtf8(sel.data, sel.len);
	self->autoCompletionSelected(sel_QString);
}

struct miqt_array /* of struct miqt_string */  QsciAPIs_CallTips(QsciAPIs* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts) {
	QStringList context_QList;
	context_QList.reserve(context.len);
	struct miqt_string* context_arr = static_cast<struct miqt_string*>(context.data);
	for(size_t i = 0; i < context.len; ++i) {
		QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
		context_QList.push_back(context_arr_i_QString);
	}
	QList<int> shifts_QList;
	shifts_QList.reserve(shifts.len);
	int* shifts_arr = static_cast<int*>(shifts.data);
	for(size_t i = 0; i < shifts.len; ++i) {
		shifts_QList.push_back(static_cast<int>(shifts_arr[i]));
	}
	QStringList _ret = self->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QsciAPIs_Event(QsciAPIs* self, QEvent* e) {
	return self->event(e);
}

struct miqt_array /* of struct miqt_string */  QsciAPIs_InstalledAPIFiles(const QsciAPIs* self) {
	QStringList _ret = self->installedAPIFiles();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QsciAPIs_ApiPreparationCancelled(QsciAPIs* self) {
	self->apiPreparationCancelled();
}

void QsciAPIs_connect_ApiPreparationCancelled(QsciAPIs* self, intptr_t slot) {
	MiqtVirtualQsciAPIs::connect(self, static_cast<void (QsciAPIs::*)()>(&QsciAPIs::apiPreparationCancelled), self, [=]() {
		miqt_exec_callback_QsciAPIs_ApiPreparationCancelled(slot);
	});
}

void QsciAPIs_ApiPreparationStarted(QsciAPIs* self) {
	self->apiPreparationStarted();
}

void QsciAPIs_connect_ApiPreparationStarted(QsciAPIs* self, intptr_t slot) {
	MiqtVirtualQsciAPIs::connect(self, static_cast<void (QsciAPIs::*)()>(&QsciAPIs::apiPreparationStarted), self, [=]() {
		miqt_exec_callback_QsciAPIs_ApiPreparationStarted(slot);
	});
}

void QsciAPIs_ApiPreparationFinished(QsciAPIs* self) {
	self->apiPreparationFinished();
}

void QsciAPIs_connect_ApiPreparationFinished(QsciAPIs* self, intptr_t slot) {
	MiqtVirtualQsciAPIs::connect(self, static_cast<void (QsciAPIs::*)()>(&QsciAPIs::apiPreparationFinished), self, [=]() {
		miqt_exec_callback_QsciAPIs_ApiPreparationFinished(slot);
	});
}

struct miqt_string QsciAPIs_Tr2(const char* s, const char* c) {
	QString _ret = QsciAPIs::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAPIs_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciAPIs::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAPIs_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciAPIs::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciAPIs_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciAPIs::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciAPIs_IsPrepared1(const QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->isPrepared(filename_QString);
}

bool QsciAPIs_LoadPrepared1(QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->loadPrepared(filename_QString);
}

bool QsciAPIs_SavePrepared1(const QsciAPIs* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->savePrepared(filename_QString);
}

bool QsciAPIs_override_virtual_UpdateAutoCompletionList(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateAutoCompletionList = slot;
	return true;
}

void QsciAPIs_virtualbase_UpdateAutoCompletionList(void* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list) {
	( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_UpdateAutoCompletionList(context, list);
}

bool QsciAPIs_override_virtual_AutoCompletionSelected(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionSelected = slot;
	return true;
}

void QsciAPIs_virtualbase_AutoCompletionSelected(void* self, struct miqt_string sel) {
	( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_AutoCompletionSelected(sel);
}

bool QsciAPIs_override_virtual_CallTips(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CallTips = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciAPIs_virtualbase_CallTips(void* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts) {
	return ( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_CallTips(context, commas, style, shifts);
}

bool QsciAPIs_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciAPIs_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_Event(e);
}

bool QsciAPIs_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciAPIs_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QsciAPIs_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciAPIs_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciAPIs_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciAPIs_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciAPIs_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciAPIs_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciAPIs_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciAPIs_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciAPIs_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciAPIs* self_cast = dynamic_cast<MiqtVirtualQsciAPIs*>( (QsciAPIs*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciAPIs_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciAPIs*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciAPIs_Delete(QsciAPIs* self) {
	delete self;
}

