/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSWirelessDataUsageWorkspace : NSObject {
    AnalyticsWorkspace * _analyticsWorkspace;
    NSDate * _billingCycleEndDate;
    bool  _billingCycleSupported;
    bool  _carrierSpaceSupported;
    bool  _pendingProcessAnalytics;
    NSDate * _previousBillingCycleEndDate;
    ProcessAnalytics * _processAnalytics;
    NSNumber * _subscriberTag;
}

@property (nonatomic, retain) AnalyticsWorkspace *analyticsWorkspace;
@property (nonatomic, retain) NSDate *billingCycleEndDate;
@property (nonatomic) bool billingCycleSupported;
@property (nonatomic) bool carrierSpaceSupported;
@property bool pendingProcessAnalytics;
@property (nonatomic, retain) NSDate *previousBillingCycleEndDate;
@property (nonatomic, retain) ProcessAnalytics *processAnalytics;
@property (nonatomic, retain) NSNumber *subscriberTag;

- (void).cxx_destruct;
- (id)analyticsWorkspace;
- (id)billingCycleEndDate;
- (bool)billingCycleSupported;
- (bool)carrierSpaceSupported;
- (bool)pendingProcessAnalytics;
- (id)previousBillingCycleEndDate;
- (id)processAnalytics;
- (void)setAnalyticsWorkspace:(id)arg1;
- (void)setBillingCycleEndDate:(id)arg1;
- (void)setBillingCycleSupported:(bool)arg1;
- (void)setCarrierSpaceSupported:(bool)arg1;
- (void)setPendingProcessAnalytics:(bool)arg1;
- (void)setPreviousBillingCycleEndDate:(id)arg1;
- (void)setProcessAnalytics:(id)arg1;
- (void)setSubscriberTag:(id)arg1;
- (bool)shouldUseBillingCycleData;
- (bool)shouldUseCalendarMonthBillingCycle;
- (id)subscriberTag;
- (bool)valid;

@end
