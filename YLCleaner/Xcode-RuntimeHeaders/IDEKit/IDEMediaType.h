/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IDEMediaType : NSObject <NSCopying>
{
}

+ (id)sharedInstance;
@property(readonly) NSString *displayName;
@property(readonly) Class mediaResourceClass;
@property(readonly) NSArray *pasteboardTypes;
@property(readonly) NSString *pasteboardType;
- (BOOL)isKindOfMediaType:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMediaType:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

