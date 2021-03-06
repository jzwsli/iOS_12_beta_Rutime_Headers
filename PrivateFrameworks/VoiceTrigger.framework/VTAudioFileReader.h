/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAudioFileReader : NSObject {
    struct OpaqueExtAudioFile { } * _fFile;
}

- (void)close;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)readSamples:(unsigned long long)arg1;

@end
