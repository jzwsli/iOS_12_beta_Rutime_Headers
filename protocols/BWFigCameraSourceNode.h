/* made by EzioChiu.
 */

@protocol BWFigCameraSourceNode <NSObject>

@required

- (BWFigVideoCaptureDevice *)captureDevice;
- (BWFigVideoCaptureStream *)captureStream;
- (NSDictionary *)colorInfoForOutput:(BWNodeOutput *)arg1;
- (BWNodeOutput *)detectedFacesOutput;
- (void)setVideoCaptureOutputColorInfoOverride:(NSDictionary *)arg1;
- (void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(bool)arg1;
- (BWNodeOutput *)stillImageOutput;
- (BWNodeOutput *)videoCaptureOutput;
- (NSDictionary *)videoCaptureOutputColorInfoOverride;
- (bool)videoCaptureOutputPixelBufferAttachmentModificationAllowed;

@end
