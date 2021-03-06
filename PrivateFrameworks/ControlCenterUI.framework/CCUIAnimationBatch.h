/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIAnimationBatch : NSObject {
    NSMutableDictionary * _animationsByParameters;
}

- (void).cxx_destruct;
- (void)addAnimation:(id)arg1;
- (id)init;
- (void)iterateAnimationsOfType:(Class)arg1 withBlock:(id /* block */)arg2;
- (void)iterateAnimationsWithBlock:(id /* block */)arg1;

@end
