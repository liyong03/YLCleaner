/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlOperationInfo.h>

#import "IDESourceControlBranchingOperationInfoProtocol-Protocol.h"

@class IDESourceControlBranch, NSMutableDictionary, NSString;

@interface IDESourceControlMergeOperationInfo : IDESourceControlOperationInfo <IDESourceControlBranchingOperationInfoProtocol>
{
    IDESourceControlBranch *_mergeBranch;
    IDESourceControlBranch *_targetBranch;
    NSString *_currentRevisionIdentifier;
    NSString *_branchRevisionIdentifier;
    NSString *_ancestorRevisionIdentifier;
    NSString *_remoteURLToMerge;
    NSMutableDictionary *_itemsWithConflicts;
    BOOL _landingMerge;
}

@property BOOL landingMerge; // @synthesize landingMerge=_landingMerge;
@property(readonly) NSMutableDictionary *itemsWithConflicts; // @synthesize itemsWithConflicts=_itemsWithConflicts;
@property(readonly) NSString *remoteURLToMerge; // @synthesize remoteURLToMerge=_remoteURLToMerge;
@property(copy) NSString *ancestorRevisionIdentifier; // @synthesize ancestorRevisionIdentifier=_ancestorRevisionIdentifier;
@property(copy) NSString *branchRevisionIdentifier; // @synthesize branchRevisionIdentifier=_branchRevisionIdentifier;
@property(copy) NSString *currentRevisionIdentifier; // @synthesize currentRevisionIdentifier=_currentRevisionIdentifier;
@property(retain) IDESourceControlBranch *mainBranch; // @synthesize mainBranch=_targetBranch;
@property(retain) IDESourceControlBranch *otherBranch; // @synthesize otherBranch=_mergeBranch;
- (void).cxx_destruct;
- (id)processInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
- (id)processMergeInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
- (id)processDistributedMergeInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
@property(readonly) unsigned long long conflictCount;

@end

