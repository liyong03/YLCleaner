/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDEWorkspace, NSMutableDictionary;

@interface IDEWorkspaceSettings : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSMutableDictionary *_workspaceSettings;
    BOOL _loadedExistingSettings;
}

+ (void)initialize;
@property(readonly) BOOL loadedExistingSettings; // @synthesize loadedExistingSettings=_loadedExistingSettings;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadSettings;
- (void)saveSettings;
- (id)customDataSpecifier;
- (id)settingsOwnership;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

