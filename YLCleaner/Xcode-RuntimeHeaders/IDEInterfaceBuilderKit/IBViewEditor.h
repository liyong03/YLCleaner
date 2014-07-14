/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBEditor.h>

#import "NSPopoverDelegate-Protocol.h"

@class DVTDelayedInvocation, DVTObservingToken, IBAutolayoutConstraintAdditionValidationState, IBCancellationToken, IBLayoutConstraint, IBMutableIdentityDictionary, IBViewTracker, NSArray, NSDictionary, NSMutableDictionary, NSPopover, NSSet, NSValue;

@interface IBViewEditor : IBEditor <NSPopoverDelegate>
{
    DVTDelayedInvocation *_constraintUpdatingInvocation;
    long long _constraintHidingCount;
    unsigned long long bandSelectionFramesDrawn;
    id <DVTInvalidation> constraintDrawingToken;
    DVTDelayedInvocation *mouseRestValidator;
    id mouseMovedObservationToken;
    IBLayoutConstraint *lastMousedOverConstraint;
    IBLayoutConstraint *nextSelectableConstraint;
    struct CGPoint lastMouseMovedPoint;
    struct CGRect bandSelectionRect;
    BOOL reguardSiblingsIngoredForDragGuides;
    NSSet *siblingsIngoredForDragGuides;
    long long pasteOffsetType;
    NSValue *nextPasteTarget;
    unsigned long long dragAndDropGuideDisplayToken;
    IBAutolayoutConstraintAdditionValidationState *_constraintAdditionState;
    NSMutableDictionary *_constraintBadgeImageCachesByTintColor;
    IBCancellationToken *_documentStatusObservingToken;
    NSSet *_drawingOptionNotificationTokens;
    NSPopover *_currentConstraintEditingPopover;
    NSSet *_viewsInvolvedWithSelectedConstraints;
    NSArray *_currentConstraintDrawableGuideLines;
    NSDictionary *_constraintToConstraintDrawablesMap;
    DVTObservingToken *_kvoObservingTokenForDocument;
    NSArray *_currentConstraintDrawables;
    NSArray *_orderedConstraintsToDraw;
    NSSet *_viewsToDrawConstraintsFor;
    NSSet *_selectedConstraints;
    IBMutableIdentityDictionary *_observingTokensByView;
    IBViewTracker *activeTracker;
}

+ (id)arbitrationOptionsForFrameDecideThenConstraintAddition;
+ (id)arbitrationOptionsForPureConstraintAddition;
+ (void)setUpgradesRedundantConstraintsToUserConstraintsForFrameDecideThenConstraintAddition:(BOOL)arg1;
+ (BOOL)upgradesRedundantConstraintsToUserConstraintsForFrameDecideThenConstraintAddition;
+ (void)setUpgradesRedundantConstraintsToUserConstraintsForPureConstraintAddition:(BOOL)arg1;
+ (BOOL)upgradesRedundantConstraintsToUserConstraintsForPureConstraintAddition;
+ (void)resetCursorRectsForObject:(id)arg1 inFrameController:(id)arg2;
+ (struct CGRect)rectForDefaultCursorForChildView:(id)arg1 ofEditedObject:(id)arg2 inFrameController:(id)arg3;
+ (void)setEnforcesCurrentSizesWhenAligningViews:(BOOL)arg1;
+ (BOOL)enforcesCurrentSizesWhenAligningViews;
+ (id)keyPathsForInvalidatingConstraints;
+ (struct CGSize)knobSize;
+ (id)lockedKnobImage;
+ (id)inactiveKnobImage;
+ (id)knobImage;
+ (Class)ibDropTargetResolverClass;
@property(retain, nonatomic) IBViewTracker *activeTracker; // @synthesize activeTracker;
@property(copy) NSValue *nextPasteTarget; // @synthesize nextPasteTarget;
@property(copy) NSSet *selectedConstraints; // @synthesize selectedConstraints=_selectedConstraints;
@property(copy, nonatomic) NSSet *viewsToDrawConstraintsFor; // @synthesize viewsToDrawConstraintsFor=_viewsToDrawConstraintsFor;
@property(copy) NSArray *orderedConstraintsToDraw; // @synthesize orderedConstraintsToDraw=_orderedConstraintsToDraw;
@property(copy, nonatomic) NSArray *currentConstraintDrawables; // @synthesize currentConstraintDrawables=_currentConstraintDrawables;
@property(retain) DVTObservingToken *kvoObservingTokenForDocument; // @synthesize kvoObservingTokenForDocument=_kvoObservingTokenForDocument;
@property(copy) NSDictionary *constraintToConstraintDrawablesMap; // @synthesize constraintToConstraintDrawablesMap=_constraintToConstraintDrawablesMap;
@property(copy) NSArray *currentConstraintDrawableGuideLines; // @synthesize currentConstraintDrawableGuideLines=_currentConstraintDrawableGuideLines;
@property(copy) NSSet *viewsInvolvedWithSelectedConstraints; // @synthesize viewsInvolvedWithSelectedConstraints=_viewsInvolvedWithSelectedConstraints;
- (void).cxx_destruct;
- (void)debugMenuItemMakeSelectedConstraintsUserDefined:(id)arg1;
- (void)insertEqualHeightsConstraint:(id)arg1;
- (void)insertEqualWidthsConstraint:(id)arg1;
- (void)_insertEqualSizeConstraintForAttribute:(unsigned long long)arg1 constraintAdditionState:(id)arg2;
- (void)addConstraintsRequiringFrameDecision:(id)arg1 options:(id)arg2 frameDecisionBlock:(id)arg3;
- (void)insertBottomSpacingToSuperviewConstraint:(id)arg1;
- (void)insertTopSpacingToSuperviewConstraint:(id)arg1;
- (void)insertTrailingSpacingToSuperviewConstraint:(id)arg1;
- (void)insertLeadingSpacingToSuperviewConstraint:(id)arg1;
- (void)_insertSpacingToSuperviewConstraintForAttribute:(unsigned long long)arg1 constraintAdditionState:(id)arg2;
- (void)insertVerticalSpacingConstraint:(id)arg1;
- (void)insertHorizontalSpacingConstraint:(id)arg1;
- (void)_insertSpacingConstraintForOrientation:(unsigned long long)arg1 constraintAdditionState:(id)arg2;
- (void)insertHeightConstraint:(id)arg1;
- (void)insertWidthConstraint:(id)arg1;
- (void)_insertAbsoluteConstraintForAttribute:(unsigned long long)arg1 constraintAdditionState:(id)arg2;
- (id)objectsForSelectingAll;
- (void)didClose;
- (void)didOpen;
- (void)stopObservingOnDeactivation;
- (void)startObservingOnActivation;
- (id)connectionSourceForEvent:(id)arg1;
- (id)constraintAtPointInOverlayView:(struct CGPoint)arg1;
- (id)constraintDrawableAtPointInOverlayView:(struct CGPoint)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)_openConstraintEditingPopoverForConstraint:(id)arg1 withEvent:(id)arg2;
- (void)_closeCurrentConstraintEditingPopover;
- (void)selectConstraintsIfPossible:(id)arg1 withEvent:(id)arg2;
- (void)selectConstraintsIfPossible:(id)arg1;
- (void)selectConstraintsIfPossible:(id)arg1 withSelectionCallbackBlock:(id)arg2;
- (id)determineConstraintsToSelectAndWarnIfAnyConstraintWasRemovedFromDocument:(id)arg1;
- (void)didResizeEditedObjectOrAncestorEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(long long)arg3;
- (void)willResizeEditedObjectOrAncestorEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(long long)arg3;
- (void)noteAncestor:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)updateConstraintVisibilityBasedUponSelection;
- (void)addEffectiveViewsInvolvedInConstraintToDraw:(id)arg1 toCollection:(id)arg2;
- (void)clearAllConstraintDrawing;
- (void)updateConstraintsForViews;
- (void)willDrawConstriants;
- (void)pushOrderedConstraintAbstractionsToDraw:(id)arg1;
- (void)didChangeShowingInvolvedViewsForSelectedConstraints:(id)arg1;
- (void)didChangeShowingIntrinsicSizeConstraints:(id)arg1;
- (void)didChangeShowingConstraints:(id)arg1;
- (void)didChangeShowingResizeKnobs:(id)arg1;
- (void)invalidateConstraintsForViews;
- (id)constraintsToDrawForView:(id)arg1;
- (BOOL)constraintItemIsLegitimateItemForDrawing:(id)arg1 relativeToItem:(id)arg2;
- (void)invalidateDrawingAreaForCurrentDrawablesAndGuideLines;
- (struct CGRect)drawingAreaForDrawableBadge:(id)arg1;
- (struct CGRect)drawingAreaForDrawable:(id)arg1;
- (void)updateConstraintDrawablesAndGuideLinesForOrderedConstraintAbstractions:(id)arg1;
- (id)constraintDrawableOrderingComparator;
- (void)drawSelectionHighlightForObject:(id)arg1;
- (void)drawConstraintItem:(id)arg1;
- (void)determineConstraintDrawableGuideLines:(CDStruct_f6143a38 *)arg1 maxGuideLineCount:(unsigned long long)arg2 forDrawables:(id)arg3 givenMovedDrawableIndexes:(id)arg4;
- (id)moveDrawablesToAvoidOverlapping:(id)arg1 givenMoveableDrawableIndexes:(id)arg2 movingToAvoidDrawablesAtIndexes:(id)arg3 insettingToAvoidDrawablesAtIndexes:(id)arg4;
- (BOOL)attemptToInsetDrawable:(id)arg1 toAvoidDrawable:(id)arg2;
- (BOOL)isDrawable:(id)arg1 intersectingDrawable:(id)arg2;
- (void)drawGuideLine:(CDStruct_f6143a38)arg1;
- (void)drawViewEditorDrawable:(id)arg1;
- (id)effectiveShadowForConstraintDrawable:(id)arg1;
- (id)effectiveStrokeColorForConstraintDrawable:(id)arg1;
- (void)drawRelativeConstraintAlignmentLineWithLine:(CDStruct_f6143a38)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5 edgeBias:(id)arg6;
- (void)drawLimitedSpaceDualTBeamWithDrawable:(id)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5;
- (void)drawLimitedSpaceConnectionWithLine:(CDStruct_f6143a38)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5;
- (void)drawConstraintStraightLine:(CDStruct_f6143a38)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5 edgeBias:(id)arg6;
- (void)drawIBeamWithLine:(CDStruct_f6143a38)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5;
- (id)dashedBezierPathLineForLine:(CDStruct_f6143a38)arg1 withThickness:(double)arg2 onDashLength:(double)arg3 offDashLength:(double)arg4 phase:(double)arg5 edgeBias:(id)arg6;
- (void)drawConstraints;
- (void)drawTrackingKnobs;
- (id)viewForClippingToWhenDrawingSelectionKnobsForObject:(id)arg1;
- (void)drawMisplacedViewIndicator;
- (struct CGRect)misplacedViewIndicatorRectForView:(id)arg1 returningIsMisplaced:(char *)arg2;
- (void)drawBandSelection;
- (CDStruct_c519178c)decorationInsetForChild:(id)arg1;
- (void)drawKnobsForView:(id)arg1;
- (id)effectiveKnobImageForObject:(id)arg1;
- (id)installSelectionDrawingHandlers;
- (BOOL)interceptEvent:(id)arg1;
- (BOOL)isDocumentObjectCurrentlySelectable:(id)arg1;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(long long)arg2;
- (BOOL)interceptMouseDragged:(id)arg1;
- (BOOL)child:(id)arg1 shouldBeSelectedOnMouseDraggedWithEvent:(id)arg2;
- (BOOL)interceptDeadClicks:(id)arg1;
- (BOOL)interceptDecoratorActionEvent:(id)arg1;
- (BOOL)interceptResizingEvent:(id)arg1;
- (id)selectableEventInterceptingLayoutConstraintAtPoint:(struct CGPoint)arg1;
- (void)moveSelectedViewsWithKeyEvent:(id)arg1;
- (struct CGSize)directionForKeyEvent:(id)arg1;
- (id)frameToWindowTransformForPasteboardViews:(id)arg1;
- (void)bandSelect;
- (void)resizeChild:(id)arg1 fromKnob:(long long)arg2 withEvent:(id)arg3;
- (id)viewForTrackingObject:(id)arg1;
- (BOOL)shouldResizeChild:(id *)arg1 fromKnob:(long long *)arg2 inEvent:(id)arg3;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (BOOL)areKnobsLockedForObject:(id)arg1;
- (BOOL)wasChildSelectedBeforeClick:(id)arg1;
- (void)validateMouseRested:(id)arg1;
- (void)mouseMovedToScreenLocation:(struct CGPoint)arg1 withButtonStates:(long long)arg2;
- (void)refreshMouseOverConstraintState;
- (void)setConstraintSelectableUpdatingDelay:(double)arg1;
- (void)resetCursorRects;
- (CDStruct_648df176)activeKnobRectsForObject:(id)arg1;
- (id)objectsInRect:(struct CGRect)arg1;
- (void)editorCanvasFrameDidCompleteLayout;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (BOOL)isUndoingOrRedoing;
- (void)updatePasteInsertionPointFromMouseDown:(id)arg1;
- (void)updatePasteInsertionPointFromSelection;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)guideContextForDraggingInfo:(id)arg1;
- (id)calculateFramesForViews:(id)arg1 withDraggingInfo:(id)arg2;
- (id)draggedObjectStateToUseForGuidingFromDragInfo:(id)arg1;
- (void)dragSelectedViewsWithMouseDown:(id)arg1 andMouseDragged:(id)arg2;
- (unsigned long long)dragOperationForDraggingViews:(id)arg1 withMouseDown:(id)arg2 andMouseDragged:(id)arg3;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)initialDragImageState:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (id)draggedImageStateForDraggingInfo:(id)arg1 forOrderedIdentifiedViews:(id)arg2 withName:(id)arg3;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (BOOL)selectsNextObjectAfterDeletionFromRelationship:(id)arg1;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (void)selectionOwner:(id)arg1 willSelect:(id)arg2 andDeselect:(id)arg3;
- (CDStruct_c519178c)canvasAlignmentInsetForEditorFrame;
- (BOOL)canSizeSelectionToFit;
- (void)sizeSelectionToFit:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_constraintAdditionStateByUpdatingCurrentSelection;
- (void)performCopy:(id)arg1;
- (void)performCut:(id)arg1;
- (void)addVerticalGuide:(id)arg1;
- (void)addHorizontalGuide:(id)arg1;
- (struct CGRect)rectForGuide;
- (void)makeGroupFromSelectionAction:(id)arg1;
- (void)alignEdgeTop:(id)arg1;
- (void)alignEdgeBottom:(id)arg1;
- (void)alignEdgeRight:(id)arg1;
- (void)alignEdgeLeft:(id)arg1;
- (void)alignMiddleInContainer:(id)arg1;
- (void)alignCenterInContainer:(id)arg1;
- (void)alignMidY:(id)arg1;
- (void)alignMidX:(id)arg1;
- (void)alignBaselines:(id)arg1;
- (void)sendForward:(id)arg1;
- (void)sendToFront:(id)arg1;
- (void)sendBackward:(id)arg1;
- (void)sendToBack:(id)arg1;
- (void)alignViews:(id)arg1 withConstraints:(id)arg2;
- (void)didDeactivate;
- (void)didActivate;
- (void)_configureDrawable:(id)arg1 atIndex:(unsigned long long)arg2 forAbstraction:(id)arg3 representingConstraint:(id)arg4 autolayoutStatus:(id)arg5;
- (void)_configureNonBadgeAutolayoutStatusForDrawable:(id)arg1 atIndex:(unsigned long long)arg2 forAbstraction:(id)arg3 representingConstraint:(id)arg4 isConflicting:(BOOL)arg5 isAmbiguous:(BOOL)arg6 isMisplaced:(BOOL)arg7 misplacementDelta:(double)arg8;
- (void)_configureBasePropertiesForDrawable:(id)arg1 forAbstraction:(id)arg2 representingConstraint:(id)arg3;
- (void)_insetDrawableToAvoidResizeKnobsIfNecessary:(id)arg1;
- (void)_configureBadgeForDrawable:(id)arg1 atIndex:(unsigned long long)arg2 forAbstraction:(id)arg3 representingConstraint:(id)arg4 isConflicting:(BOOL)arg5 isAmbiguous:(BOOL)arg6 isMisplaced:(BOOL)arg7 misplacementDelta:(double)arg8;
- (id)_effectiveDrawableTintColorForDrawable:(id)arg1 atIndex:(unsigned long long)arg2 forAbstraction:(id)arg3 isConflicting:(BOOL)arg4 isAmbiguous:(BOOL)arg5 isMisplaced:(BOOL)arg6;
- (id)constraintDrawablesForConstraintAbstraction:(id)arg1 autolayoutStatus:(id)arg2;
- (id)_badgeImageForMisplacedConstraint:(id)arg1 constantDelta:(double)arg2 returningBadgeSize:(struct CGSize *)arg3 badgeInset:(CDStruct_c519178c *)arg4;
- (id)_badgeImageForConflictingConstraint:(id)arg1 returningBadgeSize:(struct CGSize *)arg2 badgeInset:(CDStruct_c519178c *)arg3;
- (id)_constraintBadgeImageForLabel:(id)arg1 tintColor:(id)arg2 returningBadgeSize:(struct CGSize *)arg3 badgeInset:(CDStruct_c519178c *)arg4;
- (id)_scalableBaseConstraintBadgeImageWithTintColor:(id)arg1 returningBadgeSize:(struct CGSize *)arg2 badgeInset:(CDStruct_c519178c *)arg3 supportedScaleFactors:(id *)arg4;
- (id)_baseConstraintBadgeImageShadowReturningShadowInset:(CDStruct_c519178c *)arg1;
- (id)relativeConstraintDrawableForConstraint:(id)arg1;
- (id)edgeBiasForLayoutAttribute:(unsigned long long)arg1;
- (id)absoluteConstraintDrawableForConstraint:(id)arg1 item:(id)arg2 attribute:(unsigned long long)arg3;
- (CDStruct_f6143a38)_adjustConstraintDrawableLineForIllegalStates:(CDStruct_f6143a38)arg1 forConstraint:(id)arg2 attribute:(unsigned long long)arg3;
- (struct CGRect)rectIncludingBadgeForDrawable:(id)arg1;
- (struct CGRect)rectForDrawableBadge:(id)arg1;
- (struct CGRect)rectForDrawingOverlayForConstraintItem:(id)arg1;
- (struct CGRect)rectForDrawingConstraintItem:(id)arg1;
- (struct CGRect)rectForGuideLine:(CDStruct_f6143a38)arg1;
- (id)hitRectsForConstraint:(id)arg1 inCoordinateSpaceOfView:(id)arg2;
- (struct CGRect)hitRectForDrawable:(id)arg1;
- (struct CGRect)rectForDrawable:(id)arg1;
- (struct CGRect)rectForLimitedSpaceDualTBeamForDrawable:(id)arg1;
- (struct CGRect)rectForConstraintLineWithLine:(CDStruct_f6143a38)arg1 lineThickness:(double)arg2 edgeBias:(id)arg3;
- (struct CGRect)rectForIBeamWithLine:(CDStruct_f6143a38)arg1;
- (struct CGRect)layoutRectInOverlayCoordinatesForConstraintItem:(id)arg1;
- (void)setNextSelectableConstraint:(id)arg1;
- (BOOL)wantsToShowSelectionIndicators;
- (BOOL)forbidsShowingSelectionIndicators;
- (BOOL)constraintIsSelectable:(id)arg1;
- (BOOL)constraintIsVisible:(id)arg1;
- (id)constraintUpdatingInvocation;
- (void)withConstraintDrawingHidden:(id)arg1;
- (void)finishHidingConstraintDrawing;
- (void)beginHidingConstraintDrawing;
- (void)updateConstraintHidingCount:(long long)arg1;
@property(readonly, nonatomic) BOOL hidesConstraints;
- (void)stopObservingDocument;
- (void)startObservingDocument;
- (void)stopObservingView:(id)arg1 forKeyPaths:(id)arg2 andNotifications:(id)arg3;
- (void)startObservingView:(id)arg1 forKeyPaths:(id)arg2 andNotifications:(id)arg3;
@property(readonly) IBMutableIdentityDictionary *observingTokensByView; // @synthesize observingTokensByView=_observingTokensByView;
- (id)equalSizeBadge;
- (id)greaterThanOrEqualToBadge;
- (id)lessThanOrEqualToBadge;
- (id)involvedViewOverlayChiselColor;
- (id)involvedViewOverlayInnerPathGradient;
- (id)involvedViewOverlayOuterStrokeColor;
- (id)selectableConstraintShadow;
- (id)selectedConstraintShadow;
- (id)measurementDrawingHandler;
- (BOOL)isFrameLockedForView:(id)arg1;
- (id)trackerForChild:(id)arg1 withView:(id)arg2 fromKnob:(long long)arg3;
- (void)setBandSelectionRect:(struct CGRect)arg1;
- (struct CGRect)bandSelectionRect;
- (id)selectedViewsInDesignableContainer;
- (BOOL)isViewInDesignableContainer:(id)arg1;
- (id)orderedSelectedViews;
- (id)selectedViews;
- (id)childViews;
- (id)layoutManager;
- (id)viewEditorFrameController;
- (id)lastMouseDown;
- (id)viewPasteboardType;
- (id)ibDesignableContentView;
- (id)viewToTrackForFrameResizing;
- (id)editedView;
- (id)editorView;
- (id)initWithEditedObject:(id)arg1 parentEditor:(id)arg2 frameController:(id)arg3;

@end

