#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QIODevice>
#include <QImage>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsciscintilla.h>
#include "gen_qsciscintilla.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciScintilla_CursorPositionChanged(intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_CopyAvailable(intptr_t, bool);
void miqt_exec_callback_QsciScintilla_IndicatorClicked(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintilla_IndicatorReleased(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintilla_LinesChanged(intptr_t);
void miqt_exec_callback_QsciScintilla_MarginClicked(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintilla_MarginRightClicked(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintilla_ModificationAttempted(intptr_t);
void miqt_exec_callback_QsciScintilla_ModificationChanged(intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SelectionChanged(intptr_t);
void miqt_exec_callback_QsciScintilla_TextChanged(intptr_t);
void miqt_exec_callback_QsciScintilla_UserListActivated(intptr_t, int, struct miqt_string);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciScintilla_ApiContext(void*, intptr_t, int, int*, int*);
bool miqt_exec_callback_QsciScintilla_FindFirst(void*, intptr_t, struct miqt_string, bool, bool, bool, bool, bool, int, int, bool, bool, bool);
bool miqt_exec_callback_QsciScintilla_FindFirstInSelection(void*, intptr_t, struct miqt_string, bool, bool, bool, bool, bool, bool, bool);
bool miqt_exec_callback_QsciScintilla_FindNext(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_Recolor(void*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_Replace(void*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_Append(void*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_AutoCompleteFromAll(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_AutoCompleteFromAPIs(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_AutoCompleteFromDocument(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_CallTip(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_Clear(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_Copy(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_Cut(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_EnsureCursorVisible(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_EnsureLineVisible(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_FoldAll(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_FoldLine(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_Indent(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_Insert(void*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_InsertAt(void*, intptr_t, struct miqt_string, int, int);
void miqt_exec_callback_QsciScintilla_MoveToMatchingBrace(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_Paste(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_Redo(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_RemoveSelectedText(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_ReplaceSelectedText(void*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_ResetSelectionBackgroundColor(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_ResetSelectionForegroundColor(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_SelectAll(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SelectToMatchingBrace(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_SetAutoCompletionCaseSensitivity(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetAutoCompletionReplaceWord(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetAutoCompletionShowSingle(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetAutoCompletionSource(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetAutoCompletionThreshold(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetAutoCompletionUseSingle(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetAutoIndent(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetBraceMatching(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetBackspaceUnindents(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetCaretForegroundColor(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetCaretLineBackgroundColor(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetCaretLineFrameWidth(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetCaretLineVisible(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetCaretWidth(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetColor(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetCursorPosition(void*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_SetEolMode(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetEolVisibility(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetFolding(void*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_SetIndentation(void*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_SetIndentationGuides(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetIndentationGuidesBackgroundColor(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetIndentationGuidesForegroundColor(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetIndentationsUseTabs(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetIndentationWidth(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetLexer(void*, intptr_t, QsciLexer*);
void miqt_exec_callback_QsciScintilla_SetMarginsBackgroundColor(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetMarginsFont(void*, intptr_t, QFont*);
void miqt_exec_callback_QsciScintilla_SetMarginsForegroundColor(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetMarginLineNumbers(void*, intptr_t, int, bool);
void miqt_exec_callback_QsciScintilla_SetMarginMarkerMask(void*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_SetMarginSensitivity(void*, intptr_t, int, bool);
void miqt_exec_callback_QsciScintilla_SetMarginWidth(void*, intptr_t, int, int);
void miqt_exec_callback_QsciScintilla_SetMarginWidth2(void*, intptr_t, int, struct miqt_string);
void miqt_exec_callback_QsciScintilla_SetModified(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetPaper(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetReadOnly(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetSelection(void*, intptr_t, int, int, int, int);
void miqt_exec_callback_QsciScintilla_SetSelectionBackgroundColor(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetSelectionForegroundColor(void*, intptr_t, QColor*);
void miqt_exec_callback_QsciScintilla_SetTabIndents(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetTabWidth(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetText(void*, intptr_t, struct miqt_string);
void miqt_exec_callback_QsciScintilla_SetUtf8(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_SetWhitespaceVisibility(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_SetWrapMode(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_Undo(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_Unindent(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_ZoomIn(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_ZoomIn2(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_ZoomOut(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_ZoomOut2(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_ZoomTo(void*, intptr_t, int);
bool miqt_exec_callback_QsciScintilla_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintilla_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintilla_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QsciScintilla_WheelEvent(void*, intptr_t, QWheelEvent*);
bool miqt_exec_callback_QsciScintilla_CanInsertFromMimeData(void*, intptr_t, QMimeData*);
struct miqt_string miqt_exec_callback_QsciScintilla_FromMimeData(void*, intptr_t, QMimeData*, bool*);
QMimeData* miqt_exec_callback_QsciScintilla_ToMimeData(void*, intptr_t, struct miqt_string, bool);
void miqt_exec_callback_QsciScintilla_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QsciScintilla_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QsciScintilla_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QsciScintilla_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QsciScintilla_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QsciScintilla_FocusOutEvent(void*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QsciScintilla_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QsciScintilla_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QsciScintilla_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QsciScintilla_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintilla_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintilla_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintilla_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintilla_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QsciScintilla_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QsciScintilla_ScrollContentsBy(void*, intptr_t, int, int);
QSize* miqt_exec_callback_QsciScintilla_MinimumSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QsciScintilla_SizeHint(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_SetupViewport(void*, intptr_t, QWidget*);
bool miqt_exec_callback_QsciScintilla_EventFilter(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QsciScintilla_ViewportEvent(void*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QsciScintilla_ViewportSizeHint(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_InitStyleOption(void*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QsciScintilla_DevType(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QsciScintilla_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QsciScintilla_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QsciScintilla_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QsciScintilla_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QsciScintilla_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintilla_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QsciScintilla_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QsciScintilla_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QsciScintilla_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QsciScintilla_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QsciScintilla_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QsciScintilla_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QsciScintilla_Metric(void*, intptr_t, int);
void miqt_exec_callback_QsciScintilla_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QsciScintilla_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QsciScintilla_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QsciScintilla_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciScintilla_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciScintilla_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintilla_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciScintilla_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciScintilla final : public QsciScintilla {
public:

	MiqtVirtualQsciScintilla(QWidget* parent): QsciScintilla(parent) {};
	MiqtVirtualQsciScintilla(): QsciScintilla() {};

	virtual ~MiqtVirtualQsciScintilla() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ApiContext = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList apiContext(int pos, int& context_start, int& last_word_start) override {
		if (handle__ApiContext == 0) {
			return QsciScintilla::apiContext(pos, context_start, last_word_start);
		}
		
		int sigval1 = pos;
		int* sigval2 = &context_start;
		int* sigval3 = &last_word_start;

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciScintilla_ApiContext(this, handle__ApiContext, sigval1, sigval2, sigval3);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_ApiContext(int pos, int* context_start, int* last_word_start) {

		QStringList _ret = QsciScintilla::apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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
	intptr_t handle__FindFirst = 0;

	// Subclass to allow providing a Go implementation
	virtual bool findFirst(const QString& expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) override {
		if (handle__FindFirst == 0) {
			return QsciScintilla::findFirst(expr, re, cs, wo, wrap, forward, line, index, show, posix, cxx11);
		}
		
		const QString expr_ret = expr;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray expr_b = expr_ret.toUtf8();
		struct miqt_string expr_ms;
		expr_ms.len = expr_b.length();
		expr_ms.data = static_cast<char*>(malloc(expr_ms.len));
		memcpy(expr_ms.data, expr_b.data(), expr_ms.len);
		struct miqt_string sigval1 = expr_ms;
		bool sigval2 = re;
		bool sigval3 = cs;
		bool sigval4 = wo;
		bool sigval5 = wrap;
		bool sigval6 = forward;
		int sigval7 = line;
		int sigval8 = index;
		bool sigval9 = show;
		bool sigval10 = posix;
		bool sigval11 = cxx11;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_FindFirst(this, handle__FindFirst, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8, sigval9, sigval10, sigval11);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FindFirst(struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
		QString expr_QString = QString::fromUtf8(expr.data, expr.len);

		return QsciScintilla::findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FindFirstInSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual bool findFirstInSelection(const QString& expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) override {
		if (handle__FindFirstInSelection == 0) {
			return QsciScintilla::findFirstInSelection(expr, re, cs, wo, forward, show, posix, cxx11);
		}
		
		const QString expr_ret = expr;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray expr_b = expr_ret.toUtf8();
		struct miqt_string expr_ms;
		expr_ms.len = expr_b.length();
		expr_ms.data = static_cast<char*>(malloc(expr_ms.len));
		memcpy(expr_ms.data, expr_b.data(), expr_ms.len);
		struct miqt_string sigval1 = expr_ms;
		bool sigval2 = re;
		bool sigval3 = cs;
		bool sigval4 = wo;
		bool sigval5 = forward;
		bool sigval6 = show;
		bool sigval7 = posix;
		bool sigval8 = cxx11;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_FindFirstInSelection(this, handle__FindFirstInSelection, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FindFirstInSelection(struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
		QString expr_QString = QString::fromUtf8(expr.data, expr.len);

		return QsciScintilla::findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FindNext = 0;

	// Subclass to allow providing a Go implementation
	virtual bool findNext() override {
		if (handle__FindNext == 0) {
			return QsciScintilla::findNext();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciScintilla_FindNext(this, handle__FindNext);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FindNext() {

		return QsciScintilla::findNext();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Recolor = 0;

	// Subclass to allow providing a Go implementation
	virtual void recolor(int start, int end) override {
		if (handle__Recolor == 0) {
			QsciScintilla::recolor(start, end);
			return;
		}
		
		int sigval1 = start;
		int sigval2 = end;

		miqt_exec_callback_QsciScintilla_Recolor(this, handle__Recolor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Recolor(int start, int end) {

		QsciScintilla::recolor(static_cast<int>(start), static_cast<int>(end));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Replace = 0;

	// Subclass to allow providing a Go implementation
	virtual void replace(const QString& replaceStr) override {
		if (handle__Replace == 0) {
			QsciScintilla::replace(replaceStr);
			return;
		}
		
		const QString replaceStr_ret = replaceStr;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray replaceStr_b = replaceStr_ret.toUtf8();
		struct miqt_string replaceStr_ms;
		replaceStr_ms.len = replaceStr_b.length();
		replaceStr_ms.data = static_cast<char*>(malloc(replaceStr_ms.len));
		memcpy(replaceStr_ms.data, replaceStr_b.data(), replaceStr_ms.len);
		struct miqt_string sigval1 = replaceStr_ms;

		miqt_exec_callback_QsciScintilla_Replace(this, handle__Replace, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Replace(struct miqt_string replaceStr) {
		QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);

		QsciScintilla::replace(replaceStr_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Append = 0;

	// Subclass to allow providing a Go implementation
	virtual void append(const QString& text) override {
		if (handle__Append == 0) {
			QsciScintilla::append(text);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QsciScintilla_Append(this, handle__Append, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Append(struct miqt_string text) {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QsciScintilla::append(text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompleteFromAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoCompleteFromAll() override {
		if (handle__AutoCompleteFromAll == 0) {
			QsciScintilla::autoCompleteFromAll();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_AutoCompleteFromAll(this, handle__AutoCompleteFromAll);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AutoCompleteFromAll() {

		QsciScintilla::autoCompleteFromAll();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompleteFromAPIs = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoCompleteFromAPIs() override {
		if (handle__AutoCompleteFromAPIs == 0) {
			QsciScintilla::autoCompleteFromAPIs();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_AutoCompleteFromAPIs(this, handle__AutoCompleteFromAPIs);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AutoCompleteFromAPIs() {

		QsciScintilla::autoCompleteFromAPIs();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompleteFromDocument = 0;

	// Subclass to allow providing a Go implementation
	virtual void autoCompleteFromDocument() override {
		if (handle__AutoCompleteFromDocument == 0) {
			QsciScintilla::autoCompleteFromDocument();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_AutoCompleteFromDocument(this, handle__AutoCompleteFromDocument);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AutoCompleteFromDocument() {

		QsciScintilla::autoCompleteFromDocument();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CallTip = 0;

	// Subclass to allow providing a Go implementation
	virtual void callTip() override {
		if (handle__CallTip == 0) {
			QsciScintilla::callTip();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_CallTip(this, handle__CallTip);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CallTip() {

		QsciScintilla::callTip();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QsciScintilla::clear();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QsciScintilla::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Copy = 0;

	// Subclass to allow providing a Go implementation
	virtual void copy() override {
		if (handle__Copy == 0) {
			QsciScintilla::copy();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_Copy(this, handle__Copy);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Copy() {

		QsciScintilla::copy();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Cut = 0;

	// Subclass to allow providing a Go implementation
	virtual void cut() override {
		if (handle__Cut == 0) {
			QsciScintilla::cut();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_Cut(this, handle__Cut);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Cut() {

		QsciScintilla::cut();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnsureCursorVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void ensureCursorVisible() override {
		if (handle__EnsureCursorVisible == 0) {
			QsciScintilla::ensureCursorVisible();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_EnsureCursorVisible(this, handle__EnsureCursorVisible);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnsureCursorVisible() {

		QsciScintilla::ensureCursorVisible();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnsureLineVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void ensureLineVisible(int line) override {
		if (handle__EnsureLineVisible == 0) {
			QsciScintilla::ensureLineVisible(line);
			return;
		}
		
		int sigval1 = line;

		miqt_exec_callback_QsciScintilla_EnsureLineVisible(this, handle__EnsureLineVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnsureLineVisible(int line) {

		QsciScintilla::ensureLineVisible(static_cast<int>(line));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FoldAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void foldAll(bool children) override {
		if (handle__FoldAll == 0) {
			QsciScintilla::foldAll(children);
			return;
		}
		
		bool sigval1 = children;

		miqt_exec_callback_QsciScintilla_FoldAll(this, handle__FoldAll, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FoldAll(bool children) {

		QsciScintilla::foldAll(children);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FoldLine = 0;

	// Subclass to allow providing a Go implementation
	virtual void foldLine(int line) override {
		if (handle__FoldLine == 0) {
			QsciScintilla::foldLine(line);
			return;
		}
		
		int sigval1 = line;

		miqt_exec_callback_QsciScintilla_FoldLine(this, handle__FoldLine, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FoldLine(int line) {

		QsciScintilla::foldLine(static_cast<int>(line));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Indent = 0;

	// Subclass to allow providing a Go implementation
	virtual void indent(int line) override {
		if (handle__Indent == 0) {
			QsciScintilla::indent(line);
			return;
		}
		
		int sigval1 = line;

		miqt_exec_callback_QsciScintilla_Indent(this, handle__Indent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Indent(int line) {

		QsciScintilla::indent(static_cast<int>(line));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Insert = 0;

	// Subclass to allow providing a Go implementation
	virtual void insert(const QString& text) override {
		if (handle__Insert == 0) {
			QsciScintilla::insert(text);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QsciScintilla_Insert(this, handle__Insert, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Insert(struct miqt_string text) {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QsciScintilla::insert(text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertAt = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertAt(const QString& text, int line, int index) override {
		if (handle__InsertAt == 0) {
			QsciScintilla::insertAt(text, line, index);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		int sigval2 = line;
		int sigval3 = index;

		miqt_exec_callback_QsciScintilla_InsertAt(this, handle__InsertAt, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InsertAt(struct miqt_string text, int line, int index) {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QsciScintilla::insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveToMatchingBrace = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveToMatchingBrace() override {
		if (handle__MoveToMatchingBrace == 0) {
			QsciScintilla::moveToMatchingBrace();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_MoveToMatchingBrace(this, handle__MoveToMatchingBrace);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveToMatchingBrace() {

		QsciScintilla::moveToMatchingBrace();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paste = 0;

	// Subclass to allow providing a Go implementation
	virtual void paste() override {
		if (handle__Paste == 0) {
			QsciScintilla::paste();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_Paste(this, handle__Paste);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paste() {

		QsciScintilla::paste();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redo = 0;

	// Subclass to allow providing a Go implementation
	virtual void redo() override {
		if (handle__Redo == 0) {
			QsciScintilla::redo();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_Redo(this, handle__Redo);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Redo() {

		QsciScintilla::redo();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveSelectedText = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeSelectedText() override {
		if (handle__RemoveSelectedText == 0) {
			QsciScintilla::removeSelectedText();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_RemoveSelectedText(this, handle__RemoveSelectedText);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RemoveSelectedText() {

		QsciScintilla::removeSelectedText();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReplaceSelectedText = 0;

	// Subclass to allow providing a Go implementation
	virtual void replaceSelectedText(const QString& text) override {
		if (handle__ReplaceSelectedText == 0) {
			QsciScintilla::replaceSelectedText(text);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QsciScintilla_ReplaceSelectedText(this, handle__ReplaceSelectedText, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ReplaceSelectedText(struct miqt_string text) {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QsciScintilla::replaceSelectedText(text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResetSelectionBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetSelectionBackgroundColor() override {
		if (handle__ResetSelectionBackgroundColor == 0) {
			QsciScintilla::resetSelectionBackgroundColor();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_ResetSelectionBackgroundColor(this, handle__ResetSelectionBackgroundColor);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResetSelectionBackgroundColor() {

		QsciScintilla::resetSelectionBackgroundColor();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResetSelectionForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetSelectionForegroundColor() override {
		if (handle__ResetSelectionForegroundColor == 0) {
			QsciScintilla::resetSelectionForegroundColor();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_ResetSelectionForegroundColor(this, handle__ResetSelectionForegroundColor);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResetSelectionForegroundColor() {

		QsciScintilla::resetSelectionForegroundColor();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectAll = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectAll(bool selectVal) override {
		if (handle__SelectAll == 0) {
			QsciScintilla::selectAll(selectVal);
			return;
		}
		
		bool sigval1 = selectVal;

		miqt_exec_callback_QsciScintilla_SelectAll(this, handle__SelectAll, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectAll(bool selectVal) {

		QsciScintilla::selectAll(selectVal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SelectToMatchingBrace = 0;

	// Subclass to allow providing a Go implementation
	virtual void selectToMatchingBrace() override {
		if (handle__SelectToMatchingBrace == 0) {
			QsciScintilla::selectToMatchingBrace();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_SelectToMatchingBrace(this, handle__SelectToMatchingBrace);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SelectToMatchingBrace() {

		QsciScintilla::selectToMatchingBrace();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoCompletionCaseSensitivity = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionCaseSensitivity(bool cs) override {
		if (handle__SetAutoCompletionCaseSensitivity == 0) {
			QsciScintilla::setAutoCompletionCaseSensitivity(cs);
			return;
		}
		
		bool sigval1 = cs;

		miqt_exec_callback_QsciScintilla_SetAutoCompletionCaseSensitivity(this, handle__SetAutoCompletionCaseSensitivity, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoCompletionCaseSensitivity(bool cs) {

		QsciScintilla::setAutoCompletionCaseSensitivity(cs);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoCompletionReplaceWord = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionReplaceWord(bool replace) override {
		if (handle__SetAutoCompletionReplaceWord == 0) {
			QsciScintilla::setAutoCompletionReplaceWord(replace);
			return;
		}
		
		bool sigval1 = replace;

		miqt_exec_callback_QsciScintilla_SetAutoCompletionReplaceWord(this, handle__SetAutoCompletionReplaceWord, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoCompletionReplaceWord(bool replace) {

		QsciScintilla::setAutoCompletionReplaceWord(replace);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoCompletionShowSingle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionShowSingle(bool single) override {
		if (handle__SetAutoCompletionShowSingle == 0) {
			QsciScintilla::setAutoCompletionShowSingle(single);
			return;
		}
		
		bool sigval1 = single;

		miqt_exec_callback_QsciScintilla_SetAutoCompletionShowSingle(this, handle__SetAutoCompletionShowSingle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoCompletionShowSingle(bool single) {

		QsciScintilla::setAutoCompletionShowSingle(single);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoCompletionSource = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionSource(QsciScintilla::AutoCompletionSource source) override {
		if (handle__SetAutoCompletionSource == 0) {
			QsciScintilla::setAutoCompletionSource(source);
			return;
		}
		
		QsciScintilla::AutoCompletionSource source_ret = source;
		int sigval1 = static_cast<int>(source_ret);

		miqt_exec_callback_QsciScintilla_SetAutoCompletionSource(this, handle__SetAutoCompletionSource, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoCompletionSource(int source) {

		QsciScintilla::setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoCompletionThreshold = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionThreshold(int thresh) override {
		if (handle__SetAutoCompletionThreshold == 0) {
			QsciScintilla::setAutoCompletionThreshold(thresh);
			return;
		}
		
		int sigval1 = thresh;

		miqt_exec_callback_QsciScintilla_SetAutoCompletionThreshold(this, handle__SetAutoCompletionThreshold, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoCompletionThreshold(int thresh) {

		QsciScintilla::setAutoCompletionThreshold(static_cast<int>(thresh));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoCompletionUseSingle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoCompletionUseSingle(QsciScintilla::AutoCompletionUseSingle single) override {
		if (handle__SetAutoCompletionUseSingle == 0) {
			QsciScintilla::setAutoCompletionUseSingle(single);
			return;
		}
		
		QsciScintilla::AutoCompletionUseSingle single_ret = single;
		int sigval1 = static_cast<int>(single_ret);

		miqt_exec_callback_QsciScintilla_SetAutoCompletionUseSingle(this, handle__SetAutoCompletionUseSingle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoCompletionUseSingle(int single) {

		QsciScintilla::setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndent = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndent(bool autoindent) override {
		if (handle__SetAutoIndent == 0) {
			QsciScintilla::setAutoIndent(autoindent);
			return;
		}
		
		bool sigval1 = autoindent;

		miqt_exec_callback_QsciScintilla_SetAutoIndent(this, handle__SetAutoIndent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndent(bool autoindent) {

		QsciScintilla::setAutoIndent(autoindent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetBraceMatching = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBraceMatching(QsciScintilla::BraceMatch bm) override {
		if (handle__SetBraceMatching == 0) {
			QsciScintilla::setBraceMatching(bm);
			return;
		}
		
		QsciScintilla::BraceMatch bm_ret = bm;
		int sigval1 = static_cast<int>(bm_ret);

		miqt_exec_callback_QsciScintilla_SetBraceMatching(this, handle__SetBraceMatching, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetBraceMatching(int bm) {

		QsciScintilla::setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetBackspaceUnindents = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBackspaceUnindents(bool unindent) override {
		if (handle__SetBackspaceUnindents == 0) {
			QsciScintilla::setBackspaceUnindents(unindent);
			return;
		}
		
		bool sigval1 = unindent;

		miqt_exec_callback_QsciScintilla_SetBackspaceUnindents(this, handle__SetBackspaceUnindents, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetBackspaceUnindents(bool unindent) {

		QsciScintilla::setBackspaceUnindents(unindent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCaretForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretForegroundColor(const QColor& col) override {
		if (handle__SetCaretForegroundColor == 0) {
			QsciScintilla::setCaretForegroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_SetCaretForegroundColor(this, handle__SetCaretForegroundColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCaretForegroundColor(QColor* col) {

		QsciScintilla::setCaretForegroundColor(*col);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCaretLineBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretLineBackgroundColor(const QColor& col) override {
		if (handle__SetCaretLineBackgroundColor == 0) {
			QsciScintilla::setCaretLineBackgroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_SetCaretLineBackgroundColor(this, handle__SetCaretLineBackgroundColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCaretLineBackgroundColor(QColor* col) {

		QsciScintilla::setCaretLineBackgroundColor(*col);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCaretLineFrameWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretLineFrameWidth(int width) override {
		if (handle__SetCaretLineFrameWidth == 0) {
			QsciScintilla::setCaretLineFrameWidth(width);
			return;
		}
		
		int sigval1 = width;

		miqt_exec_callback_QsciScintilla_SetCaretLineFrameWidth(this, handle__SetCaretLineFrameWidth, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCaretLineFrameWidth(int width) {

		QsciScintilla::setCaretLineFrameWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCaretLineVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretLineVisible(bool enable) override {
		if (handle__SetCaretLineVisible == 0) {
			QsciScintilla::setCaretLineVisible(enable);
			return;
		}
		
		bool sigval1 = enable;

		miqt_exec_callback_QsciScintilla_SetCaretLineVisible(this, handle__SetCaretLineVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCaretLineVisible(bool enable) {

		QsciScintilla::setCaretLineVisible(enable);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCaretWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaretWidth(int width) override {
		if (handle__SetCaretWidth == 0) {
			QsciScintilla::setCaretWidth(width);
			return;
		}
		
		int sigval1 = width;

		miqt_exec_callback_QsciScintilla_SetCaretWidth(this, handle__SetCaretWidth, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCaretWidth(int width) {

		QsciScintilla::setCaretWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c) override {
		if (handle__SetColor == 0) {
			QsciScintilla::setColor(c);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);

		miqt_exec_callback_QsciScintilla_SetColor(this, handle__SetColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c) {

		QsciScintilla::setColor(*c);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCursorPosition = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCursorPosition(int line, int index) override {
		if (handle__SetCursorPosition == 0) {
			QsciScintilla::setCursorPosition(line, index);
			return;
		}
		
		int sigval1 = line;
		int sigval2 = index;

		miqt_exec_callback_QsciScintilla_SetCursorPosition(this, handle__SetCursorPosition, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCursorPosition(int line, int index) {

		QsciScintilla::setCursorPosition(static_cast<int>(line), static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolMode(QsciScintilla::EolMode mode) override {
		if (handle__SetEolMode == 0) {
			QsciScintilla::setEolMode(mode);
			return;
		}
		
		QsciScintilla::EolMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		miqt_exec_callback_QsciScintilla_SetEolMode(this, handle__SetEolMode, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolMode(int mode) {

		QsciScintilla::setEolMode(static_cast<QsciScintilla::EolMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolVisibility = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolVisibility(bool visible) override {
		if (handle__SetEolVisibility == 0) {
			QsciScintilla::setEolVisibility(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QsciScintilla_SetEolVisibility(this, handle__SetEolVisibility, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolVisibility(bool visible) {

		QsciScintilla::setEolVisibility(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFolding = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFolding(QsciScintilla::FoldStyle fold, int margin) override {
		if (handle__SetFolding == 0) {
			QsciScintilla::setFolding(fold, margin);
			return;
		}
		
		QsciScintilla::FoldStyle fold_ret = fold;
		int sigval1 = static_cast<int>(fold_ret);
		int sigval2 = margin;

		miqt_exec_callback_QsciScintilla_SetFolding(this, handle__SetFolding, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFolding(int fold, int margin) {

		QsciScintilla::setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetIndentation = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentation(int line, int indentation) override {
		if (handle__SetIndentation == 0) {
			QsciScintilla::setIndentation(line, indentation);
			return;
		}
		
		int sigval1 = line;
		int sigval2 = indentation;

		miqt_exec_callback_QsciScintilla_SetIndentation(this, handle__SetIndentation, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetIndentation(int line, int indentation) {

		QsciScintilla::setIndentation(static_cast<int>(line), static_cast<int>(indentation));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetIndentationGuides = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationGuides(bool enable) override {
		if (handle__SetIndentationGuides == 0) {
			QsciScintilla::setIndentationGuides(enable);
			return;
		}
		
		bool sigval1 = enable;

		miqt_exec_callback_QsciScintilla_SetIndentationGuides(this, handle__SetIndentationGuides, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetIndentationGuides(bool enable) {

		QsciScintilla::setIndentationGuides(enable);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetIndentationGuidesBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationGuidesBackgroundColor(const QColor& col) override {
		if (handle__SetIndentationGuidesBackgroundColor == 0) {
			QsciScintilla::setIndentationGuidesBackgroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_SetIndentationGuidesBackgroundColor(this, handle__SetIndentationGuidesBackgroundColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetIndentationGuidesBackgroundColor(QColor* col) {

		QsciScintilla::setIndentationGuidesBackgroundColor(*col);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetIndentationGuidesForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationGuidesForegroundColor(const QColor& col) override {
		if (handle__SetIndentationGuidesForegroundColor == 0) {
			QsciScintilla::setIndentationGuidesForegroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_SetIndentationGuidesForegroundColor(this, handle__SetIndentationGuidesForegroundColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetIndentationGuidesForegroundColor(QColor* col) {

		QsciScintilla::setIndentationGuidesForegroundColor(*col);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetIndentationsUseTabs = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationsUseTabs(bool tabs) override {
		if (handle__SetIndentationsUseTabs == 0) {
			QsciScintilla::setIndentationsUseTabs(tabs);
			return;
		}
		
		bool sigval1 = tabs;

		miqt_exec_callback_QsciScintilla_SetIndentationsUseTabs(this, handle__SetIndentationsUseTabs, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetIndentationsUseTabs(bool tabs) {

		QsciScintilla::setIndentationsUseTabs(tabs);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetIndentationWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationWidth(int width) override {
		if (handle__SetIndentationWidth == 0) {
			QsciScintilla::setIndentationWidth(width);
			return;
		}
		
		int sigval1 = width;

		miqt_exec_callback_QsciScintilla_SetIndentationWidth(this, handle__SetIndentationWidth, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetIndentationWidth(int width) {

		QsciScintilla::setIndentationWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetLexer = 0;

	// Subclass to allow providing a Go implementation
	virtual void setLexer(QsciLexer* lexer) override {
		if (handle__SetLexer == 0) {
			QsciScintilla::setLexer(lexer);
			return;
		}
		
		QsciLexer* sigval1 = lexer;

		miqt_exec_callback_QsciScintilla_SetLexer(this, handle__SetLexer, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetLexer(QsciLexer* lexer) {

		QsciScintilla::setLexer(lexer);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMarginsBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginsBackgroundColor(const QColor& col) override {
		if (handle__SetMarginsBackgroundColor == 0) {
			QsciScintilla::setMarginsBackgroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_SetMarginsBackgroundColor(this, handle__SetMarginsBackgroundColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMarginsBackgroundColor(QColor* col) {

		QsciScintilla::setMarginsBackgroundColor(*col);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMarginsFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginsFont(const QFont& f) override {
		if (handle__SetMarginsFont == 0) {
			QsciScintilla::setMarginsFont(f);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);

		miqt_exec_callback_QsciScintilla_SetMarginsFont(this, handle__SetMarginsFont, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMarginsFont(QFont* f) {

		QsciScintilla::setMarginsFont(*f);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMarginsForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginsForegroundColor(const QColor& col) override {
		if (handle__SetMarginsForegroundColor == 0) {
			QsciScintilla::setMarginsForegroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_SetMarginsForegroundColor(this, handle__SetMarginsForegroundColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMarginsForegroundColor(QColor* col) {

		QsciScintilla::setMarginsForegroundColor(*col);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMarginLineNumbers = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginLineNumbers(int margin, bool lnrs) override {
		if (handle__SetMarginLineNumbers == 0) {
			QsciScintilla::setMarginLineNumbers(margin, lnrs);
			return;
		}
		
		int sigval1 = margin;
		bool sigval2 = lnrs;

		miqt_exec_callback_QsciScintilla_SetMarginLineNumbers(this, handle__SetMarginLineNumbers, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMarginLineNumbers(int margin, bool lnrs) {

		QsciScintilla::setMarginLineNumbers(static_cast<int>(margin), lnrs);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMarginMarkerMask = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginMarkerMask(int margin, int mask) override {
		if (handle__SetMarginMarkerMask == 0) {
			QsciScintilla::setMarginMarkerMask(margin, mask);
			return;
		}
		
		int sigval1 = margin;
		int sigval2 = mask;

		miqt_exec_callback_QsciScintilla_SetMarginMarkerMask(this, handle__SetMarginMarkerMask, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMarginMarkerMask(int margin, int mask) {

		QsciScintilla::setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMarginSensitivity = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginSensitivity(int margin, bool sens) override {
		if (handle__SetMarginSensitivity == 0) {
			QsciScintilla::setMarginSensitivity(margin, sens);
			return;
		}
		
		int sigval1 = margin;
		bool sigval2 = sens;

		miqt_exec_callback_QsciScintilla_SetMarginSensitivity(this, handle__SetMarginSensitivity, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMarginSensitivity(int margin, bool sens) {

		QsciScintilla::setMarginSensitivity(static_cast<int>(margin), sens);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMarginWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginWidth(int margin, int width) override {
		if (handle__SetMarginWidth == 0) {
			QsciScintilla::setMarginWidth(margin, width);
			return;
		}
		
		int sigval1 = margin;
		int sigval2 = width;

		miqt_exec_callback_QsciScintilla_SetMarginWidth(this, handle__SetMarginWidth, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMarginWidth(int margin, int width) {

		QsciScintilla::setMarginWidth(static_cast<int>(margin), static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMarginWidth2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMarginWidth(int margin, const QString& s) override {
		if (handle__SetMarginWidth2 == 0) {
			QsciScintilla::setMarginWidth(margin, s);
			return;
		}
		
		int sigval1 = margin;
		const QString s_ret = s;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray s_b = s_ret.toUtf8();
		struct miqt_string s_ms;
		s_ms.len = s_b.length();
		s_ms.data = static_cast<char*>(malloc(s_ms.len));
		memcpy(s_ms.data, s_b.data(), s_ms.len);
		struct miqt_string sigval2 = s_ms;

		miqt_exec_callback_QsciScintilla_SetMarginWidth2(this, handle__SetMarginWidth2, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMarginWidth2(int margin, struct miqt_string s) {
		QString s_QString = QString::fromUtf8(s.data, s.len);

		QsciScintilla::setMarginWidth(static_cast<int>(margin), s_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModified = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModified(bool m) override {
		if (handle__SetModified == 0) {
			QsciScintilla::setModified(m);
			return;
		}
		
		bool sigval1 = m;

		miqt_exec_callback_QsciScintilla_SetModified(this, handle__SetModified, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModified(bool m) {

		QsciScintilla::setModified(m);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c) override {
		if (handle__SetPaper == 0) {
			QsciScintilla::setPaper(c);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);

		miqt_exec_callback_QsciScintilla_SetPaper(this, handle__SetPaper, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c) {

		QsciScintilla::setPaper(*c);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetReadOnly = 0;

	// Subclass to allow providing a Go implementation
	virtual void setReadOnly(bool ro) override {
		if (handle__SetReadOnly == 0) {
			QsciScintilla::setReadOnly(ro);
			return;
		}
		
		bool sigval1 = ro;

		miqt_exec_callback_QsciScintilla_SetReadOnly(this, handle__SetReadOnly, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetReadOnly(bool ro) {

		QsciScintilla::setReadOnly(ro);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(int lineFrom, int indexFrom, int lineTo, int indexTo) override {
		if (handle__SetSelection == 0) {
			QsciScintilla::setSelection(lineFrom, indexFrom, lineTo, indexTo);
			return;
		}
		
		int sigval1 = lineFrom;
		int sigval2 = indexFrom;
		int sigval3 = lineTo;
		int sigval4 = indexTo;

		miqt_exec_callback_QsciScintilla_SetSelection(this, handle__SetSelection, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelection(int lineFrom, int indexFrom, int lineTo, int indexTo) {

		QsciScintilla::setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionBackgroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionBackgroundColor(const QColor& col) override {
		if (handle__SetSelectionBackgroundColor == 0) {
			QsciScintilla::setSelectionBackgroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_SetSelectionBackgroundColor(this, handle__SetSelectionBackgroundColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionBackgroundColor(QColor* col) {

		QsciScintilla::setSelectionBackgroundColor(*col);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSelectionForegroundColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionForegroundColor(const QColor& col) override {
		if (handle__SetSelectionForegroundColor == 0) {
			QsciScintilla::setSelectionForegroundColor(col);
			return;
		}
		
		const QColor& col_ret = col;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&col_ret);

		miqt_exec_callback_QsciScintilla_SetSelectionForegroundColor(this, handle__SetSelectionForegroundColor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSelectionForegroundColor(QColor* col) {

		QsciScintilla::setSelectionForegroundColor(*col);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetTabIndents = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTabIndents(bool indent) override {
		if (handle__SetTabIndents == 0) {
			QsciScintilla::setTabIndents(indent);
			return;
		}
		
		bool sigval1 = indent;

		miqt_exec_callback_QsciScintilla_SetTabIndents(this, handle__SetTabIndents, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetTabIndents(bool indent) {

		QsciScintilla::setTabIndents(indent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetTabWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTabWidth(int width) override {
		if (handle__SetTabWidth == 0) {
			QsciScintilla::setTabWidth(width);
			return;
		}
		
		int sigval1 = width;

		miqt_exec_callback_QsciScintilla_SetTabWidth(this, handle__SetTabWidth, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetTabWidth(int width) {

		QsciScintilla::setTabWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetText = 0;

	// Subclass to allow providing a Go implementation
	virtual void setText(const QString& text) override {
		if (handle__SetText == 0) {
			QsciScintilla::setText(text);
			return;
		}
		
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;

		miqt_exec_callback_QsciScintilla_SetText(this, handle__SetText, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetText(struct miqt_string text) {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QsciScintilla::setText(text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetUtf8 = 0;

	// Subclass to allow providing a Go implementation
	virtual void setUtf8(bool cp) override {
		if (handle__SetUtf8 == 0) {
			QsciScintilla::setUtf8(cp);
			return;
		}
		
		bool sigval1 = cp;

		miqt_exec_callback_QsciScintilla_SetUtf8(this, handle__SetUtf8, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetUtf8(bool cp) {

		QsciScintilla::setUtf8(cp);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetWhitespaceVisibility = 0;

	// Subclass to allow providing a Go implementation
	virtual void setWhitespaceVisibility(QsciScintilla::WhitespaceVisibility mode) override {
		if (handle__SetWhitespaceVisibility == 0) {
			QsciScintilla::setWhitespaceVisibility(mode);
			return;
		}
		
		QsciScintilla::WhitespaceVisibility mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		miqt_exec_callback_QsciScintilla_SetWhitespaceVisibility(this, handle__SetWhitespaceVisibility, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetWhitespaceVisibility(int mode) {

		QsciScintilla::setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetWrapMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void setWrapMode(QsciScintilla::WrapMode mode) override {
		if (handle__SetWrapMode == 0) {
			QsciScintilla::setWrapMode(mode);
			return;
		}
		
		QsciScintilla::WrapMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);

		miqt_exec_callback_QsciScintilla_SetWrapMode(this, handle__SetWrapMode, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetWrapMode(int mode) {

		QsciScintilla::setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Undo = 0;

	// Subclass to allow providing a Go implementation
	virtual void undo() override {
		if (handle__Undo == 0) {
			QsciScintilla::undo();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_Undo(this, handle__Undo);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Undo() {

		QsciScintilla::undo();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Unindent = 0;

	// Subclass to allow providing a Go implementation
	virtual void unindent(int line) override {
		if (handle__Unindent == 0) {
			QsciScintilla::unindent(line);
			return;
		}
		
		int sigval1 = line;

		miqt_exec_callback_QsciScintilla_Unindent(this, handle__Unindent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Unindent(int line) {

		QsciScintilla::unindent(static_cast<int>(line));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ZoomIn = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomIn(int rangeVal) override {
		if (handle__ZoomIn == 0) {
			QsciScintilla::zoomIn(rangeVal);
			return;
		}
		
		int sigval1 = rangeVal;

		miqt_exec_callback_QsciScintilla_ZoomIn(this, handle__ZoomIn, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ZoomIn(int rangeVal) {

		QsciScintilla::zoomIn(static_cast<int>(rangeVal));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ZoomIn2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomIn() override {
		if (handle__ZoomIn2 == 0) {
			QsciScintilla::zoomIn();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_ZoomIn2(this, handle__ZoomIn2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ZoomIn2() {

		QsciScintilla::zoomIn();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ZoomOut = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomOut(int rangeVal) override {
		if (handle__ZoomOut == 0) {
			QsciScintilla::zoomOut(rangeVal);
			return;
		}
		
		int sigval1 = rangeVal;

		miqt_exec_callback_QsciScintilla_ZoomOut(this, handle__ZoomOut, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ZoomOut(int rangeVal) {

		QsciScintilla::zoomOut(static_cast<int>(rangeVal));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ZoomOut2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomOut() override {
		if (handle__ZoomOut2 == 0) {
			QsciScintilla::zoomOut();
			return;
		}
		

		miqt_exec_callback_QsciScintilla_ZoomOut2(this, handle__ZoomOut2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ZoomOut2() {

		QsciScintilla::zoomOut();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ZoomTo = 0;

	// Subclass to allow providing a Go implementation
	virtual void zoomTo(int size) override {
		if (handle__ZoomTo == 0) {
			QsciScintilla::zoomTo(size);
			return;
		}
		
		int sigval1 = size;

		miqt_exec_callback_QsciScintilla_ZoomTo(this, handle__ZoomTo, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ZoomTo(int size) {

		QsciScintilla::zoomTo(static_cast<int>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QsciScintilla::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QsciScintilla::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QsciScintilla::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QsciScintilla::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__ContextMenuEvent == 0) {
			QsciScintilla::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* e) {

		QsciScintilla::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QsciScintilla::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QsciScintilla::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__CanInsertFromMimeData == 0) {
			return QsciScintilla::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_CanInsertFromMimeData(const_cast<MiqtVirtualQsciScintilla*>(this), handle__CanInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanInsertFromMimeData(QMimeData* source) const {

		return QsciScintilla::canInsertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QByteArray fromMimeData(const QMimeData* source, bool& rectangular) const override {
		if (handle__FromMimeData == 0) {
			return QsciScintilla::fromMimeData(source, rectangular);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;
		bool* sigval2 = &rectangular;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciScintilla_FromMimeData(const_cast<MiqtVirtualQsciScintilla*>(this), handle__FromMimeData, sigval1, sigval2);
		QByteArray callback_return_value_QByteArray(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QByteArray;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_FromMimeData(QMimeData* source, bool* rectangular) const {

		QByteArray _qb = QsciScintilla::fromMimeData(source, *rectangular);
		struct miqt_string _ms;
		_ms.len = _qb.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _qb.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ToMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* toMimeData(const QByteArray& text, bool rectangular) const override {
		if (handle__ToMimeData == 0) {
			return QsciScintilla::toMimeData(text, rectangular);
		}
		
		const QByteArray text_qb = text;
		struct miqt_string text_ms;
		text_ms.len = text_qb.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_qb.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		bool sigval2 = rectangular;

		QMimeData* callback_return_value = miqt_exec_callback_QsciScintilla_ToMimeData(const_cast<MiqtVirtualQsciScintilla*>(this), handle__ToMimeData, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_ToMimeData(struct miqt_string text, bool rectangular) const {
		QByteArray text_QByteArray(text.data, text.len);

		return QsciScintilla::toMimeData(text_QByteArray, rectangular);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__DragEnterEvent == 0) {
			QsciScintilla::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* e) {

		QsciScintilla::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QsciScintilla::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QsciScintilla::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QsciScintilla::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QsciScintilla::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__DropEvent == 0) {
			QsciScintilla::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* e) {

		QsciScintilla::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QsciScintilla::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QsciScintilla::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QsciScintilla::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QsciScintilla::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QsciScintilla::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QsciScintilla::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QsciScintilla::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QsciScintilla::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QsciScintilla::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QsciScintilla::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QsciScintilla::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QsciScintilla_InputMethodQuery(const_cast<MiqtVirtualQsciScintilla*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QsciScintilla::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QsciScintilla::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* e) {

		QsciScintilla::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QsciScintilla::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QsciScintilla::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QsciScintilla::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QsciScintilla::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QsciScintilla::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QsciScintilla::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QsciScintilla::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QsciScintilla::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QsciScintilla::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QsciScintilla_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QsciScintilla::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QsciScintilla::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QsciScintilla_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QsciScintilla::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QsciScintilla::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintilla_MinimumSizeHint(const_cast<MiqtVirtualQsciScintilla*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QsciScintilla::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QsciScintilla::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintilla_SizeHint(const_cast<MiqtVirtualQsciScintilla*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QsciScintilla::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QsciScintilla::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QsciScintilla_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QsciScintilla::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QsciScintilla::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QsciScintilla::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__ViewportEvent == 0) {
			return QsciScintilla::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QsciScintilla_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* param1) {

		return QsciScintilla::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QsciScintilla::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintilla_ViewportSizeHint(const_cast<MiqtVirtualQsciScintilla*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QsciScintilla::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QsciScintilla::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QsciScintilla_InitStyleOption(const_cast<MiqtVirtualQsciScintilla*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QsciScintilla::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QsciScintilla::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QsciScintilla_DevType(const_cast<MiqtVirtualQsciScintilla*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QsciScintilla::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QsciScintilla::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QsciScintilla_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QsciScintilla::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QsciScintilla::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QsciScintilla_HeightForWidth(const_cast<MiqtVirtualQsciScintilla*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QsciScintilla::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QsciScintilla::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciScintilla_HasHeightForWidth(const_cast<MiqtVirtualQsciScintilla*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QsciScintilla::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QsciScintilla::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QsciScintilla_PaintEngine(const_cast<MiqtVirtualQsciScintilla*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QsciScintilla::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QsciScintilla::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QsciScintilla::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QsciScintilla::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QsciScintilla::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QsciScintilla::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QsciScintilla::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QsciScintilla::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QsciScintilla::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QsciScintilla::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QsciScintilla::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QsciScintilla::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QsciScintilla::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QsciScintilla::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QsciScintilla::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QsciScintilla::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QsciScintilla::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QsciScintilla::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QsciScintilla::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QsciScintilla::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QsciScintilla_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QsciScintilla::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QsciScintilla::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QsciScintilla_Metric(const_cast<MiqtVirtualQsciScintilla*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QsciScintilla::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QsciScintilla::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QsciScintilla_InitPainter(const_cast<MiqtVirtualQsciScintilla*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QsciScintilla::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QsciScintilla::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QsciScintilla_Redirected(const_cast<MiqtVirtualQsciScintilla*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QsciScintilla::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QsciScintilla::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QsciScintilla_SharedPainter(const_cast<MiqtVirtualQsciScintilla*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QsciScintilla::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciScintilla::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciScintilla::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciScintilla::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciScintilla::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciScintilla::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciScintilla_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciScintilla::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciScintilla::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciScintilla_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciScintilla::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciScintilla::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciScintilla_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciScintilla::disconnectNotify(*signal);

	}

};

QsciScintilla* QsciScintilla_new(QWidget* parent) {
	return new MiqtVirtualQsciScintilla(parent);
}

QsciScintilla* QsciScintilla_new2() {
	return new MiqtVirtualQsciScintilla();
}

void QsciScintilla_virtbase(QsciScintilla* src, QsciScintillaBase** outptr_QsciScintillaBase) {
	*outptr_QsciScintillaBase = static_cast<QsciScintillaBase*>(src);
}

QMetaObject* QsciScintilla_MetaObject(const QsciScintilla* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciScintilla_Metacast(QsciScintilla* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciScintilla_Tr(const char* s) {
	QString _ret = QsciScintilla::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QsciScintilla_ApiContext(QsciScintilla* self, int pos, int* context_start, int* last_word_start) {
	QStringList _ret = self->apiContext(static_cast<int>(pos), static_cast<int&>(*context_start), static_cast<int&>(*last_word_start));
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

void QsciScintilla_Annotate(QsciScintilla* self, int line, struct miqt_string text, int style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->annotate(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_Annotate2(QsciScintilla* self, int line, struct miqt_string text, QsciStyle* style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->annotate(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_Annotate3(QsciScintilla* self, int line, QsciStyledText* text) {
	self->annotate(static_cast<int>(line), *text);
}

struct miqt_string QsciScintilla_Annotation(const QsciScintilla* self, int line) {
	QString _ret = self->annotation(static_cast<int>(line));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QsciScintilla_AnnotationDisplay(const QsciScintilla* self) {
	QsciScintilla::AnnotationDisplay _ret = self->annotationDisplay();
	return static_cast<int>(_ret);
}

void QsciScintilla_ClearAnnotations(QsciScintilla* self) {
	self->clearAnnotations();
}

bool QsciScintilla_AutoCompletionCaseSensitivity(const QsciScintilla* self) {
	return self->autoCompletionCaseSensitivity();
}

bool QsciScintilla_AutoCompletionFillupsEnabled(const QsciScintilla* self) {
	return self->autoCompletionFillupsEnabled();
}

bool QsciScintilla_AutoCompletionReplaceWord(const QsciScintilla* self) {
	return self->autoCompletionReplaceWord();
}

bool QsciScintilla_AutoCompletionShowSingle(const QsciScintilla* self) {
	return self->autoCompletionShowSingle();
}

int QsciScintilla_AutoCompletionSource(const QsciScintilla* self) {
	QsciScintilla::AutoCompletionSource _ret = self->autoCompletionSource();
	return static_cast<int>(_ret);
}

int QsciScintilla_AutoCompletionThreshold(const QsciScintilla* self) {
	return self->autoCompletionThreshold();
}

int QsciScintilla_AutoCompletionUseSingle(const QsciScintilla* self) {
	QsciScintilla::AutoCompletionUseSingle _ret = self->autoCompletionUseSingle();
	return static_cast<int>(_ret);
}

bool QsciScintilla_AutoIndent(const QsciScintilla* self) {
	return self->autoIndent();
}

bool QsciScintilla_BackspaceUnindents(const QsciScintilla* self) {
	return self->backspaceUnindents();
}

void QsciScintilla_BeginUndoAction(QsciScintilla* self) {
	self->beginUndoAction();
}

int QsciScintilla_BraceMatching(const QsciScintilla* self) {
	QsciScintilla::BraceMatch _ret = self->braceMatching();
	return static_cast<int>(_ret);
}

struct miqt_string QsciScintilla_Bytes(const QsciScintilla* self, int start, int end) {
	QByteArray _qb = self->bytes(static_cast<int>(start), static_cast<int>(end));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QsciScintilla_CallTipsPosition(const QsciScintilla* self) {
	QsciScintilla::CallTipsPosition _ret = self->callTipsPosition();
	return static_cast<int>(_ret);
}

int QsciScintilla_CallTipsStyle(const QsciScintilla* self) {
	QsciScintilla::CallTipsStyle _ret = self->callTipsStyle();
	return static_cast<int>(_ret);
}

int QsciScintilla_CallTipsVisible(const QsciScintilla* self) {
	return self->callTipsVisible();
}

void QsciScintilla_CancelFind(QsciScintilla* self) {
	self->cancelFind();
}

void QsciScintilla_CancelList(QsciScintilla* self) {
	self->cancelList();
}

bool QsciScintilla_CaseSensitive(const QsciScintilla* self) {
	return self->caseSensitive();
}

void QsciScintilla_ClearFolds(QsciScintilla* self) {
	self->clearFolds();
}

void QsciScintilla_ClearIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
	self->clearIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

void QsciScintilla_ClearRegisteredImages(QsciScintilla* self) {
	self->clearRegisteredImages();
}

QColor* QsciScintilla_Color(const QsciScintilla* self) {
	return new QColor(self->color());
}

struct miqt_array /* of int */  QsciScintilla_ContractedFolds(const QsciScintilla* self) {
	QList<int> _ret = self->contractedFolds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QsciScintilla_ConvertEols(QsciScintilla* self, int mode) {
	self->convertEols(static_cast<QsciScintilla::EolMode>(mode));
}

QMenu* QsciScintilla_CreateStandardContextMenu(QsciScintilla* self) {
	return self->createStandardContextMenu();
}

QsciDocument* QsciScintilla_Document(const QsciScintilla* self) {
	return new QsciDocument(self->document());
}

void QsciScintilla_EndUndoAction(QsciScintilla* self) {
	self->endUndoAction();
}

QColor* QsciScintilla_EdgeColor(const QsciScintilla* self) {
	return new QColor(self->edgeColor());
}

int QsciScintilla_EdgeColumn(const QsciScintilla* self) {
	return self->edgeColumn();
}

int QsciScintilla_EdgeMode(const QsciScintilla* self) {
	QsciScintilla::EdgeMode _ret = self->edgeMode();
	return static_cast<int>(_ret);
}

void QsciScintilla_SetFont(QsciScintilla* self, QFont* f) {
	self->setFont(*f);
}

int QsciScintilla_EolMode(const QsciScintilla* self) {
	QsciScintilla::EolMode _ret = self->eolMode();
	return static_cast<int>(_ret);
}

bool QsciScintilla_EolVisibility(const QsciScintilla* self) {
	return self->eolVisibility();
}

int QsciScintilla_ExtraAscent(const QsciScintilla* self) {
	return self->extraAscent();
}

int QsciScintilla_ExtraDescent(const QsciScintilla* self) {
	return self->extraDescent();
}

void QsciScintilla_FillIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
	self->fillIndicatorRange(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo), static_cast<int>(indicatorNumber));
}

bool QsciScintilla_FindFirst(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirst(expr_QString, re, cs, wo, wrap, forward, static_cast<int>(line), static_cast<int>(index), show, posix, cxx11);
}

bool QsciScintilla_FindFirstInSelection(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
	QString expr_QString = QString::fromUtf8(expr.data, expr.len);
	return self->findFirstInSelection(expr_QString, re, cs, wo, forward, show, posix, cxx11);
}

bool QsciScintilla_FindNext(QsciScintilla* self) {
	return self->findNext();
}

bool QsciScintilla_FindMatchingBrace(QsciScintilla* self, long* brace, long* other, int mode) {
	return self->findMatchingBrace(static_cast<long&>(*brace), static_cast<long&>(*other), static_cast<QsciScintilla::BraceMatch>(mode));
}

int QsciScintilla_FirstVisibleLine(const QsciScintilla* self) {
	return self->firstVisibleLine();
}

int QsciScintilla_Folding(const QsciScintilla* self) {
	QsciScintilla::FoldStyle _ret = self->folding();
	return static_cast<int>(_ret);
}

void QsciScintilla_GetCursorPosition(const QsciScintilla* self, int* line, int* index) {
	self->getCursorPosition(static_cast<int*>(line), static_cast<int*>(index));
}

void QsciScintilla_GetSelection(const QsciScintilla* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo) {
	self->getSelection(static_cast<int*>(lineFrom), static_cast<int*>(indexFrom), static_cast<int*>(lineTo), static_cast<int*>(indexTo));
}

bool QsciScintilla_HasSelectedText(const QsciScintilla* self) {
	return self->hasSelectedText();
}

int QsciScintilla_Indentation(const QsciScintilla* self, int line) {
	return self->indentation(static_cast<int>(line));
}

bool QsciScintilla_IndentationGuides(const QsciScintilla* self) {
	return self->indentationGuides();
}

bool QsciScintilla_IndentationsUseTabs(const QsciScintilla* self) {
	return self->indentationsUseTabs();
}

int QsciScintilla_IndentationWidth(const QsciScintilla* self) {
	return self->indentationWidth();
}

int QsciScintilla_IndicatorDefine(QsciScintilla* self, int style) {
	return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style));
}

bool QsciScintilla_IndicatorDrawUnder(const QsciScintilla* self, int indicatorNumber) {
	return self->indicatorDrawUnder(static_cast<int>(indicatorNumber));
}

bool QsciScintilla_IsCallTipActive(const QsciScintilla* self) {
	return self->isCallTipActive();
}

bool QsciScintilla_IsListActive(const QsciScintilla* self) {
	return self->isListActive();
}

bool QsciScintilla_IsModified(const QsciScintilla* self) {
	return self->isModified();
}

bool QsciScintilla_IsReadOnly(const QsciScintilla* self) {
	return self->isReadOnly();
}

bool QsciScintilla_IsRedoAvailable(const QsciScintilla* self) {
	return self->isRedoAvailable();
}

bool QsciScintilla_IsUndoAvailable(const QsciScintilla* self) {
	return self->isUndoAvailable();
}

bool QsciScintilla_IsUtf8(const QsciScintilla* self) {
	return self->isUtf8();
}

bool QsciScintilla_IsWordCharacter(const QsciScintilla* self, char ch) {
	return self->isWordCharacter(static_cast<char>(ch));
}

int QsciScintilla_LineAt(const QsciScintilla* self, QPoint* point) {
	return self->lineAt(*point);
}

void QsciScintilla_LineIndexFromPosition(const QsciScintilla* self, int position, int* line, int* index) {
	self->lineIndexFromPosition(static_cast<int>(position), static_cast<int*>(line), static_cast<int*>(index));
}

int QsciScintilla_LineLength(const QsciScintilla* self, int line) {
	return self->lineLength(static_cast<int>(line));
}

int QsciScintilla_Lines(const QsciScintilla* self) {
	return self->lines();
}

int QsciScintilla_Length(const QsciScintilla* self) {
	return self->length();
}

QsciLexer* QsciScintilla_Lexer(const QsciScintilla* self) {
	return self->lexer();
}

QColor* QsciScintilla_MarginBackgroundColor(const QsciScintilla* self, int margin) {
	return new QColor(self->marginBackgroundColor(static_cast<int>(margin)));
}

bool QsciScintilla_MarginLineNumbers(const QsciScintilla* self, int margin) {
	return self->marginLineNumbers(static_cast<int>(margin));
}

int QsciScintilla_MarginMarkerMask(const QsciScintilla* self, int margin) {
	return self->marginMarkerMask(static_cast<int>(margin));
}

int QsciScintilla_MarginOptions(const QsciScintilla* self) {
	return self->marginOptions();
}

bool QsciScintilla_MarginSensitivity(const QsciScintilla* self, int margin) {
	return self->marginSensitivity(static_cast<int>(margin));
}

int QsciScintilla_MarginType(const QsciScintilla* self, int margin) {
	QsciScintilla::MarginType _ret = self->marginType(static_cast<int>(margin));
	return static_cast<int>(_ret);
}

int QsciScintilla_MarginWidth(const QsciScintilla* self, int margin) {
	return self->marginWidth(static_cast<int>(margin));
}

int QsciScintilla_Margins(const QsciScintilla* self) {
	return self->margins();
}

int QsciScintilla_MarkerDefine(QsciScintilla* self, int sym) {
	return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym));
}

int QsciScintilla_MarkerDefineWithCh(QsciScintilla* self, char ch) {
	return self->markerDefine(static_cast<char>(ch));
}

int QsciScintilla_MarkerDefineWithPm(QsciScintilla* self, QPixmap* pm) {
	return self->markerDefine(*pm);
}

int QsciScintilla_MarkerDefineWithIm(QsciScintilla* self, QImage* im) {
	return self->markerDefine(*im);
}

int QsciScintilla_MarkerAdd(QsciScintilla* self, int linenr, int markerNumber) {
	return self->markerAdd(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

unsigned int QsciScintilla_MarkersAtLine(const QsciScintilla* self, int linenr) {
	return self->markersAtLine(static_cast<int>(linenr));
}

void QsciScintilla_MarkerDelete(QsciScintilla* self, int linenr) {
	self->markerDelete(static_cast<int>(linenr));
}

void QsciScintilla_MarkerDeleteAll(QsciScintilla* self) {
	self->markerDeleteAll();
}

void QsciScintilla_MarkerDeleteHandle(QsciScintilla* self, int mhandle) {
	self->markerDeleteHandle(static_cast<int>(mhandle));
}

int QsciScintilla_MarkerLine(const QsciScintilla* self, int mhandle) {
	return self->markerLine(static_cast<int>(mhandle));
}

int QsciScintilla_MarkerFindNext(const QsciScintilla* self, int linenr, unsigned int mask) {
	return self->markerFindNext(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

int QsciScintilla_MarkerFindPrevious(const QsciScintilla* self, int linenr, unsigned int mask) {
	return self->markerFindPrevious(static_cast<int>(linenr), static_cast<unsigned int>(mask));
}

bool QsciScintilla_OverwriteMode(const QsciScintilla* self) {
	return self->overwriteMode();
}

QColor* QsciScintilla_Paper(const QsciScintilla* self) {
	return new QColor(self->paper());
}

int QsciScintilla_PositionFromLineIndex(const QsciScintilla* self, int line, int index) {
	return self->positionFromLineIndex(static_cast<int>(line), static_cast<int>(index));
}

bool QsciScintilla_Read(QsciScintilla* self, QIODevice* io) {
	return self->read(io);
}

void QsciScintilla_Recolor(QsciScintilla* self, int start, int end) {
	self->recolor(static_cast<int>(start), static_cast<int>(end));
}

void QsciScintilla_RegisterImage(QsciScintilla* self, int id, QPixmap* pm) {
	self->registerImage(static_cast<int>(id), *pm);
}

void QsciScintilla_RegisterImage2(QsciScintilla* self, int id, QImage* im) {
	self->registerImage(static_cast<int>(id), *im);
}

void QsciScintilla_Replace(QsciScintilla* self, struct miqt_string replaceStr) {
	QString replaceStr_QString = QString::fromUtf8(replaceStr.data, replaceStr.len);
	self->replace(replaceStr_QString);
}

void QsciScintilla_ResetFoldMarginColors(QsciScintilla* self) {
	self->resetFoldMarginColors();
}

void QsciScintilla_ResetHotspotBackgroundColor(QsciScintilla* self) {
	self->resetHotspotBackgroundColor();
}

void QsciScintilla_ResetHotspotForegroundColor(QsciScintilla* self) {
	self->resetHotspotForegroundColor();
}

int QsciScintilla_ScrollWidth(const QsciScintilla* self) {
	return self->scrollWidth();
}

bool QsciScintilla_ScrollWidthTracking(const QsciScintilla* self) {
	return self->scrollWidthTracking();
}

void QsciScintilla_SetFoldMarginColors(QsciScintilla* self, QColor* fore, QColor* back) {
	self->setFoldMarginColors(*fore, *back);
}

void QsciScintilla_SetAnnotationDisplay(QsciScintilla* self, int display) {
	self->setAnnotationDisplay(static_cast<QsciScintilla::AnnotationDisplay>(display));
}

void QsciScintilla_SetAutoCompletionFillupsEnabled(QsciScintilla* self, bool enabled) {
	self->setAutoCompletionFillupsEnabled(enabled);
}

void QsciScintilla_SetAutoCompletionFillups(QsciScintilla* self, const char* fillups) {
	self->setAutoCompletionFillups(fillups);
}

void QsciScintilla_SetAutoCompletionWordSeparators(QsciScintilla* self, struct miqt_array /* of struct miqt_string */  separators) {
	QStringList separators_QList;
	separators_QList.reserve(separators.len);
	struct miqt_string* separators_arr = static_cast<struct miqt_string*>(separators.data);
	for(size_t i = 0; i < separators.len; ++i) {
		QString separators_arr_i_QString = QString::fromUtf8(separators_arr[i].data, separators_arr[i].len);
		separators_QList.push_back(separators_arr_i_QString);
	}
	self->setAutoCompletionWordSeparators(separators_QList);
}

void QsciScintilla_SetCallTipsBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setCallTipsBackgroundColor(*col);
}

void QsciScintilla_SetCallTipsForegroundColor(QsciScintilla* self, QColor* col) {
	self->setCallTipsForegroundColor(*col);
}

void QsciScintilla_SetCallTipsHighlightColor(QsciScintilla* self, QColor* col) {
	self->setCallTipsHighlightColor(*col);
}

void QsciScintilla_SetCallTipsPosition(QsciScintilla* self, int position) {
	self->setCallTipsPosition(static_cast<QsciScintilla::CallTipsPosition>(position));
}

void QsciScintilla_SetCallTipsStyle(QsciScintilla* self, int style) {
	self->setCallTipsStyle(static_cast<QsciScintilla::CallTipsStyle>(style));
}

void QsciScintilla_SetCallTipsVisible(QsciScintilla* self, int nr) {
	self->setCallTipsVisible(static_cast<int>(nr));
}

void QsciScintilla_SetContractedFolds(QsciScintilla* self, struct miqt_array /* of int */  folds) {
	QList<int> folds_QList;
	folds_QList.reserve(folds.len);
	int* folds_arr = static_cast<int*>(folds.data);
	for(size_t i = 0; i < folds.len; ++i) {
		folds_QList.push_back(static_cast<int>(folds_arr[i]));
	}
	self->setContractedFolds(folds_QList);
}

void QsciScintilla_SetDocument(QsciScintilla* self, QsciDocument* document) {
	self->setDocument(*document);
}

void QsciScintilla_AddEdgeColumn(QsciScintilla* self, int colnr, QColor* col) {
	self->addEdgeColumn(static_cast<int>(colnr), *col);
}

void QsciScintilla_ClearEdgeColumns(QsciScintilla* self) {
	self->clearEdgeColumns();
}

void QsciScintilla_SetEdgeColor(QsciScintilla* self, QColor* col) {
	self->setEdgeColor(*col);
}

void QsciScintilla_SetEdgeColumn(QsciScintilla* self, int colnr) {
	self->setEdgeColumn(static_cast<int>(colnr));
}

void QsciScintilla_SetEdgeMode(QsciScintilla* self, int mode) {
	self->setEdgeMode(static_cast<QsciScintilla::EdgeMode>(mode));
}

void QsciScintilla_SetFirstVisibleLine(QsciScintilla* self, int linenr) {
	self->setFirstVisibleLine(static_cast<int>(linenr));
}

void QsciScintilla_SetIndicatorDrawUnder(QsciScintilla* self, bool under) {
	self->setIndicatorDrawUnder(under);
}

void QsciScintilla_SetIndicatorForegroundColor(QsciScintilla* self, QColor* col) {
	self->setIndicatorForegroundColor(*col);
}

void QsciScintilla_SetIndicatorHoverForegroundColor(QsciScintilla* self, QColor* col) {
	self->setIndicatorHoverForegroundColor(*col);
}

void QsciScintilla_SetIndicatorHoverStyle(QsciScintilla* self, int style) {
	self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style));
}

void QsciScintilla_SetIndicatorOutlineColor(QsciScintilla* self, QColor* col) {
	self->setIndicatorOutlineColor(*col);
}

void QsciScintilla_SetMarginBackgroundColor(QsciScintilla* self, int margin, QColor* col) {
	self->setMarginBackgroundColor(static_cast<int>(margin), *col);
}

void QsciScintilla_SetMarginOptions(QsciScintilla* self, int options) {
	self->setMarginOptions(static_cast<int>(options));
}

void QsciScintilla_SetMarginText(QsciScintilla* self, int line, struct miqt_string text, int style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setMarginText(static_cast<int>(line), text_QString, static_cast<int>(style));
}

void QsciScintilla_SetMarginText2(QsciScintilla* self, int line, struct miqt_string text, QsciStyle* style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setMarginText(static_cast<int>(line), text_QString, *style);
}

void QsciScintilla_SetMarginText3(QsciScintilla* self, int line, QsciStyledText* text) {
	self->setMarginText(static_cast<int>(line), *text);
}

void QsciScintilla_SetMarginType(QsciScintilla* self, int margin, int typeVal) {
	self->setMarginType(static_cast<int>(margin), static_cast<QsciScintilla::MarginType>(typeVal));
}

void QsciScintilla_ClearMarginText(QsciScintilla* self) {
	self->clearMarginText();
}

void QsciScintilla_SetMargins(QsciScintilla* self, int margins) {
	self->setMargins(static_cast<int>(margins));
}

void QsciScintilla_SetMarkerBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setMarkerBackgroundColor(*col);
}

void QsciScintilla_SetMarkerForegroundColor(QsciScintilla* self, QColor* col) {
	self->setMarkerForegroundColor(*col);
}

void QsciScintilla_SetMatchedBraceBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setMatchedBraceBackgroundColor(*col);
}

void QsciScintilla_SetMatchedBraceForegroundColor(QsciScintilla* self, QColor* col) {
	self->setMatchedBraceForegroundColor(*col);
}

void QsciScintilla_SetMatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
	self->setMatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_ResetMatchedBraceIndicator(QsciScintilla* self) {
	self->resetMatchedBraceIndicator();
}

void QsciScintilla_SetScrollWidth(QsciScintilla* self, int pixelWidth) {
	self->setScrollWidth(static_cast<int>(pixelWidth));
}

void QsciScintilla_SetScrollWidthTracking(QsciScintilla* self, bool enabled) {
	self->setScrollWidthTracking(enabled);
}

void QsciScintilla_SetTabDrawMode(QsciScintilla* self, int mode) {
	self->setTabDrawMode(static_cast<QsciScintilla::TabDrawMode>(mode));
}

void QsciScintilla_SetUnmatchedBraceBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setUnmatchedBraceBackgroundColor(*col);
}

void QsciScintilla_SetUnmatchedBraceForegroundColor(QsciScintilla* self, QColor* col) {
	self->setUnmatchedBraceForegroundColor(*col);
}

void QsciScintilla_SetUnmatchedBraceIndicator(QsciScintilla* self, int indicatorNumber) {
	self->setUnmatchedBraceIndicator(static_cast<int>(indicatorNumber));
}

void QsciScintilla_ResetUnmatchedBraceIndicator(QsciScintilla* self) {
	self->resetUnmatchedBraceIndicator();
}

void QsciScintilla_SetWrapVisualFlags(QsciScintilla* self, int endFlag) {
	self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag));
}

struct miqt_string QsciScintilla_SelectedText(const QsciScintilla* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciScintilla_SelectionToEol(const QsciScintilla* self) {
	return self->selectionToEol();
}

void QsciScintilla_SetHotspotBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setHotspotBackgroundColor(*col);
}

void QsciScintilla_SetHotspotForegroundColor(QsciScintilla* self, QColor* col) {
	self->setHotspotForegroundColor(*col);
}

void QsciScintilla_SetHotspotUnderline(QsciScintilla* self, bool enable) {
	self->setHotspotUnderline(enable);
}

void QsciScintilla_SetHotspotWrap(QsciScintilla* self, bool enable) {
	self->setHotspotWrap(enable);
}

void QsciScintilla_SetSelectionToEol(QsciScintilla* self, bool filled) {
	self->setSelectionToEol(filled);
}

void QsciScintilla_SetExtraAscent(QsciScintilla* self, int extra) {
	self->setExtraAscent(static_cast<int>(extra));
}

void QsciScintilla_SetExtraDescent(QsciScintilla* self, int extra) {
	self->setExtraDescent(static_cast<int>(extra));
}

void QsciScintilla_SetOverwriteMode(QsciScintilla* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

void QsciScintilla_SetWhitespaceBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setWhitespaceBackgroundColor(*col);
}

void QsciScintilla_SetWhitespaceForegroundColor(QsciScintilla* self, QColor* col) {
	self->setWhitespaceForegroundColor(*col);
}

void QsciScintilla_SetWhitespaceSize(QsciScintilla* self, int size) {
	self->setWhitespaceSize(static_cast<int>(size));
}

void QsciScintilla_SetWrapIndentMode(QsciScintilla* self, int mode) {
	self->setWrapIndentMode(static_cast<QsciScintilla::WrapIndentMode>(mode));
}

void QsciScintilla_ShowUserList(QsciScintilla* self, int id, struct miqt_array /* of struct miqt_string */  list) {
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	self->showUserList(static_cast<int>(id), list_QList);
}

QsciCommandSet* QsciScintilla_StandardCommands(const QsciScintilla* self) {
	return self->standardCommands();
}

int QsciScintilla_TabDrawMode(const QsciScintilla* self) {
	QsciScintilla::TabDrawMode _ret = self->tabDrawMode();
	return static_cast<int>(_ret);
}

bool QsciScintilla_TabIndents(const QsciScintilla* self) {
	return self->tabIndents();
}

int QsciScintilla_TabWidth(const QsciScintilla* self) {
	return self->tabWidth();
}

struct miqt_string QsciScintilla_Text(const QsciScintilla* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_TextWithLine(const QsciScintilla* self, int line) {
	QString _ret = self->text(static_cast<int>(line));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_Text2(const QsciScintilla* self, int start, int end) {
	QString _ret = self->text(static_cast<int>(start), static_cast<int>(end));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QsciScintilla_TextHeight(const QsciScintilla* self, int linenr) {
	return self->textHeight(static_cast<int>(linenr));
}

int QsciScintilla_WhitespaceSize(const QsciScintilla* self) {
	return self->whitespaceSize();
}

int QsciScintilla_WhitespaceVisibility(const QsciScintilla* self) {
	QsciScintilla::WhitespaceVisibility _ret = self->whitespaceVisibility();
	return static_cast<int>(_ret);
}

struct miqt_string QsciScintilla_WordAtLineIndex(const QsciScintilla* self, int line, int index) {
	QString _ret = self->wordAtLineIndex(static_cast<int>(line), static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_WordAtPoint(const QsciScintilla* self, QPoint* point) {
	QString _ret = self->wordAtPoint(*point);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciScintilla_WordCharacters(const QsciScintilla* self) {
	return (const char*) self->wordCharacters();
}

int QsciScintilla_WrapMode(const QsciScintilla* self) {
	QsciScintilla::WrapMode _ret = self->wrapMode();
	return static_cast<int>(_ret);
}

int QsciScintilla_WrapIndentMode(const QsciScintilla* self) {
	QsciScintilla::WrapIndentMode _ret = self->wrapIndentMode();
	return static_cast<int>(_ret);
}

bool QsciScintilla_Write(const QsciScintilla* self, QIODevice* io) {
	return self->write(io);
}

void QsciScintilla_Append(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->append(text_QString);
}

void QsciScintilla_AutoCompleteFromAll(QsciScintilla* self) {
	self->autoCompleteFromAll();
}

void QsciScintilla_AutoCompleteFromAPIs(QsciScintilla* self) {
	self->autoCompleteFromAPIs();
}

void QsciScintilla_AutoCompleteFromDocument(QsciScintilla* self) {
	self->autoCompleteFromDocument();
}

void QsciScintilla_CallTip(QsciScintilla* self) {
	self->callTip();
}

void QsciScintilla_Clear(QsciScintilla* self) {
	self->clear();
}

void QsciScintilla_Copy(QsciScintilla* self) {
	self->copy();
}

void QsciScintilla_Cut(QsciScintilla* self) {
	self->cut();
}

void QsciScintilla_EnsureCursorVisible(QsciScintilla* self) {
	self->ensureCursorVisible();
}

void QsciScintilla_EnsureLineVisible(QsciScintilla* self, int line) {
	self->ensureLineVisible(static_cast<int>(line));
}

void QsciScintilla_FoldAll(QsciScintilla* self, bool children) {
	self->foldAll(children);
}

void QsciScintilla_FoldLine(QsciScintilla* self, int line) {
	self->foldLine(static_cast<int>(line));
}

void QsciScintilla_Indent(QsciScintilla* self, int line) {
	self->indent(static_cast<int>(line));
}

void QsciScintilla_Insert(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insert(text_QString);
}

void QsciScintilla_InsertAt(QsciScintilla* self, struct miqt_string text, int line, int index) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertAt(text_QString, static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_MoveToMatchingBrace(QsciScintilla* self) {
	self->moveToMatchingBrace();
}

void QsciScintilla_Paste(QsciScintilla* self) {
	self->paste();
}

void QsciScintilla_Redo(QsciScintilla* self) {
	self->redo();
}

void QsciScintilla_RemoveSelectedText(QsciScintilla* self) {
	self->removeSelectedText();
}

void QsciScintilla_ReplaceSelectedText(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->replaceSelectedText(text_QString);
}

void QsciScintilla_ResetSelectionBackgroundColor(QsciScintilla* self) {
	self->resetSelectionBackgroundColor();
}

void QsciScintilla_ResetSelectionForegroundColor(QsciScintilla* self) {
	self->resetSelectionForegroundColor();
}

void QsciScintilla_SelectAll(QsciScintilla* self, bool selectVal) {
	self->selectAll(selectVal);
}

void QsciScintilla_SelectToMatchingBrace(QsciScintilla* self) {
	self->selectToMatchingBrace();
}

void QsciScintilla_SetAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs) {
	self->setAutoCompletionCaseSensitivity(cs);
}

void QsciScintilla_SetAutoCompletionReplaceWord(QsciScintilla* self, bool replace) {
	self->setAutoCompletionReplaceWord(replace);
}

void QsciScintilla_SetAutoCompletionShowSingle(QsciScintilla* self, bool single) {
	self->setAutoCompletionShowSingle(single);
}

void QsciScintilla_SetAutoCompletionSource(QsciScintilla* self, int source) {
	self->setAutoCompletionSource(static_cast<QsciScintilla::AutoCompletionSource>(source));
}

void QsciScintilla_SetAutoCompletionThreshold(QsciScintilla* self, int thresh) {
	self->setAutoCompletionThreshold(static_cast<int>(thresh));
}

void QsciScintilla_SetAutoCompletionUseSingle(QsciScintilla* self, int single) {
	self->setAutoCompletionUseSingle(static_cast<QsciScintilla::AutoCompletionUseSingle>(single));
}

void QsciScintilla_SetAutoIndent(QsciScintilla* self, bool autoindent) {
	self->setAutoIndent(autoindent);
}

void QsciScintilla_SetBraceMatching(QsciScintilla* self, int bm) {
	self->setBraceMatching(static_cast<QsciScintilla::BraceMatch>(bm));
}

void QsciScintilla_SetBackspaceUnindents(QsciScintilla* self, bool unindent) {
	self->setBackspaceUnindents(unindent);
}

void QsciScintilla_SetCaretForegroundColor(QsciScintilla* self, QColor* col) {
	self->setCaretForegroundColor(*col);
}

void QsciScintilla_SetCaretLineBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setCaretLineBackgroundColor(*col);
}

void QsciScintilla_SetCaretLineFrameWidth(QsciScintilla* self, int width) {
	self->setCaretLineFrameWidth(static_cast<int>(width));
}

void QsciScintilla_SetCaretLineVisible(QsciScintilla* self, bool enable) {
	self->setCaretLineVisible(enable);
}

void QsciScintilla_SetCaretWidth(QsciScintilla* self, int width) {
	self->setCaretWidth(static_cast<int>(width));
}

void QsciScintilla_SetColor(QsciScintilla* self, QColor* c) {
	self->setColor(*c);
}

void QsciScintilla_SetCursorPosition(QsciScintilla* self, int line, int index) {
	self->setCursorPosition(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_SetEolMode(QsciScintilla* self, int mode) {
	self->setEolMode(static_cast<QsciScintilla::EolMode>(mode));
}

void QsciScintilla_SetEolVisibility(QsciScintilla* self, bool visible) {
	self->setEolVisibility(visible);
}

void QsciScintilla_SetFolding(QsciScintilla* self, int fold, int margin) {
	self->setFolding(static_cast<QsciScintilla::FoldStyle>(fold), static_cast<int>(margin));
}

void QsciScintilla_SetIndentation(QsciScintilla* self, int line, int indentation) {
	self->setIndentation(static_cast<int>(line), static_cast<int>(indentation));
}

void QsciScintilla_SetIndentationGuides(QsciScintilla* self, bool enable) {
	self->setIndentationGuides(enable);
}

void QsciScintilla_SetIndentationGuidesBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setIndentationGuidesBackgroundColor(*col);
}

void QsciScintilla_SetIndentationGuidesForegroundColor(QsciScintilla* self, QColor* col) {
	self->setIndentationGuidesForegroundColor(*col);
}

void QsciScintilla_SetIndentationsUseTabs(QsciScintilla* self, bool tabs) {
	self->setIndentationsUseTabs(tabs);
}

void QsciScintilla_SetIndentationWidth(QsciScintilla* self, int width) {
	self->setIndentationWidth(static_cast<int>(width));
}

void QsciScintilla_SetLexer(QsciScintilla* self, QsciLexer* lexer) {
	self->setLexer(lexer);
}

void QsciScintilla_SetMarginsBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setMarginsBackgroundColor(*col);
}

void QsciScintilla_SetMarginsFont(QsciScintilla* self, QFont* f) {
	self->setMarginsFont(*f);
}

void QsciScintilla_SetMarginsForegroundColor(QsciScintilla* self, QColor* col) {
	self->setMarginsForegroundColor(*col);
}

void QsciScintilla_SetMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs) {
	self->setMarginLineNumbers(static_cast<int>(margin), lnrs);
}

void QsciScintilla_SetMarginMarkerMask(QsciScintilla* self, int margin, int mask) {
	self->setMarginMarkerMask(static_cast<int>(margin), static_cast<int>(mask));
}

void QsciScintilla_SetMarginSensitivity(QsciScintilla* self, int margin, bool sens) {
	self->setMarginSensitivity(static_cast<int>(margin), sens);
}

void QsciScintilla_SetMarginWidth(QsciScintilla* self, int margin, int width) {
	self->setMarginWidth(static_cast<int>(margin), static_cast<int>(width));
}

void QsciScintilla_SetMarginWidth2(QsciScintilla* self, int margin, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->setMarginWidth(static_cast<int>(margin), s_QString);
}

void QsciScintilla_SetModified(QsciScintilla* self, bool m) {
	self->setModified(m);
}

void QsciScintilla_SetPaper(QsciScintilla* self, QColor* c) {
	self->setPaper(*c);
}

void QsciScintilla_SetReadOnly(QsciScintilla* self, bool ro) {
	self->setReadOnly(ro);
}

void QsciScintilla_SetSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
	self->setSelection(static_cast<int>(lineFrom), static_cast<int>(indexFrom), static_cast<int>(lineTo), static_cast<int>(indexTo));
}

void QsciScintilla_SetSelectionBackgroundColor(QsciScintilla* self, QColor* col) {
	self->setSelectionBackgroundColor(*col);
}

void QsciScintilla_SetSelectionForegroundColor(QsciScintilla* self, QColor* col) {
	self->setSelectionForegroundColor(*col);
}

void QsciScintilla_SetTabIndents(QsciScintilla* self, bool indent) {
	self->setTabIndents(indent);
}

void QsciScintilla_SetTabWidth(QsciScintilla* self, int width) {
	self->setTabWidth(static_cast<int>(width));
}

void QsciScintilla_SetText(QsciScintilla* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QsciScintilla_SetUtf8(QsciScintilla* self, bool cp) {
	self->setUtf8(cp);
}

void QsciScintilla_SetWhitespaceVisibility(QsciScintilla* self, int mode) {
	self->setWhitespaceVisibility(static_cast<QsciScintilla::WhitespaceVisibility>(mode));
}

void QsciScintilla_SetWrapMode(QsciScintilla* self, int mode) {
	self->setWrapMode(static_cast<QsciScintilla::WrapMode>(mode));
}

void QsciScintilla_Undo(QsciScintilla* self) {
	self->undo();
}

void QsciScintilla_Unindent(QsciScintilla* self, int line) {
	self->unindent(static_cast<int>(line));
}

void QsciScintilla_ZoomIn(QsciScintilla* self, int rangeVal) {
	self->zoomIn(static_cast<int>(rangeVal));
}

void QsciScintilla_ZoomIn2(QsciScintilla* self) {
	self->zoomIn();
}

void QsciScintilla_ZoomOut(QsciScintilla* self, int rangeVal) {
	self->zoomOut(static_cast<int>(rangeVal));
}

void QsciScintilla_ZoomOut2(QsciScintilla* self) {
	self->zoomOut();
}

void QsciScintilla_ZoomTo(QsciScintilla* self, int size) {
	self->zoomTo(static_cast<int>(size));
}

void QsciScintilla_CursorPositionChanged(QsciScintilla* self, int line, int index) {
	self->cursorPositionChanged(static_cast<int>(line), static_cast<int>(index));
}

void QsciScintilla_connect_CursorPositionChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int)>(&QsciScintilla::cursorPositionChanged), self, [=](int line, int index) {
		int sigval1 = line;
		int sigval2 = index;
		miqt_exec_callback_QsciScintilla_CursorPositionChanged(slot, sigval1, sigval2);
	});
}

void QsciScintilla_CopyAvailable(QsciScintilla* self, bool yes) {
	self->copyAvailable(yes);
}

void QsciScintilla_connect_CopyAvailable(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(bool)>(&QsciScintilla::copyAvailable), self, [=](bool yes) {
		bool sigval1 = yes;
		miqt_exec_callback_QsciScintilla_CopyAvailable(slot, sigval1);
	});
}

void QsciScintilla_IndicatorClicked(QsciScintilla* self, int line, int index, int state) {
	self->indicatorClicked(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_IndicatorClicked(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::indicatorClicked), self, [=](int line, int index, Qt::KeyboardModifiers state) {
		int sigval1 = line;
		int sigval2 = index;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_IndicatorClicked(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_IndicatorReleased(QsciScintilla* self, int line, int index, int state) {
	self->indicatorReleased(static_cast<int>(line), static_cast<int>(index), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_IndicatorReleased(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::indicatorReleased), self, [=](int line, int index, Qt::KeyboardModifiers state) {
		int sigval1 = line;
		int sigval2 = index;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_IndicatorReleased(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_LinesChanged(QsciScintilla* self) {
	self->linesChanged();
}

void QsciScintilla_connect_LinesChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::linesChanged), self, [=]() {
		miqt_exec_callback_QsciScintilla_LinesChanged(slot);
	});
}

void QsciScintilla_MarginClicked(QsciScintilla* self, int margin, int line, int state) {
	self->marginClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_MarginClicked(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::marginClicked), self, [=](int margin, int line, Qt::KeyboardModifiers state) {
		int sigval1 = margin;
		int sigval2 = line;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_MarginClicked(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_MarginRightClicked(QsciScintilla* self, int margin, int line, int state) {
	self->marginRightClicked(static_cast<int>(margin), static_cast<int>(line), static_cast<Qt::KeyboardModifiers>(state));
}

void QsciScintilla_connect_MarginRightClicked(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, int, Qt::KeyboardModifiers)>(&QsciScintilla::marginRightClicked), self, [=](int margin, int line, Qt::KeyboardModifiers state) {
		int sigval1 = margin;
		int sigval2 = line;
		Qt::KeyboardModifiers state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QsciScintilla_MarginRightClicked(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintilla_ModificationAttempted(QsciScintilla* self) {
	self->modificationAttempted();
}

void QsciScintilla_connect_ModificationAttempted(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::modificationAttempted), self, [=]() {
		miqt_exec_callback_QsciScintilla_ModificationAttempted(slot);
	});
}

void QsciScintilla_ModificationChanged(QsciScintilla* self, bool m) {
	self->modificationChanged(m);
}

void QsciScintilla_connect_ModificationChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(bool)>(&QsciScintilla::modificationChanged), self, [=](bool m) {
		bool sigval1 = m;
		miqt_exec_callback_QsciScintilla_ModificationChanged(slot, sigval1);
	});
}

void QsciScintilla_SelectionChanged(QsciScintilla* self) {
	self->selectionChanged();
}

void QsciScintilla_connect_SelectionChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::selectionChanged), self, [=]() {
		miqt_exec_callback_QsciScintilla_SelectionChanged(slot);
	});
}

void QsciScintilla_TextChanged(QsciScintilla* self) {
	self->textChanged();
}

void QsciScintilla_connect_TextChanged(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)()>(&QsciScintilla::textChanged), self, [=]() {
		miqt_exec_callback_QsciScintilla_TextChanged(slot);
	});
}

void QsciScintilla_UserListActivated(QsciScintilla* self, int id, struct miqt_string stringVal) {
	QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
	self->userListActivated(static_cast<int>(id), stringVal_QString);
}

void QsciScintilla_connect_UserListActivated(QsciScintilla* self, intptr_t slot) {
	MiqtVirtualQsciScintilla::connect(self, static_cast<void (QsciScintilla::*)(int, const QString&)>(&QsciScintilla::userListActivated), self, [=](int id, const QString& stringVal) {
		int sigval1 = id;
		const QString stringVal_ret = stringVal;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stringVal_b = stringVal_ret.toUtf8();
		struct miqt_string stringVal_ms;
		stringVal_ms.len = stringVal_b.length();
		stringVal_ms.data = static_cast<char*>(malloc(stringVal_ms.len));
		memcpy(stringVal_ms.data, stringVal_b.data(), stringVal_ms.len);
		struct miqt_string sigval2 = stringVal_ms;
		miqt_exec_callback_QsciScintilla_UserListActivated(slot, sigval1, sigval2);
	});
}

struct miqt_string QsciScintilla_Tr2(const char* s, const char* c) {
	QString _ret = QsciScintilla::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintilla_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciScintilla::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciScintilla_ClearAnnotations1(QsciScintilla* self, int line) {
	self->clearAnnotations(static_cast<int>(line));
}

int QsciScintilla_IndicatorDefine2(QsciScintilla* self, int style, int indicatorNumber) {
	return self->indicatorDefine(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

int QsciScintilla_MarkerDefine2(QsciScintilla* self, int sym, int markerNumber) {
	return self->markerDefine(static_cast<QsciScintilla::MarkerSymbol>(sym), static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine22(QsciScintilla* self, char ch, int markerNumber) {
	return self->markerDefine(static_cast<char>(ch), static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine23(QsciScintilla* self, QPixmap* pm, int markerNumber) {
	return self->markerDefine(*pm, static_cast<int>(markerNumber));
}

int QsciScintilla_MarkerDefine24(QsciScintilla* self, QImage* im, int markerNumber) {
	return self->markerDefine(*im, static_cast<int>(markerNumber));
}

void QsciScintilla_MarkerDelete2(QsciScintilla* self, int linenr, int markerNumber) {
	self->markerDelete(static_cast<int>(linenr), static_cast<int>(markerNumber));
}

void QsciScintilla_MarkerDeleteAll1(QsciScintilla* self, int markerNumber) {
	self->markerDeleteAll(static_cast<int>(markerNumber));
}

void QsciScintilla_SetIndicatorDrawUnder2(QsciScintilla* self, bool under, int indicatorNumber) {
	self->setIndicatorDrawUnder(under, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
	self->setIndicatorForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorHoverForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
	self->setIndicatorHoverForegroundColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorHoverStyle2(QsciScintilla* self, int style, int indicatorNumber) {
	self->setIndicatorHoverStyle(static_cast<QsciScintilla::IndicatorStyle>(style), static_cast<int>(indicatorNumber));
}

void QsciScintilla_SetIndicatorOutlineColor2(QsciScintilla* self, QColor* col, int indicatorNumber) {
	self->setIndicatorOutlineColor(*col, static_cast<int>(indicatorNumber));
}

void QsciScintilla_ClearMarginText1(QsciScintilla* self, int line) {
	self->clearMarginText(static_cast<int>(line));
}

void QsciScintilla_SetMarkerBackgroundColor2(QsciScintilla* self, QColor* col, int markerNumber) {
	self->setMarkerBackgroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_SetMarkerForegroundColor2(QsciScintilla* self, QColor* col, int markerNumber) {
	self->setMarkerForegroundColor(*col, static_cast<int>(markerNumber));
}

void QsciScintilla_SetWrapVisualFlags2(QsciScintilla* self, int endFlag, int startFlag) {
	self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag));
}

void QsciScintilla_SetWrapVisualFlags3(QsciScintilla* self, int endFlag, int startFlag, int indent) {
	self->setWrapVisualFlags(static_cast<QsciScintilla::WrapVisualFlag>(endFlag), static_cast<QsciScintilla::WrapVisualFlag>(startFlag), static_cast<int>(indent));
}

bool QsciScintilla_override_virtual_ApiContext(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ApiContext = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciScintilla_virtualbase_ApiContext(void* self, int pos, int* context_start, int* last_word_start) {
	return ( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ApiContext(pos, context_start, last_word_start);
}

bool QsciScintilla_override_virtual_FindFirst(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FindFirst = slot;
	return true;
}

bool QsciScintilla_virtualbase_FindFirst(void* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
	return ( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_FindFirst(expr, re, cs, wo, wrap, forward, line, index, show, posix, cxx11);
}

bool QsciScintilla_override_virtual_FindFirstInSelection(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FindFirstInSelection = slot;
	return true;
}

bool QsciScintilla_virtualbase_FindFirstInSelection(void* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
	return ( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_FindFirstInSelection(expr, re, cs, wo, forward, show, posix, cxx11);
}

bool QsciScintilla_override_virtual_FindNext(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FindNext = slot;
	return true;
}

bool QsciScintilla_virtualbase_FindNext(void* self) {
	return ( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_FindNext();
}

bool QsciScintilla_override_virtual_Recolor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Recolor = slot;
	return true;
}

void QsciScintilla_virtualbase_Recolor(void* self, int start, int end) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Recolor(start, end);
}

bool QsciScintilla_override_virtual_Replace(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Replace = slot;
	return true;
}

void QsciScintilla_virtualbase_Replace(void* self, struct miqt_string replaceStr) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Replace(replaceStr);
}

bool QsciScintilla_override_virtual_Append(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Append = slot;
	return true;
}

void QsciScintilla_virtualbase_Append(void* self, struct miqt_string text) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Append(text);
}

bool QsciScintilla_override_virtual_AutoCompleteFromAll(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompleteFromAll = slot;
	return true;
}

void QsciScintilla_virtualbase_AutoCompleteFromAll(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_AutoCompleteFromAll();
}

bool QsciScintilla_override_virtual_AutoCompleteFromAPIs(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompleteFromAPIs = slot;
	return true;
}

void QsciScintilla_virtualbase_AutoCompleteFromAPIs(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_AutoCompleteFromAPIs();
}

bool QsciScintilla_override_virtual_AutoCompleteFromDocument(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompleteFromDocument = slot;
	return true;
}

void QsciScintilla_virtualbase_AutoCompleteFromDocument(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_AutoCompleteFromDocument();
}

bool QsciScintilla_override_virtual_CallTip(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CallTip = slot;
	return true;
}

void QsciScintilla_virtualbase_CallTip(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_CallTip();
}

bool QsciScintilla_override_virtual_Clear(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Clear = slot;
	return true;
}

void QsciScintilla_virtualbase_Clear(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Clear();
}

bool QsciScintilla_override_virtual_Copy(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Copy = slot;
	return true;
}

void QsciScintilla_virtualbase_Copy(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Copy();
}

bool QsciScintilla_override_virtual_Cut(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Cut = slot;
	return true;
}

void QsciScintilla_virtualbase_Cut(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Cut();
}

bool QsciScintilla_override_virtual_EnsureCursorVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnsureCursorVisible = slot;
	return true;
}

void QsciScintilla_virtualbase_EnsureCursorVisible(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_EnsureCursorVisible();
}

bool QsciScintilla_override_virtual_EnsureLineVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnsureLineVisible = slot;
	return true;
}

void QsciScintilla_virtualbase_EnsureLineVisible(void* self, int line) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_EnsureLineVisible(line);
}

bool QsciScintilla_override_virtual_FoldAll(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FoldAll = slot;
	return true;
}

void QsciScintilla_virtualbase_FoldAll(void* self, bool children) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_FoldAll(children);
}

bool QsciScintilla_override_virtual_FoldLine(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FoldLine = slot;
	return true;
}

void QsciScintilla_virtualbase_FoldLine(void* self, int line) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_FoldLine(line);
}

bool QsciScintilla_override_virtual_Indent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Indent = slot;
	return true;
}

void QsciScintilla_virtualbase_Indent(void* self, int line) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Indent(line);
}

bool QsciScintilla_override_virtual_Insert(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Insert = slot;
	return true;
}

void QsciScintilla_virtualbase_Insert(void* self, struct miqt_string text) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Insert(text);
}

bool QsciScintilla_override_virtual_InsertAt(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertAt = slot;
	return true;
}

void QsciScintilla_virtualbase_InsertAt(void* self, struct miqt_string text, int line, int index) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_InsertAt(text, line, index);
}

bool QsciScintilla_override_virtual_MoveToMatchingBrace(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveToMatchingBrace = slot;
	return true;
}

void QsciScintilla_virtualbase_MoveToMatchingBrace(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_MoveToMatchingBrace();
}

bool QsciScintilla_override_virtual_Paste(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paste = slot;
	return true;
}

void QsciScintilla_virtualbase_Paste(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Paste();
}

bool QsciScintilla_override_virtual_Redo(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redo = slot;
	return true;
}

void QsciScintilla_virtualbase_Redo(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Redo();
}

bool QsciScintilla_override_virtual_RemoveSelectedText(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveSelectedText = slot;
	return true;
}

void QsciScintilla_virtualbase_RemoveSelectedText(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_RemoveSelectedText();
}

bool QsciScintilla_override_virtual_ReplaceSelectedText(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReplaceSelectedText = slot;
	return true;
}

void QsciScintilla_virtualbase_ReplaceSelectedText(void* self, struct miqt_string text) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ReplaceSelectedText(text);
}

bool QsciScintilla_override_virtual_ResetSelectionBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResetSelectionBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_ResetSelectionBackgroundColor(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ResetSelectionBackgroundColor();
}

bool QsciScintilla_override_virtual_ResetSelectionForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResetSelectionForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_ResetSelectionForegroundColor(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ResetSelectionForegroundColor();
}

bool QsciScintilla_override_virtual_SelectAll(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectAll = slot;
	return true;
}

void QsciScintilla_virtualbase_SelectAll(void* self, bool selectVal) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SelectAll(selectVal);
}

bool QsciScintilla_override_virtual_SelectToMatchingBrace(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SelectToMatchingBrace = slot;
	return true;
}

void QsciScintilla_virtualbase_SelectToMatchingBrace(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SelectToMatchingBrace();
}

bool QsciScintilla_override_virtual_SetAutoCompletionCaseSensitivity(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoCompletionCaseSensitivity = slot;
	return true;
}

void QsciScintilla_virtualbase_SetAutoCompletionCaseSensitivity(void* self, bool cs) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetAutoCompletionCaseSensitivity(cs);
}

bool QsciScintilla_override_virtual_SetAutoCompletionReplaceWord(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoCompletionReplaceWord = slot;
	return true;
}

void QsciScintilla_virtualbase_SetAutoCompletionReplaceWord(void* self, bool replace) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetAutoCompletionReplaceWord(replace);
}

bool QsciScintilla_override_virtual_SetAutoCompletionShowSingle(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoCompletionShowSingle = slot;
	return true;
}

void QsciScintilla_virtualbase_SetAutoCompletionShowSingle(void* self, bool single) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetAutoCompletionShowSingle(single);
}

bool QsciScintilla_override_virtual_SetAutoCompletionSource(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoCompletionSource = slot;
	return true;
}

void QsciScintilla_virtualbase_SetAutoCompletionSource(void* self, int source) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetAutoCompletionSource(source);
}

bool QsciScintilla_override_virtual_SetAutoCompletionThreshold(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoCompletionThreshold = slot;
	return true;
}

void QsciScintilla_virtualbase_SetAutoCompletionThreshold(void* self, int thresh) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetAutoCompletionThreshold(thresh);
}

bool QsciScintilla_override_virtual_SetAutoCompletionUseSingle(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoCompletionUseSingle = slot;
	return true;
}

void QsciScintilla_virtualbase_SetAutoCompletionUseSingle(void* self, int single) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetAutoCompletionUseSingle(single);
}

bool QsciScintilla_override_virtual_SetAutoIndent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndent = slot;
	return true;
}

void QsciScintilla_virtualbase_SetAutoIndent(void* self, bool autoindent) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetAutoIndent(autoindent);
}

bool QsciScintilla_override_virtual_SetBraceMatching(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetBraceMatching = slot;
	return true;
}

void QsciScintilla_virtualbase_SetBraceMatching(void* self, int bm) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetBraceMatching(bm);
}

bool QsciScintilla_override_virtual_SetBackspaceUnindents(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetBackspaceUnindents = slot;
	return true;
}

void QsciScintilla_virtualbase_SetBackspaceUnindents(void* self, bool unindent) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetBackspaceUnindents(unindent);
}

bool QsciScintilla_override_virtual_SetCaretForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetCaretForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_SetCaretForegroundColor(void* self, QColor* col) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetCaretForegroundColor(col);
}

bool QsciScintilla_override_virtual_SetCaretLineBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetCaretLineBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_SetCaretLineBackgroundColor(void* self, QColor* col) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetCaretLineBackgroundColor(col);
}

bool QsciScintilla_override_virtual_SetCaretLineFrameWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetCaretLineFrameWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_SetCaretLineFrameWidth(void* self, int width) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetCaretLineFrameWidth(width);
}

bool QsciScintilla_override_virtual_SetCaretLineVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetCaretLineVisible = slot;
	return true;
}

void QsciScintilla_virtualbase_SetCaretLineVisible(void* self, bool enable) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetCaretLineVisible(enable);
}

bool QsciScintilla_override_virtual_SetCaretWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetCaretWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_SetCaretWidth(void* self, int width) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetCaretWidth(width);
}

bool QsciScintilla_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciScintilla_virtualbase_SetColor(void* self, QColor* c) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetColor(c);
}

bool QsciScintilla_override_virtual_SetCursorPosition(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetCursorPosition = slot;
	return true;
}

void QsciScintilla_virtualbase_SetCursorPosition(void* self, int line, int index) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetCursorPosition(line, index);
}

bool QsciScintilla_override_virtual_SetEolMode(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolMode = slot;
	return true;
}

void QsciScintilla_virtualbase_SetEolMode(void* self, int mode) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetEolMode(mode);
}

bool QsciScintilla_override_virtual_SetEolVisibility(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolVisibility = slot;
	return true;
}

void QsciScintilla_virtualbase_SetEolVisibility(void* self, bool visible) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetEolVisibility(visible);
}

bool QsciScintilla_override_virtual_SetFolding(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFolding = slot;
	return true;
}

void QsciScintilla_virtualbase_SetFolding(void* self, int fold, int margin) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetFolding(fold, margin);
}

bool QsciScintilla_override_virtual_SetIndentation(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetIndentation = slot;
	return true;
}

void QsciScintilla_virtualbase_SetIndentation(void* self, int line, int indentation) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetIndentation(line, indentation);
}

bool QsciScintilla_override_virtual_SetIndentationGuides(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetIndentationGuides = slot;
	return true;
}

void QsciScintilla_virtualbase_SetIndentationGuides(void* self, bool enable) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetIndentationGuides(enable);
}

bool QsciScintilla_override_virtual_SetIndentationGuidesBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetIndentationGuidesBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_SetIndentationGuidesBackgroundColor(void* self, QColor* col) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetIndentationGuidesBackgroundColor(col);
}

bool QsciScintilla_override_virtual_SetIndentationGuidesForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetIndentationGuidesForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_SetIndentationGuidesForegroundColor(void* self, QColor* col) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetIndentationGuidesForegroundColor(col);
}

bool QsciScintilla_override_virtual_SetIndentationsUseTabs(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetIndentationsUseTabs = slot;
	return true;
}

void QsciScintilla_virtualbase_SetIndentationsUseTabs(void* self, bool tabs) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetIndentationsUseTabs(tabs);
}

bool QsciScintilla_override_virtual_SetIndentationWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetIndentationWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_SetIndentationWidth(void* self, int width) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetIndentationWidth(width);
}

bool QsciScintilla_override_virtual_SetLexer(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetLexer = slot;
	return true;
}

void QsciScintilla_virtualbase_SetLexer(void* self, QsciLexer* lexer) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetLexer(lexer);
}

bool QsciScintilla_override_virtual_SetMarginsBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMarginsBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_SetMarginsBackgroundColor(void* self, QColor* col) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetMarginsBackgroundColor(col);
}

bool QsciScintilla_override_virtual_SetMarginsFont(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMarginsFont = slot;
	return true;
}

void QsciScintilla_virtualbase_SetMarginsFont(void* self, QFont* f) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetMarginsFont(f);
}

bool QsciScintilla_override_virtual_SetMarginsForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMarginsForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_SetMarginsForegroundColor(void* self, QColor* col) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetMarginsForegroundColor(col);
}

bool QsciScintilla_override_virtual_SetMarginLineNumbers(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMarginLineNumbers = slot;
	return true;
}

void QsciScintilla_virtualbase_SetMarginLineNumbers(void* self, int margin, bool lnrs) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetMarginLineNumbers(margin, lnrs);
}

bool QsciScintilla_override_virtual_SetMarginMarkerMask(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMarginMarkerMask = slot;
	return true;
}

void QsciScintilla_virtualbase_SetMarginMarkerMask(void* self, int margin, int mask) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetMarginMarkerMask(margin, mask);
}

bool QsciScintilla_override_virtual_SetMarginSensitivity(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMarginSensitivity = slot;
	return true;
}

void QsciScintilla_virtualbase_SetMarginSensitivity(void* self, int margin, bool sens) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetMarginSensitivity(margin, sens);
}

bool QsciScintilla_override_virtual_SetMarginWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMarginWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_SetMarginWidth(void* self, int margin, int width) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetMarginWidth(margin, width);
}

bool QsciScintilla_override_virtual_SetMarginWidth2(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMarginWidth2 = slot;
	return true;
}

void QsciScintilla_virtualbase_SetMarginWidth2(void* self, int margin, struct miqt_string s) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetMarginWidth2(margin, s);
}

bool QsciScintilla_override_virtual_SetModified(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetModified = slot;
	return true;
}

void QsciScintilla_virtualbase_SetModified(void* self, bool m) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetModified(m);
}

bool QsciScintilla_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciScintilla_virtualbase_SetPaper(void* self, QColor* c) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetPaper(c);
}

bool QsciScintilla_override_virtual_SetReadOnly(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetReadOnly = slot;
	return true;
}

void QsciScintilla_virtualbase_SetReadOnly(void* self, bool ro) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetReadOnly(ro);
}

bool QsciScintilla_override_virtual_SetSelection(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelection = slot;
	return true;
}

void QsciScintilla_virtualbase_SetSelection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetSelection(lineFrom, indexFrom, lineTo, indexTo);
}

bool QsciScintilla_override_virtual_SetSelectionBackgroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionBackgroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_SetSelectionBackgroundColor(void* self, QColor* col) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetSelectionBackgroundColor(col);
}

bool QsciScintilla_override_virtual_SetSelectionForegroundColor(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSelectionForegroundColor = slot;
	return true;
}

void QsciScintilla_virtualbase_SetSelectionForegroundColor(void* self, QColor* col) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetSelectionForegroundColor(col);
}

bool QsciScintilla_override_virtual_SetTabIndents(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetTabIndents = slot;
	return true;
}

void QsciScintilla_virtualbase_SetTabIndents(void* self, bool indent) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetTabIndents(indent);
}

bool QsciScintilla_override_virtual_SetTabWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetTabWidth = slot;
	return true;
}

void QsciScintilla_virtualbase_SetTabWidth(void* self, int width) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetTabWidth(width);
}

bool QsciScintilla_override_virtual_SetText(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetText = slot;
	return true;
}

void QsciScintilla_virtualbase_SetText(void* self, struct miqt_string text) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetText(text);
}

bool QsciScintilla_override_virtual_SetUtf8(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetUtf8 = slot;
	return true;
}

void QsciScintilla_virtualbase_SetUtf8(void* self, bool cp) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetUtf8(cp);
}

bool QsciScintilla_override_virtual_SetWhitespaceVisibility(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetWhitespaceVisibility = slot;
	return true;
}

void QsciScintilla_virtualbase_SetWhitespaceVisibility(void* self, int mode) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetWhitespaceVisibility(mode);
}

bool QsciScintilla_override_virtual_SetWrapMode(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetWrapMode = slot;
	return true;
}

void QsciScintilla_virtualbase_SetWrapMode(void* self, int mode) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetWrapMode(mode);
}

bool QsciScintilla_override_virtual_Undo(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Undo = slot;
	return true;
}

void QsciScintilla_virtualbase_Undo(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Undo();
}

bool QsciScintilla_override_virtual_Unindent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Unindent = slot;
	return true;
}

void QsciScintilla_virtualbase_Unindent(void* self, int line) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Unindent(line);
}

bool QsciScintilla_override_virtual_ZoomIn(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ZoomIn = slot;
	return true;
}

void QsciScintilla_virtualbase_ZoomIn(void* self, int rangeVal) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ZoomIn(rangeVal);
}

bool QsciScintilla_override_virtual_ZoomIn2(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ZoomIn2 = slot;
	return true;
}

void QsciScintilla_virtualbase_ZoomIn2(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ZoomIn2();
}

bool QsciScintilla_override_virtual_ZoomOut(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ZoomOut = slot;
	return true;
}

void QsciScintilla_virtualbase_ZoomOut(void* self, int rangeVal) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ZoomOut(rangeVal);
}

bool QsciScintilla_override_virtual_ZoomOut2(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ZoomOut2 = slot;
	return true;
}

void QsciScintilla_virtualbase_ZoomOut2(void* self) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ZoomOut2();
}

bool QsciScintilla_override_virtual_ZoomTo(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ZoomTo = slot;
	return true;
}

void QsciScintilla_virtualbase_ZoomTo(void* self, int size) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ZoomTo(size);
}

bool QsciScintilla_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciScintilla_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_Event(e);
}

bool QsciScintilla_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ChangeEvent(e);
}

bool QsciScintilla_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ContextMenuEvent(e);
}

bool QsciScintilla_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_WheelEvent(e);
}

bool QsciScintilla_override_virtual_CanInsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanInsertFromMimeData = slot;
	return true;
}

bool QsciScintilla_virtualbase_CanInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_CanInsertFromMimeData(source);
}

bool QsciScintilla_override_virtual_FromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FromMimeData = slot;
	return true;
}

struct miqt_string QsciScintilla_virtualbase_FromMimeData(const void* self, QMimeData* source, bool* rectangular) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_FromMimeData(source, rectangular);
}

bool QsciScintilla_override_virtual_ToMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ToMimeData = slot;
	return true;
}

QMimeData* QsciScintilla_virtualbase_ToMimeData(const void* self, struct miqt_string text, bool rectangular) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_ToMimeData(text, rectangular);
}

bool QsciScintilla_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_DragEnterEvent(e);
}

bool QsciScintilla_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_DragLeaveEvent(e);
}

bool QsciScintilla_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_DragMoveEvent(e);
}

bool QsciScintilla_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_DropEvent(e);
}

bool QsciScintilla_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_FocusInEvent(e);
}

bool QsciScintilla_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_FocusOutEvent(e);
}

bool QsciScintilla_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QsciScintilla_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QsciScintilla_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_KeyPressEvent(e);
}

bool QsciScintilla_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QsciScintilla_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QsciScintilla_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QsciScintilla_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_MouseDoubleClickEvent(e);
}

bool QsciScintilla_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QsciScintilla_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_MousePressEvent(e);
}

bool QsciScintilla_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QsciScintilla_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_PaintEvent(e);
}

bool QsciScintilla_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ResizeEvent(e);
}

bool QsciScintilla_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QsciScintilla_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QsciScintilla_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QsciScintilla_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_MinimumSizeHint();
}

bool QsciScintilla_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QsciScintilla_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_SizeHint();
}

bool QsciScintilla_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QsciScintilla_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QsciScintilla_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciScintilla_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QsciScintilla_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QsciScintilla_virtualbase_ViewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ViewportEvent(param1);
}

bool QsciScintilla_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QsciScintilla_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_ViewportSizeHint();
}

bool QsciScintilla_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QsciScintilla_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_InitStyleOption(option);
}

bool QsciScintilla_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QsciScintilla_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_DevType();
}

bool QsciScintilla_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QsciScintilla_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_SetVisible(visible);
}

bool QsciScintilla_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QsciScintilla_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QsciScintilla_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QsciScintilla_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_HasHeightForWidth();
}

bool QsciScintilla_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QsciScintilla_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_PaintEngine();
}

bool QsciScintilla_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QsciScintilla_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_EnterEvent(event);
}

bool QsciScintilla_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_LeaveEvent(event);
}

bool QsciScintilla_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_MoveEvent(event);
}

bool QsciScintilla_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_CloseEvent(event);
}

bool QsciScintilla_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_TabletEvent(event);
}

bool QsciScintilla_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ActionEvent(event);
}

bool QsciScintilla_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ShowEvent(event);
}

bool QsciScintilla_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_HideEvent(event);
}

bool QsciScintilla_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QsciScintilla_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QsciScintilla_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QsciScintilla_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_Metric(param1);
}

bool QsciScintilla_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QsciScintilla_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_InitPainter(painter);
}

bool QsciScintilla_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QsciScintilla_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_Redirected(offset);
}

bool QsciScintilla_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QsciScintilla_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQsciScintilla*)(self) )->virtualbase_SharedPainter();
}

bool QsciScintilla_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciScintilla_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciScintilla_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciScintilla_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciScintilla_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciScintilla_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciScintilla_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciScintilla* self_cast = dynamic_cast<MiqtVirtualQsciScintilla*>( (QsciScintilla*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciScintilla_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciScintilla*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciScintilla_Delete(QsciScintilla* self) {
	delete self;
}

