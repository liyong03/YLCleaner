/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFindReplace/IDEBatchFindable.h>

@class IDEEditorDocument;

@interface IDEBatchDocumentFindable : IDEBatchFindable
{
    IDEEditorDocument *_document;
    BOOL _usesSharedDocument;
    BOOL _requiresMainThreadAccess;
}

+ (BOOL)findableCanHandleFile:(id)arg1 forFindDescriptor:(id)arg2;
@property BOOL requiresMainThreadAccess; // @synthesize requiresMainThreadAccess=_requiresMainThreadAccess;
- (void).cxx_destruct;
- (BOOL)_loadDocument;
- (void)performFind;
- (void)main;
- (id)initWithFindDescriptor:(id)arg1 onFile:(id)arg2;

@end

