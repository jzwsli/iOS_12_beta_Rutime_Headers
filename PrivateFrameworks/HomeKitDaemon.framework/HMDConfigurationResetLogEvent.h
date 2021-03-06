/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDConfigurationResetLogEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)configurationReset;
+ (id)uuid;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
