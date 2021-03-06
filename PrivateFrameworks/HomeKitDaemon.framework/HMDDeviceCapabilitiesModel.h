/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceCapabilitiesModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSNumber *remoteGatewayCapable;
@property (nonatomic, retain) NSNumber *residentCapable;
@property (nonatomic, retain) NSNumber *supportsAssistantAccessControl;
@property (nonatomic, retain) NSNumber *supportsCloudDataSync;
@property (nonatomic, retain) NSNumber *supportsDeviceSetup;
@property (nonatomic, retain) NSNumber *supportsHomeInvitation;
@property (nonatomic, retain) NSNumber *supportsKeyTransferClient;
@property (nonatomic, retain) NSNumber *supportsKeyTransferServer;
@property (nonatomic, retain) NSNumber *supportsKeychainSync;
@property (nonatomic, retain) NSNumber *supportsStandaloneMode;
@property (nonatomic, retain) NSNumber *supportsTargetControl;
@property (nonatomic, retain) NSNumber *supportsWholeHouseAudio;

+ (id)properties;

@end
