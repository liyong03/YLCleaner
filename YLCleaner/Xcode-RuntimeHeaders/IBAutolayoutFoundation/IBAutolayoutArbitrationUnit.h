/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableSet, NSSet, NSString;

@interface IBAutolayoutArbitrationUnit : NSObject
{
    NSMutableSet *_objects;
    NSArray *_objectsOrderedBreadthFirst;
    id <IBAutolayoutInfoProvider> _layoutInfo;
    id _rootObject;
}

+ (id)topMostObjectOfClass:(Class)arg1 inLineageToArbitrationUnitRootContainingObject:(id)arg2 withLayoutInfo:(id)arg3;
+ (id)allArbitrationUnitsForLayoutInfo:(id)arg1;
+ (id)arbitrationUnitsAtAndBelowObjects:(id)arg1 withLayoutInfo:(id)arg2;
+ (id)arbitrationUnitsAtAndBelowObject:(id)arg1 withLayoutInfo:(id)arg2;
+ (id)arbitrationUnitsForObjects:(id)arg1 withLayoutInfo:(id)arg2;
+ (id)arbitrationUnitForObject:(id)arg1 withLayoutInfo:(id)arg2;
@property(readonly) NSSet *objects; // @synthesize objects=_objects;
@property(readonly) id rootObject; // @synthesize rootObject=_rootObject;
@property(readonly) id <IBAutolayoutInfoProvider> layoutInfo; // @synthesize layoutInfo=_layoutInfo;
- (void).cxx_destruct;
- (BOOL)doesChangingPriorityOfConstraint:(id)arg1 to:(double)arg2 preventClippingContentOfView:(id)arg3 inEngine:(id)arg4;
- (BOOL)doesChangingPriorityOfConstraint:(id)arg1 to:(double)arg2 preventClippingContentOfView:(id)arg3;
- (id)constraintsAffectingLayoutOfView:(id)arg1 forOrientations:(unsigned long long)arg2 inEngine:(id)arg3;
- (id)constraintsAffectingLayoutOfView:(id)arg1 forOrientations:(unsigned long long)arg2;
- (id)computeStatusFromEngine:(id)arg1;
- (id)_ambiguityStatusGroupsFromAmbiguousViewsToAmbiguityStatus:(id)arg1 engine:(id)arg2;
- (id)_ambiguousViewGroupsByViewForOrientation:(unsigned long long)arg1 ambiguousViewsToAmbiguityStatus:(id)arg2 engine:(id)arg3 originalAmbiguityStatusMasksByView:(id)arg4;
- (void)_determineAndAddAmbiguityGroupingForView:(id)arg1 relativeToView:(id)arg2 toMutableAmbiguousViewGroupsByView:(id)arg3 inOrientation:(unsigned long long)arg4 givenAmbiguityStatusMasksByViewAtBeginningOfPass:(id)arg5 engine:(id)arg6;
- (BOOL)_ambiguityWasResolvedForAtLeastOneViewInGroupOfAmbiguousViews:(id)arg1 givenOriginalAmbiguityStatusMasksByView:(id)arg2 orientationMask:(unsigned long long)arg3 engine:(id)arg4;
- (BOOL)_ambiguityWasResolvedForView:(id)arg1 inOrientation:(unsigned long long)arg2 givenOriginalAmbiguityStatusMasksByView:(id)arg3 engine:(id)arg4;
- (void)_populateMutableConstraintsToFixAmbiguityForSinglePass:(id)arg1 toFixAmbiguityForView:(id)arg2 inOrientation:(unsigned long long)arg3 shouldAddConstraintsToFixScrollableContentSize:(BOOL)arg4 engine:(id)arg5;
- (id)_ambiguityStatusGroupsFromHorizontalAmbiguousViewGroups:(id)arg1 verticalAmbiguousViewGroups:(id)arg2 ambiguousViewsToAmbiguityStatus:(id)arg3 engine:(id)arg4;
- (void)_addAmbiguityStatusGroupsToSet:(id)arg1 fromAmbiguousViewGroups:(id)arg2 andAmbiguousViewsToAmbiguityStatus:(id)arg3 forOrientationMask:(unsigned long long)arg4 engine:(id)arg5;
- (id)_findAffectingConstraintsByGroupFromAmbiguousViewGroups:(id)arg1 andAmbiguousViewsToAmbiguityStatus:(id)arg2 forOrientationMask:(unsigned long long)arg3 engine:(id)arg4;
- (void)_addConstraintsAffectingLayoutToDictionaryMappingGroupsToConstraints:(id)arg1 forAmbiguityViewGroups:(id)arg2 forOrientationMask:(unsigned long long)arg3 engine:(id)arg4;
- (id)_findContentSizePriorityChangesResolvingAmbiguityFromGroupOfAmbiguousViews:(id)arg1 forOrientationMask:(unsigned long long)arg2 engine:(id)arg3;
- (id)_findInequalityConstraintsResolvingAmbiguityFromGroupOfAmbiguousViews:(id)arg1 constraintAbstractionsAffectingLayout:(id)arg2 forOrientationMask:(unsigned long long)arg3 engine:(id)arg4;
- (id)_captureAmbiguityStatusByViewForViews:(id)arg1 fromEngine:(id)arg2;
- (id)computeStatus;
- (id)runArbitrationWithOptions:(id)arg1;
- (id)arbitrateWithOptions:(id)arg1;
- (void)_dispatchWillArbitrateMessageToObjectsInUnit;
- (void)_recursiveDispatchWillArbitrateMessageToObject:(id)arg1 parent:(id)arg2;
- (void)addObject:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSArray *objectsOrderedBreadthFirst; // @synthesize objectsOrderedBreadthFirst=_objectsOrderedBreadthFirst;
- (void)updateObjectsOrderedBreadthFirst;
- (id)firstAncestorOfObject:(id)arg1 conformingToProtocol:(id)arg2;
- (id)firstAncestorOfObject:(id)arg1 ofClass:(Class)arg2;
- (id)_firstAncestorOfObject:(id)arg1 passingPredicate:(id)arg2;
- (BOOL)containsObject:(id)arg1;
@property(readonly) NSString *debugDescription;
- (id)description;
- (id)representationWithRepresentationForObjectBlock:(id)arg1;
- (id)initWithRepresentation:(id)arg1 layoutInfo:(id)arg2 objectForRepresentationBlock:(id)arg3;
- (id)initWithRootObject:(id)arg1 layoutInfo:(id)arg2;

@end

