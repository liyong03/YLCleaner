/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface XDXcodeImporter : NSObject
{
}

+ (id)operationForMethodSymbol:(id)arg1 fromClassifiers:(id)arg2;
+ (id)validate:(id)arg1;
+ (void)validatePackage:(id)arg1 warnings:(id)arg2;
+ (void)validateClassifier:(id)arg1 warnings:(id)arg2;
+ (id)fileReferencesFromSelection:(id)arg1;
+ (void)resolveItem:(id)arg1 toArray:(id)arg2;
+ (id)_representedObjectFromFosterParent:(id)arg1;
+ (id)topLevelSymbolsFromFileRef:(id)arg1 withProject:(id)arg2;
+ (id)topLevelSymbolsFromXcodeContainers:(id)arg1 withProject:(id)arg2;
+ (id)computeDifference:(id)arg1 fromSymbols:(id)arg2 includeImmediateSuperclasses:(BOOL)arg3;
+ (id)processInterface:(id)arg1 toModel:(id)arg2;
+ (id)processClass:(id)arg1 toModel:(id)arg2;
+ (id)processCategory:(id)arg1 toModel:(id)arg2;
+ (void)addOperationsToInterface:(id)arg1;
+ (void)addPropertiesToInterface:(id)arg1;
+ (void)addOperationsToClass:(id)arg1;
+ (void)addPropertiesToClass:(id)arg1;
+ (id)symbolFromInterface:(id)arg1;
+ (id)symbolFromClass:(id)arg1;
+ (id)modelFromElement:(id)arg1;
+ (void)addMethods:(id)arg1 to:(id)arg2 rootPackage:(id)arg3;
+ (void)addFields:(id)arg1 to:(id)arg2 rootPackage:(id)arg3;
+ (id)convertToUMLDataType:(id)arg1 rootPackage:(id)arg2;
+ (id)resolveType:(id)arg1 rootPackage:(id)arg2;
+ (id)qualifiedNameForClassifier:(id)arg1;
+ (id)packageForSymbol:(id)arg1 rootPackage:(id)arg2;
+ (unsigned long long)translateLanguage:(id)arg1;
+ (id)lookupOrCreateInterface:(id)arg1 inPackage:(id)arg2 withSymbol:(id)arg3;
+ (id)lookupOrCreateClass:(id)arg1 inPackage:(id)arg2 withSymbol:(id)arg3;

@end

