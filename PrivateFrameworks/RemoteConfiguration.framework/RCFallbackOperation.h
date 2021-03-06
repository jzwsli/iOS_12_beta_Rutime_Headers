/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCFallbackOperation : RCOperation {
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _configurationCompletionHandler;
    RCConfigurationResource * _configurationResource;
    bool  _enableExtraLogs;
    unsigned long long  _environment;
    NSURL * _fallbackURL;
    NSString * _requestKey;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) id /* block */ configurationCompletionHandler;
@property (nonatomic, retain) RCConfigurationResource *configurationResource;
@property (nonatomic) bool enableExtraLogs;
@property (nonatomic) unsigned long long environment;
@property (nonatomic, retain) NSURL *fallbackURL;
@property (nonatomic, retain) NSString *requestKey;

- (void).cxx_destruct;
- (void)_fetchConfigurationWithURL:(id)arg1 requestKey:(id)arg2 enableExtraLogs:(bool)arg3;
- (void)_parseFallbackResponse:(id)arg1 fallbackURL:(id)arg2 requestKey:(id)arg3 enableExtraLogs:(bool)arg4 completion:(id /* block */)arg5;
- (id)completionQueue;
- (id /* block */)configurationCompletionHandler;
- (id)configurationResource;
- (bool)enableExtraLogs;
- (unsigned long long)environment;
- (id)fallbackURL;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)requestKey;
- (void)setCompletionQueue:(id)arg1;
- (void)setConfigurationCompletionHandler:(id /* block */)arg1;
- (void)setConfigurationResource:(id)arg1;
- (void)setEnableExtraLogs:(bool)arg1;
- (void)setEnvironment:(unsigned long long)arg1;
- (void)setFallbackURL:(id)arg1;
- (void)setRequestKey:(id)arg1;
- (bool)validateOperation;

@end
