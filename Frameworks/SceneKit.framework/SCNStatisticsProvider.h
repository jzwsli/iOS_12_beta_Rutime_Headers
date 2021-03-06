/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNStatisticsProvider : NSObject

- (id)collectedShadersForPid:(int)arg1;
- (id)performanceStatisticsForPid:(int)arg1;
- (int)startCollectingPerformanceStatisticsForPid:(int)arg1;
- (int)stopCollectingPerformanceStatisticsForPid:(int)arg1;

@end
