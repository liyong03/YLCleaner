/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DYGuestAppSession;

@interface DYGuestAppControlStrategy : NSObject
{
    DYGuestAppSession *_session;
}

+ (Class)symbolicatorClass;
- (void).cxx_destruct;
- (void)bringToForeground;
- (void)sendToBackground;
- (void)terminate;
- (void)resume;
- (void)createSymbolicator:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

