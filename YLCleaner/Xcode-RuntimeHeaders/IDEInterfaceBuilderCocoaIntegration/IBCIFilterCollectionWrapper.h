/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBKVCAbstractWrapper.h"

@class CIFilter, NSArray, NSIndexSet, NSString;

@interface IBCIFilterCollectionWrapper : IBKVCAbstractWrapper
{
    NSIndexSet *_filterSelectionIndexes;
    NSString *_keyPath;
    NSArray *_filters;
    id _owner;
}

+ (id)keyPathsForValuesAffectingSelectedFilterName;
+ (id)keyPathsForValuesAffectingWrappedSelectedFilter;
+ (id)keyPathsForValuesAffectingSelectedFilter;
@property(readonly) id owner; // @synthesize owner=_owner;
@property(readonly) NSArray *filters; // @synthesize filters=_filters;
@property(readonly) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain) NSIndexSet *filterSelectionIndexes; // @synthesize filterSelectionIndexes=_filterSelectionIndexes;
- (void).cxx_destruct;
@property(retain) NSString *selectedFilterName;
@property(retain) CIFilter *selectedFilter;
- (id)wrappedSelectedFilter;
- (id)initWithOwner:(id)arg1 keyPath:(id)arg2;

@end

