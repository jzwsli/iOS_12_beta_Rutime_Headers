/* made by EzioChiu.
 */

@protocol VideoFrameWriterProgressRecipient

@required

- (void)updateCallbackForFrameIndex:(unsigned long long)arg1 withPixelBuffer:(struct __CVBuffer { }*)arg2;

@end
