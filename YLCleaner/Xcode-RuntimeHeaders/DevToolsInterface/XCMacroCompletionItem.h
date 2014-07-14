/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PBXCompletionItem-Protocol.h"

@class NSString, XCTextMacroSpecification;

@interface XCMacroCompletionItem : NSObject <PBXCompletionItem>
{
    XCTextMacroSpecification *_macro;
    NSString *_cachedName;
}

- (long long)priority;
- (id)icon;
- (id)description;
- (id)descriptionText;
- (id)completionTextWithMacroExpansionDictionary:(id)arg1;
- (id)completionText;
- (id)displayType;
- (id)displayText;
- (id)name;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithMacroSpecification:(id)arg1;

@end

