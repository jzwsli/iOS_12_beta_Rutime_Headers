/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMROriginWrapper : NSObject {
    <_TVRCMROriginDelegate> * _delegate;
    bool  _isObserving;
    void * _origin;
}

@property (nonatomic) <_TVRCMROriginDelegate> *delegate;

- (void).cxx_destruct;
- (void)_fetchAndReportSupportedCommands;
- (void)_supportedCommandsChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endObservingUpdates;
- (void)getPickedRouteHasVolumeControl:(id /* block */)arg1;
- (void)getSupportedCommands:(id /* block */)arg1;
- (id)initWithOrigin:(void*)arg1;
- (bool)isEqualToOriginRef:(void*)arg1;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startObservingUpdates;

@end
