/* made by EzioChiu.
 */

@protocol CNAvatarViewDelegate <NSObject>

@required

- (UIViewController *)presentingViewControllerForAvatarView:(CNAvatarView *)arg1;

@optional

- (NSArray *)avatarView:(CNAvatarView *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (bool)avatarView:(CNAvatarView *)arg1 shouldShowContact:(CNContact *)arg2;
- (void)didDismissActionsForAvatarView:(CNAvatarView *)arg1;
- (bool)shouldShowActionsForAvatarView:(CNAvatarView *)arg1;
- (void)willBeginPreviewInteractionForAvatarView:(CNAvatarView *)arg1;
- (void)willDismissActionsForAvatarView:(CNAvatarView *)arg1;

@end
