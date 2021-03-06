/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMConfigurationClient : NSObject <RMConfigurationXPCInterface> {
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;

+ (id)v2MDMServiceClient;

- (void).cxx_destruct;
- (void)confirmProfileServiceInstall:(id)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (id)initWithServiceName:(id)arg1;
- (void)notifyConfigurationChanged:(id /* block */)arg1;
- (void)processProfileService:(id)arg1 completion:(id /* block */)arg2;
- (void)uprootMDMConfiguration:(id /* block */)arg1;

@end
