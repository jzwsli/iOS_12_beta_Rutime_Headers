/* made by EzioChiu.
 */

@protocol MTLRenderPipelineState <NSObject>

@required

- (<MTLDevice> *)device;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (unsigned long long)imageblockSampleLength;
- (NSString *)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (bool)supportIndirectCommandBuffers;
- (bool)threadgroupSizeMatchesTileSize;

@end
