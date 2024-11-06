#ifndef GEN_QSCISCINTILLA_H
#define GEN_QSCISCINTILLA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QColor;
class QFont;
class QIODevice;
class QImage;
class QMenu;
class QMetaObject;
class QPixmap;
class QPoint;
class QWidget;
class QsciCommandSet;
class QsciDocument;
class QsciLexer;
class QsciScintilla;
class QsciStyle;
class QsciStyledText;
#else
typedef struct QByteArray QByteArray;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QWidget QWidget;
typedef struct QsciCommandSet QsciCommandSet;
typedef struct QsciDocument QsciDocument;
typedef struct QsciLexer QsciLexer;
typedef struct QsciScintilla QsciScintilla;
typedef struct QsciStyle QsciStyle;
typedef struct QsciStyledText QsciStyledText;
#endif

QsciScintilla* QsciScintilla_new(QWidget* parent);
QsciScintilla* QsciScintilla_new2();
QMetaObject* QsciScintilla_MetaObject(const QsciScintilla* self);
void* QsciScintilla_Metacast(QsciScintilla* self, const char* param1);
struct miqt_string QsciScintilla_Tr(const char* s);
struct miqt_array QsciScintilla_ApiContext(QsciScintilla* self, int pos, int* context_start, int* last_word_start);
void QsciScintilla_Annotate(QsciScintilla* self, int line, struct miqt_string text, int style);
void QsciScintilla_Annotate2(QsciScintilla* self, int line, struct miqt_string text, QsciStyle* style);
void QsciScintilla_Annotate3(QsciScintilla* self, int line, QsciStyledText* text);
struct miqt_string QsciScintilla_Annotation(const QsciScintilla* self, int line);
int QsciScintilla_AnnotationDisplay(const QsciScintilla* self);
void QsciScintilla_ClearAnnotations(QsciScintilla* self);
bool QsciScintilla_AutoCompletionCaseSensitivity(const QsciScintilla* self);
bool QsciScintilla_AutoCompletionFillupsEnabled(const QsciScintilla* self);
bool QsciScintilla_AutoCompletionReplaceWord(const QsciScintilla* self);
bool QsciScintilla_AutoCompletionShowSingle(const QsciScintilla* self);
int QsciScintilla_AutoCompletionSource(const QsciScintilla* self);
int QsciScintilla_AutoCompletionThreshold(const QsciScintilla* self);
int QsciScintilla_AutoCompletionUseSingle(const QsciScintilla* self);
bool QsciScintilla_AutoIndent(const QsciScintilla* self);
bool QsciScintilla_BackspaceUnindents(const QsciScintilla* self);
void QsciScintilla_BeginUndoAction(QsciScintilla* self);
int QsciScintilla_BraceMatching(const QsciScintilla* self);
struct miqt_string QsciScintilla_Bytes(const QsciScintilla* self, int start, int end);
int QsciScintilla_CallTipsPosition(const QsciScintilla* self);
int QsciScintilla_CallTipsStyle(const QsciScintilla* self);
int QsciScintilla_CallTipsVisible(const QsciScintilla* self);
void QsciScintilla_CancelFind(QsciScintilla* self);
void QsciScintilla_CancelList(QsciScintilla* self);
bool QsciScintilla_CaseSensitive(const QsciScintilla* self);
void QsciScintilla_ClearFolds(QsciScintilla* self);
void QsciScintilla_ClearIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber);
void QsciScintilla_ClearRegisteredImages(QsciScintilla* self);
QColor* QsciScintilla_Color(const QsciScintilla* self);
struct miqt_array QsciScintilla_ContractedFolds(const QsciScintilla* self);
void QsciScintilla_ConvertEols(QsciScintilla* self, int mode);
QMenu* QsciScintilla_CreateStandardContextMenu(QsciScintilla* self);
QsciDocument* QsciScintilla_Document(const QsciScintilla* self);
void QsciScintilla_EndUndoAction(QsciScintilla* self);
QColor* QsciScintilla_EdgeColor(const QsciScintilla* self);
int QsciScintilla_EdgeColumn(const QsciScintilla* self);
int QsciScintilla_EdgeMode(const QsciScintilla* self);
void QsciScintilla_SetFont(QsciScintilla* self, QFont* f);
int QsciScintilla_EolMode(const QsciScintilla* self);
bool QsciScintilla_EolVisibility(const QsciScintilla* self);
int QsciScintilla_ExtraAscent(const QsciScintilla* self);
int QsciScintilla_ExtraDescent(const QsciScintilla* self);
void QsciScintilla_FillIndicatorRange(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber);
bool QsciScintilla_FindFirst(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap);
bool QsciScintilla_FindFirstInSelection(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo);
bool QsciScintilla_FindNext(QsciScintilla* self);
bool QsciScintilla_FindMatchingBrace(QsciScintilla* self, long* brace, long* other, int mode);
int QsciScintilla_FirstVisibleLine(const QsciScintilla* self);
int QsciScintilla_Folding(const QsciScintilla* self);
void QsciScintilla_GetCursorPosition(const QsciScintilla* self, int* line, int* index);
void QsciScintilla_GetSelection(const QsciScintilla* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo);
bool QsciScintilla_HasSelectedText(const QsciScintilla* self);
int QsciScintilla_Indentation(const QsciScintilla* self, int line);
bool QsciScintilla_IndentationGuides(const QsciScintilla* self);
bool QsciScintilla_IndentationsUseTabs(const QsciScintilla* self);
int QsciScintilla_IndentationWidth(const QsciScintilla* self);
int QsciScintilla_IndicatorDefine(QsciScintilla* self, int style);
bool QsciScintilla_IndicatorDrawUnder(const QsciScintilla* self, int indicatorNumber);
bool QsciScintilla_IsCallTipActive(const QsciScintilla* self);
bool QsciScintilla_IsListActive(const QsciScintilla* self);
bool QsciScintilla_IsModified(const QsciScintilla* self);
bool QsciScintilla_IsReadOnly(const QsciScintilla* self);
bool QsciScintilla_IsRedoAvailable(const QsciScintilla* self);
bool QsciScintilla_IsUndoAvailable(const QsciScintilla* self);
bool QsciScintilla_IsUtf8(const QsciScintilla* self);
bool QsciScintilla_IsWordCharacter(const QsciScintilla* self, char ch);
int QsciScintilla_LineAt(const QsciScintilla* self, QPoint* point);
void QsciScintilla_LineIndexFromPosition(const QsciScintilla* self, int position, int* line, int* index);
int QsciScintilla_LineLength(const QsciScintilla* self, int line);
int QsciScintilla_Lines(const QsciScintilla* self);
int QsciScintilla_Length(const QsciScintilla* self);
QsciLexer* QsciScintilla_Lexer(const QsciScintilla* self);
QColor* QsciScintilla_MarginBackgroundColor(const QsciScintilla* self, int margin);
bool QsciScintilla_MarginLineNumbers(const QsciScintilla* self, int margin);
int QsciScintilla_MarginMarkerMask(const QsciScintilla* self, int margin);
int QsciScintilla_MarginOptions(const QsciScintilla* self);
bool QsciScintilla_MarginSensitivity(const QsciScintilla* self, int margin);
int QsciScintilla_MarginType(const QsciScintilla* self, int margin);
int QsciScintilla_MarginWidth(const QsciScintilla* self, int margin);
int QsciScintilla_Margins(const QsciScintilla* self);
int QsciScintilla_MarkerDefine(QsciScintilla* self, int sym);
int QsciScintilla_MarkerDefineWithCh(QsciScintilla* self, char ch);
int QsciScintilla_MarkerDefineWithPm(QsciScintilla* self, QPixmap* pm);
int QsciScintilla_MarkerDefineWithIm(QsciScintilla* self, QImage* im);
int QsciScintilla_MarkerAdd(QsciScintilla* self, int linenr, int markerNumber);
unsigned int QsciScintilla_MarkersAtLine(const QsciScintilla* self, int linenr);
void QsciScintilla_MarkerDelete(QsciScintilla* self, int linenr);
void QsciScintilla_MarkerDeleteAll(QsciScintilla* self);
void QsciScintilla_MarkerDeleteHandle(QsciScintilla* self, int mhandle);
int QsciScintilla_MarkerLine(const QsciScintilla* self, int mhandle);
int QsciScintilla_MarkerFindNext(const QsciScintilla* self, int linenr, unsigned int mask);
int QsciScintilla_MarkerFindPrevious(const QsciScintilla* self, int linenr, unsigned int mask);
bool QsciScintilla_OverwriteMode(const QsciScintilla* self);
QColor* QsciScintilla_Paper(const QsciScintilla* self);
int QsciScintilla_PositionFromLineIndex(const QsciScintilla* self, int line, int index);
bool QsciScintilla_Read(QsciScintilla* self, QIODevice* io);
void QsciScintilla_Recolor(QsciScintilla* self);
void QsciScintilla_RegisterImage(QsciScintilla* self, int id, QPixmap* pm);
void QsciScintilla_RegisterImage2(QsciScintilla* self, int id, QImage* im);
void QsciScintilla_Replace(QsciScintilla* self, struct miqt_string replaceStr);
void QsciScintilla_ResetFoldMarginColors(QsciScintilla* self);
void QsciScintilla_ResetHotspotBackgroundColor(QsciScintilla* self);
void QsciScintilla_ResetHotspotForegroundColor(QsciScintilla* self);
int QsciScintilla_ScrollWidth(const QsciScintilla* self);
bool QsciScintilla_ScrollWidthTracking(const QsciScintilla* self);
void QsciScintilla_SetFoldMarginColors(QsciScintilla* self, QColor* fore, QColor* back);
void QsciScintilla_SetAnnotationDisplay(QsciScintilla* self, int display);
void QsciScintilla_SetAutoCompletionFillupsEnabled(QsciScintilla* self, bool enabled);
void QsciScintilla_SetAutoCompletionFillups(QsciScintilla* self, const char* fillups);
void QsciScintilla_SetAutoCompletionWordSeparators(QsciScintilla* self, struct miqt_array /* of struct miqt_string */ separators);
void QsciScintilla_SetCallTipsBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetCallTipsForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetCallTipsHighlightColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetCallTipsPosition(QsciScintilla* self, int position);
void QsciScintilla_SetCallTipsStyle(QsciScintilla* self, int style);
void QsciScintilla_SetCallTipsVisible(QsciScintilla* self, int nr);
void QsciScintilla_SetContractedFolds(QsciScintilla* self, struct miqt_array /* of int */ folds);
void QsciScintilla_SetDocument(QsciScintilla* self, QsciDocument* document);
void QsciScintilla_AddEdgeColumn(QsciScintilla* self, int colnr, QColor* col);
void QsciScintilla_ClearEdgeColumns(QsciScintilla* self);
void QsciScintilla_SetEdgeColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetEdgeColumn(QsciScintilla* self, int colnr);
void QsciScintilla_SetEdgeMode(QsciScintilla* self, int mode);
void QsciScintilla_SetFirstVisibleLine(QsciScintilla* self, int linenr);
void QsciScintilla_SetIndicatorDrawUnder(QsciScintilla* self, bool under);
void QsciScintilla_SetIndicatorForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetIndicatorHoverForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetIndicatorHoverStyle(QsciScintilla* self, int style);
void QsciScintilla_SetIndicatorOutlineColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetMarginBackgroundColor(QsciScintilla* self, int margin, QColor* col);
void QsciScintilla_SetMarginOptions(QsciScintilla* self, int options);
void QsciScintilla_SetMarginText(QsciScintilla* self, int line, struct miqt_string text, int style);
void QsciScintilla_SetMarginText2(QsciScintilla* self, int line, struct miqt_string text, QsciStyle* style);
void QsciScintilla_SetMarginText3(QsciScintilla* self, int line, QsciStyledText* text);
void QsciScintilla_SetMarginType(QsciScintilla* self, int margin, int typeVal);
void QsciScintilla_ClearMarginText(QsciScintilla* self);
void QsciScintilla_SetMargins(QsciScintilla* self, int margins);
void QsciScintilla_SetMarkerBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetMarkerForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetMatchedBraceBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetMatchedBraceForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetMatchedBraceIndicator(QsciScintilla* self, int indicatorNumber);
void QsciScintilla_ResetMatchedBraceIndicator(QsciScintilla* self);
void QsciScintilla_SetScrollWidth(QsciScintilla* self, int pixelWidth);
void QsciScintilla_SetScrollWidthTracking(QsciScintilla* self, bool enabled);
void QsciScintilla_SetTabDrawMode(QsciScintilla* self, int mode);
void QsciScintilla_SetUnmatchedBraceBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetUnmatchedBraceForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetUnmatchedBraceIndicator(QsciScintilla* self, int indicatorNumber);
void QsciScintilla_ResetUnmatchedBraceIndicator(QsciScintilla* self);
void QsciScintilla_SetWrapVisualFlags(QsciScintilla* self, int endFlag);
struct miqt_string QsciScintilla_SelectedText(const QsciScintilla* self);
bool QsciScintilla_SelectionToEol(const QsciScintilla* self);
void QsciScintilla_SetHotspotBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetHotspotForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetHotspotUnderline(QsciScintilla* self, bool enable);
void QsciScintilla_SetHotspotWrap(QsciScintilla* self, bool enable);
void QsciScintilla_SetSelectionToEol(QsciScintilla* self, bool filled);
void QsciScintilla_SetExtraAscent(QsciScintilla* self, int extra);
void QsciScintilla_SetExtraDescent(QsciScintilla* self, int extra);
void QsciScintilla_SetOverwriteMode(QsciScintilla* self, bool overwrite);
void QsciScintilla_SetWhitespaceBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetWhitespaceForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetWhitespaceSize(QsciScintilla* self, int size);
void QsciScintilla_SetWrapIndentMode(QsciScintilla* self, int mode);
void QsciScintilla_ShowUserList(QsciScintilla* self, int id, struct miqt_array /* of struct miqt_string */ list);
QsciCommandSet* QsciScintilla_StandardCommands(const QsciScintilla* self);
int QsciScintilla_TabDrawMode(const QsciScintilla* self);
bool QsciScintilla_TabIndents(const QsciScintilla* self);
int QsciScintilla_TabWidth(const QsciScintilla* self);
struct miqt_string QsciScintilla_Text(const QsciScintilla* self);
struct miqt_string QsciScintilla_TextWithLine(const QsciScintilla* self, int line);
struct miqt_string QsciScintilla_Text2(const QsciScintilla* self, int start, int end);
int QsciScintilla_TextHeight(const QsciScintilla* self, int linenr);
int QsciScintilla_WhitespaceSize(const QsciScintilla* self);
int QsciScintilla_WhitespaceVisibility(const QsciScintilla* self);
struct miqt_string QsciScintilla_WordAtLineIndex(const QsciScintilla* self, int line, int index);
struct miqt_string QsciScintilla_WordAtPoint(const QsciScintilla* self, QPoint* point);
const char* QsciScintilla_WordCharacters(const QsciScintilla* self);
int QsciScintilla_WrapMode(const QsciScintilla* self);
int QsciScintilla_WrapIndentMode(const QsciScintilla* self);
bool QsciScintilla_Write(const QsciScintilla* self, QIODevice* io);
void QsciScintilla_Append(QsciScintilla* self, struct miqt_string text);
void QsciScintilla_AutoCompleteFromAll(QsciScintilla* self);
void QsciScintilla_AutoCompleteFromAPIs(QsciScintilla* self);
void QsciScintilla_AutoCompleteFromDocument(QsciScintilla* self);
void QsciScintilla_CallTip(QsciScintilla* self);
void QsciScintilla_Clear(QsciScintilla* self);
void QsciScintilla_Copy(QsciScintilla* self);
void QsciScintilla_Cut(QsciScintilla* self);
void QsciScintilla_EnsureCursorVisible(QsciScintilla* self);
void QsciScintilla_EnsureLineVisible(QsciScintilla* self, int line);
void QsciScintilla_FoldAll(QsciScintilla* self);
void QsciScintilla_FoldLine(QsciScintilla* self, int line);
void QsciScintilla_Indent(QsciScintilla* self, int line);
void QsciScintilla_Insert(QsciScintilla* self, struct miqt_string text);
void QsciScintilla_InsertAt(QsciScintilla* self, struct miqt_string text, int line, int index);
void QsciScintilla_MoveToMatchingBrace(QsciScintilla* self);
void QsciScintilla_Paste(QsciScintilla* self);
void QsciScintilla_Redo(QsciScintilla* self);
void QsciScintilla_RemoveSelectedText(QsciScintilla* self);
void QsciScintilla_ReplaceSelectedText(QsciScintilla* self, struct miqt_string text);
void QsciScintilla_ResetSelectionBackgroundColor(QsciScintilla* self);
void QsciScintilla_ResetSelectionForegroundColor(QsciScintilla* self);
void QsciScintilla_SelectAll(QsciScintilla* self);
void QsciScintilla_SelectToMatchingBrace(QsciScintilla* self);
void QsciScintilla_SetAutoCompletionCaseSensitivity(QsciScintilla* self, bool cs);
void QsciScintilla_SetAutoCompletionReplaceWord(QsciScintilla* self, bool replace);
void QsciScintilla_SetAutoCompletionShowSingle(QsciScintilla* self, bool single);
void QsciScintilla_SetAutoCompletionSource(QsciScintilla* self, int source);
void QsciScintilla_SetAutoCompletionThreshold(QsciScintilla* self, int thresh);
void QsciScintilla_SetAutoCompletionUseSingle(QsciScintilla* self, int single);
void QsciScintilla_SetAutoIndent(QsciScintilla* self, bool autoindent);
void QsciScintilla_SetBraceMatching(QsciScintilla* self, int bm);
void QsciScintilla_SetBackspaceUnindents(QsciScintilla* self, bool unindent);
void QsciScintilla_SetCaretForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetCaretLineBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetCaretLineFrameWidth(QsciScintilla* self, int width);
void QsciScintilla_SetCaretLineVisible(QsciScintilla* self, bool enable);
void QsciScintilla_SetCaretWidth(QsciScintilla* self, int width);
void QsciScintilla_SetColor(QsciScintilla* self, QColor* c);
void QsciScintilla_SetCursorPosition(QsciScintilla* self, int line, int index);
void QsciScintilla_SetEolMode(QsciScintilla* self, int mode);
void QsciScintilla_SetEolVisibility(QsciScintilla* self, bool visible);
void QsciScintilla_SetFolding(QsciScintilla* self, int fold);
void QsciScintilla_SetIndentation(QsciScintilla* self, int line, int indentation);
void QsciScintilla_SetIndentationGuides(QsciScintilla* self, bool enable);
void QsciScintilla_SetIndentationGuidesBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetIndentationGuidesForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetIndentationsUseTabs(QsciScintilla* self, bool tabs);
void QsciScintilla_SetIndentationWidth(QsciScintilla* self, int width);
void QsciScintilla_SetLexer(QsciScintilla* self);
void QsciScintilla_SetMarginsBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetMarginsFont(QsciScintilla* self, QFont* f);
void QsciScintilla_SetMarginsForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetMarginLineNumbers(QsciScintilla* self, int margin, bool lnrs);
void QsciScintilla_SetMarginMarkerMask(QsciScintilla* self, int margin, int mask);
void QsciScintilla_SetMarginSensitivity(QsciScintilla* self, int margin, bool sens);
void QsciScintilla_SetMarginWidth(QsciScintilla* self, int margin, int width);
void QsciScintilla_SetMarginWidth2(QsciScintilla* self, int margin, struct miqt_string s);
void QsciScintilla_SetModified(QsciScintilla* self, bool m);
void QsciScintilla_SetPaper(QsciScintilla* self, QColor* c);
void QsciScintilla_SetReadOnly(QsciScintilla* self, bool ro);
void QsciScintilla_SetSelection(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo);
void QsciScintilla_SetSelectionBackgroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetSelectionForegroundColor(QsciScintilla* self, QColor* col);
void QsciScintilla_SetTabIndents(QsciScintilla* self, bool indent);
void QsciScintilla_SetTabWidth(QsciScintilla* self, int width);
void QsciScintilla_SetText(QsciScintilla* self, struct miqt_string text);
void QsciScintilla_SetUtf8(QsciScintilla* self, bool cp);
void QsciScintilla_SetWhitespaceVisibility(QsciScintilla* self, int mode);
void QsciScintilla_SetWrapMode(QsciScintilla* self, int mode);
void QsciScintilla_Undo(QsciScintilla* self);
void QsciScintilla_Unindent(QsciScintilla* self, int line);
void QsciScintilla_ZoomIn(QsciScintilla* self, int rangeVal);
void QsciScintilla_ZoomIn2(QsciScintilla* self);
void QsciScintilla_ZoomOut(QsciScintilla* self, int rangeVal);
void QsciScintilla_ZoomOut2(QsciScintilla* self);
void QsciScintilla_ZoomTo(QsciScintilla* self, int size);
void QsciScintilla_CursorPositionChanged(QsciScintilla* self, int line, int index);
void QsciScintilla_connect_CursorPositionChanged(QsciScintilla* self, intptr_t slot);
void QsciScintilla_CopyAvailable(QsciScintilla* self, bool yes);
void QsciScintilla_connect_CopyAvailable(QsciScintilla* self, intptr_t slot);
void QsciScintilla_IndicatorClicked(QsciScintilla* self, int line, int index, int state);
void QsciScintilla_connect_IndicatorClicked(QsciScintilla* self, intptr_t slot);
void QsciScintilla_IndicatorReleased(QsciScintilla* self, int line, int index, int state);
void QsciScintilla_connect_IndicatorReleased(QsciScintilla* self, intptr_t slot);
void QsciScintilla_LinesChanged(QsciScintilla* self);
void QsciScintilla_connect_LinesChanged(QsciScintilla* self, intptr_t slot);
void QsciScintilla_MarginClicked(QsciScintilla* self, int margin, int line, int state);
void QsciScintilla_connect_MarginClicked(QsciScintilla* self, intptr_t slot);
void QsciScintilla_MarginRightClicked(QsciScintilla* self, int margin, int line, int state);
void QsciScintilla_connect_MarginRightClicked(QsciScintilla* self, intptr_t slot);
void QsciScintilla_ModificationAttempted(QsciScintilla* self);
void QsciScintilla_connect_ModificationAttempted(QsciScintilla* self, intptr_t slot);
void QsciScintilla_ModificationChanged(QsciScintilla* self, bool m);
void QsciScintilla_connect_ModificationChanged(QsciScintilla* self, intptr_t slot);
void QsciScintilla_SelectionChanged(QsciScintilla* self);
void QsciScintilla_connect_SelectionChanged(QsciScintilla* self, intptr_t slot);
void QsciScintilla_TextChanged(QsciScintilla* self);
void QsciScintilla_connect_TextChanged(QsciScintilla* self, intptr_t slot);
void QsciScintilla_UserListActivated(QsciScintilla* self, int id, struct miqt_string stringVal);
void QsciScintilla_connect_UserListActivated(QsciScintilla* self, intptr_t slot);
struct miqt_string QsciScintilla_Tr2(const char* s, const char* c);
struct miqt_string QsciScintilla_Tr3(const char* s, const char* c, int n);
void QsciScintilla_ClearAnnotations1(QsciScintilla* self, int line);
bool QsciScintilla_FindFirst6(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward);
bool QsciScintilla_FindFirst7(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line);
bool QsciScintilla_FindFirst8(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index);
bool QsciScintilla_FindFirst9(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show);
bool QsciScintilla_FindFirst10(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix);
bool QsciScintilla_FindFirst11(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11);
bool QsciScintilla_FindFirstInSelection5(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward);
bool QsciScintilla_FindFirstInSelection6(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show);
bool QsciScintilla_FindFirstInSelection7(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix);
bool QsciScintilla_FindFirstInSelection8(QsciScintilla* self, struct miqt_string expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11);
int QsciScintilla_IndicatorDefine2(QsciScintilla* self, int style, int indicatorNumber);
int QsciScintilla_MarkerDefine2(QsciScintilla* self, int sym, int markerNumber);
int QsciScintilla_MarkerDefine22(QsciScintilla* self, char ch, int markerNumber);
int QsciScintilla_MarkerDefine23(QsciScintilla* self, QPixmap* pm, int markerNumber);
int QsciScintilla_MarkerDefine24(QsciScintilla* self, QImage* im, int markerNumber);
void QsciScintilla_MarkerDelete2(QsciScintilla* self, int linenr, int markerNumber);
void QsciScintilla_MarkerDeleteAll1(QsciScintilla* self, int markerNumber);
void QsciScintilla_Recolor1(QsciScintilla* self, int start);
void QsciScintilla_Recolor2(QsciScintilla* self, int start, int end);
void QsciScintilla_SetIndicatorDrawUnder2(QsciScintilla* self, bool under, int indicatorNumber);
void QsciScintilla_SetIndicatorForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber);
void QsciScintilla_SetIndicatorHoverForegroundColor2(QsciScintilla* self, QColor* col, int indicatorNumber);
void QsciScintilla_SetIndicatorHoverStyle2(QsciScintilla* self, int style, int indicatorNumber);
void QsciScintilla_SetIndicatorOutlineColor2(QsciScintilla* self, QColor* col, int indicatorNumber);
void QsciScintilla_ClearMarginText1(QsciScintilla* self, int line);
void QsciScintilla_SetMarkerBackgroundColor2(QsciScintilla* self, QColor* col, int markerNumber);
void QsciScintilla_SetMarkerForegroundColor2(QsciScintilla* self, QColor* col, int markerNumber);
void QsciScintilla_SetWrapVisualFlags2(QsciScintilla* self, int endFlag, int startFlag);
void QsciScintilla_SetWrapVisualFlags3(QsciScintilla* self, int endFlag, int startFlag, int indent);
void QsciScintilla_FoldAll1(QsciScintilla* self, bool children);
void QsciScintilla_SelectAll1(QsciScintilla* self, bool selectVal);
void QsciScintilla_SetFolding2(QsciScintilla* self, int fold, int margin);
void QsciScintilla_SetLexer1(QsciScintilla* self, QsciLexer* lexer);
void QsciScintilla_Delete(QsciScintilla* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
