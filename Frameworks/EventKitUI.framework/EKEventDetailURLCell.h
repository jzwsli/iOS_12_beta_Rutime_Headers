/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailURLCell : EKEventDetailCell {
    UILabel * _URLTitleView;
    UITextView * _URLView;
    int  _lastLayoutPosition;
}

- (void).cxx_destruct;
- (id)_URLTitleView;
- (id)_URLView;
- (void)_layoutForWidth:(double)arg1 position:(int)arg2;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 style:(long long)arg3;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (void)setURL:(id)arg1;
- (bool)update;

@end
