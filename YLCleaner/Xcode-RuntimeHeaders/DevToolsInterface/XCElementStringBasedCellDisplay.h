/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCElementCellDisplay.h>

@class NSDictionary, NSFont;

@interface XCElementStringBasedCellDisplay : XCElementCellDisplay
{
    struct CGSize _relativeSize;
    BOOL _relativeSizeValid;
    NSDictionary *_cachedAttributes;
    NSFont *_cachedFontForAttributes;
}

- (void)dealloc;
- (void)establishRelativeSizeForDisplayer:(struct NSObject *)arg1;

@end

