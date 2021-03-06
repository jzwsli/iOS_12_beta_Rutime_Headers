/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroRandomNumberGenerator : NSObject {
    unsigned long long  _index;
    unsigned long long  _seed;
}

@property (nonatomic) unsigned long long index;
@property unsigned long long seed;

+ (double)mapValue:(double)arg1 fromRangeStart:(double)arg2 fromRangeEnd:(double)arg3 toRangeStart:(double)arg4 toRangeEnd:(double)arg5 clamp:(bool)arg6;
+ (id)randomNumberGeneratorWithSeed:(unsigned long long)arg1;

- (unsigned long long)index;
- (double)randomNumberBetweenZeroAndOne;
- (double)randomNumberWithinRangeStart:(double)arg1 rangeEnd:(double)arg2;
- (unsigned long long)seed;
- (void)setIndex:(unsigned long long)arg1;
- (void)setSeed:(unsigned long long)arg1;

@end
