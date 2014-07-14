/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEKeyDrivenNavigableItem.h"

@class DVTObservingToken, SKEDocument, SKEDocumentMemberWrapper;

@interface SKEDocumentNavigableItem : IDEKeyDrivenNavigableItem
{
    DVTObservingToken *_childWrappersToken;
    SKEDocument *_safeDocument;
}

+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingRepresentedWrapper;
- (void).cxx_destruct;
- (id)contentDocumentLocation;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (id)image;
- (id)name;
@property(readonly) SKEDocument *representedDocument;
@property(readonly) SKEDocumentMemberWrapper *representedWrapper;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

@end
