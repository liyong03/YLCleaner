/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEActivityLogSection.h"

#import "DVTSimpleSerialization-Protocol.h"

@class NSString;

// Not exported
@interface GPUDebuggerLog : IDEActivityLogSection <DVTSimpleSerialization>
{
    NSString *text;
}

+ (id)defaultLogSectionDomainType;
+ (id)assetBundle;
@property(retain) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)navigableItem_documentType;
- (void)addLogItem:(id)arg1;
- (id)initLogWithTitle:(id)arg1 serializationPath:(id)arg2;

@end

