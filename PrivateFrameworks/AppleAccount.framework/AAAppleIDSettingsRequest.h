/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAppleIDSettingsRequest : AARequest {
    bool  _forceGSToken;
    ACAccount * _grandSlamAccount;
    ACAccountStore * _store;
}

@property (nonatomic) bool forceGSToken;
@property (nonatomic, readonly) ACAccount *grandSlamAccount;

+ (Class)responseClass;

- (void).cxx_destruct;
- (bool)forceGSToken;
- (id)grandSlamAccount;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2;
- (void)setForceGSToken:(bool)arg1;
- (id)urlRequest;

@end
