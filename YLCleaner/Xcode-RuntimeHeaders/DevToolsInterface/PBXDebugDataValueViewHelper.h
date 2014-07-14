/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString, PBXLSDataValue;

@interface PBXDebugDataValueViewHelper : NSObject
{
    BOOL defaultShouldShowChildren;
    BOOL usesChildrenForDisplay;
    int childVisibilityState;
    PBXLSDataValue *dv;
    NSMutableDictionary *childViewHelpers;
    NSString *typeString;
    NSMutableDictionary *addedExpressions;
    long long addedExpressionsCount;
    long long cachedAddedChildrenCount;
    long long cachedChildrenCount;
    long long cachedChildrenToDisplay;
    BOOL shouldRegisterForCleanup;
    BOOL displayedInGUI;
    BOOL oldInScope;
    int oldValueChangeStatus;
    int oldDynamicTypeChangeStatus;
    int oldSummaryChangeStatus;
    id oldSymbolicName;
    id oldStringValue;
    id oldTypeExpressionString;
    id oldSummary;
    long long oldNumberOfChildren;
    BOOL _usesCustomFormatString;
    NSString *valueFormatString;
    NSString *summaryFormatString;
    NSMutableSet *childrenForValueFormat;
    BOOL childrenForValueFormatValid;
    NSMutableSet *childrenForSummaryFormat;
    BOOL childrenForSummaryFormatValid;
}

+ (void)validateCachedFormatters;
+ (BOOL)addFormatStringsFromFiles:(id)arg1 load:(BOOL)arg2;
+ (BOOL)addBundlesFromDirectory:(id)arg1 load:(BOOL)arg2;
+ (BOOL)addPlistFilesFromDirectory:(id)arg1 load:(BOOL)arg2;
+ (void)loadPlugin:(id)arg1 debugger:(id)arg2;
+ (id)newViewHelperForDataValue:(id)arg1;
+ (id)typeStringForPBXLSType:(id)arg1;
+ (BOOL)defaultVisibilityForDataValue:(id)arg1;
+ (void)initializeFormatStringsDictionaries;
+ (id)_appendDataFormatterFileToPath:(id)arg1;
+ (id)loadRegisterDefinitions;
+ (id)_Xcode_3_1_customizedDataFile:(id)arg1 withExtension:(id)arg2;
+ (void)initialize;
- (id)rawFormatStringForTableColumn:(id)arg1;
- (void)_formatStringsChanged:(id)arg1;
- (void)_supportsUnicharXcode_CFChangedNotification:(id)arg1;
- (void)_useDataFormattersChanged:(id)arg1;
- (void)_setUsesCustomFormatString:(BOOL)arg1;
- (void)updateFormatStrings;
- (id)formatStringForColumnKey:(id)arg1;
- (id)typeString;
- (void)writeCustomizableFormatStringDictionaries;
- (id)customizableFormatStringDictionary;
- (id)formatStrings;
- (id)_fixupUnicharToCharInDataFormatters:(id)arg1;
- (BOOL)isFormatString:(id)arg1;
- (id)displayStringForFormatString:(id)arg1 storeChildrenInSet:(id)arg2 validFlag:(char *)arg3;
- (void)processUnresolvedReference:(CDStruct_03c79a60 *)arg1;
- (BOOL)addAddedExpression:(id)arg1 blockStartAddress:(id)arg2;
- (BOOL)didAddExpression:(id)arg1 withBlockStartAddress:(id)arg2;
- (void)processParsedReference:(CDStruct_03c79a60 *)arg1;
- (BOOL)parseEndSpecifier:(CDStruct_03c79a60 *)arg1;
- (BOOL)parseBeginSpecifier:(CDStruct_03c79a60 *)arg1;
- (void)parseLiteralPrefix:(CDStruct_03c79a60 *)arg1;
- (id)stringBySubstitutingVariableNameInString:(id)arg1;
- (id)processParentString:(id)arg1 parentKey:(id)arg2 keyRange:(struct _NSRange)arg3;
- (id)processString:(id)arg1 replace:(id)arg2 withString:(id)arg3 initialRange:(struct _NSRange)arg4;
- (id)displayStringForChild:(id)arg1 column:(unsigned short)arg2;
- (id)expressionPath;
- (id)catenateAttributedStringComponents:(id)arg1;
- (id)dataValueForChildPath:(id)arg1;
- (id)dataValueForChildPathComponents:(id)arg1;
- (id)dataValueForChildName:(id)arg1 blockStartAddress:(id)arg2;
- (void)setDisplayString:(id)arg1 forTableColumn:(id)arg2;
- (void)setDisplayString:(id)arg1 forTableColumn:(id)arg2 addToCustomized:(BOOL)arg3;
- (BOOL)setDisplayString:(id)arg1 formatString:(id *)arg2 children:(id *)arg3 valid:(char *)arg4 formatStringsKey:(id)arg5 addToCustomized:(BOOL)arg6;
- (BOOL)shouldEditTableColumn:(id)arg1;
- (id)displayStringForSummaryColumn:(BOOL)arg1;
- (id)displayStringForTypeColumn;
- (id)displayStringForValueColumn:(BOOL)arg1;
- (id)displayStringForVariableColumn;
- (BOOL)displayNeedsUpdate;
- (BOOL)displayNeedsUpdateFromChildren:(id)arg1;
- (id)displayStringForColumnNamed:(id)arg1;
- (long long)numberOfChildrenToDisplay;
- (BOOL)usesChildrenForDisplay;
- (BOOL)shouldShowChildren;
- (void)setShowChildren:(BOOL)arg1;
- (void)addChildHelper:(id)arg1 forName:(id)arg2;
- (id)helperForChildDataValue:(id)arg1;
- (void)dataValueWillDealloc;
- (void)setDataValue:(id)arg1;
- (id)dataValue;
- (void)dealloc;
- (id)initWithDataValue:(id)arg1;

@end

