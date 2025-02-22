#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscilexerpascal.h>
#include "gen_qscilexerpascal.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerPascal_SetFoldComments(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerPascal_SetFoldCompact(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerPascal_SetFoldPreprocessor(void*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerPascal_Language(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerPascal_Lexer(void*, intptr_t);
int miqt_exec_callback_QsciLexerPascal_LexerId(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerPascal_AutoCompletionFillups(void*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerPascal_AutoCompletionWordSeparators(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerPascal_BlockEnd(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerPascal_BlockLookback(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerPascal_BlockStart(void*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerPascal_BlockStartKeyword(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerPascal_BraceStyle(void*, intptr_t);
bool miqt_exec_callback_QsciLexerPascal_CaseSensitive(void*, intptr_t);
QColor* miqt_exec_callback_QsciLexerPascal_Color(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerPascal_EolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerPascal_Font(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerPascal_IndentationGuideView(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerPascal_Keywords(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerPascal_DefaultStyle(void*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerPascal_Description(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPascal_Paper(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPascal_DefaultColorWithStyle(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerPascal_DefaultEolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerPascal_DefaultFontWithStyle(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPascal_DefaultPaperWithStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerPascal_SetEditor(void*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerPascal_RefreshProperties(void*, intptr_t);
int miqt_exec_callback_QsciLexerPascal_StyleBitsNeeded(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerPascal_WordCharacters(void*, intptr_t);
void miqt_exec_callback_QsciLexerPascal_SetAutoIndentStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerPascal_SetColor(void*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerPascal_SetEolFill(void*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerPascal_SetFont(void*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerPascal_SetPaper(void*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerPascal_ReadProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerPascal_WriteProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerPascal_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerPascal_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerPascal_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerPascal_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerPascal_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerPascal_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerPascal_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerPascal final : public QsciLexerPascal {
public:

	MiqtVirtualQsciLexerPascal(): QsciLexerPascal() {};
	MiqtVirtualQsciLexerPascal(QObject* parent): QsciLexerPascal(parent) {};

	virtual ~MiqtVirtualQsciLexerPascal() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerPascal::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPascal_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerPascal::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerPascal::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPascal_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerPascal::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__SetFoldPreprocessor == 0) {
			QsciLexerPascal::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPascal_SetFoldPreprocessor(this, handle__SetFoldPreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldPreprocessor(bool fold) {

		QsciLexerPascal::setFoldPreprocessor(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPascal_Language(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerPascal::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPascal_Lexer(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerPascal::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerPascal::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPascal_LexerId(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerPascal::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerPascal::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPascal_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerPascal::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerPascal::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerPascal_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__AutoCompletionWordSeparators);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_AutoCompletionWordSeparators() const {

		QStringList _ret = QsciLexerPascal::autoCompletionWordSeparators();
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
	intptr_t handle__BlockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__BlockEnd == 0) {
			return QsciLexerPascal::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPascal_BlockEnd(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerPascal::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerPascal::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPascal_BlockLookback(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerPascal::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerPascal::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPascal_BlockStart(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerPascal::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerPascal::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPascal_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerPascal::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerPascal::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPascal_BraceStyle(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerPascal::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerPascal::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerPascal_CaseSensitive(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerPascal::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerPascal::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPascal_Color(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerPascal::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerPascal::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPascal_EolFill(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerPascal::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerPascal::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPascal_Font(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerPascal::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerPascal::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPascal_IndentationGuideView(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerPascal::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerPascal::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPascal_Keywords(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerPascal::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerPascal::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPascal_DefaultStyle(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerPascal::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerPascal_Description(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerPascal::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPascal_Paper(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerPascal::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerPascal::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPascal_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerPascal::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerPascal::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPascal_DefaultEolFill(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerPascal::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerPascal::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPascal_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerPascal::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerPascal::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPascal_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerPascal::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerPascal::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerPascal_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerPascal::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerPascal::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerPascal_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerPascal::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerPascal::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPascal_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerPascal::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerPascal::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPascal_WordCharacters(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerPascal::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerPascal::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerPascal_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerPascal::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerPascal::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPascal_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerPascal::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerPascal::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPascal_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerPascal::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerPascal::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPascal_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerPascal::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerPascal::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPascal_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerPascal::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerPascal::readProperties(qs, prefix);
		}
		
		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;

		bool callback_return_value = miqt_exec_callback_QsciLexerPascal_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerPascal::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerPascal::writeProperties(qs, prefix);
		}
		
		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;

		bool callback_return_value = miqt_exec_callback_QsciLexerPascal_WriteProperties(const_cast<MiqtVirtualQsciLexerPascal*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerPascal::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QsciLexerPascal::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerPascal_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QsciLexerPascal::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QsciLexerPascal::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerPascal_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QsciLexerPascal::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciLexerPascal::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerPascal_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciLexerPascal::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciLexerPascal::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerPascal_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciLexerPascal::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciLexerPascal::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerPascal_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciLexerPascal::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciLexerPascal::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerPascal_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciLexerPascal::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciLexerPascal::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerPascal_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciLexerPascal::disconnectNotify(*signal);

	}

};

QsciLexerPascal* QsciLexerPascal_new() {
	return new MiqtVirtualQsciLexerPascal();
}

QsciLexerPascal* QsciLexerPascal_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerPascal(parent);
}

void QsciLexerPascal_virtbase(QsciLexerPascal* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerPascal_MetaObject(const QsciLexerPascal* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPascal_Metacast(QsciLexerPascal* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPascal_Tr(const char* s) {
	QString _ret = QsciLexerPascal::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPascal_Language(const QsciLexerPascal* self) {
	return (const char*) self->language();
}

const char* QsciLexerPascal_Lexer(const QsciLexerPascal* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerPascal_AutoCompletionWordSeparators(const QsciLexerPascal* self) {
	QStringList _ret = self->autoCompletionWordSeparators();
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

const char* QsciLexerPascal_BlockEnd(const QsciLexerPascal* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerPascal_BlockStart(const QsciLexerPascal* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerPascal_BlockStartKeyword(const QsciLexerPascal* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerPascal_BraceStyle(const QsciLexerPascal* self) {
	return self->braceStyle();
}

QColor* QsciLexerPascal_DefaultColor(const QsciLexerPascal* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPascal_DefaultEolFill(const QsciLexerPascal* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPascal_DefaultFont(const QsciLexerPascal* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPascal_DefaultPaper(const QsciLexerPascal* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPascal_Keywords(const QsciLexerPascal* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPascal_Description(const QsciLexerPascal* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPascal_RefreshProperties(QsciLexerPascal* self) {
	self->refreshProperties();
}

bool QsciLexerPascal_FoldComments(const QsciLexerPascal* self) {
	return self->foldComments();
}

bool QsciLexerPascal_FoldCompact(const QsciLexerPascal* self) {
	return self->foldCompact();
}

bool QsciLexerPascal_FoldPreprocessor(const QsciLexerPascal* self) {
	return self->foldPreprocessor();
}

void QsciLexerPascal_SetSmartHighlighting(QsciLexerPascal* self, bool enabled) {
	self->setSmartHighlighting(enabled);
}

bool QsciLexerPascal_SmartHighlighting(const QsciLexerPascal* self) {
	return self->smartHighlighting();
}

void QsciLexerPascal_SetFoldComments(QsciLexerPascal* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPascal_SetFoldCompact(QsciLexerPascal* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerPascal_SetFoldPreprocessor(QsciLexerPascal* self, bool fold) {
	self->setFoldPreprocessor(fold);
}

struct miqt_string QsciLexerPascal_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPascal::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPascal_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPascal::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPascal_BlockEnd1(const QsciLexerPascal* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerPascal_BlockStart1(const QsciLexerPascal* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerPascal_BlockStartKeyword1(const QsciLexerPascal* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerPascal_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldComments = slot;
	return true;
}

void QsciLexerPascal_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_SetFoldComments(fold);
}

bool QsciLexerPascal_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldCompact = slot;
	return true;
}

void QsciLexerPascal_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_SetFoldCompact(fold);
}

bool QsciLexerPascal_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldPreprocessor = slot;
	return true;
}

void QsciLexerPascal_virtualbase_SetFoldPreprocessor(void* self, bool fold) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_SetFoldPreprocessor(fold);
}

bool QsciLexerPascal_override_virtual_Language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Language = slot;
	return true;
}

bool QsciLexerPascal_override_virtual_Lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Lexer = slot;
	return true;
}

const char* QsciLexerPascal_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_Lexer();
}

bool QsciLexerPascal_override_virtual_LexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LexerId = slot;
	return true;
}

int QsciLexerPascal_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_LexerId();
}

bool QsciLexerPascal_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionFillups = slot;
	return true;
}

const char* QsciLexerPascal_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_AutoCompletionFillups();
}

bool QsciLexerPascal_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerPascal_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

bool QsciLexerPascal_override_virtual_BlockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockEnd = slot;
	return true;
}

const char* QsciLexerPascal_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_BlockEnd(style);
}

bool QsciLexerPascal_override_virtual_BlockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockLookback = slot;
	return true;
}

int QsciLexerPascal_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_BlockLookback();
}

bool QsciLexerPascal_override_virtual_BlockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStart = slot;
	return true;
}

const char* QsciLexerPascal_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_BlockStart(style);
}

bool QsciLexerPascal_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStartKeyword = slot;
	return true;
}

const char* QsciLexerPascal_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_BlockStartKeyword(style);
}

bool QsciLexerPascal_override_virtual_BraceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BraceStyle = slot;
	return true;
}

int QsciLexerPascal_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_BraceStyle();
}

bool QsciLexerPascal_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaseSensitive = slot;
	return true;
}

bool QsciLexerPascal_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_CaseSensitive();
}

bool QsciLexerPascal_override_virtual_Color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Color = slot;
	return true;
}

QColor* QsciLexerPascal_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_Color(style);
}

bool QsciLexerPascal_override_virtual_EolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EolFill = slot;
	return true;
}

bool QsciLexerPascal_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_EolFill(style);
}

bool QsciLexerPascal_override_virtual_Font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Font = slot;
	return true;
}

QFont* QsciLexerPascal_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_Font(style);
}

bool QsciLexerPascal_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndentationGuideView = slot;
	return true;
}

int QsciLexerPascal_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_IndentationGuideView();
}

bool QsciLexerPascal_override_virtual_Keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Keywords = slot;
	return true;
}

const char* QsciLexerPascal_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_Keywords(set);
}

bool QsciLexerPascal_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultStyle = slot;
	return true;
}

int QsciLexerPascal_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_DefaultStyle();
}

bool QsciLexerPascal_override_virtual_Description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Description = slot;
	return true;
}

bool QsciLexerPascal_override_virtual_Paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paper = slot;
	return true;
}

QColor* QsciLexerPascal_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_Paper(style);
}

bool QsciLexerPascal_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerPascal_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

bool QsciLexerPascal_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultEolFill = slot;
	return true;
}

bool QsciLexerPascal_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_DefaultEolFill(style);
}

bool QsciLexerPascal_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerPascal_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

bool QsciLexerPascal_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerPascal_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

bool QsciLexerPascal_override_virtual_SetEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditor = slot;
	return true;
}

void QsciLexerPascal_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_SetEditor(editor);
}

bool QsciLexerPascal_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RefreshProperties = slot;
	return true;
}

void QsciLexerPascal_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_RefreshProperties();
}

bool QsciLexerPascal_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleBitsNeeded = slot;
	return true;
}

int QsciLexerPascal_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_StyleBitsNeeded();
}

bool QsciLexerPascal_override_virtual_WordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WordCharacters = slot;
	return true;
}

const char* QsciLexerPascal_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_WordCharacters();
}

bool QsciLexerPascal_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndentStyle = slot;
	return true;
}

void QsciLexerPascal_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

bool QsciLexerPascal_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciLexerPascal_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_SetColor(c, style);
}

bool QsciLexerPascal_override_virtual_SetEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolFill = slot;
	return true;
}

void QsciLexerPascal_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

bool QsciLexerPascal_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

void QsciLexerPascal_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_SetFont(f, style);
}

bool QsciLexerPascal_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciLexerPascal_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_SetPaper(c, style);
}

bool QsciLexerPascal_override_virtual_ReadProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadProperties = slot;
	return true;
}

bool QsciLexerPascal_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

bool QsciLexerPascal_override_virtual_WriteProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteProperties = slot;
	return true;
}

bool QsciLexerPascal_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

bool QsciLexerPascal_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciLexerPascal_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_Event(event);
}

bool QsciLexerPascal_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciLexerPascal_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QsciLexerPascal_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciLexerPascal_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciLexerPascal_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciLexerPascal_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciLexerPascal_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciLexerPascal_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciLexerPascal_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciLexerPascal_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciLexerPascal_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPascal* self_cast = dynamic_cast<MiqtVirtualQsciLexerPascal*>( (QsciLexerPascal*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciLexerPascal_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerPascal*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciLexerPascal_Delete(QsciLexerPascal* self) {
	delete self;
}

