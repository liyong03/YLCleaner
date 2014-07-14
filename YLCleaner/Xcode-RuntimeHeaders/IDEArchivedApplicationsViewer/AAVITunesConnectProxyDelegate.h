/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ITunesSoftwareServiceUploadDelegate-Protocol.h"

@interface AAVITunesConnectProxyDelegate : NSObject <ITunesSoftwareServiceUploadDelegate>
{
    id willBeginCallback;
    id updatePercentageCallback;
    id updateMessageCallback;
    id shouldContinueCallback;
    id didCompleteCallback;
}

@property(copy) id didCompleteCallback; // @synthesize didCompleteCallback;
@property(copy) id shouldContinueCallback; // @synthesize shouldContinueCallback;
@property(copy) id updateMessageCallback; // @synthesize updateMessageCallback;
@property(copy) id updatePercentageCallback; // @synthesize updatePercentageCallback;
@property(copy) id willBeginCallback; // @synthesize willBeginCallback;
- (void).cxx_destruct;
- (void)softwareService:(id)arg1 didCompleteUploadForApplication:(id)arg2;
- (BOOL)softwareService:(id)arg1 shouldContinueUploadForApplication:(id)arg2;
- (void)softwareService:(id)arg1 didUpdateStatusMessage:(id)arg2 forApplication:(id)arg3;
- (void)softwareService:(id)arg1 didUpdatePercentageComplete:(id)arg2 forApplication:(id)arg3;
- (void)softwareService:(id)arg1 willBeginUploadForApplication:(id)arg2;

@end

