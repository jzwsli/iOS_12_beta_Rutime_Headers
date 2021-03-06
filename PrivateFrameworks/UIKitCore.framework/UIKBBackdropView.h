/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBBackdropView : UIVisualEffectView {
    UIImage * _imageForCorners;
}

@property (nonatomic, retain) UIImage *imageForCorners;

- (id)_generateCornerContentsImage:(int)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)imageForCorners;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageForCorners:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (void)transitionToStyle:(long long)arg1;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCorners:(unsigned long long)arg2;

@end
