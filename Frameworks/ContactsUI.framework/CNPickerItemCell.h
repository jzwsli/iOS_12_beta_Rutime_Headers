/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPickerItemCell : UITableViewCell {
    UITextField * _textField;
}

@property (nonatomic, retain) UITextField *textField;

- (void).cxx_destruct;
- (void)beginEditing;
- (void)endEditing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setTextField:(id)arg1;
- (id)textField;

@end
