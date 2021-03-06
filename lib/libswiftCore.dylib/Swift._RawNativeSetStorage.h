/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Swift/libswiftCore.dylib
 */

@interface Swift._RawNativeSetStorage : Swift._SwiftNativeNSSet <Swift._NSSetCore> {
    void bucketCount;
    void count;
    void initializedEntries;
    void keys;
    void seed;
}

@property (nonatomic) long long count;

- (id)copyWithZone:(void*)arg1;
- (long long)count;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(long long)arg3;
- (id)enumerator;
- (id)initWithObjects:(const id*)arg1 count:(long long)arg2;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)setCount:(long long)arg1;

@end
