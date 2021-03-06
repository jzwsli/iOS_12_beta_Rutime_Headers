/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDashboardPlayerPhotoView : UIImageView {
    GKPlayer * _player;
    bool  _useDarkerPlaceholder;
}

@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) bool useDarkerPlaceholder;

- (void)dealloc;
- (void)invalidatePhoto;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setUseDarkerPlaceholder:(bool)arg1;
- (bool)useDarkerPlaceholder;

@end
