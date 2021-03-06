/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSRulerView.h"

@class NSColor, NSFont, NSTimer, XCTextAnnotation;

@interface XCTextSidebarView : NSRulerView
{
    BOOL _showsSidebar;
    double _sidebarWidth;
    double _sidebarInvalidStripWidth;
    BOOL _showsFoldbar;
    double _foldbarWidth;
    NSColor *_sidebarBackgroundColor;
    NSColor *_foldbarBackgroundColor;
    BOOL _drawsLineNumbers;
    NSFont *_lineNumberFont;
    NSColor *_lineNumberTextColor;
    XCTextAnnotation *_annotationBeingDragged;
    unsigned long long _origLineNumberOfAnnotationBeingDragged;
    BOOL _draggedAnnotationHasTraveled;
    NSTimer *_foldingHoverTimer;
    XCTextAnnotation *_hitAnnotationForContextualMenu;
    struct CGPoint _mouseLocationForContextualMenu;
    unsigned long long _hitLineNumberForContextualMenu;
    NSColor *_badBreakpointStripColor;
    NSColor *_unknownBreakpointStripColor;
    id <XCTextSidebarViewBreakpointRangeDelegates> _breakpointRangeDelegate;
}

+ (id)defaultContextualMenu;
- (id)breakpointRangeDelegate;
- (void)setBreakpointRangeDelegate:(id)arg1;
- (id)annotationBeingDragged;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_foldingHovered;
- (void)viewDidMoveToWindow;
- (id)lastMarkerControlClicked;
- (id)lastAnnotationControlClicked;
- (unsigned long long)lastLineNumberControlClicked;
- (struct CGPoint)lastPointControlClicked;
- (id)menuForEvent:(id)arg1;
- (id)annotationForPoint:(struct CGPoint)arg1;
- (unsigned long long)lineNumberForPoint:(struct CGPoint)arg1;
- (void)redrawLineNumbersIfNeeded;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)foldbarRect;
- (struct CGRect)sidebarRect;
- (id)sidebarCursor;
- (void)setUnknownBreakpointStripColor:(id)arg1;
- (id)unknownBreakpointStripColor;
- (void)setBadBreakpointStripColor:(id)arg1;
- (id)badBreakpointStripColor;
- (void)setFoldbarBackgroundColor:(id)arg1;
- (id)foldbarBackgroundColor;
- (void)setSidebarBackgroundColor:(id)arg1;
- (id)sidebarBackgroundColor;
- (void)setFoldbarWidth:(double)arg1;
- (double)foldbarWidth;
- (void)setSidebarInvalidStripWidth:(double)arg1;
- (double)sidebarInvalidStripWidth;
- (void)setSidebarWidth:(double)arg1;
- (double)sidebarWidth;
- (void)setLineNumberTextColor:(id)arg1;
- (id)lineNumberTextColor;
- (void)setLineNumberFont:(id)arg1;
- (id)lineNumberFont;
- (void)setDrawsLineNumbers:(BOOL)arg1;
- (BOOL)drawsLineNumbers;
- (void)setShowsFoldbar:(BOOL)arg1;
- (BOOL)showsFoldbar;
- (void)setShowsSidebar:(BOOL)arg1;
- (BOOL)showsSidebar;
- (void)_updateRulerThickness;
- (BOOL)displaysTooltips;
- (BOOL)acceptsFirstResponder;
- (void)setOrientation:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 orientation:(unsigned long long)arg2;

@end

