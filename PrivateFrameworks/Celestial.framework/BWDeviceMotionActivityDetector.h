/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeviceMotionActivityDetector : NSObject {
    BWMotionSampleRingBuffer * _motionDataRingBuffer;
    bool  _motionMetadataStatusChecked;
    bool  _newMotionDataAvailable;
    struct OpaqueFigSimpleMutex { } * _ringMutex;
    bool  _robustMethodEnabled;
    bool  _stationary;
}

@property (getter=isStationary, nonatomic, readonly) bool stationary;

+ (void)initialize;

- (void)_detectIfStationary;
- (void)dealloc;
- (id)init;
- (bool)isStationary;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
