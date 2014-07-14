/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "DVTXMLUnarchiving-Protocol.h"
#import "NSCopying-Protocol.h"

@class DVTMapTable, DVTStackBacktrace, IDEBreakpointBucket, NSArray, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDEBreakpoint : NSObject <DVTXMLUnarchiving, NSCopying, DVTInvalidation>
{
    NSString *_displayName;
    IDEBreakpointBucket *_bucket;
    NSMutableSet *_matchedModuleNames;
    BOOL _shouldBeEnabled;
    int _debuggerState;
    unsigned long long _ignoreCount;
    unsigned long long _hitCount;
    NSString *_condition;
    BOOL _continueAfterRunningActions;
    NSMutableArray *_actions;
    NSMutableArray *_locations;
    DVTMapTable *_actionsToSetsOfObservers;
    int _breakpointStackSelectionBehavior;
    NSString *_customStopReasonString;
}

+ (id)propertiesAffectingPersistenceState;
+ (void)initialize;
@property(retain) NSString *customStopReasonString; // @synthesize customStopReasonString=_customStopReasonString;
@property int breakpointStackSelectionBehavior; // @synthesize breakpointStackSelectionBehavior=_breakpointStackSelectionBehavior;
@property unsigned long long hitCount; // @synthesize hitCount=_hitCount;
@property BOOL continueAfterRunningActions; // @synthesize continueAfterRunningActions=_continueAfterRunningActions;
@property(copy) NSString *condition; // @synthesize condition=_condition;
@property unsigned long long ignoreCount; // @synthesize ignoreCount=_ignoreCount;
@property int debuggerState; // @synthesize debuggerState=_debuggerState;
@property(nonatomic) BOOL shouldBeEnabled; // @synthesize shouldBeEnabled=_shouldBeEnabled;
@property(retain) IDEBreakpointBucket *bucket; // @synthesize bucket=_bucket;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)addLocations:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addActions:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (id)_actionArchivingProxiesArray;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setBreakpointStackSelectionBehaviorFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setContinueAfterRunningActionsFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setShouldBeEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (BOOL)_booleanValueFromUTF8String:(char *)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)_handleActionsChanged:(id)arg1;
- (void)resetActionExpressionResults;
- (void)locationWasRemoved:(id)arg1;
- (void)_updateLocation:(id)arg1 fromLocation:(id)arg2;
- (void)_locationWasResolved:(id)arg1 currentLocations:(id)arg2;
- (unsigned long long)_indexOfSimilarBreakpointLocationMatching:(id)arg1 inLocations:(id)arg2;
- (void)locationWasResolved:(id)arg1;
- (void)setInitialResolvedLocations:(id)arg1;
@property(readonly) BOOL locationsProvideAdditionalInformation;
- (void)toggleShouldBeEnabled;
- (void)_notifyPersistencyStateChanged;
- (void)primitiveSetBucket:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)_dvt_commonInit;

// Remaining properties
@property(copy) NSArray *actions; // @dynamic actions;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *locations; // @dynamic locations;
@property(copy) NSSet *matchedModuleNames; // @dynamic matchedModuleNames;
@property(readonly) NSMutableArray *mutableActions; // @dynamic mutableActions;
@property(readonly) NSMutableArray *mutableLocations; // @dynamic mutableLocations;
@property(readonly) NSMutableSet *mutableMatchedModuleNames; // @dynamic mutableMatchedModuleNames;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

