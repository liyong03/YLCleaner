/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCell.h"

@interface XCSplashScreenTableCell : NSCell
{
}

+ (struct CGRect)_frameForSubTitle:(id)arg1 withImageFrame:(struct CGRect)arg2 cellFrame:(struct CGRect)arg3 titleFrame:(struct CGRect)arg4;
+ (struct CGRect)_frameForTitle:(id)arg1 withImageFrame:(struct CGRect)arg2 cellFrame:(struct CGRect)arg3;
+ (struct CGRect)_imageFrameWithCellFrame:(struct CGRect)arg1;
+ (id)_subTitleParagraphStyle;
+ (id)_titleParagraphStyle;
- (id)stringValue;
- (unsigned long long)type;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_attributedSubTitleWithString:(id)arg1 usingHighlight:(BOOL)arg2;
- (id)_attributedTitleUsingHighlight:(BOOL)arg1;
- (BOOL)_shouldUseHighlightInView:(id)arg1;
- (id)_fullSubTitle;
- (id)_subTitle;
- (id)_title;
- (id)_image;
- (id)_recent;
- (void)setObjectValue:(id)arg1;

@end

