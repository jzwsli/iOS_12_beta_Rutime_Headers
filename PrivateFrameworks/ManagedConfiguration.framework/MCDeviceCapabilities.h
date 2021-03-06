/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDeviceCapabilities : NSObject {
    bool  _supportsBlockLevelEncryption;
    bool  _supportsFileLevelEncryption;
}

@property (nonatomic, readonly) bool supportsBlockLevelEncryption;
@property (nonatomic, readonly) bool supportsFileLevelEncryption;

+ (id)currentDevice;

- (bool)_mediaDiskIsEncrypted;
- (id)init;
- (bool)supportsBlockLevelEncryption;
- (bool)supportsFileLevelEncryption;
- (bool)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id*)arg3;

@end
