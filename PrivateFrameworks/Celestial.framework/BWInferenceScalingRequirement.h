/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceScalingRequirement : NSObject {
    NSArray * _orderedVideoRequirements;
}

@property (nonatomic, readonly) NSArray *orderedVideoRequirements;

- (void)_appendIntermediateRequirementsToList:(id)arg1 forSatisfyingOutputRequirement:(id)arg2;
- (void)dealloc;
- (id)initWithInputVideoRequirement:(id)arg1 requestedOutputVideoRequirements:(id)arg2;
- (id)orderedVideoRequirements;

@end
