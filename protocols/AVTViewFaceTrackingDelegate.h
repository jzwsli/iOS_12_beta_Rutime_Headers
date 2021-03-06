/* made by EzioChiu.
 */

@protocol AVTViewFaceTrackingDelegate <NSObject>

@required

- (void)avatarView:(AVTView *)arg1 didUpdateWithFaceTrackingStatus:(bool)arg2;
- (void)avatarView:(AVTView *)arg1 didUpdateWithLowLightStatus:(bool)arg2;
- (void)avatarView:(AVTView *)arg1 faceTrackingSessionFailedWithError:(NSError *)arg2;
- (void)avatarViewFaceTrackingSessionInterruptionDidBegin:(AVTView *)arg1;
- (void)avatarViewFaceTrackingSessionInterruptionDidEnd:(AVTView *)arg1;

@end
