/* made by EzioChiu.
 */

@protocol AVCRateControllerDelegate

@required

- (void)rateController:(void*)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;

@optional

- (int)learntBitrateForSegment:(NSString *)arg1 defaultValue:(int)arg2;

@end
