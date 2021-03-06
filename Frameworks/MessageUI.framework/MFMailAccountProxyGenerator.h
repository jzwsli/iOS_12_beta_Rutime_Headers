/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailAccountProxyGenerator : NSObject {
    bool  _allowsRestrictedAccounts;
    _MFMailAccountProxySource * _proxySource;
}

- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(bool)arg2;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(bool)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4;
- (id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)allAccountProxies;
- (void)dealloc;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)init;
- (id)initWithAllowsRestrictedAccounts:(bool)arg1;

@end
