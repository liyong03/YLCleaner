/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@class NSImage;

@interface XCEImageAndTextCell : NSTextFieldCell
{
    NSImage *_image;
    double _verticalOffsetForText;
    double _verticalOffsetForImage;
    double _leftMargin;
    double _imageTextGap;
    double _fontHeight;
    BOOL _useSourceListStyle;
    BOOL _currentlyEditingLocalScope;
    BOOL _useWizardTheme;
    BOOL _useBasicDropShadow;
}

+ (double)rowHeightForFont:(id)arg1 sourceList:(BOOL)arg2;
+ (double)rowHeightForFontHeight:(double)arg1 sourceList:(BOOL)arg2;
+ (double)fontHeightForFont:(id)arg1;
@property BOOL useBasicDropShadow; // @synthesize useBasicDropShadow=_useBasicDropShadow;
@property BOOL useWizardTheme; // @synthesize useWizardTheme=_useWizardTheme;
@property BOOL useSourceListStyle; // @synthesize useSourceListStyle=_useSourceListStyle;
@property double imageTextGap; // @synthesize imageTextGap=_imageTextGap;
@property double leftMargin; // @synthesize leftMargin=_leftMargin;
@property double verticalOffsetForImage; // @synthesize verticalOffsetForImage=_verticalOffsetForImage;
@property double verticalOffsetForText; // @synthesize verticalOffsetForText=_verticalOffsetForText;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)basicDropShadow;
- (void)drawWizardThemeBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawSourceListBackground:(struct CGRect)arg1;
- (void)_setCurrentlyEditing:(BOOL)arg1;
- (void)endEditing:(id)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (double)_preTextAreaWidth;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)setFont:(id)arg1;
- (void)_internalEndEditing;
- (void)_internalBeginEditing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (void)initializeValues;
- (void)configureWithFont:(id)arg1 sourceList:(BOOL)arg2;
- (double)rowHeightForCurrentFont;
- (double)rowHeightForFont:(id)arg1;
- (void)notifyEndEditing;
- (void)notifyBeginEditing;

@end

