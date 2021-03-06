/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTObjectDifference : NSObject {
    NSString * _key;
    id  _value1;
    id  _value2;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) id value1;
@property (nonatomic, retain) id value2;

- (void).cxx_destruct;
- (id)description;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue1:(id)arg1;
- (void)setValue2:(id)arg1;
- (id)value1;
- (id)value2;

@end
