/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@class DVQueryType, DVResultsOutlineViewController;

@interface DVQueryCategoryCell : NSTextFieldCell
{
    DVQueryType *m_categoryItem;
    BOOL showMore;
    unsigned long long m_totalItemCount;
    unsigned long long m_limitedItemCount;
    DVResultsOutlineViewController *controller;
}

+ (void)resetButtonCache;
+ (id)showMoreLessButtons;
@property(retain, nonatomic) DVResultsOutlineViewController *controller; // @synthesize controller;
@property(nonatomic) unsigned long long limitedItemCount; // @synthesize limitedItemCount=m_limitedItemCount;
@property(nonatomic) unsigned long long totalItemCount; // @synthesize totalItemCount=m_totalItemCount;
@property(nonatomic) BOOL showMore; // @synthesize showMore;
@property(retain, nonatomic) DVQueryType *categoryItem; // @synthesize categoryItem=m_categoryItem;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)initWithItem:(id)arg1 controller:(id)arg2;
- (id)showMoreLessButton;

@end

