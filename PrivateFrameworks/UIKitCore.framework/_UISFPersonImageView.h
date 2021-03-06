/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISFPersonImageView : UIImageView {
    bool  _darkStyle;
    bool  _isDevice;
    bool  _overlay;
}

@property (nonatomic) bool darkStyle;
@property (nonatomic) bool isDevice;
@property (nonatomic) bool overlay;

- (bool)darkStyle;
- (id)initWithPersonImageView:(id)arg1;
- (bool)isDevice;
- (void)layoutSubviews;
- (bool)overlay;
- (void)setDarkStyle:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setIsDevice:(bool)arg1;
- (void)setOverlay:(bool)arg1;

@end
