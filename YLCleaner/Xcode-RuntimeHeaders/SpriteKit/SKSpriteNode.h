/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKNode.h>

@class NSColor, SKTexture;

@interface SKSpriteNode : SKNode
{
    BOOL _shouldRepeatTexture;
}

+ (id)spriteNodeWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 size:(struct CGSize)arg2;
+ (id)spriteNodeWithTexture:(id)arg1;
+ (id)spriteNodeWithImageNamed:(id)arg1;
@property BOOL shouldRepeatTexture; // @synthesize shouldRepeatTexture=_shouldRepeatTexture;
- (BOOL)containsPoint:(struct CGPoint)arg1;
@property long long blendMode;
@property struct CGSize repeatTextureSize;
- (void)setRepeatTexture:(BOOL)arg1;
- (BOOL)repeatTexture;
@property struct CGRect centerRect;
@property struct CGSize size;
@property struct CGPoint anchorPoint;
@property(retain) NSColor *color;
@property double colorBlendFactor;
@property(retain) SKTexture *texture;
- (id)description;
- (id)initWithTexture:(id)arg1;
- (id)initWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithTexture:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3;

@end
