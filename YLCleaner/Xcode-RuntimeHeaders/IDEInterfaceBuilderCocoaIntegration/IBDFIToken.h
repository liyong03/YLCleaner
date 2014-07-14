/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderCocoaIntegration/IBToken.h>

#import "NSCoding-Protocol.h"

@class NSArray;

@interface IBDFIToken : IBToken <NSCoding>
{
    NSArray *options;
    IBToken *selection;
}

+ (id)DFITokenWithOptions:(id)arg1 selectedIndex:(unsigned long long)arg2 type:(long long)arg3;
+ (id)DFITokenWithOptions:(id)arg1 selection:(id)arg2 type:(long long)arg3;
- (void).cxx_destruct;
- (id)menuWithAction:(SEL)arg1 target:(id)arg2 tokenField:(id)arg3;
- (void)setDisplayString:(id)arg1;
- (id)displayString;
- (void)setEditingString:(id)arg1;
- (id)editingString;
- (void)setSelection:(id)arg1;
- (id)selection;
- (void)setOptions:(id)arg1;
- (id)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(id)arg1 selection:(id)arg2 type:(long long)arg3;

@end

