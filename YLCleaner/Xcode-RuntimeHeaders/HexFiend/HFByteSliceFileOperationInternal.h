/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HexFiend/HFByteSliceFileOperation.h>

@class HFByteSlice, NSMutableArray;

@interface HFByteSliceFileOperationInternal : HFByteSliceFileOperation
{
    HFByteSlice *slice;
    NSMutableArray *remainingTargetRanges;
    CDStruct_91ee6ea3 sourceRange;
}

- (void)addQueueEntriesOverlappedByEntry:(id)arg1 withContext:(id)arg2;
- (unsigned long long)amountOfOverlapForEntry:(id)arg1;
- (void)addQueueEntryWithContext:(id)arg1;
- (id)createQueueEntryWithBuffer:(char *)arg1 ofLength:(unsigned long long)arg2 forFile:(id)arg3 trackingProgress:(id)arg4;
- (unsigned long long)targetLocationForSourceLocation:(unsigned long long)arg1;
- (unsigned long long)sourceLocationForTargetLocation:(unsigned long long)arg1;
- (BOOL)hasRemainingTargetRange;
- (unsigned long long)costToWrite;
- (CDStruct_91ee6ea3)sourceRange;
- (void)dealloc;
- (id)initWithByteSlice:(id)arg1 sourceRange:(CDStruct_91ee6ea3)arg2 targetRange:(CDStruct_91ee6ea3)arg3;
- (id)description;

@end

