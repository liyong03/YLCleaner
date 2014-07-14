/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, IDESourceCodeBlameController, NSArray;

@interface IDESourceCodeSingleLineBlameProvider : NSObject <DVTInvalidation>
{
    IDESourceCodeBlameController *_blameController;
    DVTObservingToken *_blameObserver;
    id waitingBlock;
    long long waitingLine;
    BOOL haveBlameItems;
    BOOL _forceReload;
    NSArray *_currentBlameAnnotations;
}

+ (void)initialize;
@property BOOL forceReload; // @synthesize forceReload=_forceReload;
@property(retain) NSArray *currentBlameAnnotations; // @synthesize currentBlameAnnotations=_currentBlameAnnotations;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)blameItemsForLine:(long long)arg1 withCompletionBlock:(id)arg2;
- (void)_findlameItemsForLine:(long long)arg1 withCompletionBlock:(id)arg2;
- (id)initWithSourceCodeEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

