/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureAudioFileSinkPipeline : FigCapturePipeline {
    BWAudioConverterNode * _audioConverterNode;
    BWAudioFileSinkNode * _audioFileSinkNode;
    BWFileCoordinatorNode * _fileCoordinatorNode;
    NSString * _sinkID;
}

@property (nonatomic, readonly) BWAudioFileSinkNode *audioFileSinkNode;
@property (nonatomic, readonly) BWFileCoordinatorNode *fileCoordinatorNode;
@property (nonatomic, readonly) NSString *sinkID;

+ (void)initialize;

- (int)_buildAudioFileSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 recordingStatusDelegate:(id)arg4;
- (id)audioFileSinkNode;
- (void)dealloc;
- (id)fileCoordinatorNode;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 recordingStatusDelegate:(id)arg4;
- (void)reconfigure:(id)arg1;
- (id)sinkID;

@end
