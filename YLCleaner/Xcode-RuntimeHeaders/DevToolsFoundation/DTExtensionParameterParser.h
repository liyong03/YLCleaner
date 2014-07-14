/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext;

@interface DTExtensionParameterParser : NSObject
{
    NSManagedObjectContext *_context;
}

+ (id)valueOfAttributeType:(unsigned long long)arg1 forString:(id)arg2;
- (void)parseParametersForExtension:(id)arg1;
- (void)dealloc;
- (id)initWithManagedObjectContext:(id)arg1;
- (void)_createAndInsertObjectsForRelationship:(id)arg1 usingElements:(id)arg2 withParentObject:(id)arg3;
- (void)_setRelationshipsForObject:(id)arg1 withElement:(id)arg2 filteringKeys:(id)arg3;
- (void)_setAttributesForObject:(id)arg1 withElement:(id)arg2 filteringKeys:(id)arg3;
- (void)_setStringValue:(id)arg1 forAttribute:(id)arg2 inObject:(id)arg3;
- (void)_parseElementsOfExtensionElement:(id)arg1 intoInfo:(id)arg2;
- (void)_parseAttributesOfExtensionElement:(id)arg1 intoInfo:(id)arg2;
- (id)_masterElementFromExtensionElements:(id)arg1;
- (void)_removeElementsWithName:(id)arg1 fromElement:(id)arg2;
- (id)_infoEntityNameForExtension:(id)arg1;
- (id)_context;
- (void)_parseFullParametersForExtension:(id)arg1;
- (void)_parseRawParametersForExtension:(id)arg1;
- (void)_setBasicPropertiesOfInfo:(id)arg1 forExtension:(id)arg2;

@end

