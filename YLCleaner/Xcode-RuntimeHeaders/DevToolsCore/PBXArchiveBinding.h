/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSKeyBinding, NSString;

@interface PBXArchiveBinding : NSObject
{
    NSKeyBinding *_keyBinding;
    NSString *_key;
    NSString *_archiveKey;
    int _archiveMask;
}

+ (id)bindingWithClass:(Class)arg1 key:(id)arg2 archiveMask:(int)arg3;
- (Class)targetClass;
- (id)key;
- (int)archiveMask;
- (id)keyBinding;
- (void)dealloc;
- (id)initWithKeyBinding:(id)arg1 archiveMask:(int)arg2;

@end

