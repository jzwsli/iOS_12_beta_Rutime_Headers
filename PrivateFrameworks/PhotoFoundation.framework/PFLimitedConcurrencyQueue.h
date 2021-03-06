/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFLimitedConcurrencyQueue : PFDispatchQueue {
    unsigned long long  _concurrencyLimit;
}

@property (readonly) unsigned long long concurrencyLimit;

+ (id)_newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3;
+ (Class)concreteQueueClass;
+ (unsigned long long)defaultConcurrency;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned int)arg3;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned int)arg3 targetQueue:(id)arg4 extensions:(id)arg5;
+ (id)newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;

- (unsigned long long)concurrencyLimit;

@end
