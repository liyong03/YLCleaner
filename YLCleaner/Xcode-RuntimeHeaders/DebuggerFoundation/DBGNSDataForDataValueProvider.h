/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DBGDataValue, NSData, NSString;

@interface DBGNSDataForDataValueProvider : NSObject
{
    DBGDataValue *_dataValue;
    NSString *_expressionResultingInNSData;
    BOOL _hasDataBeenRetrieved;
    NSData *_data;
    BOOL _wasCancelled;
    id <DVTCancellable> _cancellableMemoryReadToken;
}

@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) BOOL hasDataBeenRetrieved; // @synthesize hasDataBeenRetrieved=_hasDataBeenRetrieved;
- (void).cxx_destruct;
- (void)_dataWasFetched:(id)arg1;
- (void)_failedToGetData;
- (void)_readArchivedData:(id)arg1;
- (void)_startRetrieval;
- (void)cancel;
@property(readonly) NSString *blockStartAddress;
- (id)initWithDataValue:(id)arg1 expressionResultingInNSData:(id)arg2;
- (id)initWithKeyedArchivableDataValue:(id)arg1;

@end

