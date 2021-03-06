/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDHeartRateRecoveryAssertion : HDAssertion {
    <HDWorkoutSessionStateController> * _sessionStateController;
}

@property (nonatomic, readonly) <HDWorkoutSessionStateController> *sessionStateController;

- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2;
- (id)sessionStateController;

@end
