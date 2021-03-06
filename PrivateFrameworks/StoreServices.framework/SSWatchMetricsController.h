/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSWatchMetricsController : NSObject {
    SSXPCConnection * _connection;
    SSWatchMetricsConfiguration * _metricsConfiguration;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) SSWatchMetricsConfiguration *metricsConfiguration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)_connection;
- (id)init;
- (void)insertEvent:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)isEnabled;
- (id)metricsConfiguration;
- (id)serialQueue;
- (void)setMetricsConfiguration:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
