/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSBezierPath;

@interface DTNetworkGraphObject : NSObject
{
    BOOL isSelected;
    NSBezierPath *path;
    NSBezierPath *decorativePath;
    id <NSObject> entity;
}

@property(retain) NSBezierPath *decorativePath; // @synthesize decorativePath;
@property(retain) NSBezierPath *path; // @synthesize path;
@property BOOL isSelected; // @synthesize isSelected;
@property(retain) id <NSObject> entity; // @synthesize entity;

@end

