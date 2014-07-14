/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPUToolsAnalysis/DYAnalyzerHeuristic.h>

@class NSMutableArray, NSMutableDictionary;

// Not exported
@interface DYAnalyzerHeuristic_MultiContext : DYAnalyzerHeuristic
{
    NSMutableDictionary *texture2DBindTimestamps;
    NSMutableDictionary *texture2DArrayBindTimestamps;
    NSMutableDictionary *texture3DBindTimestamps;
    NSMutableDictionary *textureCubeBindTimestamps;
    NSMutableDictionary *arrayBufferBindTimestamps;
    NSMutableDictionary *elementBufferBindTimestamps;
    NSMutableDictionary *copyReadBufferBindTimestamps;
    NSMutableDictionary *copyWriteBufferBindTimestamps;
    NSMutableDictionary *pixelPackBufferBindTimestamps;
    NSMutableDictionary *pixelUnpackBufferBindTimestamps;
    NSMutableDictionary *renderbufferBindTimestamps;
    NSMutableDictionary *transformFeedbackBufferBindTimestamps;
    NSMutableArray *transformFeedbackBufferBindIndexedTimestamps;
    NSMutableDictionary *uniformBufferBindTimestamps;
    NSMutableArray *uniformBufferBindIndexedTimestamps;
    NSMutableDictionary *contextThreadIds;
    unsigned long long prevThreadID;
    unsigned long long prevStart;
    unsigned long long prevDuration;
    unsigned long long prevQueueID;
    int prevTexUpdateFunctionIndex;
    int prevBufferUpdateFunctionIndex;
    int prevRenderbufferUpdateFunctionIndex;
    int currObjectID;
}

+ (id)identifier;
- (void).cxx_destruct;
- (void)reportMultiContextTransformFeedbackBufferUsageWithoutEnd:(const struct Function *)arg1;
- (void)reportMultithreadedContextUsageError:(const struct Function *)arg1;
- (void)reportMultithreadedContextUsage:(const struct Function *)arg1;
- (void)reportIncorrectMultiContextObjectUsage:(const struct Function *)arg1;
- (void)reportIncorrectMultiContextRenderbufferUsageWithoutRebinding:(const struct Function *)arg1;
- (void)reportIncorrectMultiContextRenderbufferUsageWithoutFlush:(const struct Function *)arg1;
- (void)reportIncorrectMultiContextBufferUsageWithoutRebinding:(const struct Function *)arg1 isError:(BOOL)arg2;
- (void)reportIncorrectMultiContextBufferUsageWithoutFlush:(const struct Function *)arg1 isError:(BOOL)arg2;
- (void)reportIncorrectMultiContextTextureUsageWithoutRebinding:(const struct Function *)arg1;
- (void)reportIncorrectMultiContextTextureUsageWithoutFlush:(const struct Function *)arg1;
- (void)endBlock:(int)arg1;
- (void)startBlock:(int)arg1;
- (BOOL)_isFullCopyBufferSubDataAccess:(const struct Function *)arg1 bufferID:(int)arg2 offset:(long long)arg3 size:(long long)arg4;
- (BOOL)_isFullUniformBufferAccess:(const struct Function *)arg1 context:(const ContextStateMirror_efb9dfa5 *)arg2 bufferID:(int)arg3;
- (BOOL)_isFullArrayElementBufferAccess:(const struct Function *)arg1 context:(const ContextStateMirror_efb9dfa5 *)arg2 bufferID:(int)arg3;
- (BOOL)_isFullArrayBufferAccess:(const struct Function *)arg1 context:(const ContextStateMirror_efb9dfa5 *)arg2 bufferID:(int)arg3;
- (BOOL)_isFullGenericBufferAccess:(const struct Function *)arg1 context:(const ContextStateMirror_efb9dfa5 *)arg2 bufferID:(int)arg3;
- (BOOL)_isFullCompressedUnpackBufferAccess:(const struct Function *)arg1 context:(const ContextStateMirror_efb9dfa5 *)arg2 bufferID:(int)arg3;
- (BOOL)_isFullPackUnpackBufferAccess:(const struct Function *)arg1 context:(const ContextStateMirror_efb9dfa5 *)arg2 bufferID:(int)arg3;
- (BOOL)_isFullBufferAccess:(const struct Function *)arg1 target:(int)arg2 bufferID:(int)arg3;
- (void)checkFBOBufferForWriteAfterWriteHazardsOnClearBuffer:(const struct Function *)arg1 buffer:(int)arg2 drawBuffer:(int)arg3;
- (void)checkFBOAttachmentForWriteAfterWriteHazard:(const struct Function *)arg1 attachment:(const FramebufferAttachment_85593ca2 *)arg2;
- (void)checkFBOForWriteAfterWriteHazards:(const struct Function *)arg1 mask:(int)arg2 isDrawCall:(BOOL)arg3;
- (void)updateVAOBuffersBind:(const struct Function *)arg1 vao:(const VertexArrayObject_162aff0d *)arg2;
- (void)updateFBOAttachmentsBind:(const struct Function *)arg1 framebufferID:(int)arg2;
- (void)checkFBOForReadAfterWriteHazards:(const struct Function *)arg1;
- (BOOL)isFirstRenderbufferBindAfterMulticontextUpdate:(const struct Function *)arg1 target:(int)arg2 renderbufferID:(int)arg3;
- (void)checkRenderbufferForAccessAfterWriteHazard:(const struct Function *)arg1 target:(int)arg2 renderbuffer:(const RenderbufferObject_ddeaf950 *)arg3 renderbufferID:(int)arg4;
- (BOOL)isFirstBufferBindAfterMulticontextUpdate:(const struct Function *)arg1 target:(int)arg2 bufferID:(int)arg3 bindingIndex:(int)arg4;
- (void)checkBufferForAccessAfterWriteHazard:(const struct Function *)arg1 target:(int)arg2 bufferID:(int)arg3 bindingIndex:(int)arg4 isFullBufferAccess:(BOOL)arg5;
- (void)checkBufferForAccessAfterWriteHazard:(const struct Function *)arg1 target:(int)arg2 bufferID:(int)arg3 isFullBufferAccess:(BOOL)arg4;
- (void)checkElementArrayBufferForReadAfterWriteHazard:(const struct Function *)arg1 context:(const ContextStateMirror_efb9dfa5 *)arg2;
- (void)checkAllVBOsForReadAfterWriteHazards:(const struct Function *)arg1 context:(const ContextStateMirror_efb9dfa5 *)arg2;
- (void)checkAllBuffersForAccessAfterWriteHazards:(const struct Function *)arg1;
- (BOOL)isFirstTextureBindAfterMulticontextUpdate:(const struct Function *)arg1 target:(int)arg2 textureID:(int)arg3;
- (void)checkTextureForAccessAfterWriteHazard:(const struct Function *)arg1 target:(int)arg2 texID:(int)arg3;
- (void)checkAllTexturesForReadAfterWriteHazards:(const struct Function *)arg1;
- (void)processFunction:(const struct Function *)arg1 stateMirrorRetCode:(unsigned int)arg2;
- (id)init;

@end

