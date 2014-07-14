/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEDevkitRefactoring/DevkitEntireProject.h>

@class DevkitRefactoringTransformation, IDERefactoringBuildSettings, NSMutableDictionary, NSMutableSet;

@interface DevkitParser : DevkitEntireProject
{
    DevkitRefactoringTransformation *_transformation;
    NSMutableSet *_compilationUnitsParsed;
    IDERefactoringBuildSettings *_buildSettings;
    NSMutableDictionary *_editorCache;
}

- (void).cxx_destruct;
- (id)getStringAtFile:(id)arg1 line:(unsigned long long)arg2;
- (id)getStringAtLocation:(id)arg1 replacing:(id)arg2;
- (id)getStringAtLocation:(id)arg1;
- (id)memorySourceForFile:(const char *)arg1;
- (BOOL)beginHeader:(id)arg1;
- (BOOL)parseCompilationUnitsAndSettings:(id)arg1;
- (BOOL)parseOneCompilationUnit:(id)arg1 buildSettings:(id)arg2;
- (void *)inputStreamForCompilationUnit:(id)arg1;
- (unsigned long long)fileLanguage;
- (BOOL)shouldRegisterStandardIncludes;
- (id)effectivePathForHeader:(id)arg1;
- (id)undefinedMacroNames;
- (id)predefinedMacroNamesAndDefs;
- (id)preincludeFiles;
- (id)frameworkSearchPaths;
- (id)systemIncludePaths;
- (void)fakeCriticalDefinesForLanguage;
- (void)cleanup;
- (void)setup;
- (id)initWithTransformation:(id)arg1 SDKSetting:(id)arg2;

@end

