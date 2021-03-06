/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFPowerAssertion : HMFAssertion {
    unsigned int  _identifier;
}

@property (nonatomic) unsigned int identifier;

- (void)dealloc;
- (unsigned int)identifier;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (void)setIdentifier:(unsigned int)arg1;

@end
