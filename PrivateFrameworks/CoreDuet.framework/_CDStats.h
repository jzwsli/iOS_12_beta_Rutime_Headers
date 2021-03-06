/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDStats : NSObject

+ (id)familyNames;
+ (id)hardwareModel;
+ (id)sharedInstance;

- (void)addToDictionary:(id)arg1 perfMetric:(id)arg2;
- (void)addToDictionary:(id)arg1 perfMetricFamily:(id)arg2;
- (void)addToStatsPrinter:(id)arg1 perfMetricFamily:(id)arg2;
- (void)dealloc;
- (id)dictionary;
- (id)init;
- (id)string;

@end
