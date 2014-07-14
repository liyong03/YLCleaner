/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DTXMessenger <NSObject>
- (void)sendMessageSync:(id)arg1 replyHandler:(id)arg2;
- (BOOL)sendMessageAsync:(id)arg1 replyHandler:(id)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(id)arg2;
- (void)sendControlSync:(id)arg1 replyHandler:(id)arg2;
- (void)sendControlAsync:(id)arg1 replyHandler:(id)arg2;
- (void)cancel;
- (void)setDispatchTarget:(id)arg1;
- (void)setMessageHandler:(id)arg1;
@end

