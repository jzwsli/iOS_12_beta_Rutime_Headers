/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCVoiceRecorder : NSObject {
    TVRCDevice * _device;
    bool  _recordsAutomatically;
}

@property (nonatomic) bool recordsAutomatically;

- (void).cxx_destruct;
- (id)_initWithDevice:(id)arg1;
- (bool)recordsAutomatically;
- (void)setRecordsAutomatically:(bool)arg1;
- (void)start;
- (void)stop;

@end
