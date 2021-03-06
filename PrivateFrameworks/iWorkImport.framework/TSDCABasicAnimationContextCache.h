/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCABasicAnimationContextCache : TSDCAPropertyAnimationContextCache {
    id  _fromValue;
    id  _toValue;
}

@property (nonatomic, readonly) id fromValue;
@property (nonatomic, readonly) id toValue;

- (id)fromValue;
- (id)initWithAnimation:(id)arg1;
- (double)percentAtTime:(double)arg1;
- (id)toValue;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3;

@end
