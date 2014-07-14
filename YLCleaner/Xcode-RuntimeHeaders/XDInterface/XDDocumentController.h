/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XDInterface/XDPluginController.h>

@interface XDDocumentController : XDPluginController
{
    id <XDModelCreationStatusObserving> _statusObserver;
    id _xcodeProject;
    struct {
        unsigned int isloadedDuringProjectLoading:1;
        unsigned int RESERVED:31;
    } _xdpcFlags;
}

- (void)notifyDocumentModelChangedNotUndoable;
- (void)setLoadedDuringProjectLoading:(BOOL)arg1;
- (BOOL)isLoadedDuringProjectLoading;
- (void)printInfoDidChange;
- (void)setStatusObserver:(id)arg1;
- (BOOL)completedModelContent;
- (void)setXcodeProject:(id)arg1;
- (id)xcodeProject;

@end

