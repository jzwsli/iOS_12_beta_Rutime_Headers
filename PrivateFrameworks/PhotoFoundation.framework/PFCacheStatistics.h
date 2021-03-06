/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCacheStatistics : NSObject {
    unsigned long long  _evictions;
    unsigned long long  _hits;
    unsigned long long  _misses;
}

@property (readonly) unsigned long long evictions;
@property (readonly) unsigned long long hits;
@property (readonly) unsigned long long misses;

- (void)accumulate:(id)arg1;
- (id)description;
- (unsigned long long)evictions;
- (unsigned long long)hits;
- (unsigned long long)misses;
- (void)recordEvictions:(unsigned long long)arg1;
- (void)recordHit;
- (void)recordMiss;

@end
