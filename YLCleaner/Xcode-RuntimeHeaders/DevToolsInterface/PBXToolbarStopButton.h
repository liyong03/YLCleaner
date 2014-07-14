/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXToolbarItemPopup.h>

#import "PBXTrackableTaskObserver-Protocol.h"

@class NSImage, PBXTrackableTaskManager;

@interface PBXToolbarStopButton : PBXToolbarItemPopup <PBXTrackableTaskObserver>
{
    PBXTrackableTaskManager *_taskManager;
    BOOL _inToolbar;
    NSImage *_stopImage;
}

+ (id)noTasksImage;
+ (id)tasksImage;
+ (id)globalID;
+ (void)echoStringsForDefinition:(id)arg1;
+ (id)createInstanceWithDefinition:(id)arg1 forProjectDocument:(id)arg2;
- (void)toolbarMenuWasSelected:(id)arg1;
- (void)stopMenuCalled:(id)arg1;
- (id)_createMenu;
- (void)_recreateImage;
- (id)_createImage;
- (long long)toolbarItemCount;
- (void)singleClickEvent:(id)arg1 onView:(id)arg2;
- (BOOL)allowsUserCustomization;
- (id)createToolTip;
- (void)taskUnregistered:(id)arg1;
- (void)taskRegistered:(id)arg1;
- (void)validate;
- (void)setIsInToolbar:(BOOL)arg1;
- (id)taskManager;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTaskManager:(id)arg1;

@end

