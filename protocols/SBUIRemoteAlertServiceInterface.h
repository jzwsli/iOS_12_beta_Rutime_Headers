/* made by EzioChiu.
 */

@protocol SBUIRemoteAlertServiceInterface

@required

- (void)configureWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: SBSRemoteAlertConfigurationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)handleButtonActions:(NSSet *)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (void)handleHeadsetButtonPressed:(bool)arg1;
- (void)handleHomeButtonPressed;
- (void)handleLockButtonPressed;
- (void)handleVolumeDownButtonPressed;
- (void)handleVolumeUpButtonPressed;
- (void)noteActivatedForActivityContinuationWithIdentifier:(NSUUID *)arg1;
- (void)prepareForActivationWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: SBSRemoteAlertActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setUserInfo:(NSDictionary *)arg1;

@end
