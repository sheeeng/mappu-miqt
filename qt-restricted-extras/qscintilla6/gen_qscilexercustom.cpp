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
#include <qscilexercustom.h>
#include "gen_qscilexercustom.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerCustom_StyleText(void*, intptr_t, int, int);
void miqt_exec_callback_QsciLexerCustom_SetEditor(void*, intptr_t, QsciScintilla*);
int miqt_exec_callback_QsciLexerCustom_StyleBitsNeeded(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCustom_Language(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCustom_Lexer(void*, intptr_t);
int miqt_exec_callback_QsciLexerCustom_LexerId(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCustom_AutoCompletionFillups(void*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerCustom_AutoCompletionWordSeparators(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCustom_BlockEnd(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCustom_BlockLookback(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCustom_BlockStart(void*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerCustom_BlockStartKeyword(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCustom_BraceStyle(void*, intptr_t);
bool miqt_exec_callback_QsciLexerCustom_CaseSensitive(void*, intptr_t);
QColor* miqt_exec_callback_QsciLexerCustom_Color(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCustom_EolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCustom_Font(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerCustom_IndentationGuideView(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCustom_Keywords(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerCustom_DefaultStyle(void*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerCustom_Description(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCustom_Paper(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCustom_DefaultColorWithStyle(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCustom_DefaultEolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCustom_DefaultFontWithStyle(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCustom_DefaultPaperWithStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerCustom_RefreshProperties(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerCustom_WordCharacters(void*, intptr_t);
void miqt_exec_callback_QsciLexerCustom_SetAutoIndentStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerCustom_SetColor(void*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerCustom_SetEolFill(void*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerCustom_SetFont(void*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerCustom_SetPaper(void*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerCustom_ReadProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCustom_WriteProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCustom_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerCustom_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerCustom_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerCustom_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerCustom_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerCustom_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerCustom_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerCustom final : public QsciLexerCustom {
public:

	MiqtVirtualQsciLexerCustom(): QsciLexerCustom() {};
	MiqtVirtualQsciLexerCustom(QObject* parent): QsciLexerCustom(parent) {};

	virtual ~MiqtVirtualQsciLexerCustom() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleText = 0;

	// Subclass to allow providing a Go implementation
	virtual void styleText(int start, int end) override {
		if (handle__StyleText == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		int sigval1 = start;
		int sigval2 = end;

		miqt_exec_callback_QsciLexerCustom_StyleText(this, handle__StyleText, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerCustom::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerCustom_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerCustom::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerCustom::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCustom_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerCustom::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCustom_Language(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerCustom::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCustom_Lexer(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerCustom::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerCustom::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCustom_LexerId(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerCustom::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerCustom::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCustom_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerCustom::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerCustom::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerCustom_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerCustom::autoCompletionWordSeparators();
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
			return QsciLexerCustom::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCustom_BlockEnd(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerCustom::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerCustom::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCustom_BlockLookback(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerCustom::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerCustom::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCustom_BlockStart(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerCustom::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerCustom::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCustom_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerCustom::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerCustom::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCustom_BraceStyle(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerCustom::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerCustom::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerCustom_CaseSensitive(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerCustom::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerCustom::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCustom_Color(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerCustom::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerCustom::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCustom_EolFill(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerCustom::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerCustom::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCustom_Font(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerCustom::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerCustom::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCustom_IndentationGuideView(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerCustom::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerCustom::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCustom_Keywords(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerCustom::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerCustom::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCustom_DefaultStyle(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerCustom::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerCustom_Description(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerCustom::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCustom_Paper(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerCustom::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerCustom::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCustom_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerCustom::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerCustom::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCustom_DefaultEolFill(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerCustom::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerCustom::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCustom_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerCustom::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerCustom::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCustom_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerCustom::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerCustom::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerCustom_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerCustom::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerCustom::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCustom_WordCharacters(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerCustom::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerCustom::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerCustom_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerCustom::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerCustom::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCustom_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerCustom::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerCustom::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCustom_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerCustom::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerCustom::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCustom_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerCustom::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerCustom::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCustom_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerCustom::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerCustom::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCustom_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerCustom::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerCustom::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCustom_WriteProperties(const_cast<MiqtVirtualQsciLexerCustom*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerCustom::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QsciLexerCustom::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerCustom_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QsciLexerCustom::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QsciLexerCustom::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerCustom_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QsciLexerCustom::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciLexerCustom::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCustom_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciLexerCustom::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciLexerCustom::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCustom_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciLexerCustom::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciLexerCustom::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCustom_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciLexerCustom::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciLexerCustom::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerCustom_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciLexerCustom::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciLexerCustom::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerCustom_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciLexerCustom::disconnectNotify(*signal);

	}

};

QsciLexerCustom* QsciLexerCustom_new() {
	return new MiqtVirtualQsciLexerCustom();
}

QsciLexerCustom* QsciLexerCustom_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerCustom(parent);
}

void QsciLexerCustom_virtbase(QsciLexerCustom* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerCustom_MetaObject(const QsciLexerCustom* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCustom_Metacast(QsciLexerCustom* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCustom_Tr(const char* s) {
	QString _ret = QsciLexerCustom::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCustom_SetStyling(QsciLexerCustom* self, int length, int style) {
	self->setStyling(static_cast<int>(length), static_cast<int>(style));
}

void QsciLexerCustom_SetStyling2(QsciLexerCustom* self, int length, QsciStyle* style) {
	self->setStyling(static_cast<int>(length), *style);
}

void QsciLexerCustom_StartStyling(QsciLexerCustom* self, int pos) {
	self->startStyling(static_cast<int>(pos));
}

void QsciLexerCustom_StyleText(QsciLexerCustom* self, int start, int end) {
	self->styleText(static_cast<int>(start), static_cast<int>(end));
}

void QsciLexerCustom_SetEditor(QsciLexerCustom* self, QsciScintilla* editor) {
	self->setEditor(editor);
}

int QsciLexerCustom_StyleBitsNeeded(const QsciLexerCustom* self) {
	return self->styleBitsNeeded();
}

struct miqt_string QsciLexerCustom_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCustom::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCustom_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCustom::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCustom_StartStyling2(QsciLexerCustom* self, int pos, int styleBits) {
	self->startStyling(static_cast<int>(pos), static_cast<int>(styleBits));
}

bool QsciLexerCustom_override_virtual_StyleText(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleText = slot;
	return true;
}

bool QsciLexerCustom_override_virtual_SetEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditor = slot;
	return true;
}

void QsciLexerCustom_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_SetEditor(editor);
}

bool QsciLexerCustom_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleBitsNeeded = slot;
	return true;
}

int QsciLexerCustom_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_StyleBitsNeeded();
}

bool QsciLexerCustom_override_virtual_Language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Language = slot;
	return true;
}

bool QsciLexerCustom_override_virtual_Lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Lexer = slot;
	return true;
}

const char* QsciLexerCustom_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_Lexer();
}

bool QsciLexerCustom_override_virtual_LexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LexerId = slot;
	return true;
}

int QsciLexerCustom_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_LexerId();
}

bool QsciLexerCustom_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionFillups = slot;
	return true;
}

const char* QsciLexerCustom_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_AutoCompletionFillups();
}

bool QsciLexerCustom_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerCustom_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

bool QsciLexerCustom_override_virtual_BlockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockEnd = slot;
	return true;
}

const char* QsciLexerCustom_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_BlockEnd(style);
}

bool QsciLexerCustom_override_virtual_BlockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockLookback = slot;
	return true;
}

int QsciLexerCustom_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_BlockLookback();
}

bool QsciLexerCustom_override_virtual_BlockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStart = slot;
	return true;
}

const char* QsciLexerCustom_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_BlockStart(style);
}

bool QsciLexerCustom_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStartKeyword = slot;
	return true;
}

const char* QsciLexerCustom_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_BlockStartKeyword(style);
}

bool QsciLexerCustom_override_virtual_BraceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BraceStyle = slot;
	return true;
}

int QsciLexerCustom_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_BraceStyle();
}

bool QsciLexerCustom_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaseSensitive = slot;
	return true;
}

bool QsciLexerCustom_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_CaseSensitive();
}

bool QsciLexerCustom_override_virtual_Color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Color = slot;
	return true;
}

QColor* QsciLexerCustom_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_Color(style);
}

bool QsciLexerCustom_override_virtual_EolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EolFill = slot;
	return true;
}

bool QsciLexerCustom_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_EolFill(style);
}

bool QsciLexerCustom_override_virtual_Font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Font = slot;
	return true;
}

QFont* QsciLexerCustom_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_Font(style);
}

bool QsciLexerCustom_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndentationGuideView = slot;
	return true;
}

int QsciLexerCustom_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_IndentationGuideView();
}

bool QsciLexerCustom_override_virtual_Keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Keywords = slot;
	return true;
}

const char* QsciLexerCustom_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_Keywords(set);
}

bool QsciLexerCustom_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultStyle = slot;
	return true;
}

int QsciLexerCustom_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_DefaultStyle();
}

bool QsciLexerCustom_override_virtual_Description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Description = slot;
	return true;
}

bool QsciLexerCustom_override_virtual_Paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paper = slot;
	return true;
}

QColor* QsciLexerCustom_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_Paper(style);
}

bool QsciLexerCustom_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerCustom_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

bool QsciLexerCustom_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultEolFill = slot;
	return true;
}

bool QsciLexerCustom_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_DefaultEolFill(style);
}

bool QsciLexerCustom_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerCustom_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

bool QsciLexerCustom_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerCustom_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

bool QsciLexerCustom_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RefreshProperties = slot;
	return true;
}

void QsciLexerCustom_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_RefreshProperties();
}

bool QsciLexerCustom_override_virtual_WordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WordCharacters = slot;
	return true;
}

const char* QsciLexerCustom_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_WordCharacters();
}

bool QsciLexerCustom_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndentStyle = slot;
	return true;
}

void QsciLexerCustom_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

bool QsciLexerCustom_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciLexerCustom_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_SetColor(c, style);
}

bool QsciLexerCustom_override_virtual_SetEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolFill = slot;
	return true;
}

void QsciLexerCustom_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

bool QsciLexerCustom_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

void QsciLexerCustom_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_SetFont(f, style);
}

bool QsciLexerCustom_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciLexerCustom_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_SetPaper(c, style);
}

bool QsciLexerCustom_override_virtual_ReadProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadProperties = slot;
	return true;
}

bool QsciLexerCustom_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

bool QsciLexerCustom_override_virtual_WriteProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteProperties = slot;
	return true;
}

bool QsciLexerCustom_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

bool QsciLexerCustom_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciLexerCustom_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_Event(event);
}

bool QsciLexerCustom_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciLexerCustom_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QsciLexerCustom_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciLexerCustom_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciLexerCustom_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciLexerCustom_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciLexerCustom_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciLexerCustom_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciLexerCustom_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciLexerCustom_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciLexerCustom_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCustom* self_cast = dynamic_cast<MiqtVirtualQsciLexerCustom*>( (QsciLexerCustom*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciLexerCustom_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerCustom*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciLexerCustom_Delete(QsciLexerCustom* self) {
	delete self;
}

