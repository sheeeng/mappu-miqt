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
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractproxymodel.h>
#include "gen_qabstractproxymodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractProxyModel_SetSourceModel(void*, intptr_t, QAbstractItemModel*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_MapToSource(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_MapFromSource(void*, intptr_t, QModelIndex*);
QItemSelection* miqt_exec_callback_QAbstractProxyModel_MapSelectionToSource(void*, intptr_t, QItemSelection*);
QItemSelection* miqt_exec_callback_QAbstractProxyModel_MapSelectionFromSource(void*, intptr_t, QItemSelection*);
bool miqt_exec_callback_QAbstractProxyModel_Submit(void*, intptr_t);
void miqt_exec_callback_QAbstractProxyModel_Revert(void*, intptr_t);
QVariant* miqt_exec_callback_QAbstractProxyModel_Data(void*, intptr_t, QModelIndex*, int);
QVariant* miqt_exec_callback_QAbstractProxyModel_HeaderData(void*, intptr_t, int, int, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractProxyModel_ItemData(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractProxyModel_Flags(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_SetData(void*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QAbstractProxyModel_SetItemData(void*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QAbstractProxyModel_SetHeaderData(void*, intptr_t, int, int, QVariant*, int);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_Buddy(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_CanFetchMore(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractProxyModel_FetchMore(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractProxyModel_Sort(void*, intptr_t, int, int);
QSize* miqt_exec_callback_QAbstractProxyModel_Span(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_HasChildren(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_Sibling(void*, intptr_t, int, int, QModelIndex*);
QMimeData* miqt_exec_callback_QAbstractProxyModel_MimeData(void*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractProxyModel_CanDropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_DropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractProxyModel_MimeTypes(void*, intptr_t);
int miqt_exec_callback_QAbstractProxyModel_SupportedDragActions(void*, intptr_t);
int miqt_exec_callback_QAbstractProxyModel_SupportedDropActions(void*, intptr_t);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_Index(void*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_Parent(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractProxyModel_RowCount(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractProxyModel_ColumnCount(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_InsertRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_InsertColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_RemoveRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_RemoveColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_MoveRows(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractProxyModel_MoveColumns(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractProxyModel_Match(void*, intptr_t, QModelIndex*, int, QVariant*, int, int);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractProxyModel_RoleNames(void*, intptr_t);
bool miqt_exec_callback_QAbstractProxyModel_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractProxyModel_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractProxyModel_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractProxyModel_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractProxyModel_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractProxyModel_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractProxyModel_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractProxyModel final : public QAbstractProxyModel {
public:

	MiqtVirtualQAbstractProxyModel(): QAbstractProxyModel() {};
	MiqtVirtualQAbstractProxyModel(QObject* parent): QAbstractProxyModel(parent) {};

	virtual ~MiqtVirtualQAbstractProxyModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSourceModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (handle__SetSourceModel == 0) {
			QAbstractProxyModel::setSourceModel(sourceModel);
			return;
		}
		
		QAbstractItemModel* sigval1 = sourceModel;

		miqt_exec_callback_QAbstractProxyModel_SetSourceModel(this, handle__SetSourceModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSourceModel(QAbstractItemModel* sourceModel) {

		QAbstractProxyModel::setSourceModel(sourceModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (handle__MapToSource == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_MapToSource(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__MapToSource, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (handle__MapFromSource == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& sourceIndex_ret = sourceIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_MapFromSource(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__MapFromSource, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapSelectionToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
		if (handle__MapSelectionToSource == 0) {
			return QAbstractProxyModel::mapSelectionToSource(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QAbstractProxyModel_MapSelectionToSource(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__MapSelectionToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_MapSelectionToSource(QItemSelection* selection) const {

		return new QItemSelection(QAbstractProxyModel::mapSelectionToSource(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapSelectionFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
		if (handle__MapSelectionFromSource == 0) {
			return QAbstractProxyModel::mapSelectionFromSource(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QAbstractProxyModel_MapSelectionFromSource(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__MapSelectionFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_MapSelectionFromSource(QItemSelection* selection) const {

		return new QItemSelection(QAbstractProxyModel::mapSelectionFromSource(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__Submit == 0) {
			return QAbstractProxyModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_Submit(this, handle__Submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Submit() {

		return QAbstractProxyModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__Revert == 0) {
			QAbstractProxyModel::revert();
			return;
		}
		

		miqt_exec_callback_QAbstractProxyModel_Revert(this, handle__Revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Revert() {

		QAbstractProxyModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
		if (handle__Data == 0) {
			return QAbstractProxyModel::data(proxyIndex, role);
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractProxyModel_Data(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(QModelIndex* proxyIndex, int role) const {

		return new QVariant(QAbstractProxyModel::data(*proxyIndex, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__HeaderData == 0) {
			return QAbstractProxyModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractProxyModel_HeaderData(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__HeaderData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_HeaderData(int section, int orientation, int role) const {

		return new QVariant(QAbstractProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QAbstractProxyModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_ItemData(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__ItemData, sigval1);
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

		QMap<int, QVariant> _ret = QAbstractProxyModel::itemData(*index);
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
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QAbstractProxyModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_Flags(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QAbstractProxyModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QAbstractProxyModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QAbstractProxyModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__SetItemData == 0) {
			return QAbstractProxyModel::setItemData(index, roles);
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

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

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

		return QAbstractProxyModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__SetHeaderData == 0) {
			return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_SetHeaderData(this, handle__SetHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetHeaderData(int section, int orientation, QVariant* value, int role) {

		return QAbstractProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__Buddy == 0) {
			return QAbstractProxyModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_Buddy(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__Buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Buddy(QModelIndex* index) const {

		return new QModelIndex(QAbstractProxyModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__CanFetchMore == 0) {
			return QAbstractProxyModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_CanFetchMore(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__CanFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanFetchMore(QModelIndex* parent) const {

		return QAbstractProxyModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__FetchMore == 0) {
			QAbstractProxyModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QAbstractProxyModel_FetchMore(this, handle__FetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FetchMore(QModelIndex* parent) {

		QAbstractProxyModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QAbstractProxyModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QAbstractProxyModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QAbstractProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__Span == 0) {
			return QAbstractProxyModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QAbstractProxyModel_Span(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__Span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Span(QModelIndex* index) const {

		return new QSize(QAbstractProxyModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__HasChildren == 0) {
			return QAbstractProxyModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_HasChildren(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__HasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasChildren(QModelIndex* parent) const {

		return QAbstractProxyModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QAbstractProxyModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_Sibling(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QAbstractProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__MimeData == 0) {
			return QAbstractProxyModel::mimeData(indexes);
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

		QMimeData* callback_return_value = miqt_exec_callback_QAbstractProxyModel_MimeData(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__MimeData, sigval1);

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

		return QAbstractProxyModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__CanDropMimeData == 0) {
			return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_CanDropMimeData(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__CanDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QAbstractProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
			return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QAbstractProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QAbstractProxyModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_MimeTypes(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__MimeTypes);
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

		QStringList _ret = QAbstractProxyModel::mimeTypes();
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
	intptr_t handle__SupportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__SupportedDragActions == 0) {
			return QAbstractProxyModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_SupportedDragActions(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__SupportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDragActions() const {

		Qt::DropActions _ret = QAbstractProxyModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QAbstractProxyModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_SupportedDropActions(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QAbstractProxyModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_Index(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__Parent == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_Parent(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__Parent, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_RowCount(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ColumnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__ColumnCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_ColumnCount(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__ColumnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QAbstractProxyModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QAbstractProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__InsertColumns == 0) {
			return QAbstractProxyModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_InsertColumns(this, handle__InsertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertColumns(int column, int count, QModelIndex* parent) {

		return QAbstractProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QAbstractProxyModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QAbstractProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__RemoveColumns == 0) {
			return QAbstractProxyModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_RemoveColumns(this, handle__RemoveColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveColumns(int column, int count, QModelIndex* parent) {

		return QAbstractProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
			return QAbstractProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveColumns == 0) {
			return QAbstractProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_MoveColumns(this, handle__MoveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__Match == 0) {
			return QAbstractProxyModel::match(start, role, value, hits, flags);
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_Match(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__Match, sigval1, sigval2, sigval3, sigval4, sigval5);
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

		QModelIndexList _ret = QAbstractProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
	intptr_t handle__RoleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__RoleNames == 0) {
			return QAbstractProxyModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_RoleNames(const_cast<MiqtVirtualQAbstractProxyModel*>(this), handle__RoleNames);
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

		QHash<int, QByteArray> _ret = QAbstractProxyModel::roleNames();
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
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractProxyModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractProxyModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractProxyModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractProxyModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractProxyModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractProxyModel_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractProxyModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractProxyModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractProxyModel_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractProxyModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractProxyModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractProxyModel_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractProxyModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractProxyModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractProxyModel_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractProxyModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractProxyModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractProxyModel_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractProxyModel::disconnectNotify(*signal);

	}

};

QAbstractProxyModel* QAbstractProxyModel_new() {
	return new MiqtVirtualQAbstractProxyModel();
}

QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent) {
	return new MiqtVirtualQAbstractProxyModel(parent);
}

void QAbstractProxyModel_virtbase(QAbstractProxyModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QAbstractProxyModel_MetaObject(const QAbstractProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractProxyModel_Metacast(QAbstractProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractProxyModel_Tr(const char* s) {
	QString _ret = QAbstractProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_TrUtf8(const char* s) {
	QString _ret = QAbstractProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self) {
	return self->sourceModel();
}

QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QItemSelection* QAbstractProxyModel_MapSelectionToSource(const QAbstractProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionToSource(*selection));
}

QItemSelection* QAbstractProxyModel_MapSelectionFromSource(const QAbstractProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionFromSource(*selection));
}

bool QAbstractProxyModel_Submit(QAbstractProxyModel* self) {
	return self->submit();
}

void QAbstractProxyModel_Revert(QAbstractProxyModel* self) {
	self->revert();
}

QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role) {
	return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
}

QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = self->itemData(*index);
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

int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self) {
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

int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self) {
	Qt::DropActions _ret = self->supportedDragActions();
	return static_cast<int>(_ret);
}

int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_string QAbstractProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractProxyModel_override_virtual_SetSourceModel(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSourceModel = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_SetSourceModel(void* self, QAbstractItemModel* sourceModel) {
	( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_SetSourceModel(sourceModel);
}

bool QAbstractProxyModel_override_virtual_MapToSource(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapToSource = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_MapFromSource(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapFromSource = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_MapSelectionToSource(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapSelectionToSource = slot;
	return true;
}

QItemSelection* QAbstractProxyModel_virtualbase_MapSelectionToSource(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_MapSelectionToSource(selection);
}

bool QAbstractProxyModel_override_virtual_MapSelectionFromSource(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapSelectionFromSource = slot;
	return true;
}

QItemSelection* QAbstractProxyModel_virtualbase_MapSelectionFromSource(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_MapSelectionFromSource(selection);
}

bool QAbstractProxyModel_override_virtual_Submit(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Submit = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_Submit(void* self) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Submit();
}

bool QAbstractProxyModel_override_virtual_Revert(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Revert = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_Revert(void* self) {
	( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Revert();
}

bool QAbstractProxyModel_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

QVariant* QAbstractProxyModel_virtualbase_Data(const void* self, QModelIndex* proxyIndex, int role) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Data(proxyIndex, role);
}

bool QAbstractProxyModel_override_virtual_HeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeaderData = slot;
	return true;
}

QVariant* QAbstractProxyModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_HeaderData(section, orientation, role);
}

bool QAbstractProxyModel_override_virtual_ItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_ItemData(index);
}

bool QAbstractProxyModel_override_virtual_Flags(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Flags = slot;
	return true;
}

int QAbstractProxyModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Flags(index);
}

bool QAbstractProxyModel_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_SetData(index, value, role);
}

bool QAbstractProxyModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetItemData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_SetItemData(index, roles);
}

bool QAbstractProxyModel_override_virtual_SetHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetHeaderData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_SetHeaderData(section, orientation, value, role);
}

bool QAbstractProxyModel_override_virtual_Buddy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Buddy = slot;
	return true;
}

QModelIndex* QAbstractProxyModel_virtualbase_Buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Buddy(index);
}

bool QAbstractProxyModel_override_virtual_CanFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanFetchMore = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_CanFetchMore(parent);
}

bool QAbstractProxyModel_override_virtual_FetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FetchMore = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_FetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_FetchMore(parent);
}

bool QAbstractProxyModel_override_virtual_Sort(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sort = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Sort(column, order);
}

bool QAbstractProxyModel_override_virtual_Span(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Span = slot;
	return true;
}

QSize* QAbstractProxyModel_virtualbase_Span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Span(index);
}

bool QAbstractProxyModel_override_virtual_HasChildren(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasChildren = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_HasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_HasChildren(parent);
}

bool QAbstractProxyModel_override_virtual_Sibling(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sibling = slot;
	return true;
}

QModelIndex* QAbstractProxyModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

bool QAbstractProxyModel_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QAbstractProxyModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_MimeData(indexes);
}

bool QAbstractProxyModel_override_virtual_CanDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanDropMimeData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_CanDropMimeData(data, action, row, column, parent);
}

bool QAbstractProxyModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

bool QAbstractProxyModel_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_MimeTypes();
}

bool QAbstractProxyModel_override_virtual_SupportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDragActions = slot;
	return true;
}

int QAbstractProxyModel_virtualbase_SupportedDragActions(const void* self) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_SupportedDragActions();
}

bool QAbstractProxyModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QAbstractProxyModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_SupportedDropActions();
}

bool QAbstractProxyModel_override_virtual_Index(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Index = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_Parent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Parent = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_RowCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowCount = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_ColumnCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ColumnCount = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertRows = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

bool QAbstractProxyModel_override_virtual_InsertColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertColumns = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_InsertColumns(column, count, parent);
}

bool QAbstractProxyModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveRows = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

bool QAbstractProxyModel_override_virtual_RemoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveColumns = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_RemoveColumns(column, count, parent);
}

bool QAbstractProxyModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveRows = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QAbstractProxyModel_override_virtual_MoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveColumns = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_MoveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QAbstractProxyModel_override_virtual_Match(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Match(start, role, value, hits, flags);
}

bool QAbstractProxyModel_override_virtual_RoleNames(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RoleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_virtualbase_RoleNames(const void* self) {
	return ( (const MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_RoleNames();
}

bool QAbstractProxyModel_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_Event(event);
}

bool QAbstractProxyModel_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAbstractProxyModel_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_TimerEvent(event);
}

bool QAbstractProxyModel_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_ChildEvent(event);
}

bool QAbstractProxyModel_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_CustomEvent(event);
}

bool QAbstractProxyModel_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAbstractProxyModel_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractProxyModel*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractProxyModel_Delete(QAbstractProxyModel* self) {
	delete self;
}

