/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTCancellable-Protocol.h"

@interface DVTRescindCallbackObservingToken : NSObject <DVTCancellable>
{
    id _callbackBlock;
}

+ (id)tokenAggregatingTokens:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)initWithCallbackBlock:(id)arg1;

@end

