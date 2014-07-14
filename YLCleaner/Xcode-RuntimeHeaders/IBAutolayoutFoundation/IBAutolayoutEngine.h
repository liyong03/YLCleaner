/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IBAutolayoutArbitrationUnit, IBLayoutConstraint, IBMutableIdentityDictionary, NSArray, NSISEngine, NSMapTable, NSMutableSet, NSObject<IBAutolayoutItem>, NSSet;

@interface IBAutolayoutEngine : NSObject
{
    IBMutableIdentityDictionary *representedConstraintToRealConstraintMap;
    IBMutableIdentityDictionary *realConstraintToRepresentedConstraintMap;
    NSMutableSet *customLayoutViewsThatStartedWithAmbiguousLayout;
    IBLayoutConstraint *systemRequiredBorderViewHeightConstraint;
    IBLayoutConstraint *systemRequiredBorderViewWidthConstraint;
    IBMutableIdentityDictionary *representedViewToRealViewMap;
    IBMutableIdentityDictionary *realViewToRepresentedViewMap;
    NSSet *additionalRepresentedConstraintsRequiredToCopyViewHierarchy;
    NSSet *realConstraintsForViewsRequiringAdditionalEngineConstraints;
    NSMapTable *constraintContainingViewsByView;
    unsigned long long options;
    NSObject<IBAutolayoutItem> *topLevelRealView;
    IBMutableIdentityDictionary *_spacerItemsByTag;
    unsigned long long _nextSpacerItemTag;
    NSMutableSet *_mutuallyExclusiveConstraintsRemovedDuringBootstrapping;
    BOOL haveUpdatedTopLevelSystemRequiredConstraintsForTheFirstTime;
    BOOL allowsResizingTopLevelView;
    IBAutolayoutArbitrationUnit *arbitrationUnit;
    id <IBAutolayoutInfoProvider> layoutInfo;
}

+ (void)setGlobalAssertsOnRuntimeUnsatisfiableConstraints:(BOOL)arg1;
+ (BOOL)globalAssertsOnRuntimeUnsatisfiableConstraints;
+ (id)layoutConstraintEngineForViewHierarchyOfView:(id)arg1 layoutInfo:(id)arg2 options:(unsigned long long)arg3;
@property(readonly, nonatomic) NSSet *mutuallyExclusiveConstraintsRemovedDuringBootstrapping; // @synthesize mutuallyExclusiveConstraintsRemovedDuringBootstrapping=_mutuallyExclusiveConstraintsRemovedDuringBootstrapping;
@property(readonly) NSObject<IBAutolayoutItem> *topMostView; // @synthesize topMostView=topLevelRealView;
@property(readonly) unsigned long long options; // @synthesize options;
@property(readonly) IBAutolayoutArbitrationUnit *arbitrationUnit; // @synthesize arbitrationUnit;
- (void).cxx_destruct;
- (void)exerciseAmbiguityInLayoutForView:(id)arg1;
- (void)_catchExceptionsToWorkaround13752578During:(id)arg1;
- (id)constraintAbstractionsAffectingLayoutOfView:(id)arg1 forOrientation:(unsigned long long)arg2;
- (void)_populateConstraintAbstractions:(id)arg1 fromRepresentedConstraint:(id)arg2;
- (id)constraintAbstractionForRepresentedConstraint:(id)arg1 referencesDocumentViews:(BOOL)arg2;
- (void)setContentHuggingPriority:(float)arg1 onRepresentationOfView:(id)arg2 forOrientation:(unsigned long long)arg3;
- (void)setContentCompressionResistancePriority:(float)arg1 onRepresentationOfView:(id)arg2 forOrientation:(unsigned long long)arg3;
- (double)evaluatedConstantOfConstraint:(id)arg1;
- (void)withAutomaticOptimizationDisabled:(id)arg1;
- (BOOL)constraintIsRedundant:(id)arg1;
- (id)candidateRedundantConstraints;
@property(readonly) NSArray *candidateRedundantRepresentedConstraints;
- (void)setConstant:(double)arg1 ofConstraint:(id)arg2;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1 toView:(id)arg2;
- (id)constraintAbstractionsMakingSystemOverConstrainedByAddingConstraint:(id)arg1 toView:(id)arg2;
- (id)constraintsMakingSystemOverConstrainedByAddingConstraint:(id)arg1 toView:(id)arg2;
- (id)_constraintOrConstraintAbstractionsMakingSystemOverConstrainedByAddingConstraint:(id)arg1 toView:(id)arg2 constraintsOrAbstractionsForRepresentedConstraintsBlock:(id)arg3;
- (BOOL)shouldIgnoreRepresentedConstraint:(id)arg1;
- (void)updateTopLevelSystemRequiredConstraints;
- (void)removeSystemRequiredWidthAndHeightConstraintsOnRepresentedWindowBorderView;
- (void)addSystemRequiredWidthAndHeightConstraintsToRepresentedWindowBorderView;
@property(readonly) NSObject<IBAutolayoutItem> *viewForApplyingSystemRequiredConstraints;
- (void)addExplicitConstraintsForViewsRequiringAdditionalEngineConstraints;
- (void)iterateViewsAndGenerateRepresentedConstraintsAndMapToRealConstraints;
- (void)performEngineBootstrappingConstraintAdditionOperationForAddingConstraint:(id)arg1;
- (void)continuouslyPerformEngineBootstrappingOperationWithName:(id)arg1 untilSuccessWhileTrackingUnsatisfiableConstraintsDuring:(id)arg2 withUnsatisfiableConstraintRemovedHandler:(void)arg3;
- (BOOL)tryToAddConstraint:(id)arg1 toRepresentedView:(id)arg2 roundingAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (id)addRepresentedConstraintForRealConstraint:(id)arg1;
- (id)representedConstraintBySubstitutingRealViewsForRepresentedViewsOfConstraint:(id)arg1;
- (id)_backingLayoutItemForSpacer:(unsigned long long)arg1;
- (void)removeSpacerItemWithTag:(unsigned long long)arg1;
- (unsigned long long)addSpacerItemMatchingCurrentLayoutFrameOfView:(id)arg1 generatingConstraintsForAttributes:(unsigned long long *)arg2 attributeCount:(unsigned long long)arg3;
- (unsigned long long)addSpacerItemInContainer:(id)arg1 initialLayoutFrame:(struct CGRect)arg2 generatingConstraintsForAttributes:(unsigned long long *)arg3 attributeCount:(unsigned long long)arg4;
- (id)_spacerViewConstraintGenerationBlockForAttributes:(SEL)arg1 attributeCount:(unsigned long long *)arg2;
- (unsigned long long)_addSpacerItemWithRepresentedSuperview:(id)arg1 initialLayoutFrame:(struct CGRect)arg2 constraintGenerationBlock:(id)arg3;
- (void)invalidateConstraintsForRepresentedViews:(id)arg1;
- (void)updateConstraintsIfNeeded;
- (void)layoutIfNeeded;
@property(readonly) Class spacerItemClass;
- (id)debugDescription;
@property BOOL shouldIntegralize;
@property(readonly) NSISEngine *internalEngine;
@property(readonly) BOOL allowsResizingTopLevelView;
- (void)setAllowsResizingTopLevelView:(BOOL)arg1;
@property(readonly) NSSet *allRealConstraintsIncludingThoseRemovedDuringBootstrapping;
@property(readonly) NSSet *allRealConstraintsCurrentlyInEngine;
- (id)constraintsMakingSystemOverConstrainedBySettingLayoutFrame:(struct CGRect)arg1 ofView:(id)arg2;
- (struct CGSize)intrinsicContentSizeForView:(id)arg1;
- (BOOL)hasMismatchedFrameOrBoundsSizeForView:(id)arg1 expectedFrameOrBounds:(struct CGRect *)arg2 actualFrameOrBounds:(struct CGRect *)arg3;
- (struct CGRect)layoutBoundsForView:(id)arg1;
- (struct CGRect)layoutFrameForView:(id)arg1 inCoordinateSpaceOfView:(id)arg2;
- (struct CGRect)layoutFrameForView:(id)arg1;
- (BOOL)ambiguityIsAccurateForView:(id)arg1;
- (unsigned long long)ambiguityStatusForView:(id)arg1;
- (unsigned long long)ambiguityStatusForRepresentedView:(id)arg1;
- (BOOL)hasAmbiguousLayoutForView:(id)arg1;
- (id)realConstraintsFromCollectionOfRepresentedConstraints:(id)arg1;
- (BOOL)hasRepresentationOfConstraint:(id)arg1;
- (void)setRealConstraint:(id)arg1 forRepresentedConstraint:(id)arg2;
- (id)realConstraintForRepresentedConstraint:(id)arg1;
- (void)setRepresentedConstraint:(id)arg1 forRealConstraint:(id)arg2;
- (id)representedConstraintForRealConstraint:(id)arg1;
- (BOOL)hasRepresentationOfView:(id)arg1;
- (void)mapLayoutEngineView:(id)arg1 toCanvasView:(id)arg2;
- (id)realViewForRepresentedView:(id)arg1;
- (id)representedViewForRealView:(id)arg1;
- (id)allRepresentedViewsInEngine;
- (void)_recursivelyAddSubviewsOfView:(id)arg1 toMutableArray:(id)arg2;
@property(readonly) NSArray *realViewsOrderedBreadthFirst;
@property(readonly) id <IBAutolayoutInfoProvider> layoutInfo; // @synthesize layoutInfo;
- (void)performInternalEngineModificationsAndAssertOnUnsatisfiableConstraintsIfNeededDuring:(id)arg1 withUnsatisfiableConstraintsHandler:(void)arg2;
- (BOOL)localAssertsOnRuntimeUnsatisfiableConstraints;
- (id)prepareViewHierarchyAndReturnAddedRepresentedConstraintsForRepresentedViews;
- (id)initWithArbitrationUnit:(id)arg1 options:(unsigned long long)arg2;

@end

