/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer> {
    UIImage * _actualImage;
    long long  _onAdaptiveBackground;
    GKPlayer * _player;
    bool  _selected;
}

@property (nonatomic, retain) UIImage *actualImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOnAdaptiveBackground, nonatomic) long long onAdaptiveBackground;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) bool selected;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)actualImage;
- (void)dealloc;
- (id)image;
- (void)invalidateIntrinsicContentSize;
- (long long)isOnAdaptiveBackground;
- (id)player;
- (void)refreshPhoto;
- (void)refreshPhotoWithCompletionHandler:(id /* block */)arg1;
- (bool)selected;
- (void)setActualImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setOnAdaptiveBackground:(long long)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
