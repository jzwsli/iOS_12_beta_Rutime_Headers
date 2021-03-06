/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutSessionServer : NSObject <HDWorkoutDataSource, HDWorkoutSessionStateController, HKDataFlowLinkProcessor> {
    NSString * _applicationIdentifier;
    HDXPCClient * _client;
    NSString * _clientProcessBundleIdentifier;
    HKSource * _clientSource;
    bool  _finalizeRequested;
    NSUUID * _identifier;
    _HKExpiringCompletionTimer * _invalidationTimer;
    HKObserverSet * _observers;
    HDWorkoutSessionEntity * _persistentEntity;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    <HDWorkoutSessionController> * _sessionController;
    NSDate * _startDate;
    bool  _startRequested;
    long long  _state;
    double  _stopEventGenerationWaitInterval;
    HDWorkoutSessionTaskServer * _taskServer;
    HKWorkoutConfiguration * _workoutConfiguration;
    HKDataFlowLink * _workoutDataFlowLink;
    HDWorkoutManager * _workoutManager;
}

@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) HDXPCClient *client;
@property (nonatomic, readonly, copy) NSString *clientProcessBundleIdentifier;
@property (nonatomic, readonly, copy) HKSource *clientSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic) HDWorkoutSessionTaskServer *taskServer;
@property (nonatomic, readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (bool)finishAllWorkoutSessionsForClient:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)finishAllWorkoutsExcludingSessions:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)postRestartRecoveredSessionServerWithProfile:(id)arg1 workoutManager:(id)arg2 error:(id*)arg3;
+ (id)recoveredSessionServerWithProfile:(id)arg1 sessionUUID:(id)arg2 workoutManager:(id)arg3 error:(id*)arg4;
+ (void)unitTest_setDefaultStopEventGenerationWaitInterval:(double)arg1;

- (void).cxx_destruct;
- (id)_defaultConfigurationWithWorkoutConfiguration:(id)arg1;
- (id)_fitnessMachineDescriptionComponent;
- (id)_lapLengthDescriptionComponent;
- (id)_predictionDescriptionComponent;
- (void)_queue_cacheClientIdentifiers;
- (id)_queue_currentWorkoutSessionConfiguration;
- (void)_queue_deleteSessionAndFinishAssociatedBuilderAtDate:(id)arg1;
- (void)_queue_didTransitionToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3;
- (void)_queue_generateError:(id)arg1;
- (void)_queue_generateEvent:(id)arg1;
- (void)_queue_generateEventWithType:(long long)arg1 date:(id)arg2;
- (void)_queue_immediateStopWithDate:(id)arg1;
- (void)_queue_invalidationTimerDidFire;
- (void)_queue_loadOrCreatePersistentEntity;
- (bool)_queue_prepareWithError:(id*)arg1;
- (void)_queue_processStopEvent:(id)arg1;
- (void)_queue_recoverPersistedState;
- (id)_queue_retrieveSessionControllerStateForRecoveryIdentifier:(id)arg1 error:(id*)arg2;
- (void)_queue_setupSessionController;
- (void)_queue_startInvalidationTimer;
- (void)_queue_stopInvalidationTimer;
- (bool)_queue_stopWithError:(id*)arg1;
- (bool)_queue_storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id*)arg3;
- (void)_queue_transitionToState:(long long)arg1 date:(id)arg2;
- (void)_queue_updateAndPersistState:(long long)arg1 date:(id)arg2;
- (id)_swimmingDescriptionComponent;
- (void)addObserver:(id)arg1;
- (id)applicationIdentifier;
- (void)autoPauseWithDate:(id)arg1;
- (void)autoResumeWithDate:(id)arg1;
- (id)client;
- (id)clientProcessBundleIdentifier;
- (id)clientSource;
- (id)description;
- (void)didBecomeCurrent;
- (void)didResignCurrentWithError:(id)arg1;
- (void)endHeartRateRecovery;
- (bool)endWithError:(id*)arg1;
- (void)finish;
- (void)generateError:(id)arg1;
- (void)generateEvent:(id)arg1;
- (id)identifier;
- (id)initWithProfile:(id)arg1 configuration:(id)arg2 sessionUUID:(id)arg3 workoutManager:(id)arg4;
- (bool)isActive;
- (bool)pauseWithError:(id*)arg1;
- (bool)prepareWithError:(id*)arg1;
- (void)removeObserver:(id)arg1;
- (bool)resumeWithError:(id*)arg1;
- (void)setAssociatedWorkoutBuilderEntity:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setTaskServer:(id)arg1;
- (void)setWorkoutDataAccumulator:(id)arg1;
- (bool)startActivityWithError:(id*)arg1;
- (id)startDate;
- (long long)state;
- (bool)stopActivityWithError:(id*)arg1;
- (bool)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id*)arg3;
- (id)taskServer;
- (id)taskServerConfigurationForRecoveryWithError:(id*)arg1;
- (void)unitTest_setSessionController:(id)arg1;
- (void)unitTest_setStopEventGenerationWaitInterval:(double)arg1;
- (id)workoutConfiguration;
- (id)workoutDataAccumulator;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;

@end
