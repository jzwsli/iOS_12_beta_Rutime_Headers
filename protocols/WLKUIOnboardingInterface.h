/* made by EzioChiu.
 */

@protocol WLKUIOnboardingInterface <JSExport>

@required

- (void)dismiss;
- (NSArray *)eligibleBids;
- (void)fetchEligibleBids:(JSValue *)arg1;
- (void)fetchOptedIn:(JSValue *)arg1;
- (bool)isOptedIn;
- (NSNumber *)isOptedInCached;
- (bool)isShowing;
- (void)setOptedIn:(bool)arg1 :(JSValue *)arg2;
- (void)show:(JSValue *)arg1;
- (void)showForBids:(NSArray *)arg1 :(JSValue *)arg2 :(JSValue *)arg3;

@end
