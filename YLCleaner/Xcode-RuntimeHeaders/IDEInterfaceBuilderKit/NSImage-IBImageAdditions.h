/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSImage.h"

@interface NSImage (IBImageAdditions)
+ (BOOL)isTemplateName:(id)arg1;
+ (id)ibImageWithScaledDesktopPicture;
+ (id)imageWithRep:(id)arg1;
- (id)ibASCIIDescription;
- (id)ibASCIIDescriptionWithWidth:(long long)arg1 height:(long long)arg2;
- (id)imageFromRect:(struct CGRect)arg1;
- (id)bitmapImageRep;
- (id)imageWithOpacity:(double)arg1;
- (id)imageFocusedOnRect:(struct CGRect)arg1 horizontalBlur:(double)arg2 verticalBlur:(double)arg3;
- (id)representationOfSize:(struct CGSize)arg1;
- (struct CGImage *)cgImageRepresentation;
- (id)imageByScalingToSize:(struct CGSize)arg1;
- (void)drawInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 unflip:(BOOL)arg4;
- (void)drawInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 unflip:(BOOL)arg4;
- (void)drawWithCommands:(id)arg1;
@end

