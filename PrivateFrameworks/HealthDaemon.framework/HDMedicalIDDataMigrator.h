/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMedicalIDDataMigrator : NSObject

+ (bool)_migrateEmergencyContactsToVersion2:(id)arg1;
+ (bool)_migrateEmergencyContactsToVersion3:(id)arg1;
+ (bool)_migrateFromVersion3ToVersion4:(id)arg1;
+ (bool)_migrateFromVersionNoneTo1:(id)arg1;
+ (bool)migrateMedicalIDDataIfNeeded:(id)arg1;

@end
