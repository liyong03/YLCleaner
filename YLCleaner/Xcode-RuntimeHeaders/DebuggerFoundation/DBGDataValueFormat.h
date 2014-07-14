/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface DBGDataValueFormat : NSObject
{
    NSString *_displayName;
    unsigned long long _tag;
}

+ (id)binaryFormatUsingTag:(unsigned long long)arg1;
+ (id)osTypeFormatUsingTag:(unsigned long long)arg1;
+ (id)octalFormatUsingTag:(unsigned long long)arg1;
+ (id)unsignedDecimalFormatUsingTag:(unsigned long long)arg1;
+ (id)decimalFormatUsingTag:(unsigned long long)arg1;
+ (id)hexFormatUsingTag:(unsigned long long)arg1;
+ (id)naturalFormatUsingTag:(unsigned long long)arg1;
@property(readonly) unsigned long long tag; // @synthesize tag=_tag;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)arg1 tag:(unsigned long long)arg2;

@end

