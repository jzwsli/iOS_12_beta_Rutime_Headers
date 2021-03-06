/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLGracePeriodTimer : NSObject {
    id /* block */  _action;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    double  _delay;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)_createTimer;
- (void)_suppress;
- (void)arm;
- (id)initWithAction:(id /* block */)arg1 callbackQueue:(id)arg2 delay:(double)arg3;
- (void)suppress;

@end
