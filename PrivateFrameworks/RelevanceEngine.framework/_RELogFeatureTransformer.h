/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _RELogFeatureTransformer : REFeatureTransformer {
    double  _base;
    unsigned long long  _type;
}

- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (id)_transform:(id)arg1;
- (bool)_validateWithFeatures:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBase:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
