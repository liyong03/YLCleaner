/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBAbstractClassDescriptionBackedWorkspaceDocumentClassProvider.h>

@class DVTDelayedInvocation, DVTDispatchDelayedValidator, DVTDispatchLock, DVTObservingToken, DVTPerformanceMetric, IBHeaderScannerAccelerator, IBMutableIdentityDictionary, NSMutableArray, NSMutableSet, NSSet;

@interface IBHeaderScanningClassProvider : IBAbstractClassDescriptionBackedWorkspaceDocumentClassProvider
{
    NSMutableArray *highPriorityPendingPathSets;
    NSMutableArray *lowPriorityPendingPathSets;
    id <DVTInvalidation> sourceFileObserver;
    IBMutableIdentityDictionary *trackedContainerToSourceFileObserver;
    DVTDelayedInvocation *parseNextPathSetInvocation;
    DVTDispatchLock *isCanceledAccessLock;
    struct dispatch_queue_s *headerScanningQueue;
    DVTDispatchDelayedValidator *idleValidator;
    NSMutableSet *scheduledPaths;
    NSMutableSet *parsedPaths;
    NSSet *currentlyParsingPaths;
    BOOL isCanceled;
    BOOL isPaused;
    BOOL isParsing;
    unsigned long long completedFileCount;
    double currentThrottleFactor;
    IBHeaderScannerAccelerator *blacklistAndCacheObject;
    DVTPerformanceMetric *firstPassPerformanceMetric;
    BOOL recordedFirstPass;
    DVTObservingToken *deferredInitializationToken;
}

+ (void)setSharedAverageParseSetDuration:(double)arg1;
+ (double)sharedAverageParseSetDuration;
+ (double)timeout;
- (void).cxx_destruct;
- (void)setThrottleFactor:(double)arg1;
- (void)parsingWentIdle;
- (void)setDataSourceProvidedDataOnce:(BOOL)arg1;
- (void)scheduleParsingOfRecentFiles;
- (void)unscheduleTrackingChangesForContainer:(id)arg1;
- (void)scheduleHighPriorityParsingAndTrackChangesForContainer:(id)arg1 includeFrameworks:(BOOL)arg2 includeImplementationFiles:(BOOL)arg3;
- (void)scheduleParsingForHeadersFromContainer:(id)arg1 includeFrameworks:(BOOL)arg2 includeImplementationFiles:(BOOL)arg3 highPriority:(BOOL)arg4;
- (void)schedulePathsIgnoringAlreadyParsedOrParseInProgressPaths:(id)arg1 highPriority:(BOOL)arg2;
- (void)schedulePaths:(id)arg1 highPriority:(BOOL)arg2;
- (void)startParsingPathsIfNeeded;
- (void)parseNextPathSet;
- (void)parsePathSet:(id)arg1;
- (void)pathSetDidFinishParsing:(id)arg1;
- (unsigned long long)countOfFilesScheduledForParsing;
- (id)implementationFilesForContainer:(id)arg1;
- (id)headersForContainer:(id)arg1 includeFrameworks:(BOOL)arg2;
- (void)primitiveInvalidate;
- (void)performBlockEnsuringNotCanceled:(id)arg1;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (void)finishDeferredInitialization;
- (id)initWithWorkspaceDocument:(id)arg1 targetRuntime:(id)arg2;

@end

