#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QItemSelection>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QRegularExpression>
#include <QSize>
#include <QSortFilterProxyModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qsortfilterproxymodel.h>
#include "gen_qsortfilterproxymodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSortFilterProxyModel_DynamicSortFilterChanged(intptr_t, bool);
void miqt_exec_callback_QSortFilterProxyModel_FilterCaseSensitivityChanged(intptr_t, int);
void miqt_exec_callback_QSortFilterProxyModel_SortCaseSensitivityChanged(intptr_t, int);
void miqt_exec_callback_QSortFilterProxyModel_SortLocaleAwareChanged(intptr_t, bool);
void miqt_exec_callback_QSortFilterProxyModel_SortRoleChanged(intptr_t, int);
void miqt_exec_callback_QSortFilterProxyModel_FilterRoleChanged(intptr_t, int);
void miqt_exec_callback_QSortFilterProxyModel_RecursiveFilteringEnabledChanged(intptr_t, bool);
void miqt_exec_callback_QSortFilterProxyModel_AutoAcceptChildRowsChanged(intptr_t, bool);
void miqt_exec_callback_QSortFilterProxyModel_SetSourceModel(void*, intptr_t, QAbstractItemModel*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_MapToSource(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_MapFromSource(void*, intptr_t, QModelIndex*);
QItemSelection* miqt_exec_callback_QSortFilterProxyModel_MapSelectionToSource(void*, intptr_t, QItemSelection*);
QItemSelection* miqt_exec_callback_QSortFilterProxyModel_MapSelectionFromSource(void*, intptr_t, QItemSelection*);
bool miqt_exec_callback_QSortFilterProxyModel_FilterAcceptsRow(void*, intptr_t, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_FilterAcceptsColumn(void*, intptr_t, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_LessThan(void*, intptr_t, QModelIndex*, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_Index(void*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_Parent(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_Sibling(void*, intptr_t, int, int, QModelIndex*);
int miqt_exec_callback_QSortFilterProxyModel_RowCount(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QSortFilterProxyModel_ColumnCount(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_HasChildren(void*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QSortFilterProxyModel_Data(void*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QSortFilterProxyModel_SetData(void*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QSortFilterProxyModel_HeaderData(void*, intptr_t, int, int, int);
bool miqt_exec_callback_QSortFilterProxyModel_SetHeaderData(void*, intptr_t, int, int, QVariant*, int);
QMimeData* miqt_exec_callback_QSortFilterProxyModel_MimeData(void*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QSortFilterProxyModel_DropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_InsertRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_InsertColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_RemoveRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_RemoveColumns(void*, intptr_t, int, int, QModelIndex*);
void miqt_exec_callback_QSortFilterProxyModel_FetchMore(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_CanFetchMore(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QSortFilterProxyModel_Flags(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_Buddy(void*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QSortFilterProxyModel_Match(void*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QSortFilterProxyModel_Span(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QSortFilterProxyModel_Sort(void*, intptr_t, int, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QSortFilterProxyModel_MimeTypes(void*, intptr_t);
int miqt_exec_callback_QSortFilterProxyModel_SupportedDropActions(void*, intptr_t);
bool miqt_exec_callback_QSortFilterProxyModel_Submit(void*, intptr_t);
void miqt_exec_callback_QSortFilterProxyModel_Revert(void*, intptr_t);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QSortFilterProxyModel_ItemData(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_SetItemData(void*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QSortFilterProxyModel_ClearItemData(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_CanDropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QSortFilterProxyModel_SupportedDragActions(void*, intptr_t);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QSortFilterProxyModel_RoleNames(void*, intptr_t);
bool miqt_exec_callback_QSortFilterProxyModel_MoveRows(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QSortFilterProxyModel_MoveColumns(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QSortFilterProxyModel_MultiData(void*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
void miqt_exec_callback_QSortFilterProxyModel_ResetInternalData(void*, intptr_t);
bool miqt_exec_callback_QSortFilterProxyModel_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSortFilterProxyModel_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSortFilterProxyModel_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSortFilterProxyModel_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSortFilterProxyModel_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSortFilterProxyModel_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSortFilterProxyModel_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSortFilterProxyModel final : public QSortFilterProxyModel {
public:

	MiqtVirtualQSortFilterProxyModel(): QSortFilterProxyModel() {};
	MiqtVirtualQSortFilterProxyModel(QObject* parent): QSortFilterProxyModel(parent) {};

	virtual ~MiqtVirtualQSortFilterProxyModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSourceModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (handle__SetSourceModel == 0) {
			QSortFilterProxyModel::setSourceModel(sourceModel);
			return;
		}
		
		QAbstractItemModel* sigval1 = sourceModel;

		miqt_exec_callback_QSortFilterProxyModel_SetSourceModel(this, handle__SetSourceModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSourceModel(QAbstractItemModel* sourceModel) {

		QSortFilterProxyModel::setSourceModel(sourceModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (handle__MapToSource == 0) {
			return QSortFilterProxyModel::mapToSource(proxyIndex);
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_MapToSource(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__MapToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MapToSource(QModelIndex* proxyIndex) const {

		return new QModelIndex(QSortFilterProxyModel::mapToSource(*proxyIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (handle__MapFromSource == 0) {
			return QSortFilterProxyModel::mapFromSource(sourceIndex);
		}
		
		const QModelIndex& sourceIndex_ret = sourceIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_MapFromSource(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__MapFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MapFromSource(QModelIndex* sourceIndex) const {

		return new QModelIndex(QSortFilterProxyModel::mapFromSource(*sourceIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapSelectionToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
		if (handle__MapSelectionToSource == 0) {
			return QSortFilterProxyModel::mapSelectionToSource(proxySelection);
		}
		
		const QItemSelection& proxySelection_ret = proxySelection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&proxySelection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_MapSelectionToSource(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__MapSelectionToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_MapSelectionToSource(QItemSelection* proxySelection) const {

		return new QItemSelection(QSortFilterProxyModel::mapSelectionToSource(*proxySelection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapSelectionFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
		if (handle__MapSelectionFromSource == 0) {
			return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
		}
		
		const QItemSelection& sourceSelection_ret = sourceSelection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&sourceSelection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_MapSelectionFromSource(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__MapSelectionFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_MapSelectionFromSource(QItemSelection* sourceSelection) const {

		return new QItemSelection(QSortFilterProxyModel::mapSelectionFromSource(*sourceSelection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FilterAcceptsRow = 0;

	// Subclass to allow providing a Go implementation
	virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
		if (handle__FilterAcceptsRow == 0) {
			return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
		}
		
		int sigval1 = source_row;
		const QModelIndex& source_parent_ret = source_parent;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&source_parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_FilterAcceptsRow(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__FilterAcceptsRow, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FilterAcceptsRow(int source_row, QModelIndex* source_parent) const {

		return QSortFilterProxyModel::filterAcceptsRow(static_cast<int>(source_row), *source_parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FilterAcceptsColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
		if (handle__FilterAcceptsColumn == 0) {
			return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
		}
		
		int sigval1 = source_column;
		const QModelIndex& source_parent_ret = source_parent;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&source_parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_FilterAcceptsColumn(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__FilterAcceptsColumn, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FilterAcceptsColumn(int source_column, QModelIndex* source_parent) const {

		return QSortFilterProxyModel::filterAcceptsColumn(static_cast<int>(source_column), *source_parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LessThan = 0;

	// Subclass to allow providing a Go implementation
	virtual bool lessThan(const QModelIndex& source_left, const QModelIndex& source_right) const override {
		if (handle__LessThan == 0) {
			return QSortFilterProxyModel::lessThan(source_left, source_right);
		}
		
		const QModelIndex& source_left_ret = source_left;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&source_left_ret);
		const QModelIndex& source_right_ret = source_right;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&source_right_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_LessThan(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__LessThan, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_LessThan(QModelIndex* source_left, QModelIndex* source_right) const {

		return QSortFilterProxyModel::lessThan(*source_left, *source_right);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QSortFilterProxyModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Index(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QSortFilterProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__Parent == 0) {
			return QSortFilterProxyModel::parent(child);
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Parent(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__Parent, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Parent(QModelIndex* child) const {

		return new QModelIndex(QSortFilterProxyModel::parent(*child));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QSortFilterProxyModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Sibling(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QSortFilterProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return QSortFilterProxyModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_RowCount(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_RowCount(QModelIndex* parent) const {

		return QSortFilterProxyModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ColumnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__ColumnCount == 0) {
			return QSortFilterProxyModel::columnCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_ColumnCount(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__ColumnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ColumnCount(QModelIndex* parent) const {

		return QSortFilterProxyModel::columnCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__HasChildren == 0) {
			return QSortFilterProxyModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_HasChildren(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__HasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasChildren(QModelIndex* parent) const {

		return QSortFilterProxyModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__Data == 0) {
			return QSortFilterProxyModel::data(index, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Data(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(QModelIndex* index, int role) const {

		return new QVariant(QSortFilterProxyModel::data(*index, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QSortFilterProxyModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__HeaderData == 0) {
			return QSortFilterProxyModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_HeaderData(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__HeaderData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_HeaderData(int section, int orientation, int role) const {

		return new QVariant(QSortFilterProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__SetHeaderData == 0) {
			return QSortFilterProxyModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_SetHeaderData(this, handle__SetHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetHeaderData(int section, int orientation, QVariant* value, int role) {

		return QSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__MimeData == 0) {
			return QSortFilterProxyModel::mimeData(indexes);
		}
		
		const QModelIndexList& indexes_ret = indexes;
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.length()));
		for (size_t i = 0, e = indexes_ret.length(); i < e; ++i) {
			indexes_arr[i] = new QModelIndex(indexes_ret[i]);
		}
		struct miqt_array indexes_out;
		indexes_out.len = indexes_ret.length();
		indexes_out.data = static_cast<void*>(indexes_arr);
		struct miqt_array /* of QModelIndex* */  sigval1 = indexes_out;

		QMimeData* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_MimeData(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__MimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_MimeData(struct miqt_array /* of QModelIndex* */  indexes) const {
		QModelIndexList indexes_QList;
		indexes_QList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QList.push_back(*(indexes_arr[i]));
		}

		return QSortFilterProxyModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
			return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QSortFilterProxyModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__InsertColumns == 0) {
			return QSortFilterProxyModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_InsertColumns(this, handle__InsertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertColumns(int column, int count, QModelIndex* parent) {

		return QSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QSortFilterProxyModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__RemoveColumns == 0) {
			return QSortFilterProxyModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_RemoveColumns(this, handle__RemoveColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveColumns(int column, int count, QModelIndex* parent) {

		return QSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__FetchMore == 0) {
			QSortFilterProxyModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QSortFilterProxyModel_FetchMore(this, handle__FetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FetchMore(QModelIndex* parent) {

		QSortFilterProxyModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__CanFetchMore == 0) {
			return QSortFilterProxyModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_CanFetchMore(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__CanFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanFetchMore(QModelIndex* parent) const {

		return QSortFilterProxyModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QSortFilterProxyModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Flags(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QSortFilterProxyModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__Buddy == 0) {
			return QSortFilterProxyModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Buddy(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__Buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Buddy(QModelIndex* index) const {

		return new QModelIndex(QSortFilterProxyModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__Match == 0) {
			return QSortFilterProxyModel::match(start, role, value, hits, flags);
		}
		
		const QModelIndex& start_ret = start;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&start_ret);
		int sigval2 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = hits;
		Qt::MatchFlags flags_ret = flags;
		int sigval5 = static_cast<int>(flags_ret);

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Match(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__Match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QModelIndex* */  virtualbase_Match(QModelIndex* start, int role, QVariant* value, int hits, int flags) const {

		QModelIndexList _ret = QSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			_arr[i] = new QModelIndex(_ret[i]);
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__Span == 0) {
			return QSortFilterProxyModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Span(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__Span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Span(QModelIndex* index) const {

		return new QSize(QSortFilterProxyModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QSortFilterProxyModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QSortFilterProxyModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QSortFilterProxyModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QSortFilterProxyModel_MimeTypes(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__MimeTypes);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_MimeTypes() const {

		QStringList _ret = QSortFilterProxyModel::mimeTypes();
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
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QSortFilterProxyModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_SupportedDropActions(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QSortFilterProxyModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__Submit == 0) {
			return QSortFilterProxyModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Submit(this, handle__Submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Submit() {

		return QSortFilterProxyModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__Revert == 0) {
			QSortFilterProxyModel::revert();
			return;
		}
		

		miqt_exec_callback_QSortFilterProxyModel_Revert(this, handle__Revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Revert() {

		QSortFilterProxyModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QSortFilterProxyModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QSortFilterProxyModel_ItemData(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__ItemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}

		return callback_return_value_QMap;
	}

	// Wrapper to allow calling protected method
	struct miqt_map /* of int to QVariant* */  virtualbase_ItemData(QModelIndex* index) const {

		QMap<int, QVariant> _ret = QSortFilterProxyModel::itemData(*index);
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
		QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
		int _ctr = 0;
		for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
			_karr[_ctr] = _itr->first;
			_varr[_ctr] = new QVariant(_itr->second);
			_ctr++;
		}
		struct miqt_map _out;
		_out.len = _ret.size();
		_out.keys = static_cast<void*>(_karr);
		_out.values = static_cast<void*>(_varr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__SetItemData == 0) {
			return QSortFilterProxyModel::setItemData(index, roles);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QMap<int, QVariant>& roles_ret = roles;
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* roles_karr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
		QVariant** roles_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * roles_ret.size()));
		int roles_ctr = 0;
		for (auto roles_itr = roles_ret.keyValueBegin(); roles_itr != roles_ret.keyValueEnd(); ++roles_itr) {
			roles_karr[roles_ctr] = roles_itr->first;
			roles_varr[roles_ctr] = new QVariant(roles_itr->second);
			roles_ctr++;
		}
		struct miqt_map roles_out;
		roles_out.len = roles_ret.size();
		roles_out.keys = static_cast<void*>(roles_karr);
		roles_out.values = static_cast<void*>(roles_varr);
		struct miqt_map /* of int to QVariant* */  sigval2 = roles_out;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetItemData(QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
		QMap<int, QVariant> roles_QMap;
		int* roles_karr = static_cast<int*>(roles.keys);
		QVariant** roles_varr = static_cast<QVariant**>(roles.values);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
		}

		return QSortFilterProxyModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ClearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__ClearItemData == 0) {
			return QSortFilterProxyModel::clearItemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_ClearItemData(this, handle__ClearItemData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ClearItemData(QModelIndex* index) {

		return QSortFilterProxyModel::clearItemData(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__CanDropMimeData == 0) {
			return QSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_CanDropMimeData(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__CanDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__SupportedDragActions == 0) {
			return QSortFilterProxyModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_SupportedDragActions(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__SupportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDragActions() const {

		Qt::DropActions _ret = QSortFilterProxyModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RoleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__RoleNames == 0) {
			return QSortFilterProxyModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QSortFilterProxyModel_RoleNames(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__RoleNames);
		QHash<int, QByteArray> callback_return_value_QMap;
		callback_return_value_QMap.reserve(callback_return_value.len);
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		struct miqt_string* callback_return_value_varr = static_cast<struct miqt_string*>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_varr_i_QByteArray(callback_return_value_varr[i].data, callback_return_value_varr[i].len);
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = callback_return_value_varr_i_QByteArray;
		}

		return callback_return_value_QMap;
	}

	// Wrapper to allow calling protected method
	struct miqt_map /* of int to struct miqt_string */  virtualbase_RoleNames() const {

		QHash<int, QByteArray> _ret = QSortFilterProxyModel::roleNames();
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
		struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
		int _ctr = 0;
		for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
			_karr[_ctr] = _itr->first;
			QByteArray _hashval_qb = _itr->second;
			struct miqt_string _hashval_ms;
			_hashval_ms.len = _hashval_qb.length();
			_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
			memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
			_varr[_ctr] = _hashval_ms;
			_ctr++;
		}
		struct miqt_map _out;
		_out.len = _ret.size();
		_out.keys = static_cast<void*>(_karr);
		_out.values = static_cast<void*>(_varr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
			return QSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}
		
		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceRow;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveColumns == 0) {
			return QSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}
		
		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceColumn;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_MoveColumns(this, handle__MoveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MultiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (handle__MultiData == 0) {
			QSortFilterProxyModel::multiData(index, roleDataSpan);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);

		miqt_exec_callback_QSortFilterProxyModel_MultiData(const_cast<MiqtVirtualQSortFilterProxyModel*>(this), handle__MultiData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MultiData(QModelIndex* index, QModelRoleDataSpan* roleDataSpan) const {

		QSortFilterProxyModel::multiData(*index, *roleDataSpan);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResetInternalData = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetInternalData() override {
		if (handle__ResetInternalData == 0) {
			QSortFilterProxyModel::resetInternalData();
			return;
		}
		

		miqt_exec_callback_QSortFilterProxyModel_ResetInternalData(this, handle__ResetInternalData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResetInternalData() {

		QSortFilterProxyModel::resetInternalData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSortFilterProxyModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSortFilterProxyModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSortFilterProxyModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSortFilterProxyModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSortFilterProxyModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSortFilterProxyModel_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSortFilterProxyModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSortFilterProxyModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSortFilterProxyModel_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSortFilterProxyModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSortFilterProxyModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSortFilterProxyModel_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSortFilterProxyModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSortFilterProxyModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSortFilterProxyModel_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSortFilterProxyModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSortFilterProxyModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSortFilterProxyModel_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSortFilterProxyModel::disconnectNotify(*signal);

	}

};

QSortFilterProxyModel* QSortFilterProxyModel_new() {
	return new MiqtVirtualQSortFilterProxyModel();
}

QSortFilterProxyModel* QSortFilterProxyModel_new2(QObject* parent) {
	return new MiqtVirtualQSortFilterProxyModel(parent);
}

void QSortFilterProxyModel_virtbase(QSortFilterProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel) {
	*outptr_QAbstractProxyModel = static_cast<QAbstractProxyModel*>(src);
}

QMetaObject* QSortFilterProxyModel_MetaObject(const QSortFilterProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSortFilterProxyModel_Metacast(QSortFilterProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSortFilterProxyModel_Tr(const char* s) {
	QString _ret = QSortFilterProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSortFilterProxyModel_SetSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QModelIndex* QSortFilterProxyModel_MapToSource(const QSortFilterProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QSortFilterProxyModel_MapFromSource(const QSortFilterProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QItemSelection* QSortFilterProxyModel_MapSelectionToSource(const QSortFilterProxyModel* self, QItemSelection* proxySelection) {
	return new QItemSelection(self->mapSelectionToSource(*proxySelection));
}

QItemSelection* QSortFilterProxyModel_MapSelectionFromSource(const QSortFilterProxyModel* self, QItemSelection* sourceSelection) {
	return new QItemSelection(self->mapSelectionFromSource(*sourceSelection));
}

QRegularExpression* QSortFilterProxyModel_FilterRegularExpression(const QSortFilterProxyModel* self) {
	return new QRegularExpression(self->filterRegularExpression());
}

int QSortFilterProxyModel_FilterKeyColumn(const QSortFilterProxyModel* self) {
	return self->filterKeyColumn();
}

void QSortFilterProxyModel_SetFilterKeyColumn(QSortFilterProxyModel* self, int column) {
	self->setFilterKeyColumn(static_cast<int>(column));
}

int QSortFilterProxyModel_FilterCaseSensitivity(const QSortFilterProxyModel* self) {
	Qt::CaseSensitivity _ret = self->filterCaseSensitivity();
	return static_cast<int>(_ret);
}

void QSortFilterProxyModel_SetFilterCaseSensitivity(QSortFilterProxyModel* self, int cs) {
	self->setFilterCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QSortFilterProxyModel_SortCaseSensitivity(const QSortFilterProxyModel* self) {
	Qt::CaseSensitivity _ret = self->sortCaseSensitivity();
	return static_cast<int>(_ret);
}

void QSortFilterProxyModel_SetSortCaseSensitivity(QSortFilterProxyModel* self, int cs) {
	self->setSortCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

bool QSortFilterProxyModel_IsSortLocaleAware(const QSortFilterProxyModel* self) {
	return self->isSortLocaleAware();
}

void QSortFilterProxyModel_SetSortLocaleAware(QSortFilterProxyModel* self, bool on) {
	self->setSortLocaleAware(on);
}

int QSortFilterProxyModel_SortColumn(const QSortFilterProxyModel* self) {
	return self->sortColumn();
}

int QSortFilterProxyModel_SortOrder(const QSortFilterProxyModel* self) {
	Qt::SortOrder _ret = self->sortOrder();
	return static_cast<int>(_ret);
}

bool QSortFilterProxyModel_DynamicSortFilter(const QSortFilterProxyModel* self) {
	return self->dynamicSortFilter();
}

void QSortFilterProxyModel_SetDynamicSortFilter(QSortFilterProxyModel* self, bool enable) {
	self->setDynamicSortFilter(enable);
}

int QSortFilterProxyModel_SortRole(const QSortFilterProxyModel* self) {
	return self->sortRole();
}

void QSortFilterProxyModel_SetSortRole(QSortFilterProxyModel* self, int role) {
	self->setSortRole(static_cast<int>(role));
}

int QSortFilterProxyModel_FilterRole(const QSortFilterProxyModel* self) {
	return self->filterRole();
}

void QSortFilterProxyModel_SetFilterRole(QSortFilterProxyModel* self, int role) {
	self->setFilterRole(static_cast<int>(role));
}

bool QSortFilterProxyModel_IsRecursiveFilteringEnabled(const QSortFilterProxyModel* self) {
	return self->isRecursiveFilteringEnabled();
}

void QSortFilterProxyModel_SetRecursiveFilteringEnabled(QSortFilterProxyModel* self, bool recursive) {
	self->setRecursiveFilteringEnabled(recursive);
}

bool QSortFilterProxyModel_AutoAcceptChildRows(const QSortFilterProxyModel* self) {
	return self->autoAcceptChildRows();
}

void QSortFilterProxyModel_SetAutoAcceptChildRows(QSortFilterProxyModel* self, bool accept) {
	self->setAutoAcceptChildRows(accept);
}

void QSortFilterProxyModel_SetFilterRegularExpression(QSortFilterProxyModel* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setFilterRegularExpression(pattern_QString);
}

void QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression(QSortFilterProxyModel* self, QRegularExpression* regularExpression) {
	self->setFilterRegularExpression(*regularExpression);
}

void QSortFilterProxyModel_SetFilterWildcard(QSortFilterProxyModel* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setFilterWildcard(pattern_QString);
}

void QSortFilterProxyModel_SetFilterFixedString(QSortFilterProxyModel* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setFilterFixedString(pattern_QString);
}

void QSortFilterProxyModel_Invalidate(QSortFilterProxyModel* self) {
	self->invalidate();
}

QModelIndex* QSortFilterProxyModel_Index(const QSortFilterProxyModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QSortFilterProxyModel_Parent(const QSortFilterProxyModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QSortFilterProxyModel_Sibling(const QSortFilterProxyModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int QSortFilterProxyModel_RowCount(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QSortFilterProxyModel_ColumnCount(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QSortFilterProxyModel_HasChildren(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QSortFilterProxyModel_Data(const QSortFilterProxyModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QSortFilterProxyModel_SetData(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QSortFilterProxyModel_HeaderData(const QSortFilterProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QSortFilterProxyModel_SetHeaderData(QSortFilterProxyModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

QMimeData* QSortFilterProxyModel_MimeData(const QSortFilterProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QSortFilterProxyModel_DropMimeData(QSortFilterProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QSortFilterProxyModel_InsertRows(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_InsertColumns(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_RemoveRows(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_RemoveColumns(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

void QSortFilterProxyModel_FetchMore(QSortFilterProxyModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QSortFilterProxyModel_CanFetchMore(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QSortFilterProxyModel_Flags(const QSortFilterProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

QModelIndex* QSortFilterProxyModel_Buddy(const QSortFilterProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_Match(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QSize* QSortFilterProxyModel_Span(const QSortFilterProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

void QSortFilterProxyModel_Sort(QSortFilterProxyModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_array /* of struct miqt_string */  QSortFilterProxyModel_MimeTypes(const QSortFilterProxyModel* self) {
	QStringList _ret = self->mimeTypes();
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

int QSortFilterProxyModel_SupportedDropActions(const QSortFilterProxyModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

void QSortFilterProxyModel_DynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter) {
	self->dynamicSortFilterChanged(dynamicSortFilter);
}

void QSortFilterProxyModel_connect_DynamicSortFilterChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::dynamicSortFilterChanged), self, [=](bool dynamicSortFilter) {
		bool sigval1 = dynamicSortFilter;
		miqt_exec_callback_QSortFilterProxyModel_DynamicSortFilterChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, int filterCaseSensitivity) {
	self->filterCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(filterCaseSensitivity));
}

void QSortFilterProxyModel_connect_FilterCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::filterCaseSensitivityChanged), self, [=](Qt::CaseSensitivity filterCaseSensitivity) {
		Qt::CaseSensitivity filterCaseSensitivity_ret = filterCaseSensitivity;
		int sigval1 = static_cast<int>(filterCaseSensitivity_ret);
		miqt_exec_callback_QSortFilterProxyModel_FilterCaseSensitivityChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_SortCaseSensitivityChanged(QSortFilterProxyModel* self, int sortCaseSensitivity) {
	self->sortCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(sortCaseSensitivity));
}

void QSortFilterProxyModel_connect_SortCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::sortCaseSensitivityChanged), self, [=](Qt::CaseSensitivity sortCaseSensitivity) {
		Qt::CaseSensitivity sortCaseSensitivity_ret = sortCaseSensitivity;
		int sigval1 = static_cast<int>(sortCaseSensitivity_ret);
		miqt_exec_callback_QSortFilterProxyModel_SortCaseSensitivityChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_SortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware) {
	self->sortLocaleAwareChanged(sortLocaleAware);
}

void QSortFilterProxyModel_connect_SortLocaleAwareChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::sortLocaleAwareChanged), self, [=](bool sortLocaleAware) {
		bool sigval1 = sortLocaleAware;
		miqt_exec_callback_QSortFilterProxyModel_SortLocaleAwareChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_SortRoleChanged(QSortFilterProxyModel* self, int sortRole) {
	self->sortRoleChanged(static_cast<int>(sortRole));
}

void QSortFilterProxyModel_connect_SortRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::sortRoleChanged), self, [=](int sortRole) {
		int sigval1 = sortRole;
		miqt_exec_callback_QSortFilterProxyModel_SortRoleChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_FilterRoleChanged(QSortFilterProxyModel* self, int filterRole) {
	self->filterRoleChanged(static_cast<int>(filterRole));
}

void QSortFilterProxyModel_connect_FilterRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::filterRoleChanged), self, [=](int filterRole) {
		int sigval1 = filterRole;
		miqt_exec_callback_QSortFilterProxyModel_FilterRoleChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled) {
	self->recursiveFilteringEnabledChanged(recursiveFilteringEnabled);
}

void QSortFilterProxyModel_connect_RecursiveFilteringEnabledChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::recursiveFilteringEnabledChanged), self, [=](bool recursiveFilteringEnabled) {
		bool sigval1 = recursiveFilteringEnabled;
		miqt_exec_callback_QSortFilterProxyModel_RecursiveFilteringEnabledChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, bool autoAcceptChildRows) {
	self->autoAcceptChildRowsChanged(autoAcceptChildRows);
}

void QSortFilterProxyModel_connect_AutoAcceptChildRowsChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::autoAcceptChildRowsChanged), self, [=](bool autoAcceptChildRows) {
		bool sigval1 = autoAcceptChildRows;
		miqt_exec_callback_QSortFilterProxyModel_AutoAcceptChildRowsChanged(slot, sigval1);
	});
}

struct miqt_string QSortFilterProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QSortFilterProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSortFilterProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSortFilterProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSortFilterProxyModel_override_virtual_SetSourceModel(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSourceModel = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_SetSourceModel(void* self, QAbstractItemModel* sourceModel) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_SetSourceModel(sourceModel);
}

bool QSortFilterProxyModel_override_virtual_MapToSource(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapToSource = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_MapToSource(const void* self, QModelIndex* proxyIndex) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_MapToSource(proxyIndex);
}

bool QSortFilterProxyModel_override_virtual_MapFromSource(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapFromSource = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_MapFromSource(const void* self, QModelIndex* sourceIndex) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_MapFromSource(sourceIndex);
}

bool QSortFilterProxyModel_override_virtual_MapSelectionToSource(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapSelectionToSource = slot;
	return true;
}

QItemSelection* QSortFilterProxyModel_virtualbase_MapSelectionToSource(const void* self, QItemSelection* proxySelection) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_MapSelectionToSource(proxySelection);
}

bool QSortFilterProxyModel_override_virtual_MapSelectionFromSource(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapSelectionFromSource = slot;
	return true;
}

QItemSelection* QSortFilterProxyModel_virtualbase_MapSelectionFromSource(const void* self, QItemSelection* sourceSelection) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_MapSelectionFromSource(sourceSelection);
}

bool QSortFilterProxyModel_override_virtual_FilterAcceptsRow(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FilterAcceptsRow = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_FilterAcceptsRow(const void* self, int source_row, QModelIndex* source_parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_FilterAcceptsRow(source_row, source_parent);
}

bool QSortFilterProxyModel_override_virtual_FilterAcceptsColumn(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FilterAcceptsColumn = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_FilterAcceptsColumn(const void* self, int source_column, QModelIndex* source_parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_FilterAcceptsColumn(source_column, source_parent);
}

bool QSortFilterProxyModel_override_virtual_LessThan(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LessThan = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_LessThan(const void* self, QModelIndex* source_left, QModelIndex* source_right) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_LessThan(source_left, source_right);
}

bool QSortFilterProxyModel_override_virtual_Index(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Index = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Index(row, column, parent);
}

bool QSortFilterProxyModel_override_virtual_Parent(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Parent = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_Parent(const void* self, QModelIndex* child) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Parent(child);
}

bool QSortFilterProxyModel_override_virtual_Sibling(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sibling = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

bool QSortFilterProxyModel_override_virtual_RowCount(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowCount = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_RowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_RowCount(parent);
}

bool QSortFilterProxyModel_override_virtual_ColumnCount(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ColumnCount = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_ColumnCount(parent);
}

bool QSortFilterProxyModel_override_virtual_HasChildren(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasChildren = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_HasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_HasChildren(parent);
}

bool QSortFilterProxyModel_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

QVariant* QSortFilterProxyModel_virtualbase_Data(const void* self, QModelIndex* index, int role) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Data(index, role);
}

bool QSortFilterProxyModel_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_SetData(index, value, role);
}

bool QSortFilterProxyModel_override_virtual_HeaderData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeaderData = slot;
	return true;
}

QVariant* QSortFilterProxyModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_HeaderData(section, orientation, role);
}

bool QSortFilterProxyModel_override_virtual_SetHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetHeaderData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_SetHeaderData(section, orientation, value, role);
}

bool QSortFilterProxyModel_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QSortFilterProxyModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_MimeData(indexes);
}

bool QSortFilterProxyModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

bool QSortFilterProxyModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertRows = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

bool QSortFilterProxyModel_override_virtual_InsertColumns(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertColumns = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_InsertColumns(column, count, parent);
}

bool QSortFilterProxyModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveRows = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

bool QSortFilterProxyModel_override_virtual_RemoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveColumns = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_RemoveColumns(column, count, parent);
}

bool QSortFilterProxyModel_override_virtual_FetchMore(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FetchMore = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_FetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_FetchMore(parent);
}

bool QSortFilterProxyModel_override_virtual_CanFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanFetchMore = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_CanFetchMore(parent);
}

bool QSortFilterProxyModel_override_virtual_Flags(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Flags = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Flags(index);
}

bool QSortFilterProxyModel_override_virtual_Buddy(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Buddy = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_Buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Buddy(index);
}

bool QSortFilterProxyModel_override_virtual_Match(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Match(start, role, value, hits, flags);
}

bool QSortFilterProxyModel_override_virtual_Span(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Span = slot;
	return true;
}

QSize* QSortFilterProxyModel_virtualbase_Span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Span(index);
}

bool QSortFilterProxyModel_override_virtual_Sort(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sort = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Sort(column, order);
}

bool QSortFilterProxyModel_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QSortFilterProxyModel_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_MimeTypes();
}

bool QSortFilterProxyModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_SupportedDropActions();
}

bool QSortFilterProxyModel_override_virtual_Submit(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Submit = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_Submit(void* self) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Submit();
}

bool QSortFilterProxyModel_override_virtual_Revert(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Revert = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_Revert(void* self) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Revert();
}

bool QSortFilterProxyModel_override_virtual_ItemData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QSortFilterProxyModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_ItemData(index);
}

bool QSortFilterProxyModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetItemData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_SetItemData(index, roles);
}

bool QSortFilterProxyModel_override_virtual_ClearItemData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ClearItemData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_ClearItemData(void* self, QModelIndex* index) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_ClearItemData(index);
}

bool QSortFilterProxyModel_override_virtual_CanDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanDropMimeData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_CanDropMimeData(data, action, row, column, parent);
}

bool QSortFilterProxyModel_override_virtual_SupportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDragActions = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_SupportedDragActions(const void* self) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_SupportedDragActions();
}

bool QSortFilterProxyModel_override_virtual_RoleNames(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RoleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QSortFilterProxyModel_virtualbase_RoleNames(const void* self) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_RoleNames();
}

bool QSortFilterProxyModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveRows = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QSortFilterProxyModel_override_virtual_MoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveColumns = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_MoveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QSortFilterProxyModel_override_virtual_MultiData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MultiData = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_MultiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_MultiData(index, roleDataSpan);
}

bool QSortFilterProxyModel_override_virtual_ResetInternalData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResetInternalData = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_ResetInternalData(void* self) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_ResetInternalData();
}

bool QSortFilterProxyModel_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_Event(event);
}

bool QSortFilterProxyModel_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSortFilterProxyModel_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_TimerEvent(event);
}

bool QSortFilterProxyModel_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_ChildEvent(event);
}

bool QSortFilterProxyModel_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_CustomEvent(event);
}

bool QSortFilterProxyModel_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSortFilterProxyModel_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSortFilterProxyModel_Delete(QSortFilterProxyModel* self) {
	delete self;
}

