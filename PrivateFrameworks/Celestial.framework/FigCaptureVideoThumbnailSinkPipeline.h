/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVideoThumbnailSinkPipeline : FigCapturePipeline <BWImageQueueSinkNodePreviewTapDelegate> {
    bool  _didPropagateCurrentImageQueue;
    BWImageQueueSinkNode * _imageQueueNode;
    BWImageQueueSinkNode * _imageQueueSinkNode;
    <BWPipelineNotificationDelegate> * _notificationDelegate;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    BWPixelTransferNode * _scalerNode;
    NSString * _sinkID;
}

@property (getter=isConnectionDisabled, nonatomic) bool connectionDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWImageQueueSinkNode *imageQueueNode;
@property (readonly) Class superclass;

+ (void)initialize;

- (int)_buildVideoFilterThumbnailPipeline:(id)arg1 videoSourceOutput:(id)arg2 sourceVideoTransform:(struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })arg3 videoThumbnailConnectionConfiguration:(id)arg4 scalerConnectionConfiguration:(id)arg5;
- (void)dealloc;
- (id)imageQueueNode;
- (void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 withSuccess:(bool)arg3;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2;
- (id)initWithConfiguration:(id)arg1 videoSourceOutput:(id)arg2 sourceVideoTransform:(struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })arg3 videoThumbnailConnectionConfiguration:(id)arg4 scalerConnectionConfiguration:(id)arg5 notificationDelegate:(id)arg6;
- (bool)isConnectionDisabled;
- (void)setConnectionDisabled:(bool)arg1;

@end
