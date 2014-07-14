/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEWorkspaceDelegate-Protocol.h"

@class DVTMacroDefinitionTable, IDEScheme, IDEWorkspace, NSArray, NSDictionary, NSFileHandle, NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString, Xcode3Project;

@interface Xcode3CommandLineBuildTool : NSObject <IDEWorkspaceDelegate>
{
    id _containerDidOpenContainerNotificationObserver;
    BOOL _shouldExit;
    BOOL _exportWithOriginalSigningIdentity;
    BOOL _allTargets;
    BOOL _skipUnsupportedDestinations;
    BOOL _parallelizeTargets;
    BOOL _dontActuallyRunCommands;
    BOOL _skipUnavailableActions;
    int _toolCommand;
    NSString *_name;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    long long _exitStatus;
    NSString *_projectName;
    NSArray *_targetNames;
    NSString *_workspaceName;
    NSString *_schemeName;
    NSString *_xcconfigPathFromOption;
    NSString *_xcconfigPathFromEnvVar;
    NSString *_nameOfFileToFind;
    NSString *_archivePath;
    NSString *_exportDestinationPath;
    NSString *_exportFormat;
    NSString *_exportSigningIdentity;
    NSString *_exportInstallerIdentity;
    NSString *_exportProvisioningProfile;
    NSArray *_buildActions;
    NSArray *_potentialBuildActions;
    NSArray *_buildSettingAssignmentStrings;
    Xcode3Project *_project;
    NSMutableArray *_targets;
    IDEWorkspace *_workspace;
    IDEScheme *_scheme;
    NSMutableDictionary *_perActionRunDestinations;
    NSString *_configurationName;
    NSArray *_architectures;
    NSString *_baseSdkName;
    NSArray *_toolchainNames;
    NSArray *_destinationSpecifications;
    NSNumber *_destinationTimeout;
    NSNumber *_maxConcurrency;
    DVTMacroDefinitionTable *_synthesizedMacros;
    DVTMacroDefinitionTable *_macrosFromCommandLine;
    DVTMacroDefinitionTable *_macrosFromXcconfigOption;
    DVTMacroDefinitionTable *_macrosFromXcconfigEnvVar;
    NSMutableDictionary *_userDefaults;
    NSOperationQueue *_buildToolQueue;
    NSString *_resultBundlePath;
    NSDictionary *_serverOptions;
}

+ (id)sharedCommandLineBuildTool;
+ (id)workspaceFilesInDirectory:(id)arg1;
+ (id)knownWorkspaceWrapperExtensions;
+ (id)timingLogAspect;
@property(copy) NSDictionary *serverOptions; // @synthesize serverOptions=_serverOptions;
@property(retain) NSString *resultBundlePath; // @synthesize resultBundlePath=_resultBundlePath;
@property(retain) NSOperationQueue *buildToolQueue; // @synthesize buildToolQueue=_buildToolQueue;
@property(retain) NSMutableDictionary *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain) DVTMacroDefinitionTable *macrosFromXcconfigEnvVar; // @synthesize macrosFromXcconfigEnvVar=_macrosFromXcconfigEnvVar;
@property(retain) DVTMacroDefinitionTable *macrosFromXcconfigOption; // @synthesize macrosFromXcconfigOption=_macrosFromXcconfigOption;
@property(retain) DVTMacroDefinitionTable *macrosFromCommandLine; // @synthesize macrosFromCommandLine=_macrosFromCommandLine;
@property(retain) DVTMacroDefinitionTable *synthesizedMacros; // @synthesize synthesizedMacros=_synthesizedMacros;
@property BOOL skipUnavailableActions; // @synthesize skipUnavailableActions=_skipUnavailableActions;
@property BOOL dontActuallyRunCommands; // @synthesize dontActuallyRunCommands=_dontActuallyRunCommands;
@property(copy) NSNumber *maxConcurrency; // @synthesize maxConcurrency=_maxConcurrency;
@property BOOL parallelizeTargets; // @synthesize parallelizeTargets=_parallelizeTargets;
@property(copy) NSNumber *destinationTimeout; // @synthesize destinationTimeout=_destinationTimeout;
@property BOOL skipUnsupportedDestinations; // @synthesize skipUnsupportedDestinations=_skipUnsupportedDestinations;
@property(copy) NSArray *destinationSpecifications; // @synthesize destinationSpecifications=_destinationSpecifications;
@property(retain) NSArray *toolchainNames; // @synthesize toolchainNames=_toolchainNames;
@property(copy) NSString *baseSdkName; // @synthesize baseSdkName=_baseSdkName;
@property(retain) NSArray *architectures; // @synthesize architectures=_architectures;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(retain) NSMutableDictionary *perActionRunDestinations; // @synthesize perActionRunDestinations=_perActionRunDestinations;
@property(retain) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property BOOL allTargets; // @synthesize allTargets=_allTargets;
@property(retain) NSMutableArray *targets; // @synthesize targets=_targets;
@property(retain) Xcode3Project *project; // @synthesize project=_project;
@property(retain) NSArray *buildSettingAssignmentStrings; // @synthesize buildSettingAssignmentStrings=_buildSettingAssignmentStrings;
@property(retain) NSArray *potentialBuildActions; // @synthesize potentialBuildActions=_potentialBuildActions;
@property(retain) NSArray *buildActions; // @synthesize buildActions=_buildActions;
@property BOOL exportWithOriginalSigningIdentity; // @synthesize exportWithOriginalSigningIdentity=_exportWithOriginalSigningIdentity;
@property(copy) NSString *exportProvisioningProfile; // @synthesize exportProvisioningProfile=_exportProvisioningProfile;
@property(copy) NSString *exportInstallerIdentity; // @synthesize exportInstallerIdentity=_exportInstallerIdentity;
@property(copy) NSString *exportSigningIdentity; // @synthesize exportSigningIdentity=_exportSigningIdentity;
@property(copy) NSString *exportFormat; // @synthesize exportFormat=_exportFormat;
@property(copy) NSString *exportDestinationPath; // @synthesize exportDestinationPath=_exportDestinationPath;
@property(copy) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property(copy) NSString *nameOfFileToFind; // @synthesize nameOfFileToFind=_nameOfFileToFind;
@property(copy) NSString *xcconfigPathFromEnvVar; // @synthesize xcconfigPathFromEnvVar=_xcconfigPathFromEnvVar;
@property(copy) NSString *xcconfigPathFromOption; // @synthesize xcconfigPathFromOption=_xcconfigPathFromOption;
@property(copy) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(copy) NSString *workspaceName; // @synthesize workspaceName=_workspaceName;
@property(retain) NSArray *targetNames; // @synthesize targetNames=_targetNames;
@property(copy) NSString *projectName; // @synthesize projectName=_projectName;
@property(nonatomic) BOOL shouldExit; // @synthesize shouldExit=_shouldExit;
@property int toolCommand; // @synthesize toolCommand=_toolCommand;
@property long long exitStatus; // @synthesize exitStatus=_exitStatus;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)run;
- (void)_exportArchiveAndExit;
- (void)_printVerboseSDKListAndExit;
- (void)_printVerboseInfoForSDK:(id)arg1 keysToEmit:(id)arg2;
- (void)_printShortSDKListAndExit;
- (void)_enumerateAllPlatformsAlphabeticallyWithBlock:(id)arg1;
- (void)_printPathToLibraryAndExit;
- (void)_printPathToExecutableAndExit;
- (id)_sdkForUseWithFind;
- (void)_printContainerInformationAndExit;
- (void)_printVersionInfoAndExit;
- (void)_showBuildSettings;
- (void)_buildWithTimingSection:(id)arg1;
- (void)unableToOpenProjectAtPath:(id)arg1 reason:(id)arg2;
- (void)_workspace:(id)arg1 failedToResolveContainerForProjectFile:(id)arg2;
- (void)_resolveInputOptionsWithTimingSection:(id)arg1;
- (void)_resolveRunDestinationsForBuildAction:(id)arg1;
- (void)_resolveBaseSdk;
- (id)_resolveSdk:(id)arg1;
- (id)_stringByResolvingSymlinksInPath:(id)arg1;
- (void)_parseOptions;
- (id)_actionStringForBuildAction:(id)arg1;
- (id)_schemeCommandForBuildAction:(id)arg1;
- (id)_supportedBuildActions;
- (void)_printErrorString:(id)arg1 andFailWithCode:(long long)arg2;
- (void)_printWarningString:(id)arg1;
- (unsigned long long)_projectLoadingTimeout;
- (unsigned long long)_schemeLoadingTimeout;
- (id)overridingProperties;
- (id)init;

@end

