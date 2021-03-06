/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DYInOrderInstructionFilesVisitor.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, DYCaptureSessionInfo, DYFunctionTracer, DYSymbolicator, GPUResourceManager, GPUStateMirror, GPUTraceDrawItem, GPUTraceGroupItem, GPUTraceProgramGroup, GPUTraceSession, IDELaunchSession, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

// Not exported
@interface GPUTraceOutline : DYInOrderInstructionFilesVisitor <DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _currentFunctionIndex;
    unsigned int _currentDisplayFunctionIndex;
    unsigned int _currentFrameIndex;
    GPUTraceGroupItem *_currentGroup;
    GPUTraceDrawItem *_currentDrawItem;
    unsigned int _currentMarkerDepth;
    BOOL _processingTraceFiles;
    GPUStateMirror *_statemirror;
    unsigned long long _currentContext;
    unsigned long long _currentThread;
    unsigned long long _currentQueue;
    struct shared_ptr<GPUTools::FD::TFunctionStream<GPUTools::FD::Function, void>> _captureStream;
    struct _Iterator<GPUTools::FD::Function> _captureStreamIter;
    IDELaunchSession *_launchSession;
    NSMutableDictionary *_modelObjectDictionary;
    const struct Function *_currentFunction;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> functionIndexToDisplayIndexMap;
    NSMutableDictionary *_contextGroupListDict;
    NSMutableArray *_contextGroupList;
    NSMutableDictionary *_threadNameDict;
    BOOL _bIsMultiContextOrThread;
    BOOL _bIsMultiAPI;
    GPUTraceSession *_traceSession;
    DYCaptureSessionInfo *_captureSessionInfo;
    NSMutableArray *_frames;
    GPUResourceManager *_resourceManager;
    NSMutableDictionary *_editorsDict;
    NSMutableArray *_allDrawItems;
    NSMutableArray *_allMarkerItems;
    NSMutableArray *_allAPIItems;
    NSString *_contentDelegateUUID;
    GPUTraceGroupItem *_domainProviderRootResourceGroup;
    GPUTraceProgramGroup *_rootProgramGroup;
    DYSymbolicator *_symbolicator;
    DYFunctionTracer *_tracer;
    NSMutableDictionary *_contextNameDict;
}

+ (void)initialize;
@property(readonly) NSMutableDictionary *contextNameDict; // @synthesize contextNameDict=_contextNameDict;
@property(readonly) DYFunctionTracer *tracer; // @synthesize tracer=_tracer;
@property(readonly) DYSymbolicator *symbolicator; // @synthesize symbolicator=_symbolicator;
@property(readonly) GPUTraceProgramGroup *rootProgramGroup; // @synthesize rootProgramGroup=_rootProgramGroup;
@property(readonly) GPUTraceGroupItem *domainProviderRootResourceGroup; // @synthesize domainProviderRootResourceGroup=_domainProviderRootResourceGroup;
@property(readonly) NSString *contentDelegateUUID; // @synthesize contentDelegateUUID=_contentDelegateUUID;
@property(retain) NSMutableArray *allAPIItems; // @synthesize allAPIItems=_allAPIItems;
@property(retain) NSMutableArray *allMarkerItems; // @synthesize allMarkerItems=_allMarkerItems;
@property(retain) NSMutableArray *allDrawItems; // @synthesize allDrawItems=_allDrawItems;
@property(readonly) NSMutableDictionary *editorsDict; // @synthesize editorsDict=_editorsDict;
@property(retain) GPUResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain) NSMutableArray *frames; // @synthesize frames=_frames;
@property(readonly) DYCaptureSessionInfo *captureSessionInfo; // @synthesize captureSessionInfo=_captureSessionInfo;
@property(retain) GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sharegroupResourceDictionaryForSharegroupID:(id)arg1;
- (id)resourceItemOfType:(unsigned int)arg1 resourceID:(unsigned int)arg2 forFunctionIndex:(unsigned int)arg3;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromDisplayIndex:(unsigned int)arg1;
@property(readonly) unsigned int totalfunctionIndexCount; // @dynamic totalfunctionIndexCount;
- (id)locateItemToDraw:(id)arg1 isAssociatedWithStateItem:(char *)arg2;
- (id)stateMirrorForTraceItem:(id)arg1;
- (id)_derivedStateMirrorFromStateMirror:(id)arg1 forFunctionIndex:(unsigned int)arg2 fromFunctionIndex:(unsigned int)arg3;
- (void)_addFunction:(struct Function *)arg1;
- (void)_addContext:(struct Function *)arg1;
- (void)visitFunctionStreamFile:(id)arg1;
- (void)performPostCaptureVisitActions;
- (void)performPreCaptureVisitActions;
- (void)performPreVisitActions;
- (BOOL)_openFilenames:(id)arg1 archive:(id)arg2 filesArray:(id)arg3;
- (void)_addProgramForDrawItem:(id)arg1;
- (void)_addDrawItem:(id)arg1;
- (id)itemForUUID:(id)arg1;
- (void)addModelItem:(id)arg1;
@property(readonly) GPUTraceDrawItem *lastDrawItem; // @dynamic lastDrawItem;
@property(readonly) unsigned long long totalDrawCount; // @dynamic totalDrawCount;
@property(readonly) GPUTraceGroupItem *rootProcessItem; // @dynamic rootProcessItem;
- (void)primitiveInvalidate;
@property(readonly) NSMutableArray *allPrograms; // @dynamic allPrograms;
@property(readonly) NSURL *captureArchiveURL; // @dynamic captureArchiveURL;
- (id)initWithTraceSession:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

