/* made by EzioChiu.
 */

@protocol HACCContentModule <NSObject>

@required

- (NSNumber *)contentValue;
- (<HACCContentModuleDelegate> *)delegate;
- (unsigned long long)module;
- (void)setDelegate:(id <HACCContentModuleDelegate>)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)updateValue;

@end
