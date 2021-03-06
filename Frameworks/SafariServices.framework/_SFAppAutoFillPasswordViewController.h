/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController {
    SFPasswordRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordPickerServiceViewControllerProtocol> * _serviceProxy;
}

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)_connectToServiceWithCompletion:(id /* block */)arg1;
- (id)_remoteViewController;
- (void)_setUpServiceProxyIfNeeded;
- (void)authenticateToPresentInPopover:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)remoteViewController:(id)arg1 selectedCredential:(id)arg2;
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)setRemoteAppID:(id)arg1;
- (void)setRemoteLocalizedAppName:(id)arg1;
- (void)setRemoteUnlocalizedAppName:(id)arg1;
- (void)setWebViewURL:(id)arg1;
- (void)viewDidLoad;

@end
