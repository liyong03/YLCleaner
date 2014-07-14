/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBDocument.h"

@class DVTNotificationToken, IBBindingManager;

@interface IBCocoaDocument : IBDocument
{
    IBBindingManager *bindingManager;
    DVTNotificationToken *editorDocumentDidSaveToken;
}

+ (id)verifiedDanglingSubviewParentClassWhitelist;
+ (id)connectToSourceClassNamesThatDoNotSupportZeroingWeakReferences;
+ (id)userPresentableIdentifierForTargetRuntimeIdentifier:(id)arg1;
+ (id)displayNameForType:(id)arg1;
+ (id)shortDisplayNameForType:(id)arg1;
+ (id)supportedTargetRuntimes;
+ (id)defaultTargetRuntime;
+ (id)writableTypes;
+ (id)readableTypes;
+ (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)strippedFileWrapperForContentsOfURL:(id)arg1 error:(id *)arg2;
+ (long long)allSystemsTarget;
- (void).cxx_destruct;
- (id)objectIDsForStringsFileKey:(id)arg1 context:(id)arg2;
- (id)willApplyStringsFileAtPath:(SEL)arg1 context:(id)arg2;
- (BOOL)systemTargetSupportsInternationalizationOrError:(id *)arg1;
- (BOOL)supportsUserDefinedRuntimeAttributesForObject:(id)arg1;
- (Class)classForUserDefinedRuntimeAttributesPlaceholderForObject:(id)arg1;
- (BOOL)shouldFrameDecideAutolayoutDocumentsWhenOpening;
- (id)autolayoutDescriptiveTextForPriority:(float)arg1;
- (void)frameDecider:(id)arg1 didPropagateFrameSize:(struct CGSize)arg2 toView:(id)arg3;
- (void)frameDecider:(id)arg1 didPropagateFrame:(struct CGRect)arg2 toView:(id)arg3;
- (void)internalFrameDecider:(id)arg1 didPropagateFrameSize:(struct CGSize)arg2 toView:(id)arg3;
- (double)priorityForRunningLiveViewResizingFrameDecison;
- (Class)arbitrationUnitClass;
- (Class)autolayoutEngineClass;
- (id)autolayoutDocumentDependencyVersion;
- (id)autolayoutDocumentDependency;
- (id)verify;
- (void)verifyScrollViewsUseManualLayerBacking;
- (void)verifySystemFont;
- (void)verifyViewBasedTableViewsHaveCorrectColumnState;
- (void)verifyButtonCellMenus;
- (void)verifyImageCellTypes;
- (void)verifySplitViewsInCanvasAreLayingOutAutolayoutFriendlyOnZinOrLater;
- (id)verifyPopUpContentObjectBindings;
- (void)verifyPopoversContentViewController;
- (void)verifyNonAmbiguousLayouts;
- (void)verifyAMPathPopUpButtonMenus;
- (void)verifyPredicateEditorChildren;
- (void)verifySegmentedControlStyles;
- (void)verifyUserInterfaceItemIdentifiers;
- (id)verifyOpenGLViews;
- (void)verifyOutlineViewOutlineColumns;
- (void)verifyTableHeaderCellsBorderAndLineBreakMode;
- (void)verifyTokenFieldCellCharacterSets;
- (void)verifyNumberFormatterLocalizesFormatSynchronization;
- (void)verifyRoundButtonFrameToControlSizeConsistency;
- (void)verifyWindowTemplateHasTitledWindowMaskSet;
- (id)verifyAppleScriptSupport;
- (void)verifyMenuItemToMenuInverseRelations;
- (void)verifyViewsAutoresizeSubviews;
- (void)verifyCustomClasses;
- (void)verifyPopupButtonCellImages;
- (void)verifyTabViewItemToTabViewInverseRelations;
- (void)verifyPopUpMenuOwnership:(id)arg1;
- (void)verifyCellFormatterIVar;
- (id)verifyFormatterOwnership;
- (void)verifyCellOwnership:(id)arg1;
- (void)verifyBoxesBoundsAreIdentity;
- (void)verifyBoxesContentViewIsNotInDocument;
- (void)verifyAbstractApplication;
- (id)verifyToolbarItems;
- (id)verifyBoxSubviews;
- (void)verifyBasicRelationships:(id)arg1;
- (void)reattachTransientChildAndDescendants:(id)arg1 toParent:(id)arg2 startingPoint:(id)arg3;
- (id)documentCIImageNamed:(id)arg1 usingSizeValueForPlaceholderImageIfNeeded:(id)arg2;
- (Class)resourceManagerClass;
- (id)variantForResolvingMediaResources;
- (id)classNamesForForcingPersistenceOfClassDescriptions;
- (BOOL)shouldConnectionDisplayUpdateForObject:(id)arg1 inReactionChangeInClassesNamed:(id)arg2;
- (void)classDescriber:(id)arg1 didModifyClasses:(id)arg2;
- (BOOL)supportsSourceCodeConnectionContext:(id)arg1;
- (BOOL)connectToSourceIsTargetingOSVersionWithZeroingWeakReferencesForConnectingToObject:(id)arg1;
- (long long)connectToSourceAbstractStorageTypeForConnectingFromObject:(id)arg1 toObject:(id)arg2;
- (void)connectBinding:(id)arg1 ofSourceObject:(id)arg2 toDestinationObject:(id)arg3 keyPath:(id)arg4 options:(id)arg5;
- (void)connectAction:(id)arg1 ofSourceObject:(id)arg2 toDestinationObject:(id)arg3;
- (void)connectOutlet:(id)arg1 ofSourceObject:(id)arg2 toDestinationObject:(id)arg3;
- (BOOL)hasConceptOfFilesOwner;
- (id)bindingManager;
- (BOOL)isObjectBuiltInPlaceholder:(id)arg1;
- (id)application;
- (id)filesOwner;
- (id)firstResponder;
- (BOOL)shouldCopyFileNamed:(id)arg1 whenPreservingWrapperContentsWhenWritingToURL:(id)arg2 ofType:(id)arg3 forSaveOperation:(unsigned long long)arg4 originalContentsURL:(id)arg5;
- (BOOL)shouldPreserveWrapperContentsWhenWritingToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4;
- (BOOL)decodeContentFileWrapper:(id)arg1 fileDataType:(id)arg2 typeName:(id)arg3 decodingStyle:(long long *)arg4 error:(id *)arg5;
- (id)contentFileWrapperForDocumentFileWrapper:(id)arg1 documentFileDataType:(id)arg2 documentType:(id)arg3 contentType:(id *)arg4 error:(id *)arg5;
- (BOOL)shouldContinueOpeningDocument:(id *)arg1;
- (BOOL)readFromIB2ObjectsWrapper:(id)arg1 classesWrapper:(id)arg2 infoWrapper:(id)arg3 dependencyWrapper:(id)arg4 error:(id *)arg5;
- (BOOL)readObjectesFromTypeStreamedIB2Archive:(id)arg1 error:(id *)arg2;
- (BOOL)readObjectesFromKeyedIB2Archive:(id)arg1 error:(id *)arg2;
- (id)validatedIB2ClassesPlistFromData:(id)arg1 error:(id *)arg2;
- (BOOL)isBundleBasedFileType:(id)arg1;
- (id)decodeDocumentOfType:(id)arg1 withCoder:(id)arg2;
- (id)fileWrapperOfType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)archiveTypeForFileType:(id)arg1;
- (void)encodeDesignableNibWithCoder:(id)arg1;
- (void)unarchiveDocumentManagedDataForObject:(id)arg1 withDocumentUnarchiver:(id)arg2;
- (void)archiveDocumentManagedDataForObject:(id)arg1 withDocumentArchiver:(id)arg2;
- (id)hybridPackageType;
- (id)internalCompiledPackageWithOptions:(id)arg1 error:(id *)arg2;
- (id)compiledKeyedObjectsDataWithOptions:(id)arg1 error:(id *)arg2;
- (void)launchSimulatorForCompiledDocumentAtPath:(id)arg1 withEnvironment:(id)arg2 context:(id)arg3;
- (id)environmentForSimulatingAtPath:(id)arg1 context:(id)arg2;
- (id)taskForSimulatingNibAtPath:(id)arg1;
- (id)pathForSimulatorExecutable;
- (void)editorDocumentWillClose;
- (id)reducedMarketingStringFromXcodeSDKIdentifier:(id)arg1;
- (id)deploymentVersionBuildSetting;
- (id)systemDocumentDependency;
- (id)interfaceBuilderDocumentDependency;
- (id)fallbackControllersForSelectedMemberIDs:(id)arg1;
- (id)primaryControllerForGeniusFinder;
- (id)automaticGeniusOrderingRules;
- (id)automaticGeniusInclusionRules;
- (BOOL)downgradingToAutoIncrementingIDsIsEnabled;
- (id)init;
- (id)initWithType:(id)arg1 targetRuntime:(id)arg2 transientPasteboardDocument:(BOOL)arg3 error:(id *)arg4;
- (id)forcedUpgradeFileTypeForFileType:(id)arg1;
- (void)editorDocumentDidSaveAndUpgradedToNIB3:(id)arg1;
- (id)pathExtensionForFileType:(id)arg1;
- (id)preferredFileType;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

@end

