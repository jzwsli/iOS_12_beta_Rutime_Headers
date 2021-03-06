/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsStandaloneEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate> {
    MPAVRoutingController * _routingController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)arg1;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAutomaticResponseLoading:(bool)arg1;

@end
