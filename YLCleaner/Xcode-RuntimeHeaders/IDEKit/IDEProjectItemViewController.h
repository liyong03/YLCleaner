/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "IDECapsuleViewController-Protocol.h"
#import "IDECapsuleViewDelegate-Protocol.h"
#import "IDEFlightCheckListViewDelegate-Protocol.h"
#import "IDEProjectItemStatusViewDelegate-Protocol.h"
#import "IDEProjectItemViewDelegate-Protocol.h"

@class IDEProjectItemHeaderView, IDEProjectItemModel, NSDictionary, NSImage, NSMutableArray, NSString, NSView;

@interface IDEProjectItemViewController : IDEViewController <IDEProjectItemViewDelegate, IDEFlightCheckListViewDelegate, IDEProjectItemStatusViewDelegate, IDECapsuleViewController, IDECapsuleViewDelegate>
{
    IDEProjectItemModel *_model;
    BOOL _programmaticallyUpdatingEnabled;
    NSMutableArray *_observationTokens;
    IDEProjectItemHeaderView *_headerView;
    id <IDEPortalInfoDelegate> _portalInfoDelegate;
    NSView *_editorView;
    NSDictionary *_cachedUserEnteredInfo;
}

+ (id)keyPathsForValuesAffectingEnabled;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(copy, nonatomic) NSDictionary *cachedUserEnteredInfo; // @synthesize cachedUserEnteredInfo=_cachedUserEnteredInfo;
@property(retain, nonatomic) NSView *editorView; // @synthesize editorView=_editorView;
@property(readonly, nonatomic) id <IDEPortalInfoDelegate> portalInfoDelegate; // @synthesize portalInfoDelegate=_portalInfoDelegate;
@property(retain, nonatomic) IDEProjectItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)resolveIssuesForFlightCheckListView:(id)arg1;
- (void)resolveIssuesForProjectItemStatusView:(id)arg1;
- (void)capsuleView:(id)arg1 wasDisclosed:(BOOL)arg2;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL disclosedByDefault;
- (id)headerContentViewForCapsuleView:(id)arg1;
- (id)capsuleViewBackgroundColor:(id)arg1;
@property(readonly) NSString *titleForDisplay;
- (void)_presentTeamPickerIfNecessaryAndPerformBlock:(id)arg1;
- (void)_resolveFlightChecks;
- (id)_headerView;
@property(nonatomic, getter=isDisclosed) BOOL disclosed;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (double)preferredWidthForProjectItemContentView:(id)arg1;
@property(readonly, nonatomic) id <IDEProjectItem> item;
- (id)projectItemView;
- (void)primitiveInvalidate;
- (void)portalFlightCheckStatusChanged;
- (void)flightCheckFailedChanged:(id)arg1;
- (void)enabledChanged;
- (void)onOffSwitchDidChange;
- (void)updateEnabledAndContentView:(BOOL)arg1;
- (void)updateContentView;
- (id)projectItemStatusViewWithMessage:(id)arg1 failedFlightChecks:(id)arg2;
- (void)loadView;
- (id)initUsingDefaultNib;
- (id)initWithEditorItemModel:(id)arg1 portalInfoDelegate:(id)arg2;

// Remaining properties
@property BOOL canAddItems;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canRemove;
@property BOOL canRemoveItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canUndisclose;
@property(readonly) NSString *footerLabel;
@property(readonly) NSImage *icon;

@end

