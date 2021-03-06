/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKFieldDetectEducationViewController : PKViewController {
    UIImageView * _background;
    PKContinuousButton * _continueButton;
    id /* block */  _continueHandler;
    UILabel * _instructionLabel;
    bool  _invalidated;
    PKMobileAssetManager * _mobileAssetManager;
    UIImageView * _passSnapshot;
    PKPaymentPass * _paymentPass;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    bool  _playerStarted;
    PKTableHeaderView * _subheader;
    AVPlayerLayer * _video;
}

@property (nonatomic, copy) id /* block */ continueHandler;

+ (id)assetBackgroundColor;
+ (bool)shouldPresent;

- (void).cxx_destruct;
- (void)_removePlayerItem;
- (id /* block */)continueHandler;
- (void)continueTapped;
- (void)dealloc;
- (void)didFinishPlaying;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPaymentPass:(id)arg1;
- (void)invalidate;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performContinue;
- (void)setContinueHandler:(id /* block */)arg1;
- (void)startPlayingVideo;
- (void)viewWillLayoutSubviews;

@end
