/* made by EzioChiu.
 */

@protocol HKActivitySummaryQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverActivitySummaries:(NSArray *)arg1 queryUUID:(NSUUID *)arg2;

@end
