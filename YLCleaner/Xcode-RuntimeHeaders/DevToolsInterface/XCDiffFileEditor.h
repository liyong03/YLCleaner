/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXFileEditor.h>

#import "XCDiffComparatorViewDelegate-Protocol.h"

@class XCDiffComparator;

@interface XCDiffFileEditor : PBXFileEditor <XCDiffComparatorViewDelegate>
{
    XCDiffComparator *_comparator;
}

+ (BOOL)canReuseEditorInstances;
+ (void)initialize;
- (id)dataSourceForCodeAssistant;
- (id)undoManagerForDiffComparatorView:(id)arg1;
- (void)_diffContextDidChangeDiffDescriptors:(id)arg1;
- (void)diffComparatorDidFinishLoadingRightFileDocument:(id)arg1;
- (void)diffComparatorDidFinishLoadingLeftFileDocument:(id)arg1;
- (void)becomeActive;
- (void)setFileNavigator:(id)arg1;
@property(readonly) XCDiffComparator *comparator; // @synthesize comparator=_comparator;
- (void)viewDidLoad;
- (void)viewWillLoad;
- (void)setDocument:(id)arg1;
- (void)_removeDocument;
- (void)_installDocument;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)dealloc;
- (id)initWithFileDocument:(id)arg1;

@end

