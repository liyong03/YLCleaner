/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CDMIdentification-Protocol.h"
#import "DVTInvalidation-Protocol.h"

@class CDMInheritanceRelationship, CDMModel, DVTStackBacktrace, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface CDMEntity : NSObject <CDMIdentification, DVTInvalidation>
{
    NSString *name;
    NSString *representedClassName;
    NSMutableArray *attributes;
    NSMutableArray *fetchedProperties;
    NSMutableArray *relationships;
    NSMutableArray *allProperties;
    BOOL isAbstract;
    NSMutableDictionary *userInfoDictionary;
    NSString *elementID;
    NSString *versionHashModifier;
    NSMutableArray *descendants;
    CDMModel *model;
    NSNumber *uniqueID;
    CDMInheritanceRelationship *inheritanceRelationship;
    CDMInheritanceRelationship *oldInheritanceRelationship;
    NSMutableArray *compoundIndexes;
}

+ (id)dictionaryOfPropertyPLists:(id)arg1;
+ (id)keyPathsForValuesAffectingInspectedCompoundIndexes;
+ (id)keyPathsForValuesAffectingRelationshipsIncludingInheritance;
+ (id)keyPathsForValuesAffectingAllProperties;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingSortedFetchedProperties;
+ (id)keyPathsForValuesAffectingSortedRelationships;
+ (id)keyPathsForValuesAffectingSortedAttributes;
+ (id)keyPathsForValuesAffectingAllRelationshipsIncludingInheritance;
+ (id)keyPathsForValuesAffectingAllAttributesIncludingInheritance;
+ (id)keyPathsForValuesAffectingAllPropertiesIncludingInheritance;
@property(copy) NSArray *descendants; // @synthesize descendants;
@property(copy) NSArray *compoundIndexes; // @synthesize compoundIndexes;
@property(retain) CDMInheritanceRelationship *oldInheritanceRelationship; // @synthesize oldInheritanceRelationship;
@property(retain) CDMInheritanceRelationship *inheritanceRelationship; // @synthesize inheritanceRelationship;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID;
@property(retain) CDMModel *model; // @synthesize model;
@property(copy, nonatomic) NSString *versionHashModifier; // @synthesize versionHashModifier;
@property(copy, nonatomic) NSString *elementID; // @synthesize elementID;
@property(copy, nonatomic) NSDictionary *userInfoDictionary; // @synthesize userInfoDictionary;
@property(nonatomic) BOOL isAbstract; // @synthesize isAbstract;
@property(copy, nonatomic) NSArray *relationships; // @synthesize relationships;
@property(copy, nonatomic) NSArray *fetchedProperties; // @synthesize fetchedProperties;
@property(copy, nonatomic) NSArray *attributes; // @synthesize attributes;
@property(copy, nonatomic) NSString *representedClassName; // @synthesize representedClassName;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)xmlElementDescription;
- (id)compoundIndexesXMLElementTree;
- (id)userInfoXMLElementTree;
- (id)syncKeys;
- (void)stitchToRelatedModelElements;
- (id)initWithXMLElementDescription:(id)arg1 belongingToModel:(id)arg2;
- (id)xmlElementAttributes;
- (id)navigableItem_name;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (void)fillInStateWithDictionary:(id)arg1 entityNameMapTable:(id)arg2;
- (id)pastePropertiesWithDictionary:(id)arg1 entityNameMapTable:(id)arg2;
- (id)pasteFetchedPropertiesFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)pasteFetchRequestsFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)pasteRelationshipsFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)pasteAttributesFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)addKeysToDictionary:(id)arg1;
- (id)undoManager;
- (void)cascadeChangesToLegacyEntity:(id)arg1;
- (id)userInfoDictionaryForExternalUse;
- (BOOL)syncable;
- (id)initWithLegacyEntitysAttributes:(id)arg1 belongingToModel:(id)arg2;
- (id)initWithName:(id)arg1 belongingToModel:(id)arg2;
- (id)init;
- (void)_commonInitInModel:(id)arg1;
- (void)primitiveInvalidate;
- (void)removeFetchedProperty:(id)arg1;
- (void)addFetchedProperty:(id)arg1;
- (void)removeRelationship:(id)arg1;
- (void)addRelationship:(id)arg1;
- (void)removeAttribute:(id)arg1;
- (void)addAttribute:(id)arg1;
- (void)removeDescendantEntity:(id)arg1;
- (void)addDescendantEntity:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)setInspectedParentEntity:(id)arg1;
- (id)inspectedParentEntity;
@property(retain) CDMEntity *parentEntity;
- (void)setInspectedCompoundIndexes:(id)arg1;
- (id)inspectedCompoundIndexes;
- (BOOL)mapsDirectlyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)relationshipsIncludingInheritance;
@property(readonly) NSString *effectiveRepresentedClassName;
@property(readonly) NSArray *allProperties;
- (void)updateAllProperties;
- (id)targetedConfigurations;
- (id)targetedRelationships;
- (id)targetedFetchRequests;
- (id)inheritedPropertyForName:(id)arg1;
- (id)entityRelationshipForName:(id)arg1;
- (id)entityAttributeForName:(id)arg1;
- (id)entityFetchedPropertyForName:(id)arg1;
- (id)entityPropertyForName:(id)arg1;
- (id)possibleParentEntities;
- (id)owningConfigurations;
- (void)_registerUndoBlockForFoundEntity:(id)arg1;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;
- (id)sortedFetchedProperties;
- (id)sortedRelationships;
- (id)sortedAttributes;
- (id)code_entityFileName;
- (id)proposedFileName;
- (id)allRelationshipsIncludingInheritance;
- (id)allAttributesIncludingInheritance;
- (id)allPropertiesIncludingInheritance;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

