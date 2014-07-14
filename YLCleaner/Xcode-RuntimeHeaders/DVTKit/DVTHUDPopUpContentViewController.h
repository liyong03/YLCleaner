/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTViewController.h>

@class DVTHUDPopUpController;

@interface DVTHUDPopUpContentViewController : DVTViewController
{
    CDStruct_bf6d4a14 _contentInset;
    DVTHUDPopUpController *_windowController;
}

+ (id)HUDPopUpContentViewController;
@property(retain) DVTHUDPopUpController *windowController; // @synthesize windowController=_windowController;
@property CDStruct_bf6d4a14 contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)alternateButtonAction:(id)arg1;
- (id)alternateButtonLabel;
- (BOOL)shouldShowDoneButton;
- (id)doneButtonLabel;
- (void)close:(id)arg1;
@property(readonly) struct CGSize doneButtonOffset;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

