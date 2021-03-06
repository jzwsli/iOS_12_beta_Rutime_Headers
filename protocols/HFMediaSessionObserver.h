/* made by EzioChiu.
 */

@protocol HFMediaSessionObserver <HMMediaSessionDelegate>

@optional

- (void)mediaSession:(HMMediaSession *)arg1 failedToUpdatePlaybackStateWithError:(NSError *)arg2;
- (void)mediaSession:(HMMediaSession *)arg1 willUpdatePlaybackState:(long long)arg2;

@end
