/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, PBXTarget, XCPropertyExpansionContext;

@interface XCDerivedTargetAttributes : NSObject
{
    PBXTarget *_target;
    NSString *_buildStateKey;
    NSString *_buildAction;
    NSString *_configurationName;
    NSString *_activeArchitecture;
    NSString *_projectOverridingSettings;
    XCPropertyExpansionContext *_expansionContext;
    NSString *_fullProductName;
    NSString *_builtProductsDir;
    NSString *_absPathForBuildProduct;
}

+ (id)keyForTargetBuildState:(id)arg1;
- (id)description;
- (id)absolutePathForBuildProduct;
- (id)builtProductsDir;
- (id)fullProductName;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 targetBuildState:(id)arg2;

@end

