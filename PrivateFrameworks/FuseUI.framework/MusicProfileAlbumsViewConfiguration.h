/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProfileAlbumsViewConfiguration : MusicProductTracklistTableViewConfiguration

+ (Class)tracklistItemContentDescriptorClass;

- (void)_configureTracklistTableViewDescriptorWithTintInformation:(id)arg1;
- (id)_loadTracklistTableViewDescriptor;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)initWithEntityProvider:(id)arg1;
- (id)initWithMediaItemCollection:(id)arg1;
- (id)newViewController;

@end
