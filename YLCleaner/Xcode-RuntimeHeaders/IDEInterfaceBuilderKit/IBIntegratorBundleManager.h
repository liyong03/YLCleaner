/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface IBIntegratorBundleManager : NSObject
{
    NSMutableDictionary *runtimesToIntegratedClassesToIntegratorBundleIdentifier;
    NSMutableDictionary *runtimesToClassesToDependentFrameworks;
    NSMutableSet *replacedIntegratorBundleIdentifiers;
    NSMutableSet *integratedClasses;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)hasIntegratorBundleForClassName:(id)arg1;
- (BOOL)hasPluginIdentifierBeenSupercededByIntegratorBundleIdentifier:(id)arg1;
- (id)integratorBundleDependencyForClassName:(id)arg1 inDocument:(id)arg2;
- (id)frameworkDependenciesForClassName:(id)arg1 inDocument:(id)arg2;
- (id)init;

@end

