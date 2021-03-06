/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _WeightedString : NSObject {
    NSString * _string;
    unsigned long long  _weight;
}

@property (nonatomic, retain) NSString *string;
@property (nonatomic) unsigned long long weight;

+ (id)weightedStringFrom:(id)arg1 withWeight:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)setString:(id)arg1;
- (void)setWeight:(unsigned long long)arg1;
- (id)string;
- (unsigned long long)weight;

@end
