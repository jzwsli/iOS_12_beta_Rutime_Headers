/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDCommunicatorHelper : NSObject

+ (id)sharedInstance;

- (id)getNewThermalValueForOldValue:(id)arg1;
- (id)getOldThermalValueForNewValue:(id)arg1;
- (unsigned long long)highestCommonVersionFor:(id)arg1 and:(id)arg2;

@end
