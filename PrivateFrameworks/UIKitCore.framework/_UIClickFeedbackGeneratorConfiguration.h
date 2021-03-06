/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {
    _UIFeedback<_UIFeedbackDiscretePlayable> * _pressedDownFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _pressedUpFeedback;
}

@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *pressedDownFeedback;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *pressedUpFeedback;

+ (id)defaultConfiguration;
+ (id)latchingOffConfiguration;
+ (id)latchingOnConfiguration;

- (void).cxx_destruct;
- (id)feedbackKeyPaths;
- (id)pressedDownFeedback;
- (id)pressedUpFeedback;
- (long long)requiredSupportLevel;
- (void)setPressedDownFeedback:(id)arg1;
- (void)setPressedUpFeedback:(id)arg1;

@end
