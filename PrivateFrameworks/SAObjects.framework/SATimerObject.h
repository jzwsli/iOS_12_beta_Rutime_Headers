/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATimerObject : SADomainObject

@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSNumber *timerValue;
@property (nonatomic, copy) NSString *title;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setState:(id)arg1;
- (void)setTimerValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)state;
- (id)timerValue;
- (id)title;

@end
