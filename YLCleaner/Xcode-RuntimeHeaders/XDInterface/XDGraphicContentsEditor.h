/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class XDDiagramView;

@interface XDGraphicContentsEditor : NSObject
{
    XDDiagramView *_diagramView;
}

+ (void)initialize;
- (BOOL)abortEditing;
- (void)endEditing;
- (void)startEditingGraphic:(id)arg1 withEvent:(id)arg2;
- (id)diagramView;
- (void)_setDiagramView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

