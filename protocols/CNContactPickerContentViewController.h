/* made by EzioChiu.
 */

@protocol CNContactPickerContentViewController <CNContactPickerServiceProtocol>

@required

- (<CNContactPickerContentDelegate> *)delegate;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(bool)arg1;
- (UINavigationController *)navigationController;
- (void)setDelegate:(id <CNContactPickerContentDelegate>)arg1;

@end
