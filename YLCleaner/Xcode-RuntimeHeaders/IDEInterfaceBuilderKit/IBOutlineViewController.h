/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEViewController.h"

#import "DVTOutlineViewDelegate-Protocol.h"
#import "IBEndPointProvider-Protocol.h"
#import "IBHighlightProvider-Protocol.h"
#import "IBHybridStructureSelectionProvider-Protocol.h"
#import "IBOutlineViewDelegate-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"

@class DVTBorderedView, DVTDelayedInvocation, DVTObservingToken, IBAbstractDocumentEditor, IBCancellationToken, IBDocument, IBMutableIdentityDictionary, IBOutlineView, IBOutlineViewControllerItem, IBOutlineViewImageAndTextCell, IDEUtilityPlaceholderView, NSArray, NSMutableSet, NSPredicate, NSSet, NSString;

@interface IBOutlineViewController : IDEViewController <DVTOutlineViewDelegate, IBEndPointProvider, IBHybridStructureSelectionProvider, IBHighlightProvider, NSOutlineViewDataSource, NSOutlineViewDelegate, NSUserInterfaceValidations, IBOutlineViewDelegate>
{
    IBOutlineView *_outlineView;
    DVTBorderedView *_borderedView;
    NSString *_filterString;
    NSPredicate *_filterPredicate;
    IBOutlineViewControllerItem *_rootItem;
    IBOutlineViewControllerItem *_placeholdersGroupItem;
    IBMutableIdentityDictionary *_memberWrapperToItemMap;
    NSArray *_topLevelGroupsOtherThanPlaceholders;
    NSSet *_observedMemberWrappers;
    DVTObservingToken *_kvoFirstResponderToken;
    DVTObservingToken *_kvoDocumentAllowsIllegalStatesToken;
    IBCancellationToken *_documentStatusObservingToken;
    DVTDelayedInvocation *_syncDelayedInvocation;
    IBOutlineViewImageAndTextCell *_prototypeCell;
    IBOutlineViewImageAndTextCell *_prototypeGroupCell;
    NSMutableSet *_pendingObjectsToRefreshAutolayoutStatus;
    DVTDelayedInvocation *_autolayoutStatusDelayedInvocation;
    BOOL _allowDirectDropInOutlineView;
    NSSet *_selectedMembers;
    long long _ignoreOutlineViewSelectionUpdates;
    IDEUtilityPlaceholderView *_placeholderView;
    IBMutableIdentityDictionary *_unfilteredExpansionState;
    BOOL _drawsWithActiveLook;
    BOOL _wrapperTreeValid;
    IBAbstractDocumentEditor *_documentEditor;
    id <IBOutlineViewControllerDelegate> _delegate;
}

+ (id)wrapperKeyPathsToObserve;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property __weak id <IBOutlineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IBOutlineViewControllerItem *rootItem; // @synthesize rootItem=_rootItem;
@property(retain) IBOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(copy) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) IDEUtilityPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(copy) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(nonatomic) __weak IBAbstractDocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
- (void).cxx_destruct;
- (void)cut:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)delete:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)pasteExcludingConnections:(id)arg1;
- (void)paste:(id)arg1;
- (void)performPasteExcludingConnections:(BOOL)arg1;
- (void)invalidateWrapperTree;
- (id)childGroupsOfMember:(id)arg1 atIndex:(long long)arg2;
- (struct _NSRange)rangeOfChildGroup:(id)arg1 ofObject:(id)arg2;
- (id)rangesForChildGroupsOfObject:(id)arg1;
- (id)tellObject:(id)arg1 toAcceptPasteboard:(id)arg2 withContext:(id)arg3 excludingConnections:(BOOL)arg4 selectNewChildren:(BOOL)arg5;
- (void)copy:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (id)objectPasteboardType;
- (id)objectsToDuplicate;
- (BOOL)selectionIsDuplicable;
- (id)duplicableSelectedObjects;
- (id)objectsToCopy;
- (BOOL)selectionIsCopyable;
- (id)copyableSelectedObjects;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)canMoveAllObjects:(id)arg1;
- (void)beginOldSchoolConnectionWithInitialEvent:(id)arg1;
- (void)showConnectionsPanelForInitialEvent:(id)arg1;
- (BOOL)shouldFilterConstraintChoicesBasedUponAngleOfLine;
- (void)indicateConnectionSuccessForTarget:(id)arg1;
- (id)showTargetIdentifierForEndPoint:(id)arg1;
- (id)endPointsFromBackToFrontAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4 connectionHandler:(id *)arg5;
- (void)revealSpringLoadedObjectAndIndicateSuccess:(id)arg1;
- (id)springLoadedObjectInfoAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4;
@property(readonly) NSString *stateSavingIdentifier;
- (void)willResignAsSelectionProviderForDocumentEditor:(id)arg1;
- (void)didBecomeSelectionProviderForDocumentEditor:(id)arg1;
- (BOOL)documentEditor:(id)arg1 canSelectMembers:(id)arg2;
- (void)documentEditor:(id)arg1 deselectMembers:(id)arg2;
- (void)documentEditor:(id)arg1 pullSelection:(id)arg2;
- (void)documentEditor:(id)arg1 selectMembers:(id)arg2;
@property(readonly, nonatomic) BOOL onlySupportsDocumentObjectMembers;
@property(readonly) BOOL wantsFilterField;
- (id)documentEditor:(id)arg1 highlightObjects:(id)arg2 showLabels:(BOOL)arg3 successfulObjects:(id *)arg4;
- (double)highlightPriorityInDocumentEditor:(id)arg1;
- (void)synchronizeOutlineViewSelection;
- (void)selectMembers:(id)arg1;
- (void)pushRootGroupState;
- (BOOL)shouldShowEmptyOutlinePlaceholder;
- (id)emptyOutlinePlaceholderString;
- (void)pushSelectionToOutlineView;
- (void)recursivelyExpandItem:(id)arg1;
- (void)outlineViewWasDoubleClicked:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)didSelectSingleSelectionSelectableVirtualItem:(id)arg1;
- (id)singleSelectedSelectableVirtualOutlineViewControllerItem;
- (id)readSelectedMembersFromOutlineView;
- (void)whileIgnoringOutlineViewSelectionUpdates:(id)arg1;
- (BOOL)isIgnoreOutlineViewSelectionUpdates;
- (id)concreteSelectedGroups;
- (id)concreteSelectedConnections;
- (id)concreteSelectedObjects;
- (id)concreteSelectedMembers;
- (id)orderedSelectedMembers;
- (BOOL)isMemberBuiltInPlaceholder:(id)arg1;
- (void)outlineView:(id)arg1 handleRightOrControlLeftDrag:(id)arg2;
- (void)outlineView:(id)arg1 handleRightOrControlLeftClick:(id)arg2;
- (void)outlineView:(id)arg1 didHandleMouseDown:(id)arg2;
- (void)outlineView:(id)arg1 handleMouseDown:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 shouldMouseHoverForTableColumn:(id)arg2 row:(long long)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)wantsBoldGroupHeaderFont;
- (id)prototypeGroupCell;
- (id)prototypeCell;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)_refreshAutolayoutStatus;
- (id)autolayoutStatusMemberWrapperForTopLevelObject:(id)arg1;
- (void)_invalidateAutolayoutStatusForObject:(id)arg1;
- (BOOL)_shouldHaveAutolayoutIssuesIndicatorForItem:(id)arg1;
- (id)_aggregateStatusAtAndBelowItem:(id)arg1;
- (id)strictItemForMemberWrapper:(id)arg1;
- (id)itemForMemberWrapper:(id)arg1;
- (void)syncWrapperTreeWithDocument;
- (void)buildWrapperTreeCreatingRootIfNecessary;
- (BOOL)memberParticipatesInItemTree:(id)arg1;
- (id)itemTreeFromMemberWrapperTree:(id)arg1 explicitItemClass:(Class)arg2;
- (Class)outlineViewControllerItemClassForMemberWrapper:(id)arg1;
- (void)topLevelObjectsChanged;
- (BOOL)waitingForSynchronization;
- (void)setObservedMemberWrappers:(id)arg1;
- (void)stopObservingMemberWrappers:(id)arg1;
- (void)startObservingMemberWrappers:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateFilterForItemTree:(id)arg1;
- (void)filterStringChanged;
- (void)restoreOutlineExpansionStateIfNeededForFiltering;
- (void)stashOutlineExpansionStateIfNeededForFiltering;
- (BOOL)isFiltering;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)owningEditorInstalled;
- (void)viewDidInstall;
@property(readonly, nonatomic) NSString *selectionProviderSwitcherTitle;
- (void)loadView;
@property(readonly) IBDocument *document;
- (void)registerWithDocumentEditor;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

