/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXInspectorPaneModule.h>

@class NSButton, NSMutableArray, NSPopUpButton, NSTextField, PBXExtendedTableView, XCExtendedArrayController;

@interface XCExecutableDebugSettingsInspectorPane : PBXInspectorPaneModule
{
    NSPopUpButton *_debuggerPopUpButton;
    NSPopUpButton *_standardIOForDebuggingPopUpButton;
    NSButton *_debugRemotelyCheckbox;
    NSTextField *_remoteHostTextField;
    NSButton *_startExecutableOnLaunchCheckbox;
    NSButton *_breakOnDebugStrCheckbox;
    PBXExtendedTableView *_sourceDirectoriesTableView;
    NSButton *_addSourceDirectoryButton;
    NSButton *_removeSourceDirectoryButton;
    NSButton *_helpButton;
    XCExtendedArrayController *_selectedItemsController;
    XCExtendedArrayController *_sourceDirectoriesController;
    XCExtendedArrayController *_debugConfigurationsController;
    NSMutableArray *_sourceDirectories;
    PBXExtendedTableView *_dylibTableView;
    XCExtendedArrayController *_selectedShlibsController;
    NSPopUpButton *_systemLevelPopUp;
    NSPopUpButton *_userLevelPopUp;
}

+ (unsigned long long)panelPosition;
+ (id)alternateLabel;
+ (id)label;
+ (id)inspectableClasses;
+ (void)initialize;
- (void)resetShlibsAction:(id)arg1;
- (id)symbolLevelArray;
- (void)setDefaultUserSymbolLevel:(id)arg1;
- (void)setDefaultSystemSymbolLevel:(id)arg1;
- (id)newObjectBasedOnObject:(id)arg1 fromController:(id)arg2;
- (void)openPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addObjectFile:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)additionalPasteboardTypesToDeclare;
- (id)additionalPasteboardTypes;
- (void)removeSourceDirectories:(id)arg1;
- (void)contentDidChangeForArrayController:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)setSourceDirectories:(id)arg1;
- (id)sourceDirectories;
- (id)parseStringsIntoDictionariesInArray:(id)arg1;
- (id)getStringsFromDictionariesInArray:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

