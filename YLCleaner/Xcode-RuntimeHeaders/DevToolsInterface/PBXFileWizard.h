/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXFileCopyingWizard.h>

@class NSArray, NSBox, NSButton, NSComboBox, NSPopUpButton, NSString, NSTextField, PBXCompletionManager, PBXItemsSelectionModule;

@interface PBXFileWizard : PBXFileCopyingWizard
{
    NSString *_localizedDescription;
    NSTextField *_nameField;
    NSButton *_counterpartCreationSwitch;
    NSComboBox *_directoryField;
    NSButton *_chooseFileDirectoryButton;
    NSPopUpButton *_addToProjectPopUp;
    PBXItemsSelectionModule *_targetSelectionModule;
    NSBox *_targetSelectionBox;
    PBXCompletionManager *_completionManager;
    NSString *_fileNameExtension;
    NSArray *_targetsAcceptingFileNameExtension;
}

+ (id)icon;
+ (id)wizardDescription;
+ (id)categorizedWizardName;
+ (void)unregisterAsChoosableWizard;
+ (void)registerAsChoosableWizard;
+ (id)registeredWizardClasses;
- (void)_finishTemplateInstantiationAfterFileCopying:(id)arg1 instantiationResult:(id)arg2;
- (id)_instantiateTemplateWithContext:(id)arg1;
- (BOOL)_prepareToCreateFreshProduct:(id)arg1;
- (id)_listOfFilesToCopy;
- (id)_instantiationDirectory;
- (void)finish;
- (BOOL)canFinish;
- (void)createDirectorySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)validateSettings;
- (void)chooseProject:(id)arg1;
- (void)sheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)chooseFileDirectory:(id)arg1;
- (void)takeCounterpartFileCreationFlagFrom:(id)arg1;
- (void)takeFileDirectoryFrom:(id)arg1;
- (void)takeFileNameFrom:(id)arg1;
- (void)itemsSelectionModule:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4 item:(id)arg5;
- (BOOL)itemsSelectionModule:(id)arg1 shouldCheckItem:(id)arg2;
- (void)setProject:(id)arg1 group:(id)arg2;
- (id)_groupForProject:(id)arg1;
- (long long)groupChildIndex;
- (id)selection;
- (id)group;
- (id)project;
- (void)_setDefaultSelectedTargets;
- (void)_synchronizeTargetListToSelectedProjectAndFileNameExtension;
- (void)_setTargetsAcceptingFileNameExtension:(id)arg1;
- (id)_targetsAcceptingFileNameExtension;
- (void)_setFileNameExtension:(id)arg1;
- (id)_fileNameExtension;
- (id)fullResolvedFilePath;
- (void)setFileDirectory:(id)arg1;
- (id)fileDirectory;
- (void)_setFileDirectoryPrefix:(id)arg1;
- (id)_fileDirectoryPrefix;
- (void)setFileName:(id)arg1;
- (id)fileName;
- (void)_setCompletionManager:(id)arg1;
- (id)_completionManager;
- (void)setupDefaultSettings;
- (void)_changeFileDirectory;
- (id)_directoryField;
- (id)_targetSelectionModule;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)firstResponderWasSet:(id)arg1;
- (id)firstKeyView;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (void)_updateCounterpartSwitchForProposedFileName:(id)arg1;
- (void)_populateProjectPopup;
- (void)_populateSavedPathsComboBox;
- (id)label;
- (void)setLocalizedDescription:(id)arg1;
- (id)localizedDescription;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 parentPage:(id)arg2 nextPage:(id)arg3 parentNextPageSelector:(SEL)arg4;

@end

