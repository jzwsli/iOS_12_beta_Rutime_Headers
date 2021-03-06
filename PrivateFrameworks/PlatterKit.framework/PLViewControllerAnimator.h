/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    NSPointerArray * _observers;
    bool  _presenting;
    UIView * _sourceView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic, readonly) bool presenting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animatePresentation:(bool)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (id)_animationFactoryForLongLookPresentation:(bool)arg1;
- (bool)_isTransitionAnimated;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id)_presentedViewControllerForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentedViewForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_sourceViewForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initForPresentation:(bool)arg1 withSourceView:(id)arg2;
- (bool)isPresenting;
- (void)removeObserver:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
