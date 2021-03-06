/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDLongLivedClientProxy : CKDClientProxy

+ (id)_sharedLongLivedProxyForContext:(id)arg1;
+ (void)clearCachedLongLivedProxies;
+ (id)longLivedProxyWithContext:(id)arg1;
+ (id)sharedLongLivedProxies;

- (id)CKPropertiesDescription;
- (id)_clientPrefixEntitlement;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (bool)_hasCustomAccountsEntitlement;
- (bool)_hasEnvironmentEntitlement;
- (void)addOperationWithOperationInfo:(id)arg1;
- (id)applicationIdentifier;
- (id)apsEnvironmentEntitlement;
- (id)bundleIdentifier;
- (bool)darkWakeEnabledEntitlement;
- (id)description;
- (bool)hasAllowAccessDuringBuddyEntitlement;
- (bool)hasCloudKitSystemServiceEntitlement;
- (bool)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (bool)hasDeviceIdentifierEntitlement;
- (bool)hasDisplaysSystemAcceptPromptEntitlement;
- (bool)hasLightweightPCSEntitlement;
- (bool)hasMasqueradingEntitlement;
- (bool)hasOutOfProcessUIEntitlement;
- (bool)hasParticipantPIIEntitlement;
- (bool)hasProtectionDataEntitlement;
- (bool)hasTCCAuthorization;
- (bool)hasZoneProtectionDataEntitlement;
- (id)initWithClientContext:(id)arg1;
- (bool)isLongLived;
- (id)serviceNameForContainerMapEntitlement;
- (id)sourceApplicationBundleIdentifier;

@end
