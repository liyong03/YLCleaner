/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class DVTFindDescriptor, IDEBatchFindCandidateFile, NSArray, NSError;

@interface IDEBatchFindable : NSOperation
{
    NSArray *_findResults;
    DVTFindDescriptor *_findDescriptor;
    IDEBatchFindCandidateFile *_file;
    NSError *_error;
    id _completionObject;
}

+ (BOOL)findableCanHandleFile:(id)arg1 forFindDescriptor:(id)arg2;
+ (id)findableForFindDescriptor:(id)arg1 onFile:(id)arg2;
@property(retain) id completionObject; // @synthesize completionObject=_completionObject;
@property(copy) NSError *error; // @synthesize error=_error;
@property(readonly) IDEBatchFindCandidateFile *file; // @synthesize file=_file;
@property(readonly) DVTFindDescriptor *findDescriptor; // @synthesize findDescriptor=_findDescriptor;
@property(readonly) NSArray *findResults; // @synthesize findResults=_findResults;
- (void).cxx_destruct;
- (void)setDVTFindResults:(id)arg1;
@property(readonly) BOOL shouldFallbackToDocumentFindable;
@property(readonly) BOOL requiresMainThreadAccess;
- (id)initWithFindDescriptor:(id)arg1 onFile:(id)arg2;

@end

