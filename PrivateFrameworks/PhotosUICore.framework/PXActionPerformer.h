/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXActionPerformer : NSObject {
    NSString * _actionType;
    bool  _cancellable;
    id /* block */  _completionHandler;
    <PXActionPerformerDelegate> * _delegate;
    UIViewController * _presentedViewController;
    unsigned long long  _state;
    bool  _success;
}

@property (nonatomic, readonly) NSString *actionType;
@property (getter=isCancellable, nonatomic, readonly) bool cancellable;
@property (nonatomic) <PXActionPerformerDelegate> *delegate;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) bool success;

+ (bool)canPerformBlacklistingOnAssetCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_completeStateWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_completeUnlockTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleStepFinished:(unsigned long long)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_performUnlockIfNeeded;
- (void)_transitionToState:(unsigned long long)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (id)actionType;
- (void)cancelActionWithCompletionHandler:(id /* block */)arg1;
- (void)completeBackgroundTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (id)delegate;
- (bool)dismissViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithActionType:(id)arg1;
- (bool)isCancellable;
- (void)performActionWithCompletionHandler:(id /* block */)arg1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (bool)presentViewController:(id)arg1;
- (id)presentedViewController;
- (bool)requiresUnlockedDevice;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (bool)success;

@end
