/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CDMProperty.h"

#import "IDEDataModelObject-Protocol.h"

@class IDETypeIdentifier, NSArray, NSImage, NSString;

@interface CDMProperty (CDMNavigableIdentification) <IDEDataModelObject>
@property(readonly) NSArray *hierarchyTreeControllerChildren;
- (id)treeControllerChildren;
@property(readonly) id <IDEDMModelObject> parentObject;
@property(readonly) NSArray *structuralChildren;
@property(readonly) id <IDEDMSourceObject> sourceObject;

// Remaining properties
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier; // @dynamic ideModelObjectTypeIdentifier;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) NSImage *representativeIcon; // @dynamic representativeIcon;
@end

