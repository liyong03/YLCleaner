/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSBezierPath;

@interface IDENavigationHUDBackgroundView : NSView
{
    NSBezierPath *_cachedStrokePath;
    NSBezierPath *_cachedFillPath;
    struct CGRect _lastKnownBounds;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)cachedFillPath;
- (id)cachedStrokePath;
- (void)generateCachedPathsIfNeeded;

@end

