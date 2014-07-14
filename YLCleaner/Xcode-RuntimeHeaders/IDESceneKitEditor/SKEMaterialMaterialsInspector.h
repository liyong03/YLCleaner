/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDESceneKitEditor/SKEStaticTableViewInspector.h>

#import "NSTableViewDataSource-Protocol.h"

@class NSIndexSet;

@interface SKEMaterialMaterialsInspector : SKEStaticTableViewInspector <NSTableViewDataSource>
{
    NSIndexSet *selectedIndexes;
}

@property(retain, nonatomic) NSIndexSet *selectedIndexes; // @synthesize selectedIndexes;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setContent:(id)arg1;
- (void)viewDidInstall;
- (void)loadView;
- (void)updateSelectedIndexFromBindingSlot;

@end

