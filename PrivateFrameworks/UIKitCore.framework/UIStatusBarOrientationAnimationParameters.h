/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarOrientationAnimationParameters : UIStatusBarAnimationParameters {
    int  _orientationAnimation;
}

@property (nonatomic) int orientationAnimation;

- (id)initWithDefaultParameters;
- (int)orientationAnimation;
- (void)setOrientationAnimation:(int)arg1;
- (bool)shouldAnimate;

@end
