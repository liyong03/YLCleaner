/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTAnnotationProvider.h"

#import "DVTTextAnnotationDelegate-Protocol.h"
#import "IDETestsInFileObserver-Protocol.h"

@class DVTObservingToken, IDEAnnotationContext, NSURL;

@interface IDETestingAnnotationProvider : DVTAnnotationProvider <DVTTextAnnotationDelegate, IDETestsInFileObserver>
{
    double _lastHoverEventTimeInterval;
    struct CGPoint _lastHoverEventPoint;
    DVTObservingToken *_runSessionsObservingToken;
    BOOL _isRunningTests;
    IDEAnnotationContext *_context;
    NSURL *_fileURL;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)annotation:(id)arg1 willDrawInTextSidebarView:(id)arg2 withAnnotationsInSameLine:(id)arg3;
- (id)contextMenuItemsForAnnotation:(id)arg1 inTextSidebarView:(id)arg2;
- (id)_createMenuItem:(id)arg1 annotation:(id)arg2;
- (BOOL)shouldMoveCursorForAnnotation:(id)arg1;
- (void)didEndRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didBeginRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (BOOL)_shouldIgnoreEvent:(id)arg1;
- (void)didClickAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)workspaceReferencedTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testsInFileUpdated:(id)arg1;
- (void)providerWillUninstall;
- (id)initWithContext:(id)arg1;
- (id)_createAnnotationForSourceDocument:(id)arg1 test:(id)arg2;

@end

