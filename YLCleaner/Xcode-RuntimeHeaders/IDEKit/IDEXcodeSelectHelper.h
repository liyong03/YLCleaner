/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEXcodeSelectableXcode, NSArray;

@interface IDEXcodeSelectHelper : NSObject
{
    NSArray *_selectableXcodes;
    IDEXcodeSelectableXcode *_selectedXcode;
    BOOL _resettingValue;
}

+ (id)keyPathsForValuesAffectingIsRunningXcodeTheSelectedXcode;
+ (id)_xcodeURLs;
+ (void)initialize;
@property(retain) IDEXcodeSelectableXcode *selectedXcode; // @synthesize selectedXcode=_selectedXcode;
@property(readonly) NSArray *selectableXcodes; // @synthesize selectableXcodes=_selectableXcodes;
- (void).cxx_destruct;
- (BOOL)_switchXcodeSelectToXcodeAtBundlePath:(id)arg1;
- (void)switchXcodeSelectToRunningXcode;
- (BOOL)_shouldSwitchToCurrentlyRunningXcode;
- (id)selectedXcodePath;
- (id)_xcodeSelectPrintPathResult;
@property(readonly) BOOL isRunningXcodeTheSelectedXcode;
- (BOOL)switchXcodeSelectTo:(id)arg1;
- (BOOL)_isXcode4_2OrEarlier:(id)arg1;
- (id)_determineSelectedXcode;
- (id)_createXcodeSelectableXcodeForURL:(id)arg1;
- (id)_determineSelectableXcodes;
- (id)init;

@end

