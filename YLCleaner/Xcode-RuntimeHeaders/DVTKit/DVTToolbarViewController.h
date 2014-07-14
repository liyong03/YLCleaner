/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, NSString, NSWindow;

@interface DVTToolbarViewController : NSViewController <DVTInvalidation>
{
    NSString *_itemIdentifier;
    NSWindow *_window;
    NSString *_label;
    NSString *_tooltip;
}

+ (void)initialize;
@property(copy) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(copy) NSString *label; // @synthesize label=_label;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(readonly) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
@property(readonly) struct CGSize maxSize;
@property(readonly) struct CGSize minSize;
- (id)menuForMenuFormRepresentation;
- (id)menuFormRepresentation;
- (void)primitiveInvalidate;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

