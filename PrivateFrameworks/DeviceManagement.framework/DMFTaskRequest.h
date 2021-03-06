/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFTaskRequest : CATTaskRequest

+ (bool)isPermittedOnCurrentPlatform;
+ (bool)isPermittedOnPlatform:(unsigned long long)arg1;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
