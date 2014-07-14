/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

#import "IBWindowContentBorderThicknessTarget-Protocol.h"

@class IBNinePartImage, NSImage, NSShadow, NSString, NSToolbar, NSView, NSWindow;

@interface IBNSWindowEditorView : DVTLayoutView_ML <IBWindowContentBorderThicknessTarget>
{
    NSWindow *windowToMimic;
    int contentResizingMode;
    NSShadow *windowShadow;
    NSView *contentView;
    NSView *contentViewContainer;
    NSImage *cachedWindowImage;
    IBNinePartImage *cachedShadowImage;
    BOOL _liveResizing;
}

+ (id)windowViewForWindow:(id)arg1 andContentView:(id)arg2;
@property BOOL liveResizing; // @synthesize liveResizing=_liveResizing;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawEverything;
- (void)renderWindowIntoCurrentContextAtLocation:(struct CGPoint)arg1;
- (void)maskRoundedBottomCorners;
- (void)invalidateCachedWindowImage:(BOOL)arg1 invalidateShadow:(BOOL)arg2;
- (id)borderView;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGSize)windowFrameSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeForWindowContentSize:(struct CGSize)arg1;
- (struct CGSize)sizeForWindowFrameSize:(struct CGSize)arg1;
- (struct CGPoint)convertPointToMimickedWindow:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromMimickedWindow:(struct CGPoint)arg1;
- (struct CGSize)convertSizeToMimickedWindow:(struct CGSize)arg1;
- (struct CGSize)convertSizeFromMimickedWindow:(struct CGSize)arg1;
- (struct CGRect)convertRectToMimickedWindow:(struct CGRect)arg1;
- (struct CGRect)convertRectFromMimickedWindow:(struct CGRect)arg1;
- (CDStruct_d2b197d1)convertInsetToMimickedWindow:(CDStruct_d2b197d1)arg1;
- (CDStruct_d2b197d1)convertInsetFromMimickedWindow:(CDStruct_d2b197d1)arg1;
- (id)transformToMimickedWindow;
- (id)transformFromMimickedWindow;
- (void)contentViewFrameDidChange:(id)arg1;
- (CDStruct_d2b197d1)insetToContentView;
- (CDStruct_d2b197d1)insetFromShadowToWindow;
- (struct CGRect)mimickedToolbarFrame;
- (struct CGRect)rectOfToolbarButton;
@property(retain) NSToolbar *toolbar;
- (BOOL)autorecalculatesContentBorderThicknessForEdge:(unsigned long long)arg1;
- (void)setAutorecalculatesContentBorderThickness:(BOOL)arg1 forEdge:(unsigned long long)arg2;
- (double)contentBorderThicknessForEdge:(unsigned long long)arg1;
- (void)setContentBorderThickness:(double)arg1 forEdge:(unsigned long long)arg2;
@property unsigned long long collectionBehavior;
@property BOOL showsToolbarButton;
@property(copy) NSString *title;
@property BOOL hasShadow;
@property int contentResizingMode;
@property(retain) NSView *contentView;
- (id)windowShadowImage;
- (id)windowShadow;
@property(retain) NSWindow *windowToMimic;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

@end

