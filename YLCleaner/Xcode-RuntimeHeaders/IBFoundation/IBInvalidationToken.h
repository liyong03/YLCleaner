/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IBInvalidation-Protocol.h"

@interface IBInvalidationToken : NSObject <IBInvalidation>
{
    id _callback;
}

+ (id)tokenWithInvalidateTokens:(id)arg1;
+ (id)tokenWithCallback:(id)arg1;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithCallback:(id)arg1;

@end

