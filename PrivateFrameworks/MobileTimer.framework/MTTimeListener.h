/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimeListener : NSObject <MTAgentNotificationListener> {
    MTAlarmScheduler * _alarmScheduler;
    MTTimerScheduler * _timerScheduler;
}

@property (nonatomic, retain) MTAlarmScheduler *alarmScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTTimerScheduler *timerScheduler;

- (void).cxx_destruct;
- (id)alarmScheduler;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)initWithAlarmScheduler:(id)arg1 timerScheduler:(id)arg2;
- (void)setAlarmScheduler:(id)arg1;
- (void)setTimerScheduler:(id)arg1;
- (id)timerScheduler;

@end
