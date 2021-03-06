/* made by EzioChiu.
 */

@protocol HFSetupPairingController <NSObject>

@required

+ (bool)supportsSetupPayloadRetry;

- (void)addPairingObserver:(id <HFSetupPairingObserver>)arg1;
- (NAFuture *)cancel;
- (HMAccessorySetupCompletedInfo *)completedInfo;
- (HFDiscoveredAccessory *)discoveredAccessoryToPair;
- (HMHome *)home;
- (NSSet *)pairedAccessories;
- (unsigned long long)phase;
- (void)removePairingObserver:(id <HFSetupPairingObserver>)arg1;
- (void)setSetupResult:(HFSetupAccessoryResult *)arg1;
- (HMSetupAccessoryDescription *)setupAccessoryDescription;
- (HFSetupAccessoryResult *)setupResult;
- (void)startWithHome:(HMHome *)arg1;
- (NSString *)statusDescription;
- (NSString *)statusTitle;

@end
