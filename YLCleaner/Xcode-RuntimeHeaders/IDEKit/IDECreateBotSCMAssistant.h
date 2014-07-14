/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEAssistant.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class DVTStackView_ML, IDECreateBotAssistantContext, NSImageView, NSMatrix, NSMutableArray, NSProgressIndicator, NSSecureTextField, NSTableColumn, NSTableView, NSTextField, NSTimer, NSView;

@interface IDECreateBotSCMAssistant : IDEAssistant <NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _viewIsInstalled;
    BOOL _displaySingleRepositoryUI;
    BOOL _userRegistrationIsIncomplete;
    BOOL _fireTimerActivated;
    NSTableView *_repositoryTableView;
    NSTableColumn *_repositoryURLTableColumn;
    NSTableColumn *_branchTableColumn;
    NSTableColumn *_authenticationStatusColumn;
    NSMatrix *_authenticationMatrix;
    NSTextField *_serverField;
    NSTextField *_branchField;
    NSTextField *_usernameField;
    NSSecureTextField *_passwordField;
    NSTextField *_credentialsMessageLabel;
    NSImageView *_guestAuthenticationFailureImageView;
    NSTextField *_guestAuthenticationFailureLabel;
    NSImageView *_registeredAuthenticationFailureImageView;
    NSTextField *_registeredAuthenticationFailureLabel;
    NSProgressIndicator *_guestAuthenticationProgress;
    NSProgressIndicator *_registeredAuthenticationProgress;
    DVTStackView_ML *_stacksContainer;
    NSView *_multiRepoTableLayer;
    NSView *_serverBranchLayer;
    NSView *_repositoryAuthMessageLayer;
    NSView *_connectAsLayer;
    NSView *_namePasswordLayer;
    NSView *_bottomStackFiller;
    NSMutableArray *_stacks;
    NSTimer *_authenticationVerificationTimer;
    struct CGRect _originalConnectAsLayerFrame;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property(retain, nonatomic) NSTimer *authenticationVerificationTimer; // @synthesize authenticationVerificationTimer=_authenticationVerificationTimer;
@property(retain, nonatomic) NSMutableArray *stacks; // @synthesize stacks=_stacks;
@property(retain, nonatomic) NSView *bottomStackFiller; // @synthesize bottomStackFiller=_bottomStackFiller;
@property(retain, nonatomic) NSView *namePasswordLayer; // @synthesize namePasswordLayer=_namePasswordLayer;
@property(retain, nonatomic) NSView *connectAsLayer; // @synthesize connectAsLayer=_connectAsLayer;
@property(retain, nonatomic) NSView *repositoryAuthMessageLayer; // @synthesize repositoryAuthMessageLayer=_repositoryAuthMessageLayer;
@property(retain, nonatomic) NSView *serverBranchLayer; // @synthesize serverBranchLayer=_serverBranchLayer;
@property(retain, nonatomic) NSView *multiRepoTableLayer; // @synthesize multiRepoTableLayer=_multiRepoTableLayer;
@property(retain, nonatomic) DVTStackView_ML *stacksContainer; // @synthesize stacksContainer=_stacksContainer;
@property struct CGRect originalConnectAsLayerFrame; // @synthesize originalConnectAsLayerFrame=_originalConnectAsLayerFrame;
@property BOOL fireTimerActivated; // @synthesize fireTimerActivated=_fireTimerActivated;
@property BOOL userRegistrationIsIncomplete; // @synthesize userRegistrationIsIncomplete=_userRegistrationIsIncomplete;
@property BOOL displaySingleRepositoryUI; // @synthesize displaySingleRepositoryUI=_displaySingleRepositoryUI;
@property BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property(retain, nonatomic) NSProgressIndicator *registeredAuthenticationProgress; // @synthesize registeredAuthenticationProgress=_registeredAuthenticationProgress;
@property(retain, nonatomic) NSProgressIndicator *guestAuthenticationProgress; // @synthesize guestAuthenticationProgress=_guestAuthenticationProgress;
@property(retain, nonatomic) NSTextField *registeredAuthenticationFailureLabel; // @synthesize registeredAuthenticationFailureLabel=_registeredAuthenticationFailureLabel;
@property(retain, nonatomic) NSImageView *registeredAuthenticationFailureImageView; // @synthesize registeredAuthenticationFailureImageView=_registeredAuthenticationFailureImageView;
@property(retain, nonatomic) NSTextField *guestAuthenticationFailureLabel; // @synthesize guestAuthenticationFailureLabel=_guestAuthenticationFailureLabel;
@property(retain, nonatomic) NSImageView *guestAuthenticationFailureImageView; // @synthesize guestAuthenticationFailureImageView=_guestAuthenticationFailureImageView;
@property(retain, nonatomic) NSTextField *credentialsMessageLabel; // @synthesize credentialsMessageLabel=_credentialsMessageLabel;
@property(retain, nonatomic) NSSecureTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(retain, nonatomic) NSTextField *branchField; // @synthesize branchField=_branchField;
@property(retain, nonatomic) NSTextField *serverField; // @synthesize serverField=_serverField;
@property(retain, nonatomic) NSMatrix *authenticationMatrix; // @synthesize authenticationMatrix=_authenticationMatrix;
@property(retain, nonatomic) NSTableColumn *authenticationStatusColumn; // @synthesize authenticationStatusColumn=_authenticationStatusColumn;
@property(retain, nonatomic) NSTableColumn *branchTableColumn; // @synthesize branchTableColumn=_branchTableColumn;
@property(retain, nonatomic) NSTableColumn *repositoryURLTableColumn; // @synthesize repositoryURLTableColumn=_repositoryURLTableColumn;
@property(retain, nonatomic) NSTableView *repositoryTableView; // @synthesize repositoryTableView=_repositoryTableView;
- (void).cxx_destruct;
- (id)displayBranchNameValueForBranchName:(id)arg1;
- (void)loadServerAndBranchValues;
- (void)displayProperAuthenticationElements;
- (void)positionAuthenticationImageViewAndLabel;
- (void)addLayerToEnd:(id)arg1;
- (void)rearrangeStacks;
- (void)setupStacks;
- (BOOL)checkIfAllRepositoriesAuthenticated;
- (BOOL)isSelectedRepositoryAnonymous;
- (BOOL)isSelectedRepositoryAuthenticated;
- (long long)currentUIAuthenticationTypeSelected;
- (id)branchNameForSelectedRow;
- (id)repositoryURLStringForSelectedRow;
- (unsigned long long)indexOfSelectedRow;
- (unsigned long long)indexOfFirstUnauthenticatedRepository;
- (id)repositoryExtensionForSelectedRow;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)passwordForRepositoryURLString:(id)arg1;
- (void)setPassword:(id)arg1 forRepositoryURLString:(id)arg2;
- (id)usernameForRepositoryURLString:(id)arg1;
- (void)setUsername:(id)arg1 forRepositoryURLString:(id)arg2;
- (void)setAuthenticationType:(id)arg1;
- (void)canRemoteRepositoryLocation:(id)arg1 beAuthenticatedWithUsername:(id)arg2 password:(id)arg3 extension:(id)arg4 completionHandler:(id)arg5;
- (void)onAuthenticateRemoRepoUsingTimer:(id)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)canGoForward;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)nextAssistantIdentifier;
@property(readonly, nonatomic) IDECreateBotAssistantContext *createBotAssistantContext;

@end

