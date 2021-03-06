/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol XDErrorWarningCallback <NSObject>
- (BOOL)didSucceed;
- (BOOL)shouldContinue;
- (id)iOSTargetVersion;
- (id)macOSTargetVersion;
- (id)compilerFlags;
- (id)descriptionForElement:(id)arg1;
- (void)createWarningForElement:(id)arg1 withFormat:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createWarningForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createErrorForElement:(id)arg1 withFormat:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createErrorForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
@end

