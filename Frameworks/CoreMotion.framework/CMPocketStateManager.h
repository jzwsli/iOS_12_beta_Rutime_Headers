/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPocketStateManager : NSObject {
    <CMPocketStateDelegate> * _delegate;
    int  fCachedState;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fDispatcher;
    double  fMaxMonitorTime;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    NSMutableArray * fQueryBlocks;
    NSObject<OS_dispatch_source> * fQueryTimer;
}

@property (nonatomic) <CMPocketStateDelegate> *delegate;

+ (bool)isPocketStateAvailable;

- (void)_disableDispatcher;
- (void)addToAggdScalarWithName:(id)arg1 andScalar:(unsigned long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)externalStateToString:(long long)arg1;
- (id)init;
- (void)onNotification:(id)arg1;
- (void)onPocketStateUpdated:(int)arg1;
- (void)queryStateOntoQueue:(id)arg1 andMonitorFor:(double)arg2 withTimeout:(double)arg3 andHandler:(id /* block */)arg4;
- (void)queryStateOntoQueue:(id)arg1 withTimeout:(double)arg2 andHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (long long)translateInternalState:(int)arg1;

@end
