/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface NSObject (IBAppKitObjectIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedAppearanceType;
+ (id)keyPathsForValuesAffectingIbInspectedAppearancePopupDefaultTitles;
+ (id)keyPathsForValuesAffectingIbInspectedAppearancePopupDefaultValues;
+ (id)keyPathsForValuesAffectingIbShadowedAppearance;
+ (id)keyPathsForValuesAffectingIbInheritedAppearance;
@property(copy) NSString *ibExternalAccessibilityDescription;
- (id)ibAccessibilityDescriptionAttribute;
@property(copy) NSString *ibExternalAccessibilityHelp;
- (id)ibAccessibilityHelpAttribute;
- (BOOL)ibSupportsAccessibility;
- (id)ibSuggestedAutomaticUserInterfaceItemIdentifier;
- (id)ibSuggestUserInterfaceItemIdentifierForObject:(id)arg1;
- (void)ibSwizzledBeginArchivingDocument:(id)arg1 withContext:(id)arg2;
@property(copy) NSString *ibExternalUserInterfaceItemIdentifier;
- (id)ibEffectiveUserInterfaceItemIdentifier;
- (BOOL)ibIdentifierPropertyCanConflictsWithObject:(id)arg1;
- (BOOL)ibCanSupportIdentifierProperty;
- (void)ibUnarchiveAppearanceType:(id)arg1;
- (void)ibArchiveAppearanceType:(id)arg1;
@property(nonatomic) long long ibInspectedAppearanceType;
- (id)ibInspectedAppearancePopupDefaultTitles;
- (id)ibInspectedAppearancePopupDefaultValues;
- (void)setIbShadowedAppearance:(id)arg1;
- (id)ibShadowedAppearance;
- (void)ibEnumerateAppearanceConformingChildrenInDocument:(id)arg1 withBlock:(id)arg2;
- (void)ibInvokeWithAppearanceConformingSelf:(id)arg1;
- (void)ibInheritedAppearanceDidChangeInDocument:(id)arg1;
- (void)ibInheritedAppearanceWillChangeInDocument:(id)arg1;
- (id)ibInheritedAppearance;
- (BOOL)ibIsNSAppearanceContainer;
- (id)ibExpectedClassNameForBinding:(id)arg1;
- (id)ibResolvedTypeNameForControllerKey:(id)arg1;
- (id)ibControlledObjectClassKey;
- (id)ibControlledObjectClassName;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (id)ibControllerKeys;
- (BOOL)ibIsCocoaCustomObject;
- (id)ibSwizzledNSObjectApplicableInspectorsForCategory:(id)arg1 suggestion:(id)arg2;
- (void)ibSwizzledNSObjectWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibSwizzledNSObjectWarnings:(id)arg1 forUserDefinedRuntimeAttributes:(id)arg2 forDocument:(id)arg3 withComputationContext:(id)arg4;
- (BOOL)ibSwizzledNSObjectCouldIssueWarningsForUserDefinedRuntimeAttirbutesForDocument:(id)arg1;
- (void)ibSwizzledNSObjectInvalidateWarningsAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (id)ibSwizzledNSObjectLocalLocalizableStringsAttributeKeyPaths;
- (id)ibSwizzledNSObjectLocalAttributeKeyPaths;
@end

