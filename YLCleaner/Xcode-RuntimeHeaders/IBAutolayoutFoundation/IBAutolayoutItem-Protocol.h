/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSObject<IBAutolayoutItem>, NSSet;

@protocol IBAutolayoutItem <NSObject>
@property(readonly, nonatomic) BOOL ibIgnoreNearestNeighborProximityThreshold;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) id ibWindowForArbitration;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
@property(nonatomic) BOOL ibExternalTranslatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) NSArray *ibExternalReferencingConstraints;
@property(readonly, nonatomic) NSArray *ibExternalConstraints;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(nonatomic) struct CGRect ibLayoutFrame;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;
@property(readonly, nonatomic) NSArray *constraints;
@property(readonly, nonatomic) long long ibBaselineCount;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic, getter=isFlipped) BOOL flipped;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) CDStruct_c519178c ibLayoutInset;
@property(nonatomic) BOOL translatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;
@property(readonly, nonatomic) id window;
@property(readonly, nonatomic) NSArray *subviews;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
- (void)ibDidCreateRuntimeConstraint:(id)arg1 referencingItem:(id)arg2 context:(id)arg3;
- (id)ibEffectiveItemForRuntimeConstraintAdjustingConstant:(double *)arg1 attribute:(unsigned long long *)arg2 orConstraintClassIfNeeded:(Class *)arg3 context:(id)arg4;
- (unsigned long long)ibAmbiguityStatusInEngine:(id)arg1;
- (void)ibPrimitiveRemoveConstraintsFromExternalConstraints:(id)arg1;
- (void)ibPrimitiveAddConstraintsToExternalConstraints:(id)arg1;
- (BOOL)ibShouldIgnoreScrollableContentHeightAmbiguity;
- (BOOL)ibShouldIgnoreScrollableContentWidthAmbiguity;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (struct CGRect)ibLayoutFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
- (struct CGRect)ibBoundsForLayoutBounds:(struct CGRect)arg1;
- (void)exerciseAmbiguityInLayout;
- (id)constraintsAffectingLayoutForOrientation:(unsigned long long)arg1;
- (BOOL)ib_hasAmbiguousLayout;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentCompressionResistancePriorityForOrientation:(unsigned long long)arg1;
- (void)setContentHuggingPriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentHuggingPriorityForOrientation:(unsigned long long)arg1;
- (void)removeConstraints:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraints:(id)arg1;
- (void)addConstraint:(id)arg1;
- (long long)convertKnobPosition:(long long)arg1 fromView:(id)arg2;
- (long long)convertKnobPosition:(long long)arg1 toView:(id)arg2;
- (int)convertRectEdge:(int)arg1 fromView:(id)arg2;
- (int)convertRectEdge:(int)arg1 toView:(id)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 fromView:(id)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(id)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (id)ibEffectiveRootCoordinateSystemForConversions;
- (id)ibEffectiveWindowForConversions;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1;
- (BOOL)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(long long)arg2;
- (double)ibBaselineAtIndex:(long long)arg1;
- (void)addSubview:(id)arg1;
- (void)removeFromSuperview;
- (id)initAsEngineSpacerItemWithInitialLayoutFrame:(struct CGRect)arg1;
@end

