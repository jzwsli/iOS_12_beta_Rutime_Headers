/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionUpdateEvent : BKSAssertionEvent {
    unsigned int  _flags;
    NSString * _name;
}

@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) NSString *name;

- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)flags;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setFlags:(unsigned int)arg1;
- (void)setName:(id)arg1;

@end
