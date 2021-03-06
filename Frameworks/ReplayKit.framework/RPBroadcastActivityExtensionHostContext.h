/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastActivityExtensionHostContext : NSExtensionContext <RPBroadcastActivityCommunicationHostProtocol> {
    RPBroadcastActivityHostViewController * _hostViewController;
}

@property (nonatomic) RPBroadcastActivityHostViewController *hostViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 broadcastConfigurationData:(id)arg4 userInfo:(id)arg5 cancelled:(bool)arg6;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(bool)arg4;
- (id)extensionObjectProxy;
- (id)hostViewController;
- (oneway void)presentationInfoWithCompletion:(id /* block */)arg1;
- (void)setHostViewController:(id)arg1;

@end
