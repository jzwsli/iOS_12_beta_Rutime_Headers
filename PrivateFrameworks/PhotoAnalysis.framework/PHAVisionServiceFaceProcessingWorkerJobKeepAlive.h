/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject {
    bool  _continueReporting;
    PHAWorkerJob * _job;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_extendTimeoutAndDispatchAgainIfNecessary;
- (id)initWithJob:(id)arg1;
- (id)job;
- (void)start;
- (void)stop;

@end
