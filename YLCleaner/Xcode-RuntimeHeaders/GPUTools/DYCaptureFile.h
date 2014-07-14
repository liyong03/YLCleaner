/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DYCaptureVisiting-Protocol.h"

@class DYCaptureArchive, NSString;

@interface DYCaptureFile : NSObject <DYCaptureVisiting>
{
    DYCaptureArchive *_archive;
    NSString *_name;
    unsigned int _file_pos;
    int _kind_cache;
    BOOL _alias;
}

@property(readonly, nonatomic) BOOL alias; // @synthesize alias=_alias;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) DYCaptureArchive *archive; // @synthesize archive=_archive;
- (id)decodeSerializedPropertyListWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)decodeArchivedObjectWithAllowedBaseClasses:(id)arg1;
- (id)decodeArchivedObjectWithAllowedBaseClass:(Class)arg1;
- (id)decodeArchivedObject;
- (id)openFunctionStream:(id *)arg1;
- (id)copyMutableData:(id *)arg1;
- (BOOL)acceptCaptureVisitor:(id)arg1;
- (BOOL)getInfo:(CDStruct_61ea625d *)arg1 error:(id *)arg2;
- (BOOL)executable;
@property(readonly, nonatomic) int kind;
- (void)_determineKind;
- (long long)dy_numericCompare:(id)arg1;
- (void)dealloc;
- (id)_initWithArchive:(id)arg1 hashPosition:(unsigned int)arg2 name:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) BOOL functionStream; // @dynamic functionStream;

@end

