/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOXPCClientLogAdaptor : GEOBaseLogAdaptor {
    NSMutableArray * _failedLogMessages;
    NSLock * _failedLogMessagesLock;
    bool  _flushLogsFailed;
    NSObject<OS_dispatch_queue> * _serverConnectionQueue;
}

- (void).cxx_destruct;
- (void)_createAndSendXPCMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)_handleFailedXPCMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)_resendFailedXPCMessages;
- (void)disableLogMsgInstrumentation;
- (void)enableLogMsgInstrumentation;
- (void)flushLogs;
- (void)forceFlushLogs;
- (id)init;
- (void)queueLogMessage:(id)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1;

@end
