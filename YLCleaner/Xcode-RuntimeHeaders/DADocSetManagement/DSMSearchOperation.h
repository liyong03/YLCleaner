/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class DSMQuery;

@interface DSMSearchOperation : NSOperation
{
    DSMQuery *_query;
}

+ (id)completedNotificationName;
@property(retain) DSMQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)postCompletedNotification:(id)arg1;
- (id)operationsForAllQueryTypes;

@end

