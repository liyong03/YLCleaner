/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface XCPerformanceMetricCheckpoint : NSObject
{
    NSString *_label;
    double _checkpointTime;
    NSString *_memoryStats;
}

- (double)checkpointTime;
- (id)memoryStats;
- (id)label;
- (void)dealloc;
- (id)initWithLabel:(id)arg1;

@end

