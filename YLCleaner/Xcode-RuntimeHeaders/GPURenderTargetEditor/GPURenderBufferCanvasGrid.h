/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPURenderTargetEditor/GPURenderBufferCanvas.h>

@class NSMutableArray;

// Not exported
@interface GPURenderBufferCanvasGrid : GPURenderBufferCanvas
{
    unsigned int _maxColumns;
    unsigned int _maxRows;
    unsigned int _renderbufferCount;
    NSMutableArray *_grid;
}

- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect)arg1;
- (id)constraintsForRenderBufferViews:(id)arg1;
- (void)_configurationForRenderbuffers:(id)arg1;
- (void)drawSeperatorLines:(struct CGRect)arg1;
- (void)viewDidEndLiveResize;
- (void)dealloc;
- (void)setup;

@end
