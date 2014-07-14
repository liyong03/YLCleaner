/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBXMLDecoderElement.h>

@class IBXMLDecoderFallbacksElement, NSString;

@interface IBXMLDecoderClassElement : IBXMLDecoderElement
{
    IBXMLDecoderFallbacksElement *_fallbacksElement;
    NSString *_className;
}

+ (id)elementName;
@property(readonly) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
@property(readonly) IBXMLDecoderFallbacksElement *fallbacksElement;
- (id)elements;
- (BOOL)acceptFallbacksElement:(id)arg1 error:(id *)arg2;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;
- (id)initWithAttributes:(const char **)arg1 parser:(id)arg2 error:(id *)arg3;

@end

