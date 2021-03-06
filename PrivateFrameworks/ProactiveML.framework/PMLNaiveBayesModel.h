/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLNaiveBayesModel : NSObject <PMLClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol, PMLRegressionModelProtocol> {
    PMLNaiveBayesSolver * _solver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)solverWithProbabilities:(id)arg1 positiveConditionalProbabilities:(id)arg2 negativeConditionalProbabilities:(id)arg3;
+ (id)withProbabilities:(id)arg1 positiveConditionalProbabilities:(id)arg2 negativeConditionalProbabilities:(id)arg3;

- (void).cxx_destruct;
- (bool)classify:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithSolver:(id)arg1;
- (float)predict:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end
