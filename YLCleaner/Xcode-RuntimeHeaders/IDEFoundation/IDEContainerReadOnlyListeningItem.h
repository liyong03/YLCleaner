/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEContainerReadOnlyItem.h>

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace;

@interface IDEContainerReadOnlyListeningItem : IDEContainerReadOnlyItem <DVTInvalidation>
{
}

+ (void)initialize;
- (void)parentFilePathDidChange;
- (void)filePathDidChange;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1 container:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

