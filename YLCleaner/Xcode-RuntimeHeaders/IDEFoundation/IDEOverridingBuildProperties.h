/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTMacroDefinitionTable, NSArray, NSMutableDictionary;

@interface IDEOverridingBuildProperties : NSObject
{
    NSMutableDictionary *_macros;
    NSArray *_arrayRepresentation;
    unsigned long long _hash;
}

- (void).cxx_destruct;
- (id)dvt_detailedDebugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEmpty;
- (id)macroDefinitionTables;
@property(readonly) DVTMacroDefinitionTable *macrosFromEnvironmentXcconfigFile;
@property(readonly) DVTMacroDefinitionTable *macrosFromCommandLineXcconfigFile;
@property(readonly) DVTMacroDefinitionTable *macrosFromCommandLine;
@property(readonly) DVTMacroDefinitionTable *synthesizedMacros;
- (void)_setMacroDefinitionTable:(id)arg1 forLevel:(int)arg2;
- (id)macroDefinitionTableForLevel:(int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyUsingOverridingPropertiesClass:(Class)arg1;
- (id)initWithMacroDefinitionTable:(id)arg1;
- (id)init;

@end

