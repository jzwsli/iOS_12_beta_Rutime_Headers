/* made by EzioChiu.
 */

@protocol ARSensor <NSObject>

@required

- (<ARSensorDelegate> *)delegate;
- (unsigned long long)providedDataTypes;
- (void)setDelegate:(id <ARSensorDelegate>)arg1;
- (void)start;
- (void)stop;

@optional

- (unsigned long long)powerUsage;
- (void)setPowerUsage:(unsigned long long)arg1;

@end
