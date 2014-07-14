/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, NSString;

@interface DVTSystemActivityToken : NSObject <DVTInvalidation>
{
    unsigned int _displaySleepAssertionID;
    unsigned int _systemSleepAssertionID;
    NSString *_reason;
    unsigned long long _activityOptions;
    id _processInfoToken;
}

+ (id)_descriptionOfOutstandingTokens:(id)arg1 withActivityOptions:(unsigned long long)arg2 logLevel:(int)arg3;
+ (void)initialize;
+ (id)_stringForActivityOptions:(unsigned long long)arg1;
+ (void)_accessSystemActivityTokensWithBlock:(id)arg1;
@property(retain) id processInfoToken; // @synthesize processInfoToken=_processInfoToken;
@property unsigned long long activityOptions; // @synthesize activityOptions=_activityOptions;
@property(copy) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)description;
- (id)initWithOptions:(unsigned long long)arg1 reason:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

