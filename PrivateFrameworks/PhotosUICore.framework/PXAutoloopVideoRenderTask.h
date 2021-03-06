/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopVideoRenderTask : PXAutoloopVideoTask {
    AVAsset * _outputVideo;
}

@property (retain) AVAsset *outputVideo;

- (void).cxx_destruct;
- (id)outputVideo;
- (void)performTaskWithInput:(id)arg1;
- (void)setOutputVideo:(id)arg1;

@end
