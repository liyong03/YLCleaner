/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTCancellationBlockCompletion-Protocol.h"

@class NSCondition;

@interface _DVTCancellationBlockToken : NSObject <DVTCancellationBlockCompletion>
{
    NSCondition *_condition;
    id _cancellationBlock;
}

@property(copy) id cancellationBlock; // @synthesize cancellationBlock=_cancellationBlock;
- (void).cxx_destruct;
- (void)runCancellatonBlockWithOperation:(id)arg1;
- (void)waitForCancellation;
- (id)initWithCancellationBlock:(id)arg1;

@end

