/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSTemplateConnectionManager : NSObject <CPSTemplateInstanceDelegate> {
    NSMutableDictionary * _templateInstancesBySceneIdentifier;
    NSObject<OS_dispatch_queue> * _viewControllerAccessQueue;
    NSMutableDictionary * _viewControllersBySceneIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_instanceForSceneIdentifier:(id)arg1;
- (id)_listenerEndpointForTestSceneIdentifier:(id)arg1;
- (void)didDisconnectTemplateInstance:(id)arg1;
- (bool)handleEndpointRequestAction:(id)arg1 forSceneIdentifier:(id)arg2;
- (id)init;
- (void)updateTemplateInstanceForScene:(id)arg1;
- (id)viewControllerForSceneIdentifierCreateIfNecessary:(id)arg1;

@end
