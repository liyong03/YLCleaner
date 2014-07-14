/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBXObject.h"

#import "DTFileSystemEventStreamDelegate-Protocol.h"
#import "NSCoding-Protocol.h"

@class DTFileSystemEventStream, NSMutableDictionary, NSString, XCOrganizerFileSystemNodeInfo;

@interface XCBinderItem : PBXObject <DTFileSystemEventStreamDelegate, NSCoding>
{
    XCOrganizerFileSystemNodeInfo *_rootNode;
    DTFileSystemEventStream *_eventStream;
    NSMutableDictionary *_actionSetsByPath;
    NSString *_lastActionUUIDs[4];
    NSMutableDictionary *_projectManagersByPath;
}

+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (id)binderItemWithRootNode:(id)arg1;
@property(retain) XCOrganizerFileSystemNodeInfo *rootNode; // @synthesize rootNode=_rootNode;
- (id)gidCommentForArchive;
- (id)fallbackClassNameForPListArchive;
- (id)classNameForPListArchive;
- (id)lastOtherAction;
- (void)setLastOtherAction:(id)arg1;
- (id)lastRunAction;
- (void)setLastRunAction:(id)arg1;
- (id)lastCleanAction;
- (void)setLastCleanAction:(id)arg1;
- (id)lastBuildAction;
- (void)setLastBuildAction:(id)arg1;
- (void)setOrganizerActionSets:(id)arg1;
- (id)organizerActionSets;
- (void)setPath:(id)arg1;
- (id)path;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)definitionPathForAction:(id)arg1 ofType:(int)arg2 applyingToNode:(id)arg3;
- (void)removeProjectManagers;
- (id)projectManagerForNode:(id)arg1;
- (id)lastActionForActionType:(int)arg1;
- (id)actionForActionType:(int)arg1 withUUID:(id)arg2;
- (void)setLastAction:(id)arg1 forActionType:(int)arg2;
- (id)iconImageForNode:(id)arg1;
- (id)actionSetsApplyingToNode:(id)arg1;
- (id)actionSetMappingForNode:(id)arg1;
- (id)actionSetDefinedOnNode:(id)arg1;
- (BOOL)isBuildableForAbsolutePath:(id)arg1;
- (void)_removeCachedActionSetForRelativePath:(id)arg1;
- (void)_cacheActionSet:(id)arg1 forRelativePath:(id)arg2;
- (id)_cachedActionSetForRelativePath:(id)arg1;
- (id)_cachedActionSetPaths;
- (id)_cachedActionSets;
- (id)_registerAllActionsForNode:(id)arg1;
- (void)_markNodesBuildable;
- (id)_relativePathForPath:(id)arg1;
- (id)_relativePathForNode:(id)arg1;
- (id)_nonEmptyActionSets;
- (void)stopListeningForFileSystemEvents;
- (void)startListeningForFileSystemEvents;
- (void)fileSystemEventStream:(id)arg1 notedChangeOfRootPath:(id)arg2;
- (void)fileSystemEventStream:(id)arg1 notedChangeAtPath:(id)arg2 scanRecursively:(BOOL)arg3;
- (void)_updateActionSetsAndProjectManagersForChangesAtPath:(id)arg1;
- (void)_udpateRootNodeForChangesAtPath:(id)arg1 scanRecursively:(BOOL)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithRootNode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

