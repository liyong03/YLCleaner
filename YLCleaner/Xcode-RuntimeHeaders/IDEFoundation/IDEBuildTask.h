/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTOperation.h"

@class IDEActivityLogSection, NSDictionary, NSString;

@interface IDEBuildTask : DVTOperation
{
    NSString *_identifier;
    NSDictionary *_properties;
    IDEActivityLogSection *_activityLogSection;
    id _didStartExecutingBlock;
    id _activityLogSectionDidChangeBlock;
    id _exitCodeWasSetBlock;
    id _updateBuildStatusForBuildTaskBlock;
    BOOL _restorePersistedBuildResults;
    BOOL _dontActuallyRun;
    int _exitCode;
    id _addPostprocessingBlocks;
}

+ (id)defaultProperties;
+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 properties:(id)arg3;
+ (void)initialize;
@property(copy) id addPostprocessingBlocks; // @synthesize addPostprocessingBlocks=_addPostprocessingBlocks;
@property BOOL dontActuallyRun; // @synthesize dontActuallyRun=_dontActuallyRun;
@property(copy) id updateBuildStatusForBuildTask; // @synthesize updateBuildStatusForBuildTask=_updateBuildStatusForBuildTaskBlock;
@property(copy) id exitCodeWasSet; // @synthesize exitCodeWasSet=_exitCodeWasSetBlock;
@property(copy) id activityLogSectionDidChange; // @synthesize activityLogSectionDidChange=_activityLogSectionDidChangeBlock;
@property(copy) id didStartExecuting; // @synthesize didStartExecuting=_didStartExecutingBlock;
@property(nonatomic) int exitCode; // @synthesize exitCode=_exitCode;
@property(retain, nonatomic) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
@property(readonly) BOOL restorePersistedBuildResults; // @synthesize restorePersistedBuildResults=_restorePersistedBuildResults;
@property(readonly) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)longDescription;
- (id)description;
- (void)main;
- (void)addStatisticsDataToStatisticsSection:(id)arg1;
- (BOOL)isWrapperForCommand:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 properties:(id)arg3;

@end

