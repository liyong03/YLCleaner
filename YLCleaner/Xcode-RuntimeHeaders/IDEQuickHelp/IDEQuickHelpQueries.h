/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface IDEQuickHelpQueries : NSObject
{
    NSArray *_docSetRecords;
}

- (void).cxx_destruct;
- (void)queryDocSetsWithInfo:(id)arg1 completionBlock:(id)arg2;
- (void)determineBestDocSetRecordsForQuery:(id)arg1;
- (id)tokensForSymbol:(id)arg1 useFallbackNameSearch:(BOOL)arg2;
- (id)predicateForName:(id)arg1 scope:(id)arg2 type:(id)arg3;
- (id)resultBySearchingClassHierarchyWithInfo:(id)arg1 ancestorMatchKey:(id)arg2 useFallbackNameSearch:(BOOL)arg3;
- (id)queryResultFromToken:(id)arg1 resultingFromQuery:(id)arg2 ancestorHierarchy:(id)arg3;

@end

