/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableData;

@interface DVTMessage : NSObject
{
    NSMutableData *_content;
    NSDictionary *_userInfo;
}

@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)contentAsPropertyList:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)setContentToPropertyList:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (void)appendContentData:(id)arg1;
@property(copy) NSData *content;
- (id)init;

@end

