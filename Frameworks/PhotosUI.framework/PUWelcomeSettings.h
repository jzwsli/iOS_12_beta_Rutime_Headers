/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUWelcomeSettings : PXSettings {
    bool  _alwaysShowCloudPhotoWelcome;
    bool  _alwaysShowWhatsNewWelcome;
}

@property (nonatomic) bool alwaysShowCloudPhotoWelcome;
@property (nonatomic) bool alwaysShowWhatsNewWelcome;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)alwaysShowCloudPhotoWelcome;
- (bool)alwaysShowWhatsNewWelcome;
- (id)parentSettings;
- (void)setAlwaysShowCloudPhotoWelcome:(bool)arg1;
- (void)setAlwaysShowWhatsNewWelcome:(bool)arg1;
- (void)setDefaultValues;

@end
