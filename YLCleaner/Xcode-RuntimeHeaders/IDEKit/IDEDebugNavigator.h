/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDENavigator.h>

#import "NSMenuDelegate-Protocol.h"

@class DVTBorderedView, DVTGradientImageButton, DVTMapTable, DVTNotificationToken, DVTObservingToken, IDENavigatorDataCell, IDENavigatorOutlineView, NSArray, NSImage, NSMutableArray, NSMutableDictionary, NSSlider;

@interface IDEDebugNavigator : IDENavigator <NSMenuDelegate>
{
    IDENavigatorOutlineView *_outlineView;
    DVTGradientImageButton *_showOnlyInterestingContentButton;
    DVTGradientImageButton *_autoCompressMaxButton;
    NSSlider *_autoCompressSlider;
    DVTGradientImageButton *_autoCompressMinButton;
    IDENavigatorDataCell *_regularCell;
    DVTMapTable *_processHeaderCellForContentDelegateTable;
    NSMutableArray *_cachedNavigableDebugItems;
    DVTMapTable *_contentDelegateForIdentifierTable;
    unsigned long long _compressionValue;
    unsigned long long _maxCompressionValue;
    NSImage *_showOnlyInterestingContentImage;
    DVTObservingToken *_rootNavigableChildItemsObservingToken;
    DVTObservingToken *_allFinishedObservingToken;
    BOOL _isInUserDirectSelection;
    BOOL _showOnlyInterestingContent;
    BOOL _isInOutlineViewProcessPendingChanges;
    NSMutableDictionary *_cachedStateDictionary;
    DVTMapTable *_uiControllerToItemMap;
    NSArray *_archivableNavigableItemsToSelect;
    DVTNotificationToken *_trayHideObservingToken;
    DVTNotificationToken *_trayShowObservingToken;
    NSMutableArray *_processesWithClosedGauges;
    DVTBorderedView *_glassBarBorderedView;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)createProcessActionPopUpMenuItemWithPopUpImage:(id)arg1 menuItemImage:(id)arg2 action:(SEL)arg3;
+ (id)_transientStateForKey:(id)arg1;
+ (void)registerDelegateClassForStatePersistence:(Class)arg1;
@property __weak DVTBorderedView *glassBarBorderedView; // @synthesize glassBarBorderedView=_glassBarBorderedView;
@property(readonly) BOOL isInUserDirectSelection; // @synthesize isInUserDirectSelection=_isInUserDirectSelection;
@property(nonatomic) BOOL showOnlyInterestingContent; // @synthesize showOnlyInterestingContent=_showOnlyInterestingContent;
@property(readonly) IDENavigatorOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (void)_resetFilterIconsAndToolTips;
- (void)_checkToolTip:(id *)arg1 shouldShow:(char *)arg2 selector:(SEL)arg3 forContentDelegate:(id)arg4;
- (BOOL)_uiShouldReact;
- (void)_navigableItemCoordinatorProcessPendingChanges;
- (BOOL)_writeRepresentedObjects:(id)arg1 toPasteboard:(id)arg2;
- (void)_updateForNewCompressionValue;
- (void)_handleLaunchSessionsChanged;
- (id)_indexesOfNavigableItemsToSelect;
- (void)_openSelectedNavigableItemsWithEventType:(unsigned long long)arg1;
- (void)_changeToNewLaunchSessionBeforeOpeningSelectedItem:(id)arg1;
- (id)_representedObjectForSelectedRow;
- (void)_recordSelectedRowsForRestoration;
- (void)_recordSelectedArchivableNavigableItems:(id)arg1;
- (void)contentDelegateFinished:(id)arg1;
- (id)processActionPopUpCellForContentDelegate:(id)arg1;
- (void)recordPersistenceStateChanges:(id)arg1;
- (void)restorePreviousTransientStates;
- (id)transientStates;
- (id)expandedItemTokens;
- (unsigned long long)maxCompressionValue;
- (unsigned long long)compressionValue;
- (void)restoreExpandedAndSelectionStates;
- (void)restoreExpandedStates;
- (void)restoreSelectedStatesAndScrollToSelection:(BOOL)arg1;
- (void)scrollToSelection;
- (void)_scrollToIndexes:(id)arg1;
- (id)_navigableItemArchivableRepresentationsForNavigableItems:(id)arg1;
- (void)refreshForTrayAreaChanges;
- (void)selectNavigableItems:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStoredCompressionValue:(id)arg1;
- (id)storedCompressionValue;
- (id)_compressionLevelAsStringForMessageTracerReport;
- (id)_contentDelegateForRightClickedItems;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldCollapseTrayForItem:(id)arg2;
- (id)_processNameForItem:(id)arg1;
- (BOOL)_shouldExpandItemAsResultOfOptionClick:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)_handleUserDirectDeletion;
- (BOOL)_handleUserDirectMoveUpOrDown:(BOOL)arg1;
- (BOOL)_handleUserDirectShiftKeyMoveUpOrDown:(BOOL)arg1;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)_wasActionPopUpCellClickedAtCurrentPoint;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)_wasGaugeCellClickedForCell:(id)arg1 item:(id)arg2;
- (BOOL)_wasActionPopUpCellClickedForCell:(id)arg1 item:(id)arg2;
- (BOOL)_isPoint:(struct CGPoint)arg1 inGaugeButtonCellForCell:(id)arg2 forItem:(id)arg3;
- (BOOL)_isPoint:(struct CGPoint)arg1 inActionPopUpCellForCell:(id)arg2 forItem:(id)arg3;
- (id)trayCellsForHeaderItem:(id)arg1;
- (BOOL)debuggingAdditionUIControllerWantsTrayItems:(id)arg1;
- (BOOL)_needsTrayAreaForProcessModelObject:(id)arg1;
- (void)_addDebuggingAdditionTrayCellsForModelObject:(id)arg1 intoArray:(id)arg2;
- (id)debuggingUIControllerForItem:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)_processHeaderCellWithDebugNavigableModelObject:(id)arg1 contentDelegate:(id)arg2;
- (id)_regularCell;
- (void)outlineViewItemDidCollapseTray:(id)arg1;
- (void)outlineViewItemDidExpandTray:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (id)_expandedItemTokens;
- (id)_tokenForPersistingRepresentedObject:(id)arg1;
- (id)_tokenForExpandedRepresentedObject:(id)arg1;
@property(readonly) NSArray *navigableDebugItems;
- (BOOL)delegateFirstResponder;
- (id)domainIdentifier;
- (id)_selectedRepresentedObjects;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (void)revealCurrentItem;
- (void)autoCompressStackFrames:(id)arg1;

@end

