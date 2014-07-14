/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTMapTable, DVTPointerArray, IDEActivityLogSection, NSMutableArray, NSMutableDictionary;

@interface IDEActivityLogSectionRecorder : NSObject
{
    DVTPointerArray *_parentRecorders;
    NSMutableArray *_childRecorders;
    IDEActivityLogSection *_section;
    NSMutableArray *_observations;
    NSMutableArray *_changesToPost;
    BOOL _hasScheduledChangePosting;
    DVTMapTable *_rememberedMessagesByKey;
    struct _NSRange _mostRecentTextRange;
    id _completionBlock;
    NSMutableDictionary *_severityToLimitTable;
    NSMutableDictionary *_severityToCountTable;
    int _lock;
    BOOL _hasAddedAnyErrorMessages;
    int _hasRequestedStop;
}

@property BOOL hasAddedAnyErrorMessages; // @synthesize hasAddedAnyErrorMessages=_hasAddedAnyErrorMessages;
- (void).cxx_destruct;
- (id)addObserverUsingBlock:(id)arg1;
- (void)setCommandDetailDescription:(id)arg1;
- (void)addContextInfoMessageWithTitle:(id)arg1;
- (void)addAnalyzerResultStepMessageWithTitle:(id)arg1;
- (void)addAnalyzerResultMessageWithTitle:(id)arg1;
- (void)addNoticeMessageWithTitle:(id)arg1;
- (void)addWarningMessageWithTitle:(id)arg1;
- (void)addErrorMessageWithTitle:(id)arg1;
- (void)addTestFailureMessageWithTitle:(id)arg1;
- (void)stopRecordingWithInfo:(id)arg1;
- (void)stopRecordingWithInfo:(id)arg1 completionBlock:(id)arg2;
- (void)_stopRecordingWithInfo:(id)arg1 completionBlock:(id)arg2;
- (void)childRecorderDidStopRecording:(id)arg1;
- (void)addSubmessage:(id)arg1 toMessage:(id)arg2;
- (void)addMessage:(id)arg1 ignoreMessageLimit:(BOOL)arg2;
- (void)addMessage:(id)arg1;
- (struct _NSRange)mostRecentlyAppendedTextRange;
- (struct _NSRange)appendTextUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2;
- (struct _NSRange)appendTextFormat:(id)arg1;
- (struct _NSRange)appendText:(id)arg1;
- (void)addSubsection:(id)arg1;
- (BOOL)_attachToParentRecorderIfStillRecording:(id)arg1;
- (BOOL)hasReachedAllMessageLimits;
- (BOOL)hasReachedMessageLimitForSeverity:(unsigned long long)arg1;
- (void)setMessageLimit:(unsigned long long)arg1 forSeverity:(unsigned long long)arg2;
- (void)setLocalizedResultString:(id)arg1;
- (void)setWasFetchedFromCache:(BOOL)arg1;
- (void)setIsQuiet:(BOOL)arg1;
- (id)addUnitTestSectionWithTitle:(id)arg1 location:(id)arg2;
- (id)addCommandSectionWithTitle:(id)arg1 detailDescription:(id)arg2;
- (id)addCommandSectionWithDomainType:(id)arg1 title:(id)arg2 detailDescription:(id)arg3;
- (void)noteDescendantLogSectionDidClose:(id)arg1 inSupersection:(id)arg2;
- (void)noteDescendantLogSection:(id)arg1 didAppendText:(id)arg2;
- (void)noteDescendantLogSection:(id)arg1 didAddSubsection:(id)arg2;
- (void)handleChangeEvent:(id)arg1;
- (void)setRememberedMessage:(id)arg1 forKey:(id)arg2;
- (id)rememberedMessageForKey:(id)arg1;
- (void)addCompletionBlock:(id)arg1;
- (id)section;
- (id)initWithLogSection:(id)arg1;

@end

