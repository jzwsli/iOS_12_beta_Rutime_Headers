/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepCurrentValueDataProvider : HKValueDataProvider

- (id)_currentSleepQueryWithCompletion:(id /* block */)arg1;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchQueryResultFromDate:(id)arg1 toDate:(id)arg2 completion:(id /* block */)arg3;
- (id)_queryDateRangeFromSampleDate:(id)arg1;
- (id)currentValue;
- (id)fetchOperationWithCompletion:(id /* block */)arg1;

@end
