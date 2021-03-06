/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private> {
    UIImage * _activityImage;
    NSString * _activityTitle;
    UIViewController * _activityViewController;
}

@property (nonatomic, retain) UIImage *activityImage;
@property (nonatomic, retain) NSString *activityTitle;
@property (nonatomic, retain) UIViewController *activityViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_allowDocumentSharing;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (void).cxx_destruct;
- (bool)_activitySupportsPromiseURLs;
- (void)_cloudShareControllerDidDismiss:(id)arg1;
- (void)_documentSharingControllerDidDismiss:(id)arg1;
- (void)_setupForInitialSharing;
- (void)_setupForSharingInfo;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityImage:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setActivityViewController:(id)arg1;

@end
