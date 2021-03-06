/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMDeviceConditions : NSObject

@property (readonly) bool isDeviceCharging;
@property (readonly) bool isDeviceOnWifi;

+ (id)sharedInstance;

- (id)_batteryStatus;
- (id)_mobileNetworkManager;
- (bool)isDeviceCharging;
- (bool)isDeviceOnWifi;

@end
