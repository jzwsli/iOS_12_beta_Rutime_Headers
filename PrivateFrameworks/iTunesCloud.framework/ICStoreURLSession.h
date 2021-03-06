/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreURLSession : ICURLSession

+ (id)prioritizedSharedStoreURLSession;
+ (id)sharedStoreURLSession;

- (void)_enqueueRequest:(id)arg1;
- (void)_performAuthenticationForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_processDialogResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_verifyMescalSignatureForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
