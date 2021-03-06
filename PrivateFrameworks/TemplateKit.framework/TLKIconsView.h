/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKIconsView : TLKStackView {
    NSMutableArray * _imageViews;
    unsigned long long  _style;
}

@property (nonatomic, retain) NSMutableArray *imageViews;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (id)imageViews;
- (id)init;
- (void)setImageViews:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)updateIcons:(id)arg1;

@end
