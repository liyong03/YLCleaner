/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface DVTCommandLineParser : NSObject
{
    NSString *_usageBanner;
    NSArray *_optionDefinitions;
    id _fallbackOptionHandlerBlock;
}

@property(copy) id fallbackOptionHandlerBlock; // @synthesize fallbackOptionHandlerBlock=_fallbackOptionHandlerBlock;
@property(copy) NSArray *optionDefinitions; // @synthesize optionDefinitions=_optionDefinitions;
@property(copy) NSString *usageBanner; // @synthesize usageBanner=_usageBanner;
- (void).cxx_destruct;
- (id)usageString;
- (id)parseArguments:(id)arg1 intoOptionsDictionary:(id)arg2 error:(id *)arg3;
- (id)lookUpOptionDefinitionForArgument:(id)arg1;
- (id)init;

@end

