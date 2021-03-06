/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULayeredBackgroundEffect : NSObject {
    UIBlurEffect * _blurEffect;
    UIColor * _fillColor;
}

@property (nonatomic, retain) UIBlurEffect *blurEffect;
@property (nonatomic, retain) UIColor *fillColor;

+ (id)backgroundWithBlurEffect:(id)arg1;
+ (id)backgroundWithFillColor:(id)arg1;

- (void).cxx_destruct;
- (id)blurEffect;
- (id)fillColor;
- (void)setBlurEffect:(id)arg1;
- (void)setFillColor:(id)arg1;

@end
