/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTaskScheduler : NSObject

+ (id)lowPriorityOperationQueue;
+ (id)lowPriorityQueue;
+ (void)popHighPriorityTaskInFlight;
+ (void)pushHighPriorityTaskInFlight;
+ (void)scheduleLowPriorityBlock:(id /* block */)arg1;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)arg1;
+ (void)scheduleLowPriorityOperation:(id)arg1;

@end
