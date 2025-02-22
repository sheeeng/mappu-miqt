#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QRadioDataControl>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qradiodatacontrol.h>
#include "gen_qradiodatacontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QRadioDataControl_StationIdChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioDataControl_ProgramTypeChanged(intptr_t, int);
void miqt_exec_callback_QRadioDataControl_ProgramTypeNameChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioDataControl_StationNameChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioDataControl_RadioTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QRadioDataControl_AlternativeFrequenciesEnabledChanged(intptr_t, bool);
void miqt_exec_callback_QRadioDataControl_ErrorWithErr(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QRadioDataControl_virtbase(QRadioDataControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QRadioDataControl_MetaObject(const QRadioDataControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRadioDataControl_Metacast(QRadioDataControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRadioDataControl_Tr(const char* s) {
	QString _ret = QRadioDataControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioDataControl_TrUtf8(const char* s) {
	QString _ret = QRadioDataControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioDataControl_StationId(const QRadioDataControl* self) {
	QString _ret = self->stationId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioDataControl_ProgramType(const QRadioDataControl* self) {
	QRadioData::ProgramType _ret = self->programType();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioDataControl_ProgramTypeName(const QRadioDataControl* self) {
	QString _ret = self->programTypeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioDataControl_StationName(const QRadioDataControl* self) {
	QString _ret = self->stationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioDataControl_RadioText(const QRadioDataControl* self) {
	QString _ret = self->radioText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioDataControl_SetAlternativeFrequenciesEnabled(QRadioDataControl* self, bool enabled) {
	self->setAlternativeFrequenciesEnabled(enabled);
}

bool QRadioDataControl_IsAlternativeFrequenciesEnabled(const QRadioDataControl* self) {
	return self->isAlternativeFrequenciesEnabled();
}

int QRadioDataControl_Error(const QRadioDataControl* self) {
	QRadioData::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioDataControl_ErrorString(const QRadioDataControl* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioDataControl_StationIdChanged(QRadioDataControl* self, struct miqt_string stationId) {
	QString stationId_QString = QString::fromUtf8(stationId.data, stationId.len);
	self->stationIdChanged(stationId_QString);
}

void QRadioDataControl_connect_StationIdChanged(QRadioDataControl* self, intptr_t slot) {
	QRadioDataControl::connect(self, static_cast<void (QRadioDataControl::*)(QString)>(&QRadioDataControl::stationIdChanged), self, [=](QString stationId) {
		QString stationId_ret = stationId;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationId_b = stationId_ret.toUtf8();
		struct miqt_string stationId_ms;
		stationId_ms.len = stationId_b.length();
		stationId_ms.data = static_cast<char*>(malloc(stationId_ms.len));
		memcpy(stationId_ms.data, stationId_b.data(), stationId_ms.len);
		struct miqt_string sigval1 = stationId_ms;
		miqt_exec_callback_QRadioDataControl_StationIdChanged(slot, sigval1);
	});
}

void QRadioDataControl_ProgramTypeChanged(QRadioDataControl* self, int programType) {
	self->programTypeChanged(static_cast<QRadioData::ProgramType>(programType));
}

void QRadioDataControl_connect_ProgramTypeChanged(QRadioDataControl* self, intptr_t slot) {
	QRadioDataControl::connect(self, static_cast<void (QRadioDataControl::*)(QRadioData::ProgramType)>(&QRadioDataControl::programTypeChanged), self, [=](QRadioData::ProgramType programType) {
		QRadioData::ProgramType programType_ret = programType;
		int sigval1 = static_cast<int>(programType_ret);
		miqt_exec_callback_QRadioDataControl_ProgramTypeChanged(slot, sigval1);
	});
}

void QRadioDataControl_ProgramTypeNameChanged(QRadioDataControl* self, struct miqt_string programTypeName) {
	QString programTypeName_QString = QString::fromUtf8(programTypeName.data, programTypeName.len);
	self->programTypeNameChanged(programTypeName_QString);
}

void QRadioDataControl_connect_ProgramTypeNameChanged(QRadioDataControl* self, intptr_t slot) {
	QRadioDataControl::connect(self, static_cast<void (QRadioDataControl::*)(QString)>(&QRadioDataControl::programTypeNameChanged), self, [=](QString programTypeName) {
		QString programTypeName_ret = programTypeName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray programTypeName_b = programTypeName_ret.toUtf8();
		struct miqt_string programTypeName_ms;
		programTypeName_ms.len = programTypeName_b.length();
		programTypeName_ms.data = static_cast<char*>(malloc(programTypeName_ms.len));
		memcpy(programTypeName_ms.data, programTypeName_b.data(), programTypeName_ms.len);
		struct miqt_string sigval1 = programTypeName_ms;
		miqt_exec_callback_QRadioDataControl_ProgramTypeNameChanged(slot, sigval1);
	});
}

void QRadioDataControl_StationNameChanged(QRadioDataControl* self, struct miqt_string stationName) {
	QString stationName_QString = QString::fromUtf8(stationName.data, stationName.len);
	self->stationNameChanged(stationName_QString);
}

void QRadioDataControl_connect_StationNameChanged(QRadioDataControl* self, intptr_t slot) {
	QRadioDataControl::connect(self, static_cast<void (QRadioDataControl::*)(QString)>(&QRadioDataControl::stationNameChanged), self, [=](QString stationName) {
		QString stationName_ret = stationName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationName_b = stationName_ret.toUtf8();
		struct miqt_string stationName_ms;
		stationName_ms.len = stationName_b.length();
		stationName_ms.data = static_cast<char*>(malloc(stationName_ms.len));
		memcpy(stationName_ms.data, stationName_b.data(), stationName_ms.len);
		struct miqt_string sigval1 = stationName_ms;
		miqt_exec_callback_QRadioDataControl_StationNameChanged(slot, sigval1);
	});
}

void QRadioDataControl_RadioTextChanged(QRadioDataControl* self, struct miqt_string radioText) {
	QString radioText_QString = QString::fromUtf8(radioText.data, radioText.len);
	self->radioTextChanged(radioText_QString);
}

void QRadioDataControl_connect_RadioTextChanged(QRadioDataControl* self, intptr_t slot) {
	QRadioDataControl::connect(self, static_cast<void (QRadioDataControl::*)(QString)>(&QRadioDataControl::radioTextChanged), self, [=](QString radioText) {
		QString radioText_ret = radioText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray radioText_b = radioText_ret.toUtf8();
		struct miqt_string radioText_ms;
		radioText_ms.len = radioText_b.length();
		radioText_ms.data = static_cast<char*>(malloc(radioText_ms.len));
		memcpy(radioText_ms.data, radioText_b.data(), radioText_ms.len);
		struct miqt_string sigval1 = radioText_ms;
		miqt_exec_callback_QRadioDataControl_RadioTextChanged(slot, sigval1);
	});
}

void QRadioDataControl_AlternativeFrequenciesEnabledChanged(QRadioDataControl* self, bool enabled) {
	self->alternativeFrequenciesEnabledChanged(enabled);
}

void QRadioDataControl_connect_AlternativeFrequenciesEnabledChanged(QRadioDataControl* self, intptr_t slot) {
	QRadioDataControl::connect(self, static_cast<void (QRadioDataControl::*)(bool)>(&QRadioDataControl::alternativeFrequenciesEnabledChanged), self, [=](bool enabled) {
		bool sigval1 = enabled;
		miqt_exec_callback_QRadioDataControl_AlternativeFrequenciesEnabledChanged(slot, sigval1);
	});
}

void QRadioDataControl_ErrorWithErr(QRadioDataControl* self, int err) {
	self->error(static_cast<QRadioData::Error>(err));
}

void QRadioDataControl_connect_ErrorWithErr(QRadioDataControl* self, intptr_t slot) {
	QRadioDataControl::connect(self, static_cast<void (QRadioDataControl::*)(QRadioData::Error)>(&QRadioDataControl::error), self, [=](QRadioData::Error err) {
		QRadioData::Error err_ret = err;
		int sigval1 = static_cast<int>(err_ret);
		miqt_exec_callback_QRadioDataControl_ErrorWithErr(slot, sigval1);
	});
}

struct miqt_string QRadioDataControl_Tr2(const char* s, const char* c) {
	QString _ret = QRadioDataControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioDataControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioDataControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioDataControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QRadioDataControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioDataControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRadioDataControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioDataControl_Delete(QRadioDataControl* self) {
	delete self;
}

