/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable;

@interface PBXInspectorController : NSObject
{
    NSMapTable *_windowToInspectorMap;
}

+ (id)sharedInspectorController;
- (BOOL)projectCanClose:(id)arg1;
- (void)projectWillClose:(id)arg1;
- (id)getInfoForSelection:(id)arg1;
- (id)getInfoForSelection:(id)arg1 switchingToTabNamed:(id)arg2;
- (id)getInfoForItems:(id)arg1;
- (id)getInfoForItems:(id)arg1 switchingToTabNamed:(id)arg2;
- (void)showInspector:(id)arg1;
- (void)getInfo:(id)arg1;
- (id)newInfoInspectorForSelection:(id)arg1;
- (id)newInfoInspector:(id)arg1;
- (id)newInspector:(id)arg1;
- (void)addInspector:(id)arg1;
- (void)_inspectorWindowClosing:(id)arg1;
- (BOOL)floatingInspectorWindowIsVisible;
- (id)_inspectorPanels:(id)arg1 inspectingItems:(id)arg2;
- (id)_inspectedItems;
- (id)_infoInspectorPanels;
- (id)_inspectorPanels;
- (id)_inspectorPanelsOfClass:(Class)arg1;
- (id)inspectors;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

