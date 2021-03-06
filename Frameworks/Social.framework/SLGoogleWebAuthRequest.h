/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLGoogleWebAuthRequest : NSObject

+ (id)authCodeFromWebPageTitle:(id)arg1;
+ (void)clearCookiesFromStorage:(id)arg1;
+ (id)requestForURL:(id)arg1;
+ (id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4;
+ (bool)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4;
+ (id)v2_authCodeFromRedirectURL:(id)arg1;
+ (id)v2_urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4;
+ (id)v2_urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 codeChallenge:(id)arg5;

@end
