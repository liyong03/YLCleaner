/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileManager;

@interface DVTPlugInLocator : NSObject
{
    NSFileManager *_fileManager;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)canUsePlugInAtPath:(id)arg1 bundle:(id *)arg2 plugInPlist:(id *)arg3 error:(id *)arg4;
- (BOOL)_checkCanUsePlugInAtFilePath:(id)arg1 bundle:(id *)arg2 plugInPlist:(id *)arg3 error:(id *)arg4;
- (BOOL)_checkCanUsePlugInAtDirectoryPath:(id)arg1 bundle:(id *)arg2 plugInPlist:(id *)arg3 error:(id *)arg4;
- (id)propertyListAtURL:(id)arg1 error:(id *)arg2;
- (void)plugInManagerDidScanForPlugIns:(id)arg1;
- (void)plugInManagerWillScanForPlugIns:(id)arg1;
- (id)init;

@end

