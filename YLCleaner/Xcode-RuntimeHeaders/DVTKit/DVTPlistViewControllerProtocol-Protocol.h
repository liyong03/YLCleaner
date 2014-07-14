/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DVTPlistViewControllerProtocol <NSObject>
- (void)revealNode:(id)arg1;
- (void)propertyListChanged:(id)arg1;

@optional
- (void)selectDocumentLocations:(id)arg1;
- (void)setSelection:(id)arg1 edit:(BOOL)arg2;
- (id)currentSelection;
- (BOOL)commitEdits;
- (BOOL)editInProgress;
@end
