/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<IBAutolayoutItem>, NSString;

@interface IBLayoutGuideGenerator : NSObject
{
    NSObject<IBAutolayoutItem> *coordinateSpaceView;
    id <IBLayoutGuideGeneratorDelegate> delegate;
    NSString *fallbackContainerWidgetType;
    NSString *fallbackWidgetType;
}

@property(copy, nonatomic) NSString *fallbackContainerWidgetType; // @synthesize fallbackContainerWidgetType;
@property(copy, nonatomic) NSString *fallbackWidgetType; // @synthesize fallbackWidgetType;
@property(readonly) NSObject<IBAutolayoutItem> *coordinateSpaceView; // @synthesize coordinateSpaceView;
@property(readonly) id <IBLayoutGuideGeneratorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)generateGuidesForRootedView:(id)arg1 optionsMask:(unsigned long long)arg2;
- (id)generateGuidesForUnionedBoundingRect:(struct CGRect)arg1 ofViews:(id)arg2 targetSuperview:(id)arg3 siblings:(id)arg4 baselines:(id)arg5 knobPosition:(long long)arg6 snapDistance:(double)arg7 optionsMask:(unsigned long long)arg8;
- (void)applySelectionToUserGuideGuidesToViews:(id)arg1 targetSuperview:(id)arg2 selectionRect:(struct CGRect)arg3 knobPosition:(long long)arg4 snapDistance:(double)arg5 displayOnly:(BOOL)arg6 widgetTypeSubKey:(long long)arg7 fallbackViewSubKey:(long long)arg8 fallbackContainerSubKey:(long long)arg9 applicationState:(id)arg10;
- (void)applySelectionToSubviewGuidesToViews:(id)arg1 targetSuperview:(id)arg2 selectionRect:(struct CGRect)arg3 knobPosition:(long long)arg4 snapDistance:(double)arg5 displayOnly:(BOOL)arg6 widgetTypeSubKey:(long long)arg7 fallbackViewSubKey:(long long)arg8 fallbackContainerSubKey:(long long)arg9 applicationState:(id)arg10;
- (void)applySelectionToSuperviewGuidesToViews:(id)arg1 targetSuperview:(id)arg2 selectionRect:(struct CGRect)arg3 knobPosition:(long long)arg4 snapDistance:(double)arg5 displayOnly:(BOOL)arg6 widgetTypeSubKey:(long long)arg7 fallbackViewSubKey:(long long)arg8 fallbackContainerSubKey:(long long)arg9 applicationState:(id)arg10;
- (void)applyPreferredDesignSizeGuidesToViews:(id)arg1 targetSuperview:(id)arg2 selectionRect:(struct CGRect)arg3 knobPosition:(long long)arg4 snapDistance:(double)arg5 displayOnly:(BOOL)arg6 widgetTypeSubKey:(long long)arg7 fallbackViewSubKey:(long long)arg8 fallbackContainerSubKey:(long long)arg9 applicationState:(id)arg10;
- (void)applySelectionToSiblingGuidesToViews:(id)arg1 siblings:(id)arg2 targetSuperview:(id)arg3 selectionRect:(struct CGRect)arg4 baselines:(id)arg5 knobPosition:(long long)arg6 snapDistance:(double)arg7 displayOnly:(BOOL)arg8 widgetTypeSubKey:(long long)arg9 fallbackViewSubKey:(long long)arg10 fallbackContainerSubKey:(long long)arg11 applicationState:(id)arg12;
- (void)applySelectionToSiblingIndentationGuidesToViews:(id)arg1 sibling:(id)arg2 siblingRect:(struct CGRect)arg3 targetSuperview:(id)arg4 selectionRect:(struct CGRect)arg5 baselines:(id)arg6 knobPosition:(long long)arg7 snapDistance:(double)arg8 displayOnly:(BOOL)arg9 useVerticalGuides:(BOOL)arg10 useHorizontalGuides:(BOOL)arg11 widgetTypeSubKey:(long long)arg12 fallbackViewSubKey:(long long)arg13 fallbackContainerSubKey:(long long)arg14 siblingWidgetTypeSubKey:(long long)arg15 applicationState:(id)arg16;
- (void)applySelectionToSiblingBaselineGuidesToViews:(id)arg1 sibling:(id)arg2 siblingRect:(struct CGRect)arg3 targetSuperview:(id)arg4 selectionRect:(struct CGRect)arg5 baselines:(id)arg6 knobPosition:(long long)arg7 snapDistance:(double)arg8 displayOnly:(BOOL)arg9 useVerticalGuides:(BOOL)arg10 useHorizontalGuides:(BOOL)arg11 widgetTypeSubKey:(long long)arg12 fallbackViewSubKey:(long long)arg13 fallbackContainerSubKey:(long long)arg14 applicationState:(id)arg15;
- (void)applySelectionToSiblingEdgeGuidesToViews:(id)arg1 sibling:(id)arg2 siblingRect:(struct CGRect)arg3 targetSuperview:(id)arg4 selectionRect:(struct CGRect)arg5 baselines:(id)arg6 knobPosition:(long long)arg7 snapDistance:(double)arg8 displayOnly:(BOOL)arg9 useVerticalGuides:(BOOL)arg10 useHorizontalGuides:(BOOL)arg11 widgetTypeSubKey:(long long)arg12 fallbackViewSubKey:(long long)arg13 fallbackContainerSubKey:(long long)arg14 siblingWidgetTypeSubKey:(long long)arg15 applicationState:(id)arg16;
- (BOOL)applyMiddlingRuleToSelectionRect:(struct CGRect)arg1 rectToCenterTo:(struct CGRect)arg2 knobPosition:(long long)arg3 snapDistance:(double)arg4 displayOnly:(BOOL)arg5 applicationState:(id)arg6;
- (BOOL)applyCenteringRuleToSelectionRect:(struct CGRect)arg1 rectToCenterTo:(struct CGRect)arg2 knobPosition:(long long)arg3 snapDistance:(double)arg4 displayOnly:(BOOL)arg5 applicationState:(id)arg6;
- (BOOL)applyMiddlingRuleToSelectionRect:(struct CGRect)arg1 centeringRectForSelectionRect:(struct CGRect)arg2 rectToCenterTo:(struct CGRect)arg3 knobPosition:(long long)arg4 snapDistance:(double)arg5 displayOnly:(BOOL)arg6 applicationState:(id)arg7;
- (BOOL)applyCenteringRuleToSelectionRect:(struct CGRect)arg1 centeringRectForSelectionRect:(struct CGRect)arg2 rectToCenterTo:(struct CGRect)arg3 knobPosition:(long long)arg4 snapDistance:(double)arg5 displayOnly:(BOOL)arg6 applicationState:(id)arg7;
- (void)applySizingGuideForRect:(struct CGRect)arg1 vertical:(BOOL)arg2 originalCoordinate:(double)arg3 displayOnly:(BOOL)arg4 withTarget:(double)arg5 applicationState:(id)arg6 exclusive:(BOOL)arg7;
- (void)applyContainmentGuideForContainerEdge:(unsigned long long)arg1 ofContainerRect:(struct CGRect)arg2 toSubviewRect:(struct CGRect)arg3 originalCoordinate:(double)arg4 applicationState:(id)arg5 displayOnly:(BOOL)arg6 withTarget:(double)arg7 exclusive:(BOOL)arg8;
- (void)applyUserGuide:(id)arg1 originalCoordinate:(double)arg2 displayOnly:(BOOL)arg3 withTarget:(double)arg4 applicationState:(id)arg5 exclusive:(BOOL)arg6;
- (void)applyBaselineGuideForBaseline:(double)arg1 selectionRect:(struct CGRect)arg2 siblingRect:(struct CGRect)arg3 originalCoordinate:(double)arg4 displayOnly:(BOOL)arg5 withTarget:(double)arg6 applicationState:(id)arg7 exclusive:(BOOL)arg8;
- (void)applyCenteringGuide:(BOOL)arg1 selectionDrawingRect:(struct CGRect)arg2 realtiveRect:(struct CGRect)arg3 originalCoordinate:(double)arg4 displayOnly:(BOOL)arg5 withTarget:(double)arg6 applicationState:(id)arg7 exclusive:(BOOL)arg8;
- (void)applyIndentationGuideFromEdge:(unsigned long long)arg1 ofSelectionRect:(struct CGRect)arg2 toEdge:(unsigned long long)arg3 ofSiblingRect:(struct CGRect)arg4 originalCoordinate:(double)arg5 displayOnly:(BOOL)arg6 withTarget:(double)arg7 applicationState:(id)arg8 exclusive:(BOOL)arg9;
- (void)applyEdgeToEdgeGuideFromEdge:(unsigned long long)arg1 ofSelectionRect:(struct CGRect)arg2 toEdge:(unsigned long long)arg3 ofSiblingRect:(struct CGRect)arg4 originalCoordinate:(double)arg5 displayOnly:(BOOL)arg6 withTarget:(double)arg7 applicationState:(id)arg8 exclusive:(BOOL)arg9;
- (void)addLayoutGuideMatchForAttribute:(unsigned long long)arg1 constant:(id)arg2 applicationState:(id)arg3;
- (void)addLayoutGuideMatchForAttribute:(unsigned long long)arg1 relativeTo:(id)arg2 relativeType:(unsigned long long)arg3 constant:(id)arg4 applicationState:(id)arg5;
- (id)effectiveLayoutConstantWithValue:(double)arg1;
- (id)layoutConstantWithValue:(double)arg1;
- (id)layoutSymbolicConstantWithValue:(double)arg1;
- (long long)userInterfaceLayoutDirectionToUseForGeneratingLayoutGuideMatches;
- (void)applyGuideFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 originalCoordinate:(double)arg3 displayOnly:(BOOL)arg4 withTarget:(double)arg5 applicationState:(id)arg6 exclusive:(BOOL)arg7;
- (BOOL)guideWouldBeSuggestion:(double)arg1 originalCoordinate:(double)arg2 applicationState:(id)arg3;
- (CDStruct_c519178c)insetFromContainer:(id)arg1 toViews:(id)arg2;
- (struct CGRect)boundingLayoutFrameForViewsNotNecessarilyInSuperview:(id)arg1 inCoordinateSpaceOfTargetSuperview:(id)arg2;
- (id)siblingsForGeneratingGuidesForViews:(id)arg1;
- (struct CGRect)boundingLayoutFrameForViews:(id)arg1;
- (BOOL)isEdge:(int)arg1 ofAncestor:(id)arg2 fixedDuringResizingOfSubviews:(id)arg3 fromKnob:(long long)arg4;
- (id)effectiveAncestorViewForEdgeMovementsRelativeToAncestorView:(id)arg1;
- (BOOL)isEdge:(int)arg1 ofSubview:(id)arg2 fixedInPositionOnWindowDuringResizeFromKnob:(long long)arg3;
- (BOOL)isDistanceFromSubviewEdge:(int)arg1 ofSubview:(id)arg2 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(long long)arg3;
- (BOOL)shouldViewHaveContainedSubviewGuides:(id)arg1;
- (id)baselinesForViews:(id)arg1 withSuggestedLayoutFrame:(struct CGRect)arg2 andKnobPosition:(long long)arg3;
- (BOOL)isViewVerticallyResizable:(id)arg1;
- (BOOL)isViewHorizontallyResizable:(id)arg1;
- (struct CGRect)layoutBoundsOfView:(id)arg1;
- (double)baselineOfView:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfBaselinesOfView:(id)arg1;
- (struct CGSize)preferredSizeForView:(id)arg1 suggestedSize:(struct CGSize)arg2 suggestedWidth:(char *)arg3 suggestedHeight:(char *)arg4 scaleAxesIndependently:(char *)arg5;
- (struct CGRect)boundsForLayoutBounds:(struct CGRect)arg1 ofView:(id)arg2;
- (CDStruct_c519178c)layoutInsetOfView:(id)arg1;
- (CDStruct_c519178c)insetToDesignableContentAreaForView:(id)arg1;
- (id)containerWidgetTypeForView:(id)arg1;
- (id)widgetTypeForView:(id)arg1;
- (id)legalViewsForUserGuidesInView:(id)arg1;
- (id)userLayoutGuides;
- (id)layoutRuleManager;
- (id)initWithCoordinateSpaceView:(id)arg1 delegate:(id)arg2;

@end

