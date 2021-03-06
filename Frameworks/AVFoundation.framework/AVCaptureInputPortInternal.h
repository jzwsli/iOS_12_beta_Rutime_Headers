/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInputPortInternal : NSObject {
    int  changeSeed;
    struct OpaqueCMClock { } * clock;
    bool  enabled;
    struct opaqueCMFormatDescription { } * formatDescription;
    AVCaptureInput * input;
    NSString * mediaType;
    NSString * sourceID;
}

- (void)dealloc;
- (id)init;

@end
