/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFGeneratorObservable : MFObservable {
    MFCancelationToken * _cancelable;
    id /* block */  _condition;
    id /* block */  _delayForState;
    id /* block */  _nextStateForState;
    id /* block */  _resultFromState;
    <MFScheduler> * _scheduler;
    id  _state;
}

- (bool)_isFinished;
- (void)_scheduleNextResultForObserver:(id)arg1;
- (void)_updateState;
- (void)dealloc;
- (id)initWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4 delay:(id /* block */)arg5 scheduler:(id)arg6;
- (id)subscribe:(id)arg1;

@end
