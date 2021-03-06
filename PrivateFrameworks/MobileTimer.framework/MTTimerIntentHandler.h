/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimerIntentHandler : NSObject {
    <MTTimerManagerProviding> * _timerManagerProvider;
}

@property (nonatomic) <MTTimerManagerProviding> *timerManagerProvider;

- (void).cxx_destruct;
- (id)_alternateTimerForTargetTimer:(id)arg1 inTimers:(id)arg2 allowedTimerStates:(id)arg3;
- (void)_genericallyResolveTargetTimer:(id)arg1 multiple:(bool)arg2 allowedTimerStatesForFollowup:(id)arg3 completion:(id /* block */)arg4;
- (void)_matchTimersFromIntentsTimer:(id)arg1 excludeStoppedTimers:(bool)arg2 completion:(id /* block */)arg3;
- (id)_onlyUnnamedTimerInTimers:(id)arg1;
- (id)_timerManager;
- (void)setTimerManagerProvider:(id)arg1;
- (id)timerManagerProvider;

@end
