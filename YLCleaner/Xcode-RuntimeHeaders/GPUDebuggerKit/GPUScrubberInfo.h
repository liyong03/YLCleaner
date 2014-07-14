/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEWorkspaceTabController;

@interface GPUScrubberInfo : NSObject
{
    IDEWorkspaceTabController *_tabController;
    unsigned long long _drawLocation;
    id _sender;
    int _direction;
}

@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) id sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) unsigned long long drawLocation; // @synthesize drawLocation=_drawLocation;
@property(readonly, nonatomic) IDEWorkspaceTabController *tabController; // @synthesize tabController=_tabController;
- (void).cxx_destruct;
- (id)initWithSender:(id)arg1 workspaceTabController:(id)arg2 drawLocation:(unsigned long long)arg3 direction:(int)arg4;

@end

