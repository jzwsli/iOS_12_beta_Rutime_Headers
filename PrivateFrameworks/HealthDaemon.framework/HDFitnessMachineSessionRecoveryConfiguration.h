/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <NSSecureCoding> {
    NSString * _machineBrand;
    NSString * _machineName;
    unsigned long long  _machineType;
    NSUUID * _machineUUID;
    NSUUID * _sessionUUID;
}

@property (nonatomic, copy) NSString *machineBrand;
@property (nonatomic, readonly, copy) NSString *machineName;
@property (nonatomic, readonly) unsigned long long machineType;
@property (nonatomic, readonly) NSUUID *machineUUID;
@property (nonatomic, readonly) NSUUID *sessionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 machineUUID:(id)arg2 machineType:(unsigned long long)arg3 machineName:(id)arg4 machineBrand:(id)arg5;
- (id)machineBrand;
- (id)machineName;
- (unsigned long long)machineType;
- (id)machineUUID;
- (id)sessionUUID;
- (void)setMachineBrand:(id)arg1;

@end
