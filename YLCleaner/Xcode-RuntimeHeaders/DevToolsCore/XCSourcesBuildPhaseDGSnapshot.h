/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@class NSMutableSet;

@interface XCSourcesBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
    NSMutableSet *_processedNonArchRefs;
}

+ (id)defaultName;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2;
- (void)computeDependenciesInTargetBuildContext:(id)arg1;
- (void)computeDependenciesForAllBuildFileReferencesInTargetBuildContext:(id)arg1;
- (void)computeDependenciesForVersioningSystemInTargetBuildContext:(id)arg1;
- (void)computeDependenciesForBuildFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 forBuildFileReference:(id)arg3 usingBuildRule:(id)arg4 inTargetBuildContext:(id)arg5;
- (void)_computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 forBuildFileReference:(id)arg3 usingBuildRule:(id)arg4 inTargetBuildContext:(id)arg5 processedPaths:(id)arg6;
- (id)buildFilesToCountBaseNames;

@end

