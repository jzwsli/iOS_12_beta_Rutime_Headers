/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

@interface DAEASOAuthClient : NSObject

+ (id)clientIDForOAuthType:(unsigned long long)arg1;
+ (id)clientRedirect;
+ (id)clientRedirectForOAuthType:(unsigned long long)arg1;
+ (id)defaultScopeForOAuthType:(unsigned long long)arg1;
+ (id)scopeForUpgradingFromBasicCreds;

@end
