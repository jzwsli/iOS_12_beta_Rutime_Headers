/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMemoryCacheNode : NUCacheNode {
    <NUBufferImage> * _cachedImage;
}

@property (readonly) <NUBufferImage> *cachedImage;

- (void).cxx_destruct;
- (id)cachedImage;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)persistentURL;
- (void)resolveSourceWithResponse:(struct NUResponse { Class x1; }*)arg1;
- (bool)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2;

@end
