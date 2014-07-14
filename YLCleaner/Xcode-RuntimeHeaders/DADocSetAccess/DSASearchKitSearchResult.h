/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DADocSetAccess/DSATextSearchResult.h>

@class DSATextIndex, NSString;

// Not exported
@interface DSASearchKitSearchResult : DSATextSearchResult
{
    DSATextIndex *_index;
    unsigned long long _skID;
    unsigned long long _docID;
    unsigned long long _rootID;
    NSString *_path;
    NSString *_title;
}

+ (id)searchResultWithPath:(id)arg1 searchResultID:(unsigned long long)arg2 documentID:(unsigned long long)arg3 docRootID:(unsigned long long)arg4 relevance:(float)arg5 fromIndex:(id)arg6;
- (void).cxx_destruct;
- (id)title;
- (id)nearestNodeID;
- (id)parentNode;
- (id)node;
- (id)URL;
- (id)path;
- (id)docSet;
- (id)index;
- (BOOL)matchesExactNode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1 searchResultID:(unsigned long long)arg2 documentID:(unsigned long long)arg3 docRootID:(unsigned long long)arg4 relevance:(float)arg5 fromIndex:(id)arg6;

@end

