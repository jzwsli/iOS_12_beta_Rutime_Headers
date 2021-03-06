/* made by EzioChiu.
 */

@protocol NFRemoteAdminManagerCallbacks <NSObject>

@required

- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (void)readerModeCardSessionToken:(NSString *)arg1;
- (void)remoteAdminCleanupProgress:(double)arg1;

@end
