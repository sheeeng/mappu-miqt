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
#include <qscilexerd.h>
#include "gen_qscilexerd.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerD_SetFoldAtElse(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerD_SetFoldComments(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerD_SetFoldCompact(void*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerD_Language(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerD_Lexer(void*, intptr_t);
int miqt_exec_callback_QsciLexerD_LexerId(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerD_AutoCompletionFillups(void*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerD_AutoCompletionWordSeparators(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerD_BlockEnd(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerD_BlockLookback(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerD_BlockStart(void*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerD_BlockStartKeyword(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerD_BraceStyle(void*, intptr_t);
bool miqt_exec_callback_QsciLexerD_CaseSensitive(void*, intptr_t);
QColor* miqt_exec_callback_QsciLexerD_Color(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerD_EolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerD_Font(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerD_IndentationGuideView(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerD_Keywords(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerD_DefaultStyle(void*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerD_Description(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerD_Paper(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerD_DefaultColorWithStyle(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerD_DefaultEolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerD_DefaultFontWithStyle(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerD_DefaultPaperWithStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerD_SetEditor(void*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerD_RefreshProperties(void*, intptr_t);
int miqt_exec_callback_QsciLexerD_StyleBitsNeeded(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerD_WordCharacters(void*, intptr_t);
void miqt_exec_callback_QsciLexerD_SetAutoIndentStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerD_SetColor(void*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerD_SetEolFill(void*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerD_SetFont(void*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerD_SetPaper(void*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerD_ReadProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerD_WriteProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerD_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerD_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerD_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerD_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerD_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerD_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerD_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerD final : public QsciLexerD {
public:

	MiqtVirtualQsciLexerD(): QsciLexerD() {};
	MiqtVirtualQsciLexerD(QObject* parent): QsciLexerD(parent) {};

	virtual ~MiqtVirtualQsciLexerD() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__SetFoldAtElse == 0) {
			QsciLexerD::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerD_SetFoldAtElse(this, handle__SetFoldAtElse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtElse(bool fold) {

		QsciLexerD::setFoldAtElse(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerD::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerD_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerD::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerD::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerD_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerD::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerD_Language(const_cast<MiqtVirtualQsciLexerD*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerD::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerD_Lexer(const_cast<MiqtVirtualQsciLexerD*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerD::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerD::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerD_LexerId(const_cast<MiqtVirtualQsciLexerD*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerD::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerD::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerD_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerD*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerD::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerD::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerD_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerD*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerD::autoCompletionWordSeparators();
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
			return QsciLexerD::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerD_BlockEnd(const_cast<MiqtVirtualQsciLexerD*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerD::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerD::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerD_BlockLookback(const_cast<MiqtVirtualQsciLexerD*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerD::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerD::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerD_BlockStart(const_cast<MiqtVirtualQsciLexerD*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerD::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerD::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerD_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerD*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerD::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerD::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerD_BraceStyle(const_cast<MiqtVirtualQsciLexerD*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerD::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerD::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerD_CaseSensitive(const_cast<MiqtVirtualQsciLexerD*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerD::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerD::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerD_Color(const_cast<MiqtVirtualQsciLexerD*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerD::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerD::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerD_EolFill(const_cast<MiqtVirtualQsciLexerD*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerD::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerD::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerD_Font(const_cast<MiqtVirtualQsciLexerD*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerD::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerD::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerD_IndentationGuideView(const_cast<MiqtVirtualQsciLexerD*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerD::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerD::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerD_Keywords(const_cast<MiqtVirtualQsciLexerD*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerD::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerD::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerD_DefaultStyle(const_cast<MiqtVirtualQsciLexerD*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerD::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerD_Description(const_cast<MiqtVirtualQsciLexerD*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerD::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerD_Paper(const_cast<MiqtVirtualQsciLexerD*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerD::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerD::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerD_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerD*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerD::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerD::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerD_DefaultEolFill(const_cast<MiqtVirtualQsciLexerD*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerD::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerD::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerD_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerD*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerD::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerD::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerD_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerD*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerD::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerD::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerD_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerD::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerD::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerD_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerD::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerD::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerD_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerD*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerD::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerD::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerD_WordCharacters(const_cast<MiqtVirtualQsciLexerD*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerD::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerD::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerD_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerD::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerD::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerD_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerD::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerD::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerD_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerD::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerD::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerD_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerD::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerD::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerD_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerD::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerD::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerD_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerD::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerD::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerD_WriteProperties(const_cast<MiqtVirtualQsciLexerD*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerD::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QsciLexerD::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerD_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QsciLexerD::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QsciLexerD::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerD_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QsciLexerD::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciLexerD::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerD_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciLexerD::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciLexerD::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerD_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciLexerD::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciLexerD::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerD_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciLexerD::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciLexerD::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerD_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciLexerD::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciLexerD::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerD_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciLexerD::disconnectNotify(*signal);

	}

};

QsciLexerD* QsciLexerD_new() {
	return new MiqtVirtualQsciLexerD();
}

QsciLexerD* QsciLexerD_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerD(parent);
}

void QsciLexerD_virtbase(QsciLexerD* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerD_MetaObject(const QsciLexerD* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerD_Metacast(QsciLexerD* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerD_Tr(const char* s) {
	QString _ret = QsciLexerD::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerD_TrUtf8(const char* s) {
	QString _ret = QsciLexerD::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerD_Language(const QsciLexerD* self) {
	return (const char*) self->language();
}

const char* QsciLexerD_Lexer(const QsciLexerD* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerD_AutoCompletionWordSeparators(const QsciLexerD* self) {
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

const char* QsciLexerD_BlockEnd(const QsciLexerD* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerD_BlockStart(const QsciLexerD* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerD_BlockStartKeyword(const QsciLexerD* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerD_BraceStyle(const QsciLexerD* self) {
	return self->braceStyle();
}

const char* QsciLexerD_WordCharacters(const QsciLexerD* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerD_DefaultColor(const QsciLexerD* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerD_DefaultEolFill(const QsciLexerD* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerD_DefaultFont(const QsciLexerD* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerD_DefaultPaper(const QsciLexerD* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerD_Keywords(const QsciLexerD* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerD_Description(const QsciLexerD* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerD_RefreshProperties(QsciLexerD* self) {
	self->refreshProperties();
}

bool QsciLexerD_FoldAtElse(const QsciLexerD* self) {
	return self->foldAtElse();
}

bool QsciLexerD_FoldComments(const QsciLexerD* self) {
	return self->foldComments();
}

bool QsciLexerD_FoldCompact(const QsciLexerD* self) {
	return self->foldCompact();
}

void QsciLexerD_SetFoldAtElse(QsciLexerD* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerD_SetFoldComments(QsciLexerD* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerD_SetFoldCompact(QsciLexerD* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerD_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerD::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerD_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerD::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerD_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerD::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerD_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerD::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerD_BlockEnd1(const QsciLexerD* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStart1(const QsciLexerD* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStartKeyword1(const QsciLexerD* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerD_override_virtual_SetFoldAtElse(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldAtElse = slot;
	return true;
}

void QsciLexerD_virtualbase_SetFoldAtElse(void* self, bool fold) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_SetFoldAtElse(fold);
}

bool QsciLexerD_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldComments = slot;
	return true;
}

void QsciLexerD_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_SetFoldComments(fold);
}

bool QsciLexerD_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldCompact = slot;
	return true;
}

void QsciLexerD_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_SetFoldCompact(fold);
}

bool QsciLexerD_override_virtual_Language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Language = slot;
	return true;
}

bool QsciLexerD_override_virtual_Lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Lexer = slot;
	return true;
}

const char* QsciLexerD_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_Lexer();
}

bool QsciLexerD_override_virtual_LexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LexerId = slot;
	return true;
}

int QsciLexerD_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_LexerId();
}

bool QsciLexerD_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionFillups = slot;
	return true;
}

const char* QsciLexerD_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_AutoCompletionFillups();
}

bool QsciLexerD_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerD_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

bool QsciLexerD_override_virtual_BlockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockEnd = slot;
	return true;
}

const char* QsciLexerD_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_BlockEnd(style);
}

bool QsciLexerD_override_virtual_BlockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockLookback = slot;
	return true;
}

int QsciLexerD_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_BlockLookback();
}

bool QsciLexerD_override_virtual_BlockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStart = slot;
	return true;
}

const char* QsciLexerD_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_BlockStart(style);
}

bool QsciLexerD_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStartKeyword = slot;
	return true;
}

const char* QsciLexerD_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_BlockStartKeyword(style);
}

bool QsciLexerD_override_virtual_BraceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BraceStyle = slot;
	return true;
}

int QsciLexerD_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_BraceStyle();
}

bool QsciLexerD_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaseSensitive = slot;
	return true;
}

bool QsciLexerD_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_CaseSensitive();
}

bool QsciLexerD_override_virtual_Color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Color = slot;
	return true;
}

QColor* QsciLexerD_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_Color(style);
}

bool QsciLexerD_override_virtual_EolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EolFill = slot;
	return true;
}

bool QsciLexerD_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_EolFill(style);
}

bool QsciLexerD_override_virtual_Font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Font = slot;
	return true;
}

QFont* QsciLexerD_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_Font(style);
}

bool QsciLexerD_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndentationGuideView = slot;
	return true;
}

int QsciLexerD_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_IndentationGuideView();
}

bool QsciLexerD_override_virtual_Keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Keywords = slot;
	return true;
}

const char* QsciLexerD_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_Keywords(set);
}

bool QsciLexerD_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultStyle = slot;
	return true;
}

int QsciLexerD_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_DefaultStyle();
}

bool QsciLexerD_override_virtual_Description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Description = slot;
	return true;
}

bool QsciLexerD_override_virtual_Paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paper = slot;
	return true;
}

QColor* QsciLexerD_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_Paper(style);
}

bool QsciLexerD_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerD_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

bool QsciLexerD_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultEolFill = slot;
	return true;
}

bool QsciLexerD_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_DefaultEolFill(style);
}

bool QsciLexerD_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerD_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

bool QsciLexerD_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerD_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

bool QsciLexerD_override_virtual_SetEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditor = slot;
	return true;
}

void QsciLexerD_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_SetEditor(editor);
}

bool QsciLexerD_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RefreshProperties = slot;
	return true;
}

void QsciLexerD_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_RefreshProperties();
}

bool QsciLexerD_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleBitsNeeded = slot;
	return true;
}

int QsciLexerD_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_StyleBitsNeeded();
}

bool QsciLexerD_override_virtual_WordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WordCharacters = slot;
	return true;
}

const char* QsciLexerD_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_WordCharacters();
}

bool QsciLexerD_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndentStyle = slot;
	return true;
}

void QsciLexerD_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

bool QsciLexerD_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciLexerD_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_SetColor(c, style);
}

bool QsciLexerD_override_virtual_SetEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolFill = slot;
	return true;
}

void QsciLexerD_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

bool QsciLexerD_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

void QsciLexerD_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_SetFont(f, style);
}

bool QsciLexerD_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciLexerD_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_SetPaper(c, style);
}

bool QsciLexerD_override_virtual_ReadProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadProperties = slot;
	return true;
}

bool QsciLexerD_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

bool QsciLexerD_override_virtual_WriteProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteProperties = slot;
	return true;
}

bool QsciLexerD_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerD*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

bool QsciLexerD_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciLexerD_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_Event(event);
}

bool QsciLexerD_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciLexerD_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QsciLexerD_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciLexerD_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciLexerD_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciLexerD_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciLexerD_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciLexerD_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciLexerD_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciLexerD_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciLexerD_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerD* self_cast = dynamic_cast<MiqtVirtualQsciLexerD*>( (QsciLexerD*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciLexerD_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerD*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciLexerD_Delete(QsciLexerD* self) {
	delete self;
}

