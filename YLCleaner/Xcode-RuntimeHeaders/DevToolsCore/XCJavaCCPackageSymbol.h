/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface XCJavaCCPackageSymbol : NSObject
{
    NSString *name;
    int type;
    long long priority;
}

+ (id)symbolWithPartialName:(id)arg1 type:(int)arg2;
- (void)setPriority:(long long)arg1;
- (long long)priority;
- (int)symbolType;
- (id)name;
- (id)partialName;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPartialName:(id)arg1 type:(int)arg2;

@end

