/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLExternalServiceGatekeeper : NSObject <NSURLConnectionDataDelegate> {
    id /* block */  _completion;
    NSString * _redirectHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithURLToLoad:(id)arg1 error:(id)arg2;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)initForPermissionToAccessURL:(id)arg1 fromURLString:(id)arg2 completion:(id /* block */)arg3;

@end
