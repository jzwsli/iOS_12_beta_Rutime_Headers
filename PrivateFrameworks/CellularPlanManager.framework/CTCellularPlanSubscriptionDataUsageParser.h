/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanSubscriptionDataUsageParser : NSObject <CTCellularPlanValidating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)validate:(id)arg1;
+ (bool)validate:(id)arg1 parseTo:(id*)arg2;

@end
