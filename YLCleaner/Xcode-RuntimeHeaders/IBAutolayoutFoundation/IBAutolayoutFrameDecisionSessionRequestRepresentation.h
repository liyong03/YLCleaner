/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBAutolayoutFoundation/IBAutolayoutOperationRequestRepresentation.h>

#import "IBBinaryArchiving-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface IBAutolayoutFrameDecisionSessionRequestRepresentation : IBAutolayoutOperationRequestRepresentation <IBBinaryArchiving, NSCoding>
{
    NSString *_sessionIdentifier;
    NSDictionary *_options;
}

@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

