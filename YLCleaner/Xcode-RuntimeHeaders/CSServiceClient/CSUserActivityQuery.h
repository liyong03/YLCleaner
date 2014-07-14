/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CSDateTime, NSArray, NSDictionary, NSNumber, NSString;

@interface CSUserActivityQuery : NSObject
{
    NSArray *_actions;
    NSArray *_entityTypes;
    NSString *_userGUID;
    NSString *_ownerGUID;
    NSString *_containerGUID;
    NSString *_entityGUID;
    NSDictionary *_subFields;
    NSNumber *_onlyWatched;
    NSNumber *_onlyFavorites;
    NSNumber *_onlyUnread;
    NSNumber *_startIndex;
    NSNumber *_resultsLimit;
    CSDateTime *_startTime;
}

+ (void)initialize;
@property(retain) CSDateTime *startTime; // @synthesize startTime=_startTime;
@property(retain) NSNumber *resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain) NSNumber *startIndex; // @synthesize startIndex=_startIndex;
@property(retain) NSNumber *onlyUnread; // @synthesize onlyUnread=_onlyUnread;
@property(retain) NSNumber *onlyFavorites; // @synthesize onlyFavorites=_onlyFavorites;
@property(retain) NSNumber *onlyWatched; // @synthesize onlyWatched=_onlyWatched;
@property(retain) NSDictionary *subFields; // @synthesize subFields=_subFields;
@property(retain) NSString *entityGUID; // @synthesize entityGUID=_entityGUID;
@property(retain) NSString *containerGUID; // @synthesize containerGUID=_containerGUID;
@property(retain) NSString *ownerGUID; // @synthesize ownerGUID=_ownerGUID;
@property(retain) NSString *userGUID; // @synthesize userGUID=_userGUID;
@property(retain) NSArray *entityTypes; // @synthesize entityTypes=_entityTypes;
@property(retain) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

