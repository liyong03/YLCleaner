/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXModule.h>

@class NSButton, NSTextField;

@interface PBXTabSettingsModule : PBXModule
{
    NSTextField *tabWidthField;
    NSTextField *indentWidthField;
    NSButton *usesTabsCheckbox;
    NSButton *okButton;
}

+ (id)sharedTabSettingsModule;
- (void)cancelButtonAction:(id)arg1;
- (void)okButtonAction:(id)arg1;
- (void)runModalForTextFileDocument:(id)arg1;
- (id)initWithModuleNibName:(id)arg1;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (Class)moduleWindowClass;
- (id)loadModuleWindow;

@end

