/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVEffectRegistryEntry : NSObject {
    Class  _effectClass;
    NSDictionary * _effectProperties;
}

- (void).cxx_destruct;
- (oneway void)dealloc;
- (Class)effectClass;
- (id)effectProperties;
- (id)initWithClass:(Class)arg1 andProperties:(id)arg2;

@end
