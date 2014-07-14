/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEAlertViewController.h>

#import "NSOpenSavePanelDelegate-Protocol.h"

@class NSMutableArray, NSPopUpButton;

@interface IDERunScriptAlertViewController : IDEAlertViewController <NSOpenSavePanelDelegate>
{
    NSPopUpButton *_scriptPopUpButton;
    NSMutableArray *_recentScripts;
}

@property(retain) NSPopUpButton *scriptPopUpButton; // @synthesize scriptPopUpButton=_scriptPopUpButton;
- (void).cxx_destruct;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (void)awakeFromNib;
- (void)populatePopUpButton;
- (id)_stringForPath:(id)arg1;
- (void)addPathToRecentScripts:(id)arg1;
- (void)chooseScript:(id)arg1;
- (void)selectScript:(id)arg1;
- (void)setAlert:(id)arg1;

@end

