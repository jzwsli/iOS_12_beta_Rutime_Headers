/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVNotification : NSObject {
    id  _details;
    NSString * _name;
}

@property (nonatomic, readonly) id details;
@property (nonatomic, readonly) NSString *name;

+ (id)notificationWithName:(id)arg1;
+ (id)notificationWithName:(id)arg1 details:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)details;
- (id)initWithName:(id)arg1 details:(id)arg2;
- (id)name;

@end
