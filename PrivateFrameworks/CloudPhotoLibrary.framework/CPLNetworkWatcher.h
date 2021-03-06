/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLNetworkWatcher : NSObject {
    <CPLNetworkWatcherDelegate> * _delegate;
    unsigned long long  _networkState;
    NSObject<OS_dispatch_queue> * _queue;
    struct __SCNetworkReachability { } * _reachability;
    unsigned int  _reachabilityFlags;
}

@property (nonatomic) <CPLNetworkWatcherDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long networkState;

+ (id)_descriptionForNetworkState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_initialReachabilityTestFailed;
- (void)_reachabilityFlagsDidChange:(unsigned int)arg1;
- (void)_setupReachability;
- (void)_teardownReachability;
- (void)_updateState:(unsigned long long)arg1;
- (id)delegate;
- (id)initWithQueue:(id)arg1;
- (unsigned long long)networkState;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
