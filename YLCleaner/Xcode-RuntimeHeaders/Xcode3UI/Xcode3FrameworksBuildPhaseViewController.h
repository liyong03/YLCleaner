/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Xcode3UI/Xcode3FileBuildPhaseViewController.h>

@class DVTPopUpButtonCell, Xcode3AddFrameworksController;

@interface Xcode3FrameworksBuildPhaseViewController : Xcode3FileBuildPhaseViewController
{
    DVTPopUpButtonCell *_roleCell;
    Xcode3AddFrameworksController *_addFrameworksController;
}

- (void).cxx_destruct;
- (id)_filterPredicate;
- (id)footerLabel;
- (BOOL)_displayFullPath;
- (void)addItems:(id)arg1;
- (BOOL)_acceptDrop:(id)arg1 onGroup:(id)arg2 proposedRow:(unsigned long long)arg3;
- (BOOL)_addItems:(id)arg1 atRow:(unsigned long long)arg2;
- (void)_setFrameworkRole:(id)arg1;
- (id)_objectValueForRowColumnOfBuildFile:(id)arg1;
- (id)_dataCellForRoleOfBuildFile:(id)arg1;
- (BOOL)_canSetRole;
- (void)viewDidInstall;
- (void)primitiveInvalidate;

@end

