/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCElementDisplay.h>

@interface XCElementDisplaySelectedForward : XCElementDisplay
{
    XCElementDisplay *_selectedDisplay;
    XCElementDisplay *_nonSelectedDisplay;
}

@property(retain, nonatomic) XCElementDisplay *nonSelectedDisplay; // @synthesize nonSelectedDisplay=_nonSelectedDisplay;
@property(retain, nonatomic) XCElementDisplay *selectedDisplay; // @synthesize selectedDisplay=_selectedDisplay;
- (void)dealloc;
- (void)displayer:(struct NSObject *)arg1 drawBackground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (BOOL)displayerDisplaySelected:(struct NSObject *)arg1;

@end

