/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class IDEActivityLogSection;

@protocol IDEBuildResultsOutlineDelegate <NSObject>
@property(readonly) IDEActivityLogSection *lastFindResultSection;
@property(readonly) struct _NSRange lastFindResultRange;
@property(readonly) BOOL lastFindResult;
- (id)activityLogSection;
- (void)showAllMessages:(id)arg1;
- (void)doubleClickDocumentLocation:(id)arg1;
- (void)processNewSelectedIndexPaths:(id)arg1;
@end

