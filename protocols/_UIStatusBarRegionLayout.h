/* made by EzioChiu.
 */

@protocol _UIStatusBarRegionLayout <NSObject>

@required

- (NSArray *)displayItems;
- (bool)fitsAllItems;
- (void)invalidate;
- (_UIStatusBarRegion *)region;
- (void)setDisplayItems:(NSArray *)arg1;
- (void)setRegion:(_UIStatusBarRegion *)arg1;

@optional

- (UIView *)containerView;
- (bool)mayFitDisplayItems:(NSArray *)arg1;

@end
