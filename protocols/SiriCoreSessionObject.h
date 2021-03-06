/* made by EzioChiu.
 */

@protocol SiriCoreSessionObject <NSObject>

@required

- (NSString *)aceId;
- (NSString *)refId;
- (void)setAceId:(NSString *)arg1;
- (void)setRefId:(NSString *)arg1;
- (bool)siriCore_bufferingAllowedDuringActiveSession;
- (bool)siriCore_canBeRemapped;
- (bool)siriCore_isRestartable;
- (bool)siriCore_isRetryable;
- (void)siriCore_logDiagnostics;
- (NSString *)siriCore_requestId;
- (NSObject<OS_dispatch_data> *)siriCore_serializedAceDataError:(id*)arg1;
- (void)siriCore_setSessionRequestId:(NSString *)arg1;
- (bool)siriCore_supportedByLocalSession;

@end
