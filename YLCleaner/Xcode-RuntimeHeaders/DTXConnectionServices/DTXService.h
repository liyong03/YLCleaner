/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DTXAllowedRPC-Protocol.h"

@class DTXChannel;

@interface DTXService : NSObject <DTXAllowedRPC>
{
    DTXChannel *_channel;
}

@property(readonly) DTXChannel *channel; // @synthesize channel=_channel;
- (void)messageReceived:(id)arg1;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;

@end

