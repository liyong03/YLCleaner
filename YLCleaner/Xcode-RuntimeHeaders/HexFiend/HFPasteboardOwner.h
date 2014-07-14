/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class HFByteArray, HFProgressTracker, NSPasteboard, NSProgressIndicator, NSTextField, NSWindow;

@interface HFPasteboardOwner : NSObject
{
    HFByteArray *byteArray;
    NSPasteboard *pasteboard;
    unsigned long long bytesPerLine;
    NSWindow *progressTrackingWindow;
    NSProgressIndicator *progressTrackingIndicator;
    NSTextField *progressTrackingDescriptionTextField;
    HFProgressTracker *progressTracker;
    unsigned long long dataAmountToCopy;
    BOOL retainedSelfOnBehalfOfPboard;
    BOOL backgroundCopyOperationFinished;
    BOOL didStartModalSessionForBackgroundCopyOperation;
}

+ (id)uuid;
+ (void)prepareCommonPasteboardsForChangeInFileNotification:(id)arg1;
+ (id)unpackByteArrayFromPasteboard:(id)arg1;
+ (id)_unpackByteArrayFromDictionary:(id)arg1;
+ (id)ownPasteboard:(id)arg1 forByteArray:(id)arg2 withTypes:(id)arg3;
+ (void)initialize;
- (unsigned long long)amountToCopyForDataLength:(unsigned long long)arg1 stringLength:(unsigned long long)arg2;
- (unsigned long long)stringLengthForDataLength:(unsigned long long)arg1;
- (unsigned long long)bytesPerLine;
- (void)setBytesPerLine:(unsigned long long)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (id)byteArray;
- (void)pasteboardChangedOwner:(id)arg1;
- (void)requestCancel:(id)arg1;
- (BOOL)moveDataWithProgressReportingToPasteboard:(id)arg1 forType:(id)arg2;
- (void)beginModalSessionForBackgroundCopyOperation:(id)arg1;
- (void)backgroundMoveDataFinished:(id)arg1;
- (void)backgroundMoveDataToPasteboard:(id)arg1;
- (void)writeDataInBackgroundToPasteboard:(id)arg1 ofLength:(unsigned long long)arg2 forType:(id)arg3 trackingProgress:(id)arg4;
- (void)moveDataToPasteboardWithProgressReporting:(SEL)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (void)changeInFileNotification:(id)arg1;
- (void)tearDownPasteboardReferenceIfExists;
- (id)initWithPasteboard:(id)arg1 forByteArray:(id)arg2 withTypes:(id)arg3;

@end

