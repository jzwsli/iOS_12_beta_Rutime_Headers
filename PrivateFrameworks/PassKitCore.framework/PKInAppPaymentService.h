/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKInAppPaymentService : NSObject {
    PKXPCService * _remoteService;
}

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)init;
- (void)merchantStatusCheck:(id)arg1 merchantDomain:(id)arg2 completion:(id /* block */)arg3;
- (bool)paymentHardwareStatus:(unsigned long long*)arg1;
- (void)paymentHardwareStatusWithCompletion:(id /* block */)arg1;
- (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 completion:(id /* block */)arg4;
- (void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
