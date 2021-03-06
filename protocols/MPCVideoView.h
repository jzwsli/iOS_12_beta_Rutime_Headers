/* made by EzioChiu.
 */

@protocol MPCVideoView <NSObject>

@required

- (bool)isReadyForDisplay;
- (AVPlayerLayer *)playerLayer;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setVideoGravity:(NSString *)arg1;
- (NSString *)videoGravity;

@end
