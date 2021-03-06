/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingColorAuditTableViewCell : UITableViewCell {
    UIColor * _color;
    bool  _expanded;
    NSString * _symbol;
    UIView * colorView;
    NSLayoutConstraint * heightConstraint;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool expanded;
@property (nonatomic, copy) NSString *symbol;

- (void).cxx_destruct;
- (id)color;
- (bool)expanded;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setColor:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setSymbol:(id)arg1;
- (id)symbol;

@end
