/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IBClassDescriber, IBSystemClassProvider, NSMutableArray, NSMutableDictionary;

@interface IBDocumentStructureRepresentation : NSObject
{
    NSMutableDictionary *oidToObjectInfo;
    IBClassDescriber *classDescriber;
    IBSystemClassProvider *systemClassProvider;
    NSMutableArray *topLevelObjects;
    NSMutableArray *topLevelConcreteObjects;
    NSMutableDictionary *connectionsToObject;
    NSMutableDictionary *connectionsFromObject;
}

- (void).cxx_destruct;
- (id)objectOIDsConnectedForObjectWithOID:(id)arg1 byWayOfConnectionLabeled:(id)arg2;
- (id)objectOIDConnectedFromObjectWithOID:(id)arg1 byWayOfConnectionLabeled:(id)arg2;
- (id)objectOIDConnectedToObjectWithOID:(id)arg1 byWayOfConnectionLabeled:(id)arg2;
- (id)objectsConnectedForObjectWithOID:(id)arg1;
- (id)objectsConnectedFromObjectWithOID:(id)arg1;
- (id)objectsConnectedToObjectWithOID:(id)arg1;
- (id)childrenOIDsOfObjectWithOID:(id)arg1;
- (id)groupIDForObjectWithID:(id)arg1;
- (id)parentOIDOfObjectWithOID:(id)arg1;
- (id)topLevelObjectIDs;
- (id)externalCustomClassNameForObjectWithOID:(id)arg1;
- (id)classNameForObjectWithOID:(id)arg1;
- (id)effectiveClassNameForObjectWithOID:(id)arg1;
- (id)documentSystemClassProvider;
- (id)documentClassDescriber;
- (id)initWithDocument:(id)arg1;

@end

