/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PBXBuildFile;

@interface XCAppleScriptBuildMessage : NSObject
{
    PBXBuildFile *_buildFile;
    long long _index;
}

- (id)objectSpecifier;
- (void)setIndex:(long long)arg1;
- (long long)index;
- (void)setBuildFile:(id)arg1;
- (id)buildFile;
- (unsigned long long)lineNumber;
- (id)filePath;
- (id)messageString;
- (unsigned int)type;
- (void)dealloc;
- (id)init;

@end

