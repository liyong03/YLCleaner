/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDELogNavigator/IDEBotSupportingDocument.h>

@class IDEBotExecution;

@interface IDEBotExecutionDocument : IDEBotSupportingDocument
{
    IDEBotExecution *_botExecution;
}

+ (id)keyPathsForValuesAffectingBot;
@property(retain, nonatomic) IDEBotExecution *botExecution; // @synthesize botExecution=_botExecution;
- (void).cxx_destruct;
- (id)bot;
- (void)editorDocumentDidClose;
- (id)displayName;
- (void)setFileURL:(id)arg1;
- (void)_botExecutionWillBeRemovedsFromXcode:(id)arg1;

@end

