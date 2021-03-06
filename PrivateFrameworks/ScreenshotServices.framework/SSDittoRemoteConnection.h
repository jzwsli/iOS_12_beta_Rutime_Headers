/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSDittoRemoteConnection : NSObject {
    FBSOpenApplicationService * _openApplicationService;
}

- (void).cxx_destruct;
- (void)_sendAction:(id)arg1;
- (id)init;
- (void)preheatDittoProcess;
- (void)sendDittoProcessEnvironmentDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDittoProcessImageIdentifierUpdate:(id)arg1;

@end
