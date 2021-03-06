/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYAppleIDAccountsManager : NSObject {
    AASetupAssistantService * _aaService;
    AALoginPluginManager * _appleIDLoginPluginManager;
    AAStorableLoginContext * _storedLoginContext;
}

@property (setter=setAAService:, nonatomic, retain) AASetupAssistantService *aaService;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)aaService;
- (void)clearStoredLoginContext;
- (void)enableDataClassesForAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initForDelegateBundleIDs:(id)arg1;
- (void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 skipiTunes:(bool)arg4 onlyAppleIDPlugin:(bool)arg5 completion:(id /* block */)arg6;
- (void)performSilentICDPUpgrade;
- (void)runPostRestoreRenewCredentialsIfNeeded;
- (void)setAAService:(id)arg1;
- (id)storedLoginContext;

@end
