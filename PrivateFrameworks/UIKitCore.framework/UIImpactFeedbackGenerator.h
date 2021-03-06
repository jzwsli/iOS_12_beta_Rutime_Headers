/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator

@property (getter=_impactConfiguration, nonatomic, readonly) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;

+ (Class)_configurationClass;

- (id)_impactConfiguration;
- (void)_impactOccurredWithIntensity:(double)arg1;
- (id)_stats_key;
- (void)impactOccurred;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;

@end
