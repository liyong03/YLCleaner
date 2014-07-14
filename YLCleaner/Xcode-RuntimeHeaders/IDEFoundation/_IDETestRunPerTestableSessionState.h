/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableSet;

@interface _IDETestRunPerTestableSessionState : NSObject
{
    NSArray *_skippedTestIDList;
    NSMutableSet *_skippedTestIDs;
    NSMutableSet *_pendingRunTestIDs;
    NSMutableSet *_alreadyRunTestIDs;
}

@property(readonly) NSMutableSet *alreadyRunTestIDs; // @synthesize alreadyRunTestIDs=_alreadyRunTestIDs;
@property(readonly) NSMutableSet *pendingRunTestIDs; // @synthesize pendingRunTestIDs=_pendingRunTestIDs;
@property(readonly) NSMutableSet *skippedTestIDs; // @synthesize skippedTestIDs=_skippedTestIDs;
@property(readonly) NSArray *skippedTestIDList; // @synthesize skippedTestIDList=_skippedTestIDList;
- (void).cxx_destruct;
- (BOOL)_testIsPendingRun:(id)arg1;
- (void)_updateStatisticsForTestable:(id)arg1;
- (void)_addRunTest:(id)arg1;
- (id)initWithSkippedTestList:(id)arg1;

@end

