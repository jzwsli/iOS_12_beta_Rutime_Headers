/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSKeepAlive : NSObject {
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;

+ (void)addKeepAliveForName:(id)arg1;
+ (id)keepAliveWithFormat:(id)arg1;
+ (id)keepAliveWithName:(id)arg1;
+ (void)removeKeepAliveForName:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)name;

@end
