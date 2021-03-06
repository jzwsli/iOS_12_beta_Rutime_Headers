/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFClassRegistry : HMFObject {
    NSMutableDictionary * _classes;
    Class  _defaultClass;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (readonly) Class defaultClass;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;

- (void).cxx_destruct;
- (Class)classForKey:(id)arg1;
- (Class)defaultClass;
- (id)init;
- (id)initWithDefaultClass:(Class)arg1;
- (id)propertyQueue;
- (void)setClass:(Class)arg1 forKey:(id)arg2;

@end
