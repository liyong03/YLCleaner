/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class XDDiagramView;

@interface XDGraphicAuxiliaryStorage : NSObject
{
    id _graphic;
    XDDiagramView *_diagramView;
}

+ (void)initialize;
- (id)diagramView;
- (void)_setDiagramView:(id)arg1;
- (id)graphic;
- (void)_setGraphic:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithGraphic:(id)arg1 diagramView:(id)arg2;

@end

