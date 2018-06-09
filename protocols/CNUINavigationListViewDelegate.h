/* made by EzioChiu.
 */

@protocol CNUINavigationListViewDelegate <NSObject>

@optional

- (void)navigationListView:(CNUINavigationListView *)arg1 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg2;
- (void)navigationListView:(CNUINavigationListView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;

@end
