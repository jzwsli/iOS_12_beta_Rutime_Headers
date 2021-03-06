/* made by EzioChiu.
 */

@protocol HUQuickControlItemHosting <NSObject>

@required

- (NSSet *)controlItems;
- (<HUQuickControlItemUpdating> *)itemUpdater;
- (void)quickControlItemUpdater:(id <HUQuickControlItemUpdating>)arg1 didUpdateResultsForControlItems:(NSSet *)arg2;

@end
