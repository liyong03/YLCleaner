/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBEditorCanvasFrame.h>

@interface IBBorderlessEditorCanvasFrame : IBEditorCanvasFrame
{
    BOOL fortifiesShadow;
}

@property(nonatomic) BOOL fortifiesShadow; // @synthesize fortifiesShadow;
- (void)drawRect:(struct CGRect)arg1;
- (void)hasKeyLookDidChange;
- (struct CGRect)boundsForHitTesting;
- (CDStruct_c519178c)contentInset;
- (id)fortifiedShadowColor;
- (id)shadow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

