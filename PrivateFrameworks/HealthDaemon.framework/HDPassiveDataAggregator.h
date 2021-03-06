/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPassiveDataAggregator : HDDataAggregator

- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2;
- (bool)persistObjects:(id)arg1 forSensorDatum:(id)arg2 profile:(id)arg3 sourceEntity:(id)arg4 deviceEntity:(id)arg5 error:(id*)arg6;
- (Class)sensorDatumClass;

@end
