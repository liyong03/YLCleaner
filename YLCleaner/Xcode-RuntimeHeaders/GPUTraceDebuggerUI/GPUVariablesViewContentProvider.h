/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IDEVariablesViewContentProvider-Protocol.h"
#import "IDEVariablesViewContextMenuDelegate-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, GPUDebuggerController, GPUSharedTabUIState, GPUStateMirror, IDEVariablesView, NSMutableArray, NSMutableSet, NSString;

// Not exported
@interface GPUVariablesViewContentProvider : NSObject <IDEVariablesViewContextMenuDelegate, IDEVariablesViewContentProvider, DVTInvalidation>
{
    IDEVariablesView *_variablesView;
    NSString *_comparisonModeKey;
    GPUStateMirror *_stateMirror;
    GPUStateMirror *_comparisonStateMirror;
    DVTObservingToken *_gpuTraceCurrentLocationObserverToken;
    DVTObservingToken *_gpuTraceCurrentResourcesObserverToken;
    DVTObservingToken *_uiModeObservation;
    DVTObservingToken *_shaderProfilerResultsObserverToken;
    ContextStateMirror_20bf9be2 _defaultCtx;
    struct ProgramUniform<GPUSMObjectTypes> _defaultUniform;
    struct TextureLayer<GPUSMObjectTypes> _defaultTexLayer;
    TextureObject_cc8a3466 _defaultTex;
    SamplerObject_e2bbd694 _defaultSampler;
    TransformFeedbackObject_216ef0cb _defaultTransformFeedback;
    BufferObject_ee0da840 _defaultBuffer;
    RenderbufferObject_9e885dae _defaultRenderbuffer;
    struct FramebufferAttachment<GPUSMObjectTypes> _defaultAttachment;
    FramebufferObject_50a128ba _defaultFramebuffer;
    struct ShaderObject<GPUSMObjectTypes> _defaultShader;
    ProgramObject_a16f7276 _defaultProgram;
    ProgramUniformBlock_8955c0e9 _defaultUniformBlock;
    ProgramPipelineObject_d804a161 _defaultPipeline;
    VertexArrayObject_87184f30 _defaultVAO;
    QueryObject_91181ab1 _defaultQuery;
    struct SyncObject<GPUSMObjectTypes> _defaultSync;
    NSMutableSet *_activeUniformBlocks;
    NSMutableArray *_uniformBuffers;
    _Bool _isDrawCall;
    int _functionIndex;
    int _displayIndex;
    BOOL _drawCallFootprintIsAvailable;
    int _comparisonMode;
    int _objectFilterMode;
    int _textMode;
    unsigned int _objectID;
    int _objectType;
    GPUDebuggerController *_debuggerController;
    GPUSharedTabUIState *_sharedUIStateObj;
}

+ (void)initialize;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
@property(nonatomic) unsigned int objectID; // @synthesize objectID=_objectID;
@property(nonatomic) int textMode; // @synthesize textMode=_textMode;
@property(nonatomic) int objectFilterMode; // @synthesize objectFilterMode=_objectFilterMode;
@property(nonatomic) int comparisonMode; // @synthesize comparisonMode=_comparisonMode;
@property(nonatomic) __weak GPUSharedTabUIState *sharedUIStateObj; // @synthesize sharedUIStateObj=_sharedUIStateObj;
@property(retain, nonatomic) GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_createOptionsDictionaryFromOptionsElement:(id)arg1;
- (id)quickLookProviderForDataValue:(id)arg1;
- (void)provideHelpMenuItem:(id)arg1;
- (void)providePrimaryMenuItems:(id)arg1;
- (id)contextNameForNode:(id)arg1;
- (id)imageToUseInDefaultQuickLookForNode:(id)arg1;
- (id)imageForNode:(id)arg1;
- (id)imageForIssueType:(int)arg1;
- (BOOL)deleteNode:(id)arg1;
- (void)provideScopeChoices:(id)arg1;
- (void)updateFilteredList;
- (void)_updateFilteredListForContextInfo;
- (void)_updateFilteredListForAllObjects;
- (void)_updateFilteredListForBoundObjects;
- (void)_updateStateNameAndValue:(id)arg1 forBindPoint:(unsigned int)arg2;
- (id)_CreateProgramTransformFeedbackVaryings:(const ProgramObject_a16f7276 *)arg1;
- (id)_generateFrameStatsContent:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_generateSyncContent:(unsigned int)arg1 usingContext:(ContextStateMirror_20bf9be2 *)arg2;
- (id)_generateQueryContent:(const QueryObject_91181ab1 *)arg1 queryID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_generateVAOContent:(const VertexArrayObject_87184f30 *)arg1 vaoID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_generateVAOArrayContent:(const VertexArrayObject_87184f30 *)arg1 vaoID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3 usingVAOArrayListIndex:(unsigned int)arg4 usingIndex:(unsigned int)arg5;
- (id)_generateProgramPipelineContent:(const ProgramPipelineObject_d804a161 *)arg1 pipelineID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_generateProgramContent:(const ProgramObject_a16f7276 *)arg1 programID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3 withPrefix:(id)arg4;
- (id)_generateProgramPerformanceContent:(unsigned int)arg1 separable:(BOOL)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_generateShaderContent:(unsigned int)arg1 usingContext:(ContextStateMirror_20bf9be2 *)arg2;
- (id)_generateFramebufferContent:(const FramebufferObject_50a128ba *)arg1 framebufferID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_generateFramebufferAttachmentContent:(const FramebufferObject_50a128ba *)arg1 usingAttachment:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_generateRenderbufferContent:(const RenderbufferObject_9e885dae *)arg1 renderbufferID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_generateBufferContent:(const BufferObject_ee0da840 *)arg1 bufferID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_valueStringForBufferEnum:(const struct ObjectStateEnum *)arg1 buffer:(const BufferObject_ee0da840 *)arg2;
- (id)_generateTransformFeedbackContent:(const TransformFeedbackObject_216ef0cb *)arg1 transformFeedbackID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_generateSamplerContent:(const SamplerObject_e2bbd694 *)arg1 samplerID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_generateTextureUnitContent:(unsigned int)arg1 usingContext:(ContextStateMirror_20bf9be2 *)arg2;
- (id)_generateTextureContent:(const TextureObject_cc8a3466 *)arg1 textureID:(unsigned int)arg2 usingContext:(ContextStateMirror_20bf9be2 *)arg3;
- (id)_getAnnotatedTextureName:(unsigned int)arg1 usingContext:(ContextStateMirror_20bf9be2 *)arg2;
- (id)_generateTextureLayerContent:(const TextureObject_cc8a3466 *)arg1 target:(unsigned int)arg2 level:(int)arg3 layer:(int)arg4 createSubgroup:(_Bool)arg5 usingContext:(ContextStateMirror_20bf9be2 *)arg6;
- (id)_generateActiveAttribContent:(const ProgramAttrib_7a314c30 *)arg1 location:(int)arg2;
- (id)_generateUniformBlockContent:(const ProgramUniformBlock_8955c0e9 *)arg1 index:(unsigned int)arg2 comparisonUniformBlock:(const ProgramUniformBlock_8955c0e9 *)arg3 functionalityLevel:(int)arg4 isProgramUsedInDraw:(_Bool)arg5;
- (void)_EnumerateUniformBlockReferencingShaderBits:(id)arg1;
- (void)_addVariableNodeFromDataValue:(id)arg1 type:(unsigned long long)arg2 recipientArray:(id)arg3;
- (void)_addVariableNodeFromDataValue:(id)arg1 type:(unsigned long long)arg2 recipientArray:(id)arg3 compareDetails:(BOOL)arg4;
- (id)_createVariableNodesFromDataValues:(id)arg1 type:(unsigned long long)arg2;
- (void)_updateFilteredListForAuto;
- (void)_addEnumState:(unsigned int)arg1 toArray:(id)arg2;
- (void)addAnalyzerFindingContent:(id)arg1 toArray:(id)arg2;
- (void)addFrameStatsContent:(ContextStateMirror_20bf9be2 *)arg1 toArray:(id)arg2;
- (void)addTransformFeedbackContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addSamplerContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addSyncContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addQueryContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addShaderContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addProgramPerformanceContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addProgramContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addPipelinePerformanceContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addProgramPipelineContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addFramebufferContent:(unsigned int)arg1 forBinding:(unsigned int)arg2 fromContext:(ContextStateMirror_20bf9be2 *)arg3 toArray:(id)arg4;
- (void)addFramebufferContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addRenderbufferContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addVAOContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addBufferContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addTextureUnitContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addTextureContent:(unsigned int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2 toArray:(id)arg3;
- (void)addBufferContent:(unsigned int)arg1 forBinding:(int)arg2 fromContext:(ContextStateMirror_20bf9be2 *)arg3 toArray:(id)arg4;
- (void)addBufferContent:(unsigned int)arg1 forTarget:(int)arg2 fromContext:(ContextStateMirror_20bf9be2 *)arg3 toArray:(id)arg4;
- (void)addObjectContent:(unsigned int)arg1 forType:(int)arg2 fromContext:(ContextStateMirror_20bf9be2 *)arg3 toArray:(id)arg4;
- (void)_updateFilteredListForContext;
- (void)_addExtensions:(id)arg1 forContext:(ContextStateMirror_20bf9be2 *)arg2;
- (void)_addContextState:(int)arg1 toArray:(id)arg2 unitIndex:(int)arg3;
- (void)_addContextState:(int)arg1 toArray:(id)arg2;
- (void)_addStateValue:(id)arg1 withName:(id)arg2 toArray:(id)arg3;
- (id)_convertEnumString:(basic_string_805fe43b *)arg1;
- (_Bool)_getStateElement:(int)arg1 usingIndex:(int)arg2 forStateGroup:(int)arg3 usingContext:(ContextStateMirror_20bf9be2 *)arg4 returningString:(basic_string_805fe43b *)arg5;
- (id)_getCondensedStateGroupSummary:(int)arg1 fromContext:(ContextStateMirror_20bf9be2 *)arg2;
- (id)_getCondensedFixedCurrentVertexSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedTexEnvSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedPerUnitTexEnvSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1 unitIndex:(int)arg2;
- (id)_getCondensedTexEnvChannelSummary:(ContextStateMirror_20bf9be2 *)arg1 channelSetup:(struct TexEnvChannelSetup *)arg2 isRGBA:(_Bool)arg3;
- (id)_getTexEnvSrcString:(unsigned int)arg1 operand:(unsigned int)arg2 isRGBA:(_Bool)arg3;
- (id)_getCondensedPointParamsSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedMatrixSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_classifyMatrix:(CDStruct_461fb6ec *)arg1;
- (id)_getCondensedMaterialSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedLightModelSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedPerLightSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1 index:(int)arg2;
- (id)_getCondensedLightSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedFogSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedPerClipPlaneSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1 index:(int)arg2;
- (id)_getCondensedClipPlaneSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedAlphaTestSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedErrorStatusSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedScissorSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedMultisamplingSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedPolygonOffsetSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedColorSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedCullingSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedDepthSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedBlendSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedBlendResultForChannel:(struct BlendChannelSetup *)arg1;
- (id)_getCondensedStencilSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedStencilSummaryForSide:(struct StencilSideSetup *)arg1;
- (id)_getCondensedActiveSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_getCondensedViewportSummaryFromContext:(ContextStateMirror_20bf9be2 *)arg1;
- (id)_cullString:(unsigned int)arg1;
- (id)_blendFactorString:(unsigned int)arg1;
- (id)_actionString:(unsigned int)arg1;
- (id)_funcWordString:(unsigned int)arg1;
- (id)_funcString:(unsigned int)arg1;
- (id)_stringFromEnum:(int)arg1 showFalseAsNone:(_Bool)arg2;
- (void)bubbleUpChangeStatusHighlighting:(id)arg1;
- (void)providerWasInstalledForVariablesView:(id)arg1;
@property(readonly) BOOL supportsShowingRawValues;
@property(readonly) id nodeSortComparator;
@property(readonly) id <IDEVariablesViewContextMenuDelegate> contextMenuDelegate;
- (void)_setTextModeCompact:(id)arg1;
- (void)_setTextModeVerbose:(id)arg1;
- (void)_setCompareStateWithLastDraw:(id)arg1;
- (void)_setCompareStateWithDefault:(id)arg1;
- (void)_updateUniformValueAtIndex:(unsigned long long)arg1 parentValue:(id)arg2 buffer:(id)arg3 offset:(long long)arg4;
- (void)_updateUniformBlockValuesWithBuffer:(id)arg1;
- (void)_updateCurrentLocation:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) BOOL loadingNewVariablesInBackground;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

