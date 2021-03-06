/* made by EzioChiu.
 */

@protocol AAUIDataclassPickerViewControllerDelegate <NSObject>

@required

- (void)dataclassPickerViewController:(AAUIDataclassPickerViewController *)arg1 didCompleteWithDataclassActions:(struct NSDictionary { Class x1; }*)arg2;
- (void)dataclassPickerViewControllerDidCancel:(AAUIDataclassPickerViewController *)arg1;

@optional

- (NSString *)footerTextForDataclassPickerViewController:(AAUIDataclassPickerViewController *)arg1;

@end
