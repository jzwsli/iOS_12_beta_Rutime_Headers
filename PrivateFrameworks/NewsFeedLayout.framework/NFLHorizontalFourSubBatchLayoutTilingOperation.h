/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLHorizontalFourSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation

+ (void)drawDebugNodeViewInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 layoutSeed:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg3;
+ (bool)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg2;
+ (unsigned long long)tileInfosUsedCount;

- (bool)isReliable;
- (id)rankedLayoutRequests;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;

@end
