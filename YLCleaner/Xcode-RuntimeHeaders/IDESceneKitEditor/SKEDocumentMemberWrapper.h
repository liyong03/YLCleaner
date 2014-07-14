/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEInspectorMatching-Protocol.h"
#import "SKEDocumentMemberMutationDelegate-Protocol.h"

@class SKEDocument;

@interface SKEDocumentMemberWrapper : NSObject <IDEInspectorMatching, SKEDocumentMemberMutationDelegate>
{
    id _member;
    SKEDocument *_document;
}

- (void).cxx_destruct;
- (void)document:(id)arg1 didReplaceChildMember:(id)arg2 ofMember:(id)arg3 byChildMember:(id)arg4;
- (void)document:(id)arg1 willReplaceChildMember:(id)arg2 ofMember:(id)arg3 byChildMember:(id)arg4;
- (void)document:(id)arg1 didRemoveChildMember:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 willRemoveChildMember:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 didAddChildMember:(id)arg2 toMember:(id)arg3;
- (void)document:(id)arg1 willAddChildMember:(id)arg2 toMember:(id)arg3;
- (id)applicableInspectorsForCategory:(id)arg1 suggestion:(id)arg2;
- (id)navigableDocumentLocation;
- (id)childWrappers;
- (id)image;
- (id)name;
- (id)identifier;
- (id)document;
- (id)member;
- (id)documentType;
- (id)initWithMember:(id)arg1 document:(id)arg2;
- (BOOL)isGroup;
- (BOOL)isMaterial;
- (BOOL)isNode;

@end

