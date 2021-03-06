/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMessageInstrumentation : NSObject {
    bool  _exitWhenAllInstrumentationLogsFlushed;
    NSObject<OS_dispatch_queue> * _instrumenationQueue;
    NSObject<OS_dispatch_source> * _logMessageInstrumentationFlushTimer;
    unsigned long long  _logMessageNothingToFlushCounter;
    unsigned int  _logMsgInstrumentationEnableCounter;
    NSLock * _logMsgInstrumentationEnableLock;
    NSMutableDictionary * _msgCountForRegisteredEvents;
    NSString * _msgCountUserDefaultsKey;
    NSMutableArray * _registeredEventNames;
}

+ (id)cacheManager;
+ (id)createDefaultInstrumentation;
+ (id)defaultInstrumentation;
+ (void)disableDefaultInstrumentation;

- (void).cxx_destruct;
- (void)_registerEventName:(id)arg1;
- (void)captureLogMessage:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(bool)arg3;
- (void)captureLogMessageCollectionRequest:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(bool)arg3;
- (void)captureLogMsgCountForEventName:(id)arg1 logMsgCount:(long long)arg2 fromLogFrameworkAdaptor:(bool)arg3;
- (bool)disableLogMsgInstrumentation;
- (void)enableLogMsgInstrumentation;
- (id)init;
- (void)waitForEmptyInstrumentationQueue:(id /* block */)arg1;

@end
