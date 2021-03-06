/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUExternalAnalyticsVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker> {
    <NUExternalAnalyticsEventStreamObserver> * _observer;
    NSString * _referrer;
    <NSSNewsAnalyticsSessionManager> * _sessionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUExternalAnalyticsEventStreamObserver> *observer;
@property (nonatomic, readonly, copy) NSString *referrer;
@property (nonatomic, readonly) <NSSNewsAnalyticsSessionManager> *sessionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_articleViewEventWithQueryParametersForVideoItem:(id)arg1;
- (id)_defaultQueryParametersWithEventType:(id)arg1;
- (id)_eventWithQueryParameters:(id)arg1;
- (void)_populateQueryParameters:(id)arg1 withVideoItem:(id)arg2;
- (void)_submitEventWithQueryParameters:(id)arg1;
- (id)_videoPlaybackEventQueryParametersForVideoItem:(id)arg1 streamUserAction:(id)arg2;
- (id)init;
- (id)initWithSessionManager:(id)arg1 observer:(id)arg2 referrer:(id)arg3;
- (id)observer;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)referrer;
- (id)sessionManager;

@end
